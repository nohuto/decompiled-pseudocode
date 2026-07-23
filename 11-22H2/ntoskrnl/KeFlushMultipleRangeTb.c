/*
 * XREFs of KeFlushMultipleRangeTb @ 0x14038E834
 * Callers:
 *     MiFlushTbList @ 0x140279760 (MiFlushTbList.c)
 *     MiAgeWorkingSetTail @ 0x140334210 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x1402C000C (KeFlushProcessWriteBuffers.c)
 *     KiIsSecureProcessFlush @ 0x1402EB260 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1402EB29C (KiPreprocessFlushTb.c)
 *     KiFlushRangeTb @ 0x14038A858 (KiFlushRangeTb.c)
 *     KxFlushMultipleTb @ 0x14038E914 (KxFlushMultipleTb.c)
 *     HvlFlushRangeListTb @ 0x1403CB74C (HvlFlushRangeListTb.c)
 *     KiPrepareFlushParameters @ 0x1403CE3EC (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x1403CE708 (KiFlushAffinity.c)
 *     VmFlushTb @ 0x140465E8C (VmFlushTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFlushTb @ 0x14060D088 (ExFlushTb.c)
 */

char __fastcall KeFlushMultipleRangeTb(unsigned int a1, unsigned __int64 *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // rsi
  char v9; // bl
  __int64 v10; // r8
  char result; // al
  unsigned __int64 *v12; // rbx
  unsigned __int8 CurrentIrql; // cl
  unsigned __int8 v14; // bl
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  int v19; // eax
  int v20; // r8d
  char v21; // r11
  int v22; // r9d
  char v23; // r10
  unsigned __int8 v24; // bl
  _DWORD *v25; // r9
  __int64 v26; // rdx
  unsigned __int8 v27; // al
  struct _KPRCB *v28; // r9
  _DWORD *v29; // r8
  int v30; // eax
  char v31; // [rsp+40h] [rbp-10h] BYREF
  char v32[7]; // [rsp+41h] [rbp-Fh] BYREF
  __int64 v33; // [rsp+48h] [rbp-8h] BYREF
  unsigned __int8 v34; // [rsp+88h] [rbp+38h] BYREF

  LODWORD(v4) = 0;
  v5 = a1;
  v33 = 0LL;
  v31 = 0;
  v32[0] = 0;
  v34 = 0;
  v9 = 0;
  if ( KiPreprocessFlushTb(0, a3, a4, &v31, &v34) )
  {
    if ( (_DWORD)v5 )
    {
      v12 = a2;
      v4 = v5;
      do
      {
        KiFlushRangeTb(*v12++, a3, v10);
        --v4;
      }
      while ( v4 );
    }
    if ( (_DWORD)KiIrqlFlags
      && (CurrentIrql = KeGetCurrentIrql(), ((unsigned __int8)KiIrqlFlags & 1) != 0)
      && CurrentIrql <= 0xFu )
    {
      v14 = v34;
      if ( v34 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = v34;
        v17 = ~(unsigned __int16)(-1LL << (v34 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v14 = v34;
    }
    __writecr8(v14);
    v9 = 1;
  }
  result = KiIsSecureProcessFlush(*a2, a3);
  if ( result || v31 )
  {
    KiPrepareFlushParameters(a3, &v33, v32);
    v19 = KiFlushAffinity(a4);
    LOBYTE(v20) = v32[0];
    LOBYTE(v22) = v21;
    result = HvlFlushRangeListTb(v33, v19, v20, v22, v23, v5, (__int64)a2);
    v9 |= result;
  }
  if ( v9 )
  {
    if ( a3 == 4 )
      result = KeFlushProcessWriteBuffers(1);
  }
  else
  {
    result = KxFlushMultipleTb((unsigned int)v5, a2, a3, a4);
  }
  if ( VmTbFlushEnabled != (_BYTE)v4 )
    result = VmFlushTb((unsigned int)v5, a2, a3);
  if ( ExTbFlushActive != (_DWORD)v4 )
  {
    v24 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( (_DWORD)KiIrqlFlags && ((unsigned __int8)KiIrqlFlags & 1) != 0 && v24 <= 0xFu )
    {
      v25 = KeGetCurrentPrcb()->SchedulerAssist;
      if ( v24 == 15 )
        LODWORD(v26) = 0x8000;
      else
        v26 = (-1LL << (v24 + 1)) & 0xFFFC;
      v25[5] |= v26;
    }
    ExFlushTb((unsigned int)v5, a2, a3);
    if ( (_DWORD)KiIrqlFlags )
    {
      v27 = KeGetCurrentIrql();
      if ( ((unsigned __int8)KiIrqlFlags & 1) != 0 && v27 <= 0xFu && v24 <= 0xFu && v27 >= 2u )
      {
        v28 = KeGetCurrentPrcb();
        v29 = v28->SchedulerAssist;
        v30 = ~(unsigned __int16)(-1LL << (v24 + 1));
        v18 = (v30 & v29[5]) == 0;
        v29[5] &= v30;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(v28);
      }
    }
    result = v24;
    __writecr8(v24);
  }
  return result;
}
