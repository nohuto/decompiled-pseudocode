/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x140AD2A84
 * Callers:
 *     IovpCallDriver1 @ 0x140ACC190 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140ACC6EC (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140AD2234 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE7160 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

void *__fastcall IovUtilGetLowerDeviceObjectWithTag(__int64 a1)
{
  KIRQL v2; // di
  void *v3; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  v3 = *(void **)(*(_QWORD *)(a1 + 312) + 48LL);
  if ( v3 )
    ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
