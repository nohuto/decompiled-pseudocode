/*
 * XREFs of ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x18005FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     ?StartXamlApplicationThread@XamlExplorerHostShellComponent@@AEAAJXZ @ 0x1800619DC (-StartXamlApplicationThread@XamlExplorerHostShellComponent@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall XamlExplorerHostShellComponent::PerformDelayedInitialization(
        XamlExplorerHostShellComponent *this,
        __int64 a2,
        __int64 a3)
{
  int started; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(a3) = 3;
  LOBYTE(a2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    a2,
    a3);
  started = XamlExplorerHostShellComponent::StartXamlApplicationThread((XamlExplorerHostShellComponent *)((char *)this - 48));
  v5 = started;
  if ( started >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x9F,
    (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostshellcomponent.cpp",
    (const char *)(unsigned int)started,
    v7);
  return v5;
}
