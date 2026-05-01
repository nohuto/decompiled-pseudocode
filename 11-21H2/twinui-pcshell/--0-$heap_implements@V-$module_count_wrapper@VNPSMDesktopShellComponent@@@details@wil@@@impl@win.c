/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1800CE15C
 * Callers:
 *     ??$make@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@$$V@winrt@@YA?AU?$com_ptr@UIObjectWithSite@@@0@XZ @ 0x1800CE0FC (--$make@V-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@$$V@winrt@@YA-AU-$com_.c)
 * Callees:
 *     ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x1800CE960 (--0NPSMDesktopShellComponent@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
NPSMDesktopShellComponent *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>(
        NPSMDesktopShellComponent *a1)
{
  NPSMDesktopShellComponent::NPSMDesktopShellComponent(a1);
  *(_QWORD *)a1 = &NPSMDesktopShellComponent::`vftable'{for `winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 3) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)a1 = &NPSMDesktopShellComponent::`vftable'{for `winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 2) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 3) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::immersive_shell_component'};
  return a1;
}
