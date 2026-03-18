/*
 * XREFs of IovUtilGetLowerDeviceObjectWithTag @ 0x140AD3A64
 * Callers:
 *     IovpCallDriver1 @ 0x140ACD170 (IovpCallDriver1.c)
 *     IovpCallDriver2 @ 0x140ACD6CC (IovpCallDriver2.c)
 *     VfIoDeleteDevice @ 0x140AD3214 (VfIoDeleteDevice.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE8140 (VfPnpVerifyIrpStackUpward.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0640 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
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
