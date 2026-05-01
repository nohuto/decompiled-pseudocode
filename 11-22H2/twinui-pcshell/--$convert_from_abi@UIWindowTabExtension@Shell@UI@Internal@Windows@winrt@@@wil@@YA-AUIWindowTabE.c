/*
 * XREFs of ??$convert_from_abi@UIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@@wil@@YA?AUIWindowTabExtension@Shell@UI@Internal@Windows@winrt@@PEAUIUnknown@@@Z @ 0x18078DF70
 * Callers:
 *     ?AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIApplicationViewCollection@@PEAUIApplicationViewIconLoader@@PEAUIImmersiveShellHookService@@PEAUIInspectable@@4PEAPEAUIAppViewDataSourceAdapter@@@Z @ 0x180080A08 (-AppViewDataSourceAdapter_CreateInstance@@YAJW4DesktopSwitcherDataSourceScopeOptions@@PEAUIAppli.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall wil::convert_from_abi<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>(
        _QWORD *a1,
        __int64 (__fastcall ***a2)(_QWORD, const GUID *, _QWORD *))
{
  signed int v3; // eax

  *a1 = 0LL;
  v3 = (**a2)(a2, &winrt::impl::guid_v<winrt::Windows::Internal::UI::Shell::IWindowTabExtension>, a1);
  if ( v3 < 0 )
    winrt::throw_hresult(v3);
  return a1;
}
