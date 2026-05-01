/*
 * XREFs of ?winrt_make_Windows_Internal_Shell_DesktopTaskGroups_DesktopTaskGroupsSwitchItemController@@YAPEAXXZ @ 0x1800B3BA4
 * Callers:
 *     ?Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800B55E0 (-Windows_Internal_Shell_DesktopTaskGroups_get_activation_factory@@YAPEAXAEBV-$basic_string_view@.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *winrt_make_Windows_Internal_Shell_DesktopTaskGroups_DesktopTaskGroupsSwitchItemController(void)
{
  _QWORD *v0; // rax

  v0 = operator new(0x18uLL);
  v0[2] = &winrt::impl::produce<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController,winrt::Windows::Foundation::IActivationFactory>::`vftable';
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  v0[1] = 1LL;
  *v0 = &winrt::impl::heap_implements<winrt::Windows::Internal::Shell::DesktopTaskGroups::factory_implementation::DesktopTaskGroupsSwitchItemController>::`vftable';
  return v0 + 2;
}
