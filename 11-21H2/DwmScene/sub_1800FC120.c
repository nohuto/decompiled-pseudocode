/*
 * XREFs of sub_1800FC120 @ 0x1800FC120
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800FC0FC @ 0x1800FC0FC (sub_1800FC0FC.c)
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall sub_1800FC120(__int64 a1, double a2)
{
  __m128 result; // xmm0
  __int128 v3; // xmm1

  if ( a2 < 1.0 )
  {
    result = 0LL;
    if ( a2 > 0.0 )
    {
      a2 = a2 + a2;
      result.m128_u64[1] = *(unsigned __int64 *)(&a2 + 1);
      *(double *)result.m128_u64 = a2 - 1.0;
      sub_1800FC0FC();
      if ( a2 >= 1.0 )
      {
        v3 = 0x4000000000000000uLL;
        *(double *)&v3 = (2.0 - *(double *)result.m128_u64 * -10.0) * 0.5;
        return (__m128)v3;
      }
      else
      {
        *(double *)result.m128_u64 = *(double *)result.m128_u64 * 10.0 * 0.5;
      }
    }
  }
  else
  {
    return (__m128)0x3FF0000000000000uLL;
  }
  return result;
}
