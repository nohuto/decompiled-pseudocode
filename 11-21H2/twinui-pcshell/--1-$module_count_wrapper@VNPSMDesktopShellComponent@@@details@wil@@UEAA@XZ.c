/*
 * XREFs of ??1?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAA@XZ @ 0x1800CC760
 * Callers:
 *     ??_E?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAAPEAXI@Z @ 0x1800CC6BC (--_E-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@UEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall wil::details::module_count_wrapper<NPSMDesktopShellComponent>::~module_count_wrapper<NPSMDesktopShellComponent>(
        NPSMDesktopShellComponent *this)
{
  *(_QWORD *)this = &NPSMDesktopShellComponent::`vftable'{for `winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>'};
  *((_QWORD *)this + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &winrt::Windows::Internal::UI::Themes::implementation::ThemeCoordinator::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::immersive_shell_component'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  NPSMDesktopShellComponent::~NPSMDesktopShellComponent(this);
}
