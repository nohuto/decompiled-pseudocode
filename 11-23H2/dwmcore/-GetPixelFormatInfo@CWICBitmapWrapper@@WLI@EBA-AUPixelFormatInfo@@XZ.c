/*
 * XREFs of ?GetPixelFormatInfo@CWICBitmapWrapper@@WLI@EBA?AUPixelFormatInfo@@XZ @ 0x18011E5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWICBitmapWrapper::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - 184, a2);
}
