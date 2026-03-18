/*
 * XREFs of KiWaitSatisfyAny @ 0x140217A2C
 * Callers:
 *     KiWaitForAllObjects @ 0x1402175B8 (KiWaitForAllObjects.c)
 * Callees:
 *     KiReleaseThreadLockSafe @ 0x140224100 (KiReleaseThreadLockSafe.c)
 *     KiWaitSatisfyOther @ 0x1402F0AF8 (KiWaitSatisfyOther.c)
 *     KeYieldProcessorEx @ 0x1402F32E0 (KeYieldProcessorEx.c)
 *     KiWaitSatisfyMutant @ 0x1402F35E0 (KiWaitSatisfyMutant.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiWaitSatisfyAny(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  _DWORD *SchedulerAssist; // rcx
  int v11; // eax
  _DWORD *v12; // rcx
  int v13; // eax
  int v15; // [rsp+48h] [rbp+20h] BYREF

  LOBYTE(v6) = KiWaitSatisfyOther();
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v6) = *(_BYTE *)v7 & 0x7F;
    if ( (_BYTE)v6 == 2 && (*(_DWORD *)(v7 + 4))-- == 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v15 = 0;
      while ( 1 )
      {
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v11 = SchedulerAssist[6];
            SchedulerAssist[6] = v11 + 1;
            if ( v11 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)(a2 + 64), 0LL) )
          break;
        v12 = CurrentPrcb->SchedulerAssist;
        if ( v12 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v13 = v12[6] - 1;
            v12[6] = v13;
            if ( !v13 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v15);
        while ( *(_QWORD *)(a2 + 64) );
      }
      KiWaitSatisfyMutant(a1, a2, a3);
      LOBYTE(v6) = KiReleaseThreadLockSafe(a2);
      if ( (*(_BYTE *)(a1 + 48) & 2) != 0 )
      {
        v6 = KeAbPreAcquire(a1, 0LL, 1LL);
        if ( v6 )
          *(_BYTE *)(v6 + 18) = 1;
      }
    }
  }
  return v6;
}
