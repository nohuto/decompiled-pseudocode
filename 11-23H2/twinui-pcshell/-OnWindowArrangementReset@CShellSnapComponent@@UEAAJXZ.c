/*
 * XREFs of ?OnWindowArrangementReset@CShellSnapComponent@@UEAAJXZ @ 0x180662AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801143CC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ @ 0x180662B40 (-OnWindowArrangementReset@CSnapComponentTelemetry@@SAXXZ.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x1806645AC (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x18067FA84 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnWindowArrangementReset(
        SnapLayoutProvider **this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  if ( this[55] )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    CSnapComponentTelemetry::OnSnappingCancelled::Stop((CSnapComponentTelemetry::OnSnappingCancelled *)(this + 130), 1);
    CSnapComponentTelemetry::OnWindowArrangementReset();
    SnapLayoutProvider::Reset(this[55]);
  }
  return 0LL;
}
