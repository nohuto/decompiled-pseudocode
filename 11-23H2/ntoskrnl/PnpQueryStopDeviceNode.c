/*
 * XREFs of PnpQueryStopDeviceNode @ 0x14096EA28
 * Callers:
 *     PnpQueryRebalanceWorker @ 0x14096E898 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PipSetDevNodeState @ 0x14022AF94 (PipSetDevNodeState.c)
 *     PoFxActivateDevice @ 0x140322ED4 (PoFxActivateDevice.c)
 *     PnpFindMountableDevice @ 0x1403B75FC (PnpFindMountableDevice.c)
 *     PnpLockMountableDevice @ 0x1403D5390 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x140565450 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x1407958BC (PipSetDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x14096D264 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  _QWORD *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 778 && ((a2 & 1) == 0 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(_QWORD **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(5, v4);
    PipSetDevNodeState(a1, 779);
  }
  return Reconfiguration;
}
