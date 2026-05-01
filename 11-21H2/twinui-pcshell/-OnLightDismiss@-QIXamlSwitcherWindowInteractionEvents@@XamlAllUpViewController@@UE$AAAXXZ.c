/*
 * XREFs of ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@UE$AAAXXZ @ 0x180444604
 * Callers:
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ @ 0x180202CA0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlAllUpViewController@@WBI@E$AAAXXZ.c)
 * Callees:
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     _lambda_089cabc2a54d4c1360014440c9bbb9c9_::operator() @ 0x180440FE4 (_lambda_089cabc2a54d4c1360014440c9bbb9c9_--operator().c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall _OnLightDismiss__QIXamlSwitcherWindowInteractionEvents__XamlAllUpViewController__UE_AAAXXZ(__int64 a1)
{
  __int64 v1; // r9
  __int64 WeakReference; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  WeakReference = Platform::Details::GetWeakReference(a1);
  v3 = 0LL;
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v3);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    1u,
    3u,
    v1);
  lambda_089cabc2a54d4c1360014440c9bbb9c9_::operator()((__int64)&WeakReference);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&WeakReference);
}
