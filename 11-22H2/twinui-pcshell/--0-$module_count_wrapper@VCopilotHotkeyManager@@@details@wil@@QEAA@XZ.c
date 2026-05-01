/*
 * XREFs of ??0?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@QEAA@XZ @ 0x1806FD3C0
 * Callers:
 *     ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1806FD354 (--0-$heap_implements@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@Q.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CopilotHotkeyManager@@QEAA@XZ @ 0x1806FD460 (--0CopilotHotkeyManager@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
CopilotHotkeyManager *__fastcall wil::details::module_count_wrapper<CopilotHotkeyManager>::module_count_wrapper<CopilotHotkeyManager>(
        CopilotHotkeyManager *a1)
{
  CopilotHotkeyManager::CopilotHotkeyManager(a1);
  *(_QWORD *)a1 = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  *((_QWORD *)a1 + 1) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  *((_QWORD *)a1 + 2) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  *((_QWORD *)a1 + 3) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  *((_QWORD *)a1 + 4) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  *((_QWORD *)a1 + 6) = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  *((_QWORD *)a1 + 13) = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  return a1;
}
