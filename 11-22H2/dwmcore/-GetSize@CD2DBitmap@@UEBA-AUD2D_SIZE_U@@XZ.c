/*
 * XREFs of ?GetSize@CD2DBitmap@@UEBA?AUD2D_SIZE_U@@XZ @ 0x180108630
 * Callers:
 *     ?GetSize@CD2DBitmap@@$4PPPPPPPM@OA@EBA?AUD2D_SIZE_U@@XZ @ 0x180120200 (-GetSize@CD2DBitmap@@$4PPPPPPPM@OA@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CD2DBitmap@@$4PPPPPPPM@BAI@EBA?AUD2D_SIZE_U@@XZ @ 0x1801204C0 (-GetSize@CD2DBitmap@@$4PPPPPPPM@BAI@EBA-AUD2D_SIZE_U@@XZ.c)
 *     ?GetSize@CD2DBitmap@@$4PPPPPPPM@BDI@EBA?AUD2D_SIZE_U@@XZ @ 0x180123760 (-GetSize@CD2DBitmap@@$4PPPPPPPM@BDI@EBA-AUD2D_SIZE_U@@XZ.c)
 * Callees:
 *     <none>
 */

struct D2D_SIZE_U __fastcall CD2DBitmap::GetSize(CD2DBitmap *this, _DWORD *a2)
{
  *a2 = *((_DWORD *)this + 14);
  a2[1] = *((_DWORD *)this + 15);
  return (struct D2D_SIZE_U)a2;
}
