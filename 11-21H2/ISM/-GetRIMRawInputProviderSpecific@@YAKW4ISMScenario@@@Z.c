/*
 * XREFs of ?GetRIMRawInputProviderSpecific@@YAKW4ISMScenario@@@Z @ 0x1800B4C54
 * Callers:
 *     ?InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@@@Z @ 0x18003545C (-InitializeHelper@InputProviderManager@@AEAAJPEAUIRawInputClient@@W4InputProviderInitialization@.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180036848 (-IsEdition@@YA_N_K@Z.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18004B560 (IsGetMPCInputPostProcessorPresent.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18004D0EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MultiProcessISM@@@details@wil@@QEAAX_NW4R.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B4CC4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DockInputProcessing@@@details@wil@@QEAAX_.c)
 */

__int64 __fastcall GetRIMRawInputProviderSpecific(int a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
      return 2048;
  }
  else
  {
    if ( IsEdition(253345LL) )
    {
      LOBYTE(v2) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DockInputProcessing>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DockInputProcessing>::GetImpl'::`2'::impl,
        v2);
      v1 = 1048640;
    }
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_MultiProcessISM>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_MultiProcessISM>::GetImpl'::`2'::impl,
      1u,
      v3,
      v4);
    v1 |= IsGetMPCInputPostProcessorPresent() != 0 ? 25728 : 16512;
  }
  return v1;
}
