/*
 * XREFs of PnpLockMountableDevice @ 0x1403D51B0
 * Callers:
 *     IopRemoveDevice @ 0x140869968 (IopRemoveDevice.c)
 *     PiIrpQueryRemoveDevice @ 0x14096D11C (PiIrpQueryRemoveDevice.c)
 *     PnpQueryStopDeviceNode @ 0x14096E828 (PnpQueryStopDeviceNode.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeAcquireQueuedSpinLock @ 0x1402A0760 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140302810 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall PnpLockMountableDevice(_QWORD *a1)
{
  _QWORD *v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( v1[7] )
        KeWaitForSingleObject(v1 + 35, Executive, 0, 0, 0LL);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = (_QWORD *)v1[3];
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
