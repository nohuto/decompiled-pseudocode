/*
 * XREFs of ?UpdateMagnifiedWindowParameters@MagnifierExperienceHelper@@AEAAXXZ @ 0x1800CCC9C
 * Callers:
 *     ?SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z @ 0x1800CCAAC (-SetMagnificationFactor@MagnifierExperienceHelper@@QEAAXAEBN@Z.c)
 *     ?SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z @ 0x1800CCAD8 (-SetMonitorRect@MagnifierExperienceHelper@@AEAAXAEBUtagRECT@@@Z.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800CC01C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter@@@details@wi.c)
 */

void __fastcall MagnifierExperienceHelper::UpdateMagnifiedWindowParameters(
        MagnifierExperienceHelper *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // di
  double v6; // xmm1_8
  double v7; // xmm1_8
  double v8; // xmm2_8
  double v9; // xmm2_8

  v5 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MagnifierWithinEdgesNoJitter>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( *((float *)this + 31) == 0.0 && *((float *)this + 30) == 0.0 )
  {
    v6 = *((double *)this + 8);
  }
  else
  {
    v6 = *((double *)this + 2);
    v5 = 0;
  }
  v7 = v6 / *((double *)this + 14);
  *((double *)this + 10) = v7;
  if ( v5 )
    v8 = *((double *)this + 9);
  else
    v8 = *((double *)this + 3);
  v9 = v8 / *((double *)this + 14);
  *((double *)this + 11) = v9;
  *((double *)this + 12) = v7 * 0.5;
  *((double *)this + 13) = v9 * 0.5;
}
