/*
 * XREFs of ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x1802D1A80
 * Callers:
 *     ?SwitchTo@CWin32ApplicationView@@UEAAJXZ @ 0x1802D1D50 (-SwitchTo@CWin32ApplicationView@@UEAAJXZ.c)
 *     ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x1803CC020 (-GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z.c)
 *     ?SetFocus@CWin32ApplicationView@@UEAAJXZ @ 0x1803CED10 (-SetFocus@CWin32ApplicationView@@UEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetLastActivePopup@Utilities@ApplicationViewManagement@@YAPEAUHWND__@@PEAU3@@Z @ 0x1803CD04C (-GetLastActivePopup@Utilities@ApplicationViewManagement@@YAPEAUHWND__@@PEAU3@@Z.c)
 */

__int64 __fastcall CWin32ApplicationView::GetSwitchWindow(CWin32ApplicationView *this, HWND *a2)
{
  HWND v3; // rax
  HWND v4; // rdx
  HWND LastActivePopup; // rax
  HWND v6; // rbx
  __int64 result; // rax
  __int64 v8; // rax

  *a2 = 0LL;
  v3 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  LastActivePopup = ApplicationViewManagement::Utilities::GetLastActivePopup(v3, v4);
  v6 = LastActivePopup;
  if ( !LastActivePopup )
    return 2147943800LL;
  v8 = GhostWindowFromHungWindow(LastActivePopup);
  if ( v8 )
    v6 = (HWND)v8;
  result = 0LL;
  *a2 = v6;
  return result;
}
