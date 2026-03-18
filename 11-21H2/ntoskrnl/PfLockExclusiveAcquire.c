/*
 * XREFs of PfLockExclusiveAcquire @ 0x1405C5FE8
 * Callers:
 *     PfSetSuperfetchInformation @ 0x1406AD6BC (PfSetSuperfetchInformation.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PfLockExclusiveAcquire(ULONG_PTR a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1, 0LL);
}
