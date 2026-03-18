/*
 * XREFs of sin_0 @ 0x18011B608
 * Callers:
 *     ?EvaluateCurve@XamlBackInterpolation@@MEAANN@Z @ 0x180107A90 (-EvaluateCurve@XamlBackInterpolation@@MEAANN@Z.c)
 *     Lanczos::Sinc @ 0x1801FF0B8 (Lanczos--Sinc.c)
 *     ?EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z @ 0x180267960 (-EvaluateCurve@XamlElasticInterpolation@@MEAANN@Z.c)
 *     ?EvaluateCurve@XamlSineInterpolation@@MEAANN@Z @ 0x180267A20 (-EvaluateCurve@XamlSineInterpolation@@MEAANN@Z.c)
 *     ?InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180267A68 (-InterpolateSpherical@KeyframeInterpolation@@KAXNW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpression.c)
 *     ?InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z @ 0x180280CB4 (-InterpolateSinusoidal@CAnimationInterpolator@@IEAAMAEBUDwmAnimationPrimitive@@_J@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sin_0(double X)
{
  return sin(X);
}
