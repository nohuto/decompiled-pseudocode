/*
 * XREFs of ??$make_unique@VCachedDataSource@@AEB_NPEAUIAppViewDataSourceAdapter@@AEAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAUIVirtualDesktopPerMonitorCollection@45678@$0A@@std@@YA?AV?$unique_ptr@VCachedDataSource@@U?$default_delete@VCachedDataSource@@@std@@@0@AEB_N$$QEAPEAUIAppViewDataSourceAdapter@@AEAUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEAUIVirtualDesktopPerMonitorCollection@45678@@Z @ 0x1805F8AD0
 * Callers:
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopPerMonitorCollection@34567@@Z @ 0x1805F90F4 (--0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multita.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::make_unique<CachedDataSource,bool const &,IAppViewDataSourceAdapter *,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController &,winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection &,0>(
        _QWORD *a1,
        bool *a2,
        struct IAppViewDataSourceAdapter **a3,
        const struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController *a4,
        struct winrt::Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection *a5)
{
  CachedDataSource *v10; // [rsp+40h] [rbp+8h]

  v10 = (CachedDataSource *)operator new(0x38uLL);
  *a1 = CachedDataSource::CachedDataSource(v10, *a2, *a3, a4, a5);
  return a1;
}
