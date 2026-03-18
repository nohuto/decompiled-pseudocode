/*
 * XREFs of PnpQueryStopDeviceNode @ 0x140959F9C
 * Callers:
 *     PiQueryStopForReset @ 0x140945A10 (PiQueryStopForReset.c)
 *     PnpQueryRebalanceWorker @ 0x140959DF4 (PnpQueryRebalanceWorker.c)
 * Callees:
 *     PoFxActivateDevice @ 0x1402D2848 (PoFxActivateDevice.c)
 *     PnpFindMountableDevice @ 0x1402DDE58 (PnpFindMountableDevice.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PnpLockMountableDevice @ 0x1403A0154 (PnpLockMountableDevice.c)
 *     PiRebalanceOptOut @ 0x140564AC0 (PiRebalanceOptOut.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     IopQueryReconfiguration @ 0x1409588F0 (IopQueryReconfiguration.c)
 */

__int64 __fastcall PnpQueryStopDeviceNode(__int64 a1, char a2)
{
  unsigned int Reconfiguration; // edi
  struct _DEVICE_OBJECT *v4; // rdx

  Reconfiguration = -1073741823;
  if ( *(_DWORD *)(a1 + 300) == 778 && (!a2 || !PiRebalanceOptOut(a1)) )
  {
    if ( PnpFindMountableDevice(*(_QWORD *)(a1 + 32)) )
    {
      PnpLockMountableDevice(*(_QWORD **)(a1 + 32));
      PipSetDevNodeFlags(a1, 0x1000000);
    }
    PoFxActivateDevice(*(_QWORD *)(a1 + 32));
    v4 = *(struct _DEVICE_OBJECT **)(a1 + 32);
    *(_DWORD *)(a1 + 704) |= 0x20u;
    Reconfiguration = IopQueryReconfiguration(5, v4);
    PipSetDevNodeState(a1, 779);
  }
  return Reconfiguration;
}
