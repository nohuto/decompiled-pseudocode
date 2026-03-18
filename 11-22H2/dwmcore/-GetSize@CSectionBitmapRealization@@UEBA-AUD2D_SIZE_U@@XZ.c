/*
 * XREFs of ?GetSize@CSectionBitmapRealization@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180108C50
 * Callers:
 *     ?GetSize@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA?AUD2D_SIZE_U@@XZ @ 0x180121C60 (-GetSize@CSectionBitmapRealization@@$4PPPPPPPM@II@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA?AUD2D_SIZE_U@@XZ @ 0x180121C80 (-GetSize@CSectionBitmapRealization@@$4PPPPPPPM@KI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA?AUD2D_SIZE_U@@XZ @ 0x1801220A0 (-GetSize@CSectionBitmapRealization@@$4PPPPPPPM@MI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CSectionBitmapRealization::GetSize(CSectionBitmapRealization *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 10);
  a2[1] = *((_DWORD *)this + 11);
  return (struct D2D_SIZE_U)a2;
}
