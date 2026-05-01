/*
 * XREFs of ?winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow@@YAPEAXXZ @ 0x1804FAA50
 * Callers:
 *     ?XamlExplorerHost_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B5728 (-XamlExplorerHost_get_activation_factory@@YAPEAXAEBV-$basic_string_view@GU-$char_traits@G@std@@@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *winrt_make_Windows_Internal_Shell_XamlExplorerHost_XamlExplorerHostWindow(void)
{
  _QWORD *v0; // rax

  v0 = operator new(0x20uLL);
  v0[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow_WASDK,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  v0[3] = &winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostWindowFactory>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v0[1] = 1LL;
  *v0 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::XamlExplorerHost::factory_implementation::XamlExplorerHostWindow>::`vftable';
  return v0 + 2;
}
