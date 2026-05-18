/*
 * XREFs of sub_180092CE4 @ 0x180092CE4
 * Callers:
 *     sub_180093580 @ 0x180093580 (sub_180093580.c)
 * Callees:
 *     sub_180092200 @ 0x180092200 (sub_180092200.c)
 */

__m128 __fastcall sub_180092CE4(__int64 a1)
{
  __m128 result; // xmm0
  __m128 v3; // xmm1

  if ( *(_DWORD *)(a1 + 1816) )
  {
    v3 = sub_180092200(a1, *(float *)(a1 + 1812));
    result = (__m128)*(unsigned int *)(a1 + 1828);
    if ( result.m128_f32[0] <= v3.m128_f32[0] )
      return v3;
  }
  else
  {
    return (__m128)*(unsigned int *)(a1 + 1828);
  }
  return result;
}
