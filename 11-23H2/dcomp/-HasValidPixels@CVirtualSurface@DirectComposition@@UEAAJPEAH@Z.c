/*
 * XREFs of ?HasValidPixels@CVirtualSurface@DirectComposition@@UEAAJPEAH@Z @ 0x1800FDF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CVirtualSurface::HasValidPixels(
        DirectComposition::CVirtualSurface *this,
        int *a2)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a2 )
  {
    result = 0LL;
    *a2 = (*((_BYTE *)this + 60) & 0xC) == 8;
  }
  return result;
}
