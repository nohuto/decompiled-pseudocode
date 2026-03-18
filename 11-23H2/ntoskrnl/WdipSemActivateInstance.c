/*
 * XREFs of WdipSemActivateInstance @ 0x140862A50
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E550C (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x14082FFA8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 */

void __fastcall WdipSemActivateInstance(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C34AD8, 0LL);
  *(_DWORD *)(a1 + 44) = 0;
  ExReleasePushLockEx((__int64 *)&qword_140C34AD8, 0LL);
  KeLeaveCriticalRegion();
}
