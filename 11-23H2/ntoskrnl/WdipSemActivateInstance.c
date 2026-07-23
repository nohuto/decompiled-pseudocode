/*
 * XREFs of WdipSemActivateInstance @ 0x140862C90
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E57DC (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x1408302A8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32818, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((__int64 *)&qword_140C32818, 0LL);
  KeLeaveCriticalRegion();
}
