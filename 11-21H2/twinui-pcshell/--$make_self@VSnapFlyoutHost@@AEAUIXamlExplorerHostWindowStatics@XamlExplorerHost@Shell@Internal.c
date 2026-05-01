/*
 * XREFs of ??$make_self@VSnapFlyoutHost@@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@winrt@@YA?AU?$com_ptr@VSnapFlyoutHost@@@0@AEAUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@0@@Z @ 0x1800C9C64
 * Callers:
 *     ?InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ @ 0x1800D73D4 (-InitializeSnapFlyoutHost@CShellSnapComponent@@AEAAJXZ.c)
 * Callees:
 *     ??0SnapFlyoutHost@@QEAA@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windows@winrt@@@Z @ 0x1800CA1CC (--0SnapFlyoutHost@@QEAA@AEBUIXamlExplorerHostWindowStatics@XamlExplorerHost@Shell@Internal@Windo.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
SnapFlyoutHost **__fastcall winrt::make_self<SnapFlyoutHost,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics &>(
        SnapFlyoutHost **a1,
        const struct winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowStatics *a2)
{
  SnapFlyoutHost *v5; // [rsp+30h] [rbp+8h]

  v5 = (SnapFlyoutHost *)operator new(0x98uLL);
  SnapFlyoutHost::SnapFlyoutHost(v5, a2);
  *(_QWORD *)v5 = &winrt::impl::heap_implements<SnapFlyoutHost>::`vftable';
  *a1 = v5;
  return a1;
}
