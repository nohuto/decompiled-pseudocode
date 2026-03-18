/*
 * XREFs of ?IsOpaque@CVisualBitmap@@UEBA_NXZ @ 0x1801A1710
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?GetPixelFormatInfo@CVisualBitmap@@UEBA?AUPixelFormatInfo@@XZ @ 0x1802090F0 (-GetPixelFormatInfo@CVisualBitmap@@UEBA-AUPixelFormatInfo@@XZ.c)
 */

bool __fastcall CVisualBitmap::IsOpaque(CVisualBitmap *this)
{
  _BYTE v2[16]; // [rsp+20h] [rbp-28h] BYREF

  return *(_DWORD *)(CVisualBitmap::GetPixelFormatInfo(this, v2) + 4) == 3;
}
