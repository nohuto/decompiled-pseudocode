/*
 * XREFs of PnpCancelStopDeviceNode @ 0x14096E3F4
 * Callers:
 *     PnpCancelStopDeviceSubtree @ 0x14096E484 (PnpCancelStopDeviceSubtree.c)
 *     PnpQueryRebalanceWorker @ 0x14096E698 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140322F7C (PoFxIdleDevice.c)
 *     PipRestoreDevNodeState @ 0x1403B6F88 (PipRestoreDevNodeState.c)
 *     PnpUnlockMountableDevice @ 0x1403D568C (PnpUnlockMountableDevice.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     PipClearDevNodeFlags @ 0x14079805C (PipClearDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x14096D064 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpCancelStopDeviceNode(ULONG_PTR BugCheckParameter2)
{
  _QWORD *v2; // rdx
  __int64 result; // rax

  if ( *(_DWORD *)(BugCheckParameter2 + 300) == 779 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 704) & 0x20) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, BugCheckParameter2, 0x20uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(BugCheckParameter2 + 32));
    v2 = *(_QWORD **)(BugCheckParameter2 + 32);
    *(_DWORD *)(BugCheckParameter2 + 704) &= ~0x20u;
    IopQueryReconfiguration(6, v2);
    result = PipRestoreDevNodeState(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 396) & 0x1000000) != 0 )
    {
      PnpUnlockMountableDevice(*(_QWORD *)(BugCheckParameter2 + 32));
      return PipClearDevNodeFlags(BugCheckParameter2, 0x1000000);
    }
  }
  return result;
}
