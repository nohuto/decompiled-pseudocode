/*
 * XREFs of ??0?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@QEAA@XZ @ 0x18008AF20
 * Callers:
 *     ??$make@V?$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@winrt@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x18008C2F8 (--$make@V-$module_count_wrapper@UFocusSessionComponent@implementation@Shell@Internal@Windows@win.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
winrt::immersive_shell_component *__fastcall wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>(
        winrt::immersive_shell_component *a1)
{
  _QWORD *v2; // rcx

  *((_QWORD *)a1 + 11) = &winrt::impl::produce<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent,winrt::Windows::Internal::Shell::IFocusSessionComponent>::`vftable';
  winrt::immersive_shell_component::immersive_shell_component(a1);
  *v2 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v2[1] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v2[2] = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v2[4] = &winrt::Windows::Internal::Shell::implementation::FocusSessionComponent::`vftable';
  v2[12] = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v2, &unk_18080FC60);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 2) = &wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 4) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::FocusSessionComponent>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
