/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIDeviceResource@@@@UEAAKXZ @ 0x1800EA694
 * Callers:
 *     ?Release@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ @ 0x18011E770 (-Release@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@FI@EAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ @ 0x18011E7D0 (-Release@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@EI@EAAKXZ.c)
 *     ?Release@?$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@MI@EAAKXZ @ 0x180123DF0 (-Release@-$CMILCOMBaseT@VIDeviceResource@@@@$4PPPPPPPM@MI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IDeviceResource>::Release(__int64 a1)
{
  return CMILRefCountBaseT<IDeviceResource>::InternalRelease(a1 - 32);
}
