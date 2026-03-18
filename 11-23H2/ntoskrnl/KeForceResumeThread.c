/*
 * XREFs of KeForceResumeThread @ 0x14030ABDC
 * Callers:
 *     KeRequestTerminationThread @ 0x1403099FC (KeRequestTerminationThread.c)
 *     NtTerminateProcess @ 0x1406837E0 (NtTerminateProcess.c)
 *     PspInsertThread @ 0x14073EE9C (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x14076E440 (KeRundownApcQueues.c)
 * Callees:
 *     KiExitDispatcher @ 0x14023CD70 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140252030 (KiAcquireKobjectLockSafe.c)
 *     KiResumeThread @ 0x14030ACF8 (KiResumeThread.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v4; // r8
  int v5; // r15d
  int v6; // esi
  _DWORD *SchedulerAssist; // r9
  __int64 v9; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    LODWORD(v9) = 4;
    if ( CurrentIrql != 2 )
      v9 = (-1LL << (CurrentIrql + 1)) & 4;
    SchedulerAssist[5] |= v9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(a1 + 736));
  v5 = *(char *)(a1 + 644);
  v6 = (*(_DWORD *)(a1 + 120) >> 14) & 1;
  if ( v5 | v6 )
  {
    *(_BYTE *)(a1 + 794) &= 0xF9u;
    *(_BYTE *)(a1 + 644) = 0;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xEu);
  }
  LOBYTE(v4) = 1;
  KiResumeThread(a1, CurrentPrcb, v4);
  _InterlockedAnd((volatile signed __int32 *)(a1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((__int64)CurrentPrcb, 0, (struct _PROCESSOR_NUMBER)1, 0, CurrentIrql);
  return (unsigned int)(v6 + v5);
}
