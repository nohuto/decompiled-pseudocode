/*
 * XREFs of sub_180059448 @ 0x180059448
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180059448(CBitmap *a1, const struct WICRect *a2, unsigned int a3, struct IWICBitmapLock **a4)
{
  char v4; // of

  if ( !v4 )
    JUMPOUT(0x18005941DLL);
  BYTE1(a2) = -119;
  __debugbreak();
  return CBitmap::Lock(a1, a2, a3, a4);
}
