/*
 * XREFs of ?OnDisplayMonitorInfoChangedAsync@CStartExperienceManager@@AEAA?AUfire_and_forget@winrt@@XZ @ 0x1801E2BA0
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoCollection_winrt::WindowsUdk::UI::Shell::DisplayMonitorInfoRemovedEventArgs___lambda_01b8ae2d9cbe4889d05ea36904e58758___::Invoke @ 0x1801E26A0 (winrt--impl--delegate_winrt--Windows--Foundation--TypedEventHandler_winrt--WindowsU_ea_1801E26A0.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     CStartExperienceManager::OnDisplayMonitorInfoChangedAsync$_InitCoro$2 @ 0x1801E28C0 (CStartExperienceManager--OnDisplayMonitorInfoChangedAsync$_InitCoro$2.c)
 */

_BYTE *__fastcall CStartExperienceManager::OnDisplayMonitorInfoChangedAsync(__int64 a1, _BYTE *a2)
{
  void *v4; // rax
  int v6; // [rsp+98h] [rbp+10h] BYREF

  v4 = operator new(0x52uLL);
  v6 = 0;
  CStartExperienceManager::OnDisplayMonitorInfoChangedAsync__InitCoro_2(&v6, (__int64)v4, a2, a1);
  return a2;
}
