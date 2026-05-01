/*
 * XREFs of ??0?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@QEAA@XZ @ 0x1802608A0
 * Callers:
 *     ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1806FD460 (--0CopilotHotkeyManager@@QEAA@XZ.c)
 * Callees:
 *     ??0immersive_shell_component@winrt@@QEAA@XZ @ 0x18008AB3C (--0immersive_shell_component@winrt@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>(
        _QWORD *a1)
{
  _QWORD *v1; // r8
  _QWORD *v2; // rcx

  *a1 = &winrt::impl::producers_base<SnapLauncher::SnapWindowProvider,std::tuple<IObjectWithSite,IServiceProvider,IUpdateViewValueSet>>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  a1[1] = &winrt::impl::producers_base<SnapLauncher::SnapWindowProvider,std::tuple<IObjectWithSite,IServiceProvider,IUpdateViewValueSet>>::`vftable'{for `winrt::impl::producer_convert<SnapLauncher::SnapWindowProvider,IUpdateViewValueSet,void>'};
  winrt::immersive_shell_component::immersive_shell_component((winrt::immersive_shell_component *)(a1 + 2));
  v1[1] = &winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *v1 = &winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *v2 = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  v1[3] = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  v1[4] = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  v1[6] = &winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::`vftable';
  return v1;
}
