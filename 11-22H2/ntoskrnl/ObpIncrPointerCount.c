/*
 * XREFs of ObpIncrPointerCount @ 0x14025A124
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140259DC0 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x140259FE0 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x1402A8420 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A9090 (NtWaitForWorkViaWorkerFactory.c)
 *     ObDuplicateObject @ 0x1406FB9A0 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x1407B0AAC (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD8F4 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
