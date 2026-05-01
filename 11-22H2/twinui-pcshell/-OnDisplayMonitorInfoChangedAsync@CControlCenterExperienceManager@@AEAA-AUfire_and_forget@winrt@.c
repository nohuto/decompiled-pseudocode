/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CControlCenterExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801DF22C
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_36656ddb8fa4912729a8d7a5a6d2a129___::Invoke @ 0x1801DEED0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801DEED0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801DEF58 (CControlCenterExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x52uLL);
  v6 = 0;
  CControlCenterExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
