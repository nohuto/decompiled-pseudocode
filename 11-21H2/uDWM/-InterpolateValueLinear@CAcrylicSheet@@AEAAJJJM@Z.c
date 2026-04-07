/*
 * XREFs of ?InterpolateValueLinear@CAcrylicSheet@@AEAAJJJM@Z @ 0x18009A740
 * Callers:
 *     ?UpdateTransition@CAcrylicSheet@@AEAAJXZ @ 0x18009B848 (-UpdateTransition@CAcrylicSheet@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAcrylicSheet::InterpolateValueLinear(CAcrylicSheet *this, int a2, signed int a3, float a4)
{
  unsigned int v4; // eax
  __m128i v5; // xmm1
  int v6; // ecx

  if ( a2 != a3 )
  {
    v4 = a2;
    v5 = _mm_cvtsi32_si128(a3);
    if ( a2 <= a3 )
    {
      v4 = a3;
      a3 = a2;
    }
    v6 = (int)(float)((float)((float)(1.0 - a4) * (float)a2) + (float)(_mm_cvtepi32_ps(v5).m128_f32[0] * a4));
    if ( v6 > a3 )
    {
      a3 = v6;
      if ( v6 >= (int)v4 )
        return v4;
    }
  }
  return (unsigned int)a3;
}
