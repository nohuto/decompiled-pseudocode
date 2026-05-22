/*
 * XREFs of ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800CDABC
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003589C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180035818 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x180057408 (IsGetMPCInputPostProcessorPresent.c)
 */

__int64 __fastcall GetRIMRawInputProviderSpecific(int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r8
  __int64 v3; // r9

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
      return 2048;
  }
  else
  {
    if ( IsEdition(253345LL) )
      v1 = 1048640;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
      1u,
      v2,
      v3);
    v1 |= IsGetMPCInputPostProcessorPresent() != 0 ? 25728 : 16512;
  }
  return v1;
}
