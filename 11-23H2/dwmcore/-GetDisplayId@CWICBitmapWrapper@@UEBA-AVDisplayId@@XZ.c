/*
 * XREFs of ?GetDisplayId@CWICBitmapWrapper@@UEBA?AVDisplayId@@XZ @ 0x1801066D0
 * Callers:
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA?AVDisplayId@@XZ @ 0x1801218B0 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA?AVDisplayId@@XZ @ 0x1801218D0 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA?AVDisplayId@@XZ @ 0x180121D30 (-GetDisplayId@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA-AVDisplayId@@XZ.c)
 *     ?GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA?AVDisplayId@@XZ @ 0x1801233D0 (-GetDisplayId@CSecondaryD2DBitmap@@$4PPPPPPPM@BDI@EBA-AVDisplayId@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CWICBitmapWrapper::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = DisplayId::None;
  return a2;
}
