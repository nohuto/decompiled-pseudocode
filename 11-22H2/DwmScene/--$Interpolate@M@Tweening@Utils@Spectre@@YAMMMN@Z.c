/*
 * XREFs of ??$Interpolate@M@Tweening@Utils@Spectre@@YAMMMN@Z @ 0x180091974
 * Callers:
 *     ?Tween@?$TweenProperty@MV?$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spectre@@MEAA_NNPEBVICurve@234@@Z @ 0x1800934B0 (-Tween@-$TweenProperty@MV-$TransformationDefault@M@Tweening@Utils@Spectre@@@Tweening@Utils@Spect.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall Spectre::Utils::Tweening::Interpolate<float>(float a1, float a2, double a3)
{
  __m128d v3; // xmm3

  v3 = 0LL;
  v3.m128d_f64[0] = (float)(a2 - a1) * a3 + a1;
  return _mm_cvtpd_ps(v3);
}
