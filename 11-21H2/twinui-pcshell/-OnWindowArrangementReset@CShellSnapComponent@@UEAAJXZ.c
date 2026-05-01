/*
 * XREFs of ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x1805955F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800610EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800DBEB4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MszAdjustment@@@details@wil@@QEAAX_NW4Rep.c)
 *     ?OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ @ 0x180595650 (-OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180596B24 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1805ACD48 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnWindowArrangementReset(
        SnapLayoutProvider **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // r8
  __int64 v6; // r9

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MszAdjustment>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MszAdjustment>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  if ( this[54] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      v5,
      v6);
    CSnapComponentTelemetry::OnSnappingCancelled::Stop((CSnapComponentTelemetry::OnSnappingCancelled *)(this + 139), 1);
    CSnapComponentTelemetry::OnWindowArrangementReset();
    SnapLayoutProvider::Reset(this[54]);
  }
  return 0LL;
}
