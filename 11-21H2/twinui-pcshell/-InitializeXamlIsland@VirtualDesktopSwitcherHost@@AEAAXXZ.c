/*
 * XREFs of ?InitializeXamlIsland@VirtualDesktopSwitcherHost@@AEAAXXZ @ 0x18060A124
 * Callers:
 *     ?CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z @ 0x1806090C4 (-CreateXaml@VirtualDesktopSwitcherHost@@AEAAXPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ?CreateInBand@?$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@UIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA?AUXamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@3@IAEBURect@Foundation@83@@Z @ 0x180015FDC (-CreateInBand@-$consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics@U.c)
 *     ??1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ @ 0x180020144 (--1IPrelaunchActivatedEventArgs@Activation@ApplicationModel@Windows@winrt@@QEAA@XZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F793C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_XTests@@@details@wil@@QEAAX_NW4ReportingK.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details@wil@@QEAA_NXZ @ 0x1801A2398 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2@@@details.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??4XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAAEAU012345@$$QEAU012345@@Z @ 0x1805B85EC (--4XamlExplorerHostWindow@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAAEAU012345@$$QEAU01.c)
 */

void __fastcall VirtualDesktopSwitcherHost::InitializeXamlIsland(__int64 **this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 IsEnabled; // al
  unsigned int v6; // r8d
  winrt::Windows::Foundation::IUnknown *v7; // rax
  signed int v8; // eax
  signed int v9; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+48h] [rbp+10h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_XTests>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_XTests>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_SearchBoxOnTaskbarWave2>::GetImpl'::`2'::impl);
  v10 = 0LL;
  v6 = 7;
  if ( !IsEnabled )
    v6 = 6;
  v7 = (winrt::Windows::Foundation::IUnknown *)winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IXamlExplorerHostWindowStatics<winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics>::CreateInBand(
                                                 this + 30,
                                                 &v11,
                                                 v6,
                                                 &v10);
  winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow::operator=(
    (winrt::Windows::Foundation::IUnknown *)(this + 29),
    v7);
  winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs::~IPrelaunchActivatedEventArgs((winrt::Windows::ApplicationModel::Activation::IPrelaunchActivatedEventArgs *)&v11);
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*this[29] + 88))(this[29], 0LL);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  v9 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*this[29] + 104))(this[29], 0LL);
  if ( v9 < 0 )
    winrt::throw_hresult(v9);
}
