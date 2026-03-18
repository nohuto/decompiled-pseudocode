/*
 * XREFs of KeQueryPrimaryGroupAffinityThread @ 0x14056B234
 * Callers:
 *     NtQueryInformationThread @ 0x1407BF670 (NtQueryInformationThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeQueryPrimaryGroupAffinityThread(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v8; // rcx
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  _WORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int8 v15; // al
  struct _KPRCB *v16; // r9
  _DWORD *v17; // r8
  int v18; // eax
  bool v19; // zf
  __int64 result; // rax
  int v21; // [rsp+40h] [rbp+8h] BYREF

  v4 = a2;
  *(_DWORD *)(a2 + 10) = 0;
  *(_WORD *)(a2 + 14) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 4;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v21 = 0;
  while ( 1 )
  {
    v8 = CurrentPrcb->SchedulerAssist;
    if ( v8 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = v8[6];
        v8[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v10 = CurrentPrcb->SchedulerAssist;
    if ( v10 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v11 = v10[6] - 1;
        v10[6] = v11;
        if ( !v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v21, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(a1 + 64) );
  }
  *(_WORD *)(v4 + 8) = *(_WORD *)(a1 + 584);
  v12 = *(_WORD **)(a1 + 576);
  v13 = *(unsigned __int16 *)(a1 + 584);
  if ( (unsigned __int16)v13 >= *v12 )
    v14 = 0LL;
  else
    v14 = *(_QWORD *)&v12[4 * v13 + 4];
  *(_QWORD *)v4 = v14;
  KiReleaseThreadLockSafe(a1);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v15 = KeGetCurrentIrql();
      if ( v15 <= 0xFu && CurrentIrql <= 0xFu && v15 >= 2u )
      {
        v16 = KeGetCurrentPrcb();
        v17 = v16->SchedulerAssist;
        v18 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v19 = (v18 & v17[5]) == 0;
        v17[5] &= v18;
        if ( v19 )
          KiRemoveSystemWorkPriorityKick((__int64)v16);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
