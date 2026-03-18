/*
 * XREFs of IovUtilGetBottomDeviceObjectWithTag @ 0x140AD2A30
 * Callers:
 *     IovpCallDriver1 @ 0x140ACC1A0 (IovpCallDriver1.c)
 *     IovUtilIsWdmStack @ 0x140AD2CE0 (IovUtilIsWdmStack.c)
 *     VfPnpVerifyIrpStackUpward @ 0x140AE7170 (VfPnpVerifyIrpStackUpward.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x140AE7460 (ViPnpVerifyMinorWasProcessedProperly.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

PVOID __fastcall IovUtilGetBottomDeviceObjectWithTag(_QWORD *Object)
{
  KIRQL v2; // si
  PVOID v3; // rdi

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  do
  {
    v3 = Object;
    Object = *(_QWORD **)(Object[39] + 48LL);
  }
  while ( Object );
  ObfReferenceObjectWithTag(v3, 0x49667256u);
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v3;
}
