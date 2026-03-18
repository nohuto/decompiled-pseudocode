/*
 * XREFs of KeTryToFreezeThreadStack @ 0x140201DF4
 * Callers:
 *     MiSwapStackPage @ 0x140249930 (MiSwapStackPage.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x140344DD0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14035D0F8 (KiReleaseThreadStateLock.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KiIsKernelStackSwappable @ 0x140578704 (KiIsKernelStackSwappable.c)
 */

char __fastcall KeTryToFreezeThreadStack(__int64 a1, _QWORD *a2)
{
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  unsigned __int8 v6; // al
  __int64 v7; // rcx
  char result; // al
  int v9; // eax
  _DWORD *v10; // rcx
  int v11; // eax
  int v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  if ( *(_UNKNOWN **)(a1 + 544) == &KiInitialProcess )
    return 0;
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v9 = SchedulerAssist[6];
        SchedulerAssist[6] = v9 + 1;
        if ( v9 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
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
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v12);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v6 = KiAcquireThreadStateLock(a1, &v13, &v14);
  if ( v6 <= 4u )
  {
LABEL_6:
    KiReleaseThreadStateLock(v7, v13, v14);
    KiReleaseThreadLockSafe(a1);
    return 0;
  }
  if ( v6 == 5 )
  {
    if ( !(unsigned int)KiIsKernelStackSwappable(a1) )
      goto LABEL_6;
    LOBYTE(v7) = *(_BYTE *)(a1 + 113);
    if ( (_BYTE)v7 )
      goto LABEL_6;
  }
  else if ( v6 == 7 || v6 == 9 )
  {
    goto LABEL_6;
  }
  result = 1;
  *a2 = v13;
  return result;
}
