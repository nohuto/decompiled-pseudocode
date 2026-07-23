/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140302E90
 * Callers:
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     PipCallDriverAddDevice @ 0x1406C8264 (PipCallDriverAddDevice.c)
 *     IopSynchronousCall @ 0x140768594 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x140795184 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x1407FD510 (PnpQueryInterface.c)
 *     PopFxRegisterDevice @ 0x14083681C (PopFxRegisterDevice.c)
 *     PiControlGetDeviceStack @ 0x140855D60 (PiControlGetDeviceStack.c)
 *     IopEjectDevice @ 0x14096CF18 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140983B64 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A09F0 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302AA0 (KeReleaseQueuedSpinLock.c)
 */

_QWORD *__fastcall IoGetAttachedDeviceReferenceWithTag(_QWORD *Object, ULONG Tag)
{
  KIRQL v4; // al
  _QWORD *v5; // r8
  KIRQL v6; // si

  v4 = KeAcquireQueuedSpinLock(0xAuLL);
  v5 = (_QWORD *)Object[3];
  v6 = v4;
  while ( v5 )
  {
    Object = v5;
    v5 = (_QWORD *)v5[3];
  }
  ObfReferenceObjectWithTag(Object, Tag);
  KeReleaseQueuedSpinLock(0xAuLL, v6);
  return Object;
}
