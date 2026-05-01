/*
 * XREFs of ??0NPSMDesktopShellComponent@@QEAA@XZ @ 0x1800896D0
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x18008C550 (--0-$heap_implements@V-$module_count_wrapper@VNPSMDesktopShellComponent@@@details@wil@@@impl@win.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
NPSMDesktopShellComponent *__fastcall NPSMDesktopShellComponent::NPSMDesktopShellComponent(
        NPSMDesktopShellComponent *this)
{
  _QWORD *v2; // rbx

  *(_QWORD *)this = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  v2 = (_QWORD *)((char *)this + 8);
  winrt::immersive_shell_component::immersive_shell_component((NPSMDesktopShellComponent *)((char *)this + 8));
  *(_QWORD *)this = &NPSMDesktopShellComponent::`vftable'{for `winrt::impl::producers_base<NPSMDesktopShellComponent,std::tuple<IApplicationViewChangeListener>>'};
  *v2 = &winrt::impl::heap_implements<wil::details::module_count_wrapper<NPSMDesktopShellComponent>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<winrt::Windows::Internal::Shell::implementation::InputSwitchingManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 3) = &winrt::Windows::Internal::Shell::implementation::ImeContextMenuManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 5) = &NPSMDesktopShellComponent::`vftable'{for `winrt::immersive_shell_component'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 96), 0, 0);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_DWORD *)this + 70) = 0;
  winrt::immersive_shell_component::register_service_information<_GUID const>(v2, &unk_18080FC20);
  return this;
}
