/*
 * XREFs of SignedNormalize @ 0x1801A65C8
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x1801A5650 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
__m128 __fastcall SignedNormalize(double a1, float a2, double a3)
{
  float v3; // xmm5_4
  __m128 v4; // xmm3

  if ( *(float *)&a1 >= 0.0 )
    v3 = FLOAT_1_0;
  else
    v3 = FLOAT_N1_0;
  v4 = _mm_and_ps(*(__m128 *)&a1, (__m128)_xmm);
  *(float *)&a3 = *(float *)&a3 - a2;
  v4.m128_f32[0] = v4.m128_f32[0] - a2;
  if ( *(float *)&a3 <= fmaxf(v4.m128_f32[0], 0.0) )
  {
    v4 = *(__m128 *)&a3;
  }
  else if ( v4.m128_f32[0] <= 0.0 )
  {
    v4 = 0LL;
  }
  v4.m128_f32[0] = (float)(v4.m128_f32[0] / *(float *)&a3) * v3;
  return v4;
}
