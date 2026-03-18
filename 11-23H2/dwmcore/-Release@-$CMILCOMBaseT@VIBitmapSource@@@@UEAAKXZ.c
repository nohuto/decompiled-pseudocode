/*
 * XREFs of ?Release@?$CMILCOMBaseT@VIBitmapSource@@@@UEAAKXZ @ 0x1802BC0B4
 * Callers:
 *     ?Release@?$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ @ 0x180123CF0 (-Release@-$CMILCOMBaseT@VIBitmapSource@@@@$4PPPPPPPM@DAA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILCOMBaseT<IBitmapSource>::Release(__int64 a1)
{
  return CMILRefCountBaseT<IBitmapSource>::InternalRelease((volatile signed __int32 *)(a1 - 32));
}
