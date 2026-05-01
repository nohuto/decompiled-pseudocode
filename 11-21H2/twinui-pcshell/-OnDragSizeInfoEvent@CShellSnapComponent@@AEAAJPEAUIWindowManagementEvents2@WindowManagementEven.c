/*
 * XREFs of ?OnDragSizeInfoEvent@CShellSnapComponent@@AEAAJPEAUIWindowManagementEvents2@WindowManagementEvents@Shell@Internal@Windows@@AEBUDragSizeInfoEventArgs@3456@@Z @ 0x180594430
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800610EC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DITest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180061644 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SNTest@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z @ 0x180596B24 (-Stop@OnSnappingCancelled@CSnapComponentTelemetry@@QEAAX_N@Z.c)
 *     ?Reset@SnapLayoutProvider@@QEAAXXZ @ 0x1805ACD48 (-Reset@SnapLayoutProvider@@QEAAXXZ.c)
 */

__int64 __fastcall CShellSnapComponent::OnDragSizeInfoEvent(
        CShellSnapComponent *this,
        struct Windows::Internal::Shell::WindowManagementEvents::IWindowManagementEvents2 *a2,
        const struct Windows::Internal::Shell::WindowManagementEvents::DragSizeInfoEventArgs *a3,
        __int64 a4)
{
  SnapLayoutProvider *v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( *(_DWORD *)a3 == 3 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SNTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SNTest>::GetImpl'::`2'::impl,
      1u,
      3u,
      a4);
    v5 = (SnapLayoutProvider *)*((_QWORD *)this + 72);
    if ( v5 )
    {
      SnapLayoutProvider::Reset(v5);
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DITest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DITest>::GetImpl'::`2'::impl,
        1u,
        v6,
        v7);
      if ( **((_DWORD **)this + 163) == 1 )
        CSnapComponentTelemetry::OnSnappingCancelled::Stop((CShellSnapComponent *)((char *)this + 1256), 1);
    }
  }
  return 0LL;
}
