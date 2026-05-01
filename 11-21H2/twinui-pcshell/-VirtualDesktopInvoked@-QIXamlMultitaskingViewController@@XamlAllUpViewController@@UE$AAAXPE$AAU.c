/*
 * XREFs of ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180444DD4
 * Callers:
 *     ?VirtualDesktopInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@0@Z @ 0x180202D80 (-VirtualDesktopInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     _lambda_851aba2b0a98af9448d131339fbe7811_::operator() @ 0x180441154 (_lambda_851aba2b0a98af9448d131339fbe7811_--operator().c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _VirtualDesktopInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUIVirtualDesktop_Multitasking_ComposableShell_Internal_Windows__0_Z(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // r9
  __int64 WeakReference; // [rsp+20h] [rbp-18h] BYREF
  bool v7; // [rsp+28h] [rbp-10h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  WeakReference = Platform::Details::GetWeakReference(a1);
  v8 = 0LL;
  v7 = a2 == a3;
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v8);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    1u,
    3u,
    v5);
  lambda_851aba2b0a98af9448d131339fbe7811_::operator()((__int64)&WeakReference);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&WeakReference);
}
