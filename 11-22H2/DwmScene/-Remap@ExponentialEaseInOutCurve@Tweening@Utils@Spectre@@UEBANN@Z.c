/*
 * XREFs of ?Remap@ExponentialEaseInOutCurve@Tweening@Utils@Spectre@@UEBANN@Z @ 0x1800E0BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??$pow@HN$0A@@@YANHN@Z @ 0x1800E0BB0 (--$pow@HN$0A@@@YANHN@Z.c)
 */

double __fastcall Spectre::Utils::Tweening::ExponentialEaseInOutCurve::Remap(
        Spectre::Utils::Tweening::ExponentialEaseInOutCurve *this,
        double a2)
{
  double result; // xmm0_8
  double v3; // xmm1_8
  double v4; // xmm0_8

  if ( a2 >= 1.0 )
    return DOUBLE_1_0;
  result = 0.0;
  if ( a2 > 0.0 )
  {
    v3 = a2 + a2;
    v4 = v3 - 1.0;
    if ( v3 >= 1.0 )
      return (2.0 - pow<int,double,0>((__int64)this, v4 * -10.0)) * 0.5;
    else
      return pow<int,double,0>((__int64)this, v4 * 10.0) * 0.5;
  }
  return result;
}
