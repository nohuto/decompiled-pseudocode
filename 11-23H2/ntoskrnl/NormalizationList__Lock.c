/*
 * XREFs of NormalizationList__Lock @ 0x1405B5AB8
 * Callers:
 *     RtlpGetNormalization @ 0x1409C88BC (RtlpGetNormalization.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 */

void NormalizationList__Lock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&NormalizationListLock, 0LL);
}
