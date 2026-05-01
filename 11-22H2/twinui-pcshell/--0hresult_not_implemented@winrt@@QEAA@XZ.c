/*
 * XREFs of ??0hresult_not_implemented@winrt@@QEAA@XZ @ 0x1804F539C
 * Callers:
 *     ?ActivateInstance@?$ProcessTrackerT@UProcessTracker@factory_implementation@Shell@Internal@Windows@winrt@@U1implementation@3456@Ustatic_lifetime@6@@factory_implementation@Shell@Internal@Windows@winrt@@QEBA?AUIInspectable@Foundation@56@XZ @ 0x18027E1BC (-ActivateInstance@-$ProcessTrackerT@UProcessTracker@factory_implementation@Shell@Internal@Window.c)
 *     ?ActivateInstance@?$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIActivationFactory@Foundation@67@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1804F5560 (-ActivateInstance@-$produce@UXamlExplorerHostChildWindow@factory_implementation@XamlExplorerHost.c)
 *     ?IsSupported@?$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabExtension@3UI@456@@impl@winrt@@UEAAHPEA_N@Z @ 0x1806374C0 (-IsSupported@-$produce@UWindowTabHost@implementation@Shell@Internal@Windows@winrt@@UIWindowTabEx.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@@Z @ 0x1803E2DC4 (--0hresult_error@winrt@@QEAA@Uhresult@1@@Z.c)
 */

winrt::hresult_not_implemented *__fastcall winrt::hresult_not_implemented::hresult_not_implemented(
        winrt::hresult_not_implemented *this)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_not_implemented);
  return this;
}
