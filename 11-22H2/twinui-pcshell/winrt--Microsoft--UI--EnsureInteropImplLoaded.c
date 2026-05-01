/*
 * XREFs of winrt::Microsoft::UI::EnsureInteropImplLoaded @ 0x18004AB20
 * Callers:
 *     ?Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@QEAAXV?$optional@PEAUHWND__@@@std@@@Z @ 0x18004A7A0 (-Initialize@XamlExplorerHostChildWindow_WASDK@implementation@XamlExplorerHost@Shell@Internal@Win.c)
 * Callees:
 *     ?throw_last_error@winrt@@YAXXZ @ 0x1803925DC (-throw_last_error@winrt@@YAXXZ.c)
 */

void winrt::Microsoft::UI::EnsureInteropImplLoaded()
{
  HMODULE ModuleHandleW; // rbx
  FARPROC ProcAddress; // rax
  winrt *v2; // rcx

  if ( !winrt::Microsoft::UI::s_module )
  {
    ModuleHandleW = GetModuleHandleW(L"Microsoft.Internal.FrameworkUdk.dll");
    if ( ModuleHandleW || (ModuleHandleW = LoadLibraryW(L"Microsoft.Internal.FrameworkUdk.dll")) != 0LL )
    {
      winrt::Microsoft::UI::s_impl = GetProcAddress(ModuleHandleW, "Windowing_GetWindowIdFromWindow");
      qword_18098D6A8 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetWindowFromWindowId");
      qword_18098D6B0 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetDisplayIdFromMonitor");
      qword_18098D6B8 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetMonitorFromDisplayId");
      qword_18098D6C0 = (__int64)GetProcAddress(ModuleHandleW, "Windowing_GetIconIdFromIcon");
      ProcAddress = GetProcAddress(ModuleHandleW, "Windowing_GetIconFromIconId");
      qword_18098D6C8 = (__int64)ProcAddress;
      if ( !winrt::Microsoft::UI::s_impl
        || !qword_18098D6A8
        || !qword_18098D6B0
        || !qword_18098D6B8
        || !qword_18098D6C0
        || !ProcAddress )
      {
        goto LABEL_12;
      }
      _InterlockedCompareExchange64(
        (volatile signed __int64 *)&winrt::Microsoft::UI::s_module,
        (signed __int64)ModuleHandleW,
        0LL);
    }
    if ( winrt::Microsoft::UI::s_module )
      return;
LABEL_12:
    winrt::throw_last_error(v2);
  }
}
