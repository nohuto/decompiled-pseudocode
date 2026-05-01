/*
 * XREFs of ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1806FD460
 * Callers:
 *     ??0?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@QEAA@XZ @ 0x1806FD3C0 (--0-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@QEAA@XZ.c)
 * Callees:
 *     ??0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z @ 0x18008A8A4 (--0IViewWrapper@ViewManagerInterop@Shell@Internal@Windows@winrt@@QEAA@$$T@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x1800B75C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z @ 0x1800BCCE4 (--$register_service_information@$$CBU_GUID@@@immersive_shell_component@winrt@@IEAAXAEBU_GUID@@@Z.c)
 *     ??0?$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessageNotification@@UIApplicationViewChangeListener@@@winrt@@QEAA@XZ @ 0x1802608A0 (--0-$implements@VCopilotHotkeyManager@@Uimmersive_shell_component@winrt@@UIImmersiveWindowMessag.c)
 *     ??0TargetAppExtensionDetails@@QEAA@XZ @ 0x180260D7C (--0TargetAppExtensionDetails@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=11
CopilotHotkeyManager *__fastcall CopilotHotkeyManager::CopilotHotkeyManager(CopilotHotkeyManager *this)
{
  __int64 v2; // r9
  int v3; // r9d
  __int64 v4; // r9

  winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>(this);
  *((_QWORD *)this + 14) = 0LL;
  *(_QWORD *)this = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)this + 1) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)this + 2) = &CopilotHotkeyManager::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)this + 3) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)this + 4) = &winrt::Windows::Internal::Shell::implementation::PinManager_base<winrt::Windows::Internal::Shell::implementation::PinManager,IPinManagerInterop3,winrt::immersive_shell_component>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)this + 6) = &CopilotHotkeyManager::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *((_QWORD *)this + 13) = &CopilotHotkeyManager::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  winrt::Windows::Internal::Shell::ViewManagerInterop::IViewWrapper::IViewWrapper((_QWORD *)this + 18);
  *((_BYTE *)this + 153) = v2;
  *((_QWORD *)this + 20) = v2;
  *((_QWORD *)this + 21) = v2;
  *((_DWORD *)this + 44) = 16842752;
  *((_QWORD *)this + 23) = 0LL;
  TargetAppExtensionDetails::TargetAppExtensionDetails((CopilotHotkeyManager *)((char *)this + 192));
  *((_DWORD *)this + 94) = v3;
  std::wstring::wstring((_QWORD *)this + 48);
  *((_QWORD *)this + 54) = v4;
  *((_QWORD *)this + 56) = v4;
  *((_QWORD *)this + 57) = v4;
  *((_OWORD *)this + 29) = 0LL;
  winrt::immersive_shell_component::register_service_information<_GUID const>((__int64)this + 16, &xmmword_18082EC78);
  return this;
}
