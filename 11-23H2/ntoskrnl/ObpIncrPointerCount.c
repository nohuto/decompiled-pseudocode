/*
 * XREFs of ObpIncrPointerCount @ 0x14025A244
 * Callers:
 *     PsImpersonateContainerOfThread @ 0x140259EE0 (PsImpersonateContainerOfThread.c)
 *     IoGetAttachedDeviceReference @ 0x14025A100 (IoGetAttachedDeviceReference.c)
 *     ExpApplyPriorityBoost @ 0x1402A8540 (ExpApplyPriorityBoost.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x1402A91B0 (NtWaitForWorkViaWorkerFactory.c)
 *     ObDuplicateObject @ 0x1406FB8F0 (ObDuplicateObject.c)
 *     ObInheritObjectHandle @ 0x1407B04FC (ObInheritObjectHandle.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1407BD364 (ObpReferenceProcessObjectByHandle.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 */

signed __int64 __fastcall ObpIncrPointerCount(volatile signed __int64 *a1)
{
  signed __int64 result; // rax

  result = _InterlockedIncrement64(a1);
  if ( result <= 1 )
    KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)(a1 + 6), 0x10uLL, result);
  return result;
}
