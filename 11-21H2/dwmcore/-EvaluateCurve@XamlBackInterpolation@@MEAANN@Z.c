/*
 * XREFs of ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x1800FBC10
 * Callers:
 *     <none>
 * Callees:
 *     pow @ 0x180101940 (pow.c)
 *     _o_sin_0 @ 0x180101958 (_o_sin_0.c)
 */

double __fastcall XamlBackInterpolation::EvaluateCurve(XamlBackInterpolation *this, double a2)
{
  double v3; // xmm0_8

  v3 = pow(a2, 3.0);
  return v3 - o_sin_0(a2 * 3.141592741012573) * (*((float *)this + 8) * a2);
}
