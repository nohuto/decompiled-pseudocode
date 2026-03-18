/*
 * XREFs of PnpUnlockMountableDevice @ 0x1403A01B0
 * Callers:
 *     IopRemoveDevice @ 0x140766C3C (IopRemoveDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14081059C (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PiIrpQueryRemoveDevice @ 0x1409589A4 (PiIrpQueryRemoveDevice.c)
 *     PnpCancelStopDeviceNode @ 0x140959B60 (PnpCancelStopDeviceNode.c)
 *     PipProcessRestartPhase1 @ 0x14095B2D4 (PipProcessRestartPhase1.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

void __fastcall PnpUnlockMountableDevice(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // al

  if ( a1 )
  {
    v1 = a1;
    do
    {
      if ( *(_QWORD *)(v1 + 56) )
        KeSetEvent((PRKEVENT)(v1 + 280), 0, 0);
      v2 = KeAcquireQueuedSpinLock(0xAuLL);
      v1 = *(_QWORD *)(v1 + 24);
      KeReleaseQueuedSpinLock(0xAuLL, v2);
    }
    while ( v1 );
  }
}
