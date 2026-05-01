/*
 * XREFs of s_SetDwmAttributes @ 0x1805F705C
 * Callers:
 *     s_OnDrawItem @ 0x1805F61A8 (s_OnDrawItem.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x1800A6384 (-IsHighContrast@@YAHXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119ADC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HVCZMTest@@@details@wil@@QEAAX_NW4Reporti.c)
 */

int __fastcall s_SetDwmAttributes(LPARAM a1, LPARAM a2, __int64 a3, __int64 a4)
{
  int result; // eax
  LPARAM lParam[3]; // [rsp+20h] [rbp-18h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_HVCZMTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_HVCZMTest>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  result = IsHighContrast();
  if ( !result )
  {
    lParam[0] = a1;
    lParam[1] = a2;
    return EnumWindows((WNDENUMPROC)lambda_1a28a66a6761d59b906b53c38d1feea3_::_lambda_invoker_cdecl_, (LPARAM)lParam);
  }
  return result;
}
