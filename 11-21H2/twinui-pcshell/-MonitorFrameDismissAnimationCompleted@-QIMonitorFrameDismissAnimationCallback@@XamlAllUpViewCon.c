/*
 * XREFs of ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAXXZ @ 0x18001E27C
 * Callers:
 *     ?__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@UE$AAAJXZ @ 0x18001E1D0 (-__abi_IMonitorFrameDismissAnimationCallback____abi_MonitorFrameDismissAnimationCompleted@-QIMon.c)
 *     ?MonitorFrameDismissAnimationCompleted@?QIMonitorFrameDismissAnimationCallback@@XamlAllUpViewController@@WJI@E$AAAXXZ @ 0x180202C60 (-MonitorFrameDismissAnimationCompleted@-QIMonitorFrameDismissAnimationCallback@@Xam_ea_180202C60.c)
 * Callees:
 *     _lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::operator() @ 0x18001E3C0 (_lambda_e0b48c6444b1fd29cc3c2664eb3161bf_--operator().c)
 *     ?InternalRelease@WeakReference@Platform@@AEAAXXZ @ 0x180033140 (-InternalRelease@WeakReference@Platform@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180060018 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands@@@details@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall _MonitorFrameDismissAnimationCompleted__QIMonitorFrameDismissAnimationCallback__XamlAllUpViewController__UE_AAAXXZ(
        __int64 a1)
{
  __int64 WeakReference; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  WeakReference = Platform::Details::GetWeakReference(a1);
  v5 = WeakReference;
  v4 = WeakReference;
  if ( WeakReference )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)WeakReference + 8LL))(WeakReference);
  LOBYTE(v3) = 3;
  LOBYTE(v2) = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHostUseXamlIslands>::GetImpl'::`2'::impl,
    v2,
    v3);
  lambda_e0b48c6444b1fd29cc3c2664eb3161bf_::operator()(&v4);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v4);
  Platform::WeakReference::InternalRelease((Platform::WeakReference *)&v5);
}
