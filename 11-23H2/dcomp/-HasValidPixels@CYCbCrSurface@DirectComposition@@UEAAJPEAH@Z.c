/*
 * XREFs of ?HasValidPixels@CYCbCrSurface@DirectComposition@@UEAAJPEAH@Z @ 0x1800FEF90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CYCbCrSurface::HasValidPixels(DirectComposition::CYCbCrSurface *this, int *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  int v4; // eax
  __int64 v5; // rcx

  result = 2147942487LL;
  if ( a2 )
  {
    v3 = *((_QWORD *)this + 6);
    if ( !v3
      || (v4 = 1, (*(_BYTE *)(v3 + 68) & 1) == 0)
      || (v5 = *((_QWORD *)this + 7)) == 0
      || (*(_BYTE *)(v5 + 68) & 1) == 0 )
    {
      v4 = 0;
    }
    *a2 = v4;
    return 0LL;
  }
  return result;
}
