/*
 * XREFs of ??0?$heap_implements@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@@impl@winrt@@QEAA@XZ @ 0x1806FD354
 * Callers:
 *     ??$make@V?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@$$V@winrt@@YA?A_PXZ @ 0x1806FD2CC (--$make@V-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@$$V@winrt@@YA-A_PXZ.c)
 * Callees:
 *     ??0?$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@QEAA@XZ @ 0x1806FD3C0 (--0-$module_count_wrapper@VCopilotHotkeyManager@@@details@wil@@QEAA@XZ.c)
 */

_QWORD *__fastcall winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>(
        _QWORD *a1)
{
  wil::details::module_count_wrapper<CopilotHotkeyManager>::module_count_wrapper<CopilotHotkeyManager>();
  *a1 = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IImmersiveWindowMessageNotification,void>'};
  a1[1] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<CopilotHotkeyManager,IApplicationViewChangeListener,void>'};
  a1[2] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IObjectWithSite,void>'};
  a1[3] = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IServiceProvider,void>'};
  a1[4] = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::impl::producer_convert<winrt::immersive_shell_component,IImmersiveShellComponent,void>'};
  a1[6] = &wil::details::module_count_wrapper<CopilotHotkeyManager>::`vftable'{for `winrt::implements<CopilotHotkeyManager,winrt::immersive_shell_component,IImmersiveWindowMessageNotification,IApplicationViewChangeListener>'};
  a1[13] = &winrt::impl::heap_implements<wil::details::module_count_wrapper<CopilotHotkeyManager>>::`vftable'{for `CWRLImpWndProc<CopilotHotkeyManager>'};
  return a1;
}
