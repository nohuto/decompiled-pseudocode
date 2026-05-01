/*
 * XREFs of ?UnsubscribeFromServices@XamlExplorerHostShellComponent@@UEAAJPEAUIServiceProvider@@@Z @ 0x180062150
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800628A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::UnsubscribeFromServices(
        XamlExplorerHostShellComponent *this,
        struct IServiceProvider *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rcx
  void *v6; // rdx

  v5 = *((_QWORD *)this + 20);
  if ( v5 )
    (*(void (__fastcall **)(__int64, struct IServiceProvider *))(*(_QWORD *)v5 + 56LL))(v5, a2);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  if ( (unsigned __int64)(*((_QWORD *)this + 32) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    wil::details::SetEvent(*((wil::details **)this + 31), v6);
  return 0LL;
}
