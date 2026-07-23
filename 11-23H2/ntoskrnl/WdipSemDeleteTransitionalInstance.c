/*
 * XREFs of WdipSemDeleteTransitionalInstance @ 0x140830070
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x1407DAB10 (WdipTimeoutCheckRoutine.c)
 *     WdipSemEnableScenario @ 0x1407E57DC (WdipSemEnableScenario.c)
 *     WdipSemDisableScenario @ 0x1408302A8 (WdipSemDisableScenario.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     WdipSemFastFree @ 0x140831B60 (WdipSemFastFree.c)
 */

__int64 __fastcall WdipSemDeleteTransitionalInstance(_QWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rdx
  _QWORD *v4; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C32818, 0LL);
  v3 = *a1;
  if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v4 = (_QWORD *)a1[1], (_QWORD *)*v4 != a1) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  --dword_140C32810;
  ExReleasePushLockEx((__int64 *)&qword_140C32818, 0LL);
  KeLeaveCriticalRegion();
  return WdipSemFastFree(3LL, a1);
}
