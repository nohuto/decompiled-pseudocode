/*
 * XREFs of ObCheckActiveHandles @ 0x1407DFC94
 * Callers:
 *     MiFinishCreateSection @ 0x140722F30 (MiFinishCreateSection.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 */

bool __fastcall ObCheckActiveHandles(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v2; // rdi
  __int64 v4; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = (__int64 *)(a1 - 32);
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a1 - 32, 0LL);
  v4 = *(_QWORD *)(a1 - 40);
  ExReleasePushLockEx(v2, 0LL);
  KeLeaveCriticalRegion();
  return v4 != 0;
}
