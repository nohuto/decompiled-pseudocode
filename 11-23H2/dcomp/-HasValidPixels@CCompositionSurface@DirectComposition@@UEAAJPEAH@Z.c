/*
 * XREFs of ?HasValidPixels@CCompositionSurface@DirectComposition@@UEAAJPEAH@Z @ 0x18007FA40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CCompositionSurface::HasValidPixels(
        DirectComposition::CCompositionSurface *this,
        int *a2)
{
  __int64 result; // rax

  result = 2147942487LL;
  if ( a2 )
  {
    *a2 = *(_BYTE *)(*((_QWORD *)this + 5) + 112LL) & 1;
    return 0LL;
  }
  return result;
}
