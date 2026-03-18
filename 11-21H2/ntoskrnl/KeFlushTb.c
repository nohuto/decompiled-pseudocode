/*
 * XREFs of KeFlushTb @ 0x1402F391C
 * Callers:
 *     MiAttachSessionGlobal @ 0x140238D0C (MiAttachSessionGlobal.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x14024DA80 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x14026A230 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiInsertCachedPte @ 0x1402BBAD0 (MiInsertCachedPte.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiAgeWorkingSetTail @ 0x1402F3AD0 (MiAgeWorkingSetTail.c)
 *     MiFlushTbList @ 0x14032F1B0 (MiFlushTbList.c)
 *     MiGetWsAndMakePageTablesNx @ 0x1403DC188 (MiGetWsAndMakePageTablesNx.c)
 *     MiSwitchToPfns @ 0x140AF522C (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140B09340 (MiInitializeTbFlush.c)
 * Callees:
 *     KxFlushNonGlobalTb @ 0x14023F108 (KxFlushNonGlobalTb.c)
 *     KeFlushProcessWriteBuffers @ 0x1402F374C (KeFlushProcessWriteBuffers.c)
 *     KiIsSecureProcessFlush @ 0x1402F3A88 (KiIsSecureProcessFlush.c)
 *     KiPreprocessFlushTb @ 0x1402F3FE0 (KiPreprocessFlushTb.c)
 *     KxFlushEntireTb @ 0x1402F411C (KxFlushEntireTb.c)
 *     KiFlushAddressSpaceTb @ 0x14039D960 (KiFlushAddressSpaceTb.c)
 *     KiPrepareFlushParameters @ 0x14039E48C (KiPrepareFlushParameters.c)
 *     KiFlushAffinity @ 0x14039E55C (KiFlushAffinity.c)
 *     KiFlushCurrentTbOnly @ 0x1403A35B8 (KiFlushCurrentTbOnly.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     VmFlushTb @ 0x14045F6DE (VmFlushTb.c)
 *     VslFlushSecureAddressSpace @ 0x14054E120 (VslFlushSecureAddressSpace.c)
 *     ExFlushTb @ 0x14063F75C (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  char v6; // r14
  int v7; // edi
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  char v11; // r10
  __int64 v12; // r9
  unsigned __int8 v13; // di
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // eax
  bool v18; // zf
  unsigned __int8 v19; // di
  _DWORD *v20; // r9
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r9
  _DWORD *v23; // r8
  int v24; // eax
  char v25[8]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v26; // [rsp+38h] [rbp-8h] BYREF
  unsigned __int8 v27; // [rsp+90h] [rbp+50h] BYREF
  char v28; // [rsp+98h] [rbp+58h] BYREF

  v26 = 0LL;
  v28 = 0;
  v4 = a1;
  v25[0] = 0;
  v5 = a1;
  v27 = 0;
  LOBYTE(a1) = 1;
  v6 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(a1, v5, a2, (unsigned int)&v28, (__int64)&v27) )
  {
    KiFlushCurrentTbOnly(v4);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v13 = v27;
      if ( v27 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v13 = v27;
        v17 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    else
    {
      v13 = v27;
    }
    __writecr8(v13);
    v6 = 1;
  }
  v7 = 0;
  if ( !v28 )
  {
    if ( v6 )
      goto LABEL_9;
    if ( KiKvaShadow )
    {
      if ( v4 && v4 != 2 )
      {
LABEL_7:
        KxFlushEntireTb(a2);
LABEL_8:
        v7 = 1;
        goto LABEL_9;
      }
    }
    else if ( !v4 || (int)v4 > 2 )
    {
      goto LABEL_7;
    }
    KxFlushNonGlobalTb(a2);
    goto LABEL_8;
  }
  KiPrepareFlushParameters(v4, &v26, v25);
  v9 = KiFlushAffinity(a2);
  LOBYTE(v10) = v25[0];
  LOBYTE(v12) = v11;
  KiFlushAddressSpaceTb(v26, v9, v10, v12);
LABEL_9:
  result = KiIsSecureProcessFlush(0LL, v4);
  if ( (_BYTE)result )
    result = VslFlushSecureAddressSpace();
  if ( !v7 && v4 == 4 )
    result = KeFlushProcessWriteBuffers(1);
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, v4);
  if ( ExTbFlushActive )
  {
    v19 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 <= 0xFu )
    {
      v20 = KeGetCurrentPrcb()->SchedulerAssist;
      v20[5] |= (-1 << (v19 + 1)) & 0xFFFC;
    }
    ExFlushTb(0LL, 0LL, v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v21 = KeGetCurrentIrql();
        if ( v21 <= 0xFu && v19 <= 0xFu && v21 >= 2u )
        {
          v22 = KeGetCurrentPrcb();
          v23 = v22->SchedulerAssist;
          v24 = ~(unsigned __int16)(-1LL << (v19 + 1));
          v18 = (v24 & v23[5]) == 0;
          v23[5] &= v24;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(v22);
        }
      }
    }
    result = v19;
    __writecr8(v19);
  }
  return result;
}
