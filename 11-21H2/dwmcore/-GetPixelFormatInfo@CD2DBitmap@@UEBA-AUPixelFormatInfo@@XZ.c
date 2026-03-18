/*
 * XREFs of ?GetPixelFormatInfo@CD2DBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1800FC444
 * Callers:
 *     ?GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@A@EBA?AUPixelFormatInfo@@XZ @ 0x180109770 (-GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@A@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@CI@EBA?AUPixelFormatInfo@@XZ @ 0x1801099F0 (-GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@CI@EBA-AUPixelFormatInfo@@XZ.c)
 *     ?GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@FI@EBA?AUPixelFormatInfo@@XZ @ 0x18010CC10 (-GetPixelFormatInfo@CD2DBitmap@@$4PPPPPPPM@FI@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CD2DBitmap::GetPixelFormatInfo(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 - 128);
  a2[1] = *(_DWORD *)(a1 - 92);
  a2[2] = *(_DWORD *)(a1 - 64);
  return a2;
}
