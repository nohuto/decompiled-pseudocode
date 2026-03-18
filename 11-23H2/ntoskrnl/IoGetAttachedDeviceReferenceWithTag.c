/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x140302C00
 * Callers:
 *     PopAllocateIrp @ 0x14028F434 (PopAllocateIrp.c)
 *     PipCallDriverAddDevice @ 0x1406C8234 (PipCallDriverAddDevice.c)
 *     IopSynchronousCall @ 0x1407683A4 (IopSynchronousCall.c)
 *     PnpAsynchronousCall @ 0x140794F94 (PnpAsynchronousCall.c)
 *     PnpQueryInterface @ 0x1407FD240 (PnpQueryInterface.c)
 *     PopFxRegisterDevice @ 0x14083651C (PopFxRegisterDevice.c)
 *     PiControlGetDeviceStack @ 0x140855A60 (PiControlGetDeviceStack.c)
 *     IopEjectDevice @ 0x14096CD18 (IopEjectDevice.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140983964 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402B68C0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
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
