/*
 * XREFs of ?LaunchHardwareKeySettings@CopilotHotkeyManager@@QEAA?AU?$IAsyncOperation@_N@Foundation@Windows@winrt@@XZ @ 0x180271B64
 * Callers:
 *     CopilotHotkeyManager::TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1 @ 0x180273D10 (CopilotHotkeyManager--TryInvokeCopilotOrCustomAppFromHardwareKeyAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CopilotHotkeyManager::LaunchHardwareKeySettings$_InitCoro$2 @ 0x180271714 (CopilotHotkeyManager--LaunchHardwareKeySettings$_InitCoro$2.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall CopilotHotkeyManager::LaunchHardwareKeySettings(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  void *v4; // rax
  int v6; // [rsp+158h] [rbp+10h] BYREF

  v4 = operator new(0x119uLL);
  v6 = 0;
  CopilotHotkeyManager::LaunchHardwareKeySettings__InitCoro_2(&v6, (__int64)v4 + 112, a2, a1);
  return a2;
}
