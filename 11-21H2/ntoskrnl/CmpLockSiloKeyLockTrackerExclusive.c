/*
 * XREFs of CmpLockSiloKeyLockTrackerExclusive @ 0x1407FCA44
 * Callers:
 *     CmpStopSiloKeyLockTracker @ 0x1407F85CC (CmpStopSiloKeyLockTracker.c)
 *     CmLockKeyForWrite @ 0x14080F9EC (CmLockKeyForWrite.c)
 *     CmInitServerSiloState @ 0x140861E8C (CmInitServerSiloState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall CmpLockSiloKeyLockTrackerExclusive(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
