/*
 * XREFs of ??0?$com_ptr_t@UIAppViewDataSourceAdapter@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIAppViewDataSourceAdapter@@@Z @ 0x1805F8E38
 * Callers:
 *     ??0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@winrt@@AEBUIVirtualDesktopPerMonitorCollection@34567@@Z @ 0x1805F90F4 (--0CachedDataSource@@QEAA@_NPEAUIAppViewDataSourceAdapter@@AEBUIVirtualDesktopController@Multita.c)
 *     ?RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z @ 0x1805FB4D8 (-RuntimeClassInitialize@XamlAltTabViewHost@@QEAAJAEBUXamlViewHostInitializeArgs@@@Z.c)
 *     ??0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApplicationViewSwitcher@@PEAUIImmersiveAppCrusher@@PEAUIMultitaskingViewManager@@@Z @ 0x18060DE28 (--0XamlAltTabViewController@@QE$AAA@PEAUIAltTabViewHost@@PEAUIAppViewDataSourceAdapter@@PEAUIApp.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<IAppViewDataSourceAdapter,wil::err_exception_policy>::com_ptr_t<IAppViewDataSourceAdapter,wil::err_exception_policy>(
        _QWORD *a1,
        __int64 a2)
{
  *a1 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  return a1;
}
