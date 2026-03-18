/*
 * XREFs of KiUpdateVpBackingThreadPriorityOnPriorityQuery @ 0x140577B4C
 * Callers:
 *     KeQueryPriorityThread @ 0x14035D5C0 (KeQueryPriorityThread.c)
 *     KeQueryEffectivePriorityThread @ 0x140385140 (KeQueryEffectivePriorityThread.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x140344800 (KiProcessDeferredReadyList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiUpdateVpBackingThreadPriorityFromTopLevel @ 0x1405779D0 (KiUpdateVpBackingThreadPriorityFromTopLevel.c)
 */

char __fastcall KiUpdateVpBackingThreadPriorityOnPriorityQuery(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        __int64 a3,
        _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *v7; // rcx
  int v8; // eax
  _DWORD *v9; // rcx
  int v10; // eax
  int v12; // [rsp+30h] [rbp+8h] BYREF
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  v13 = 0LL;
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
  v12 = 0;
  while ( 1 )
  {
    v7 = CurrentPrcb->SchedulerAssist;
    if ( v7 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v8 = v7[6];
        v7[6] = v8 + 1;
        if ( v8 == -1 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
      break;
    v9 = CurrentPrcb->SchedulerAssist;
    if ( v9 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v10 = v9[6] - 1;
        v9[6] = v10;
        if ( !v10 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v12, a2, a3, (__int64)SchedulerAssist);
    while ( *(_QWORD *)(BugCheckParameter1 + 64) );
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x400000) != 0 )
    KiUpdateVpBackingThreadPriorityFromTopLevel(BugCheckParameter1, (__int64)&v13);
  KiReleaseThreadLockSafe(BugCheckParameter1);
  return KiProcessDeferredReadyList((__int64)KeGetCurrentPrcb(), &v13, CurrentIrql);
}
