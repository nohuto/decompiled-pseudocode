/*
 * XREFs of ?DismissAllLightDismiss@TabletModeViewManager@@AEAAJXZ @ 0x1805C36F0
 * Callers:
 *     ?StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@@Z @ 0x1805C497C (-StartSwipeHelper@TabletModeViewManager@@AEAAJIUtagPOINT@@W4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModeViewManager::DismissAllLightDismiss(IUnknown **this)
{
  HRESULT Service; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  void *ppvOut[2]; // [rsp+20h] [rbp-78h] BYREF
  struct tagGUITHREADINFO pgui; // [rsp+30h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  ppvOut[0] = 0LL;
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)ppvOut);
  Service = IUnknown_QueryService(
              this[2],
              &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
              &GUID_b849acb5_8ac5_4fb8_88b6_55c749d25a44,
              ppvOut);
  v3 = Service;
  if ( Service < 0 )
  {
    v4 = 622LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeviewmanager.cpp",
      (const char *)(unsigned int)Service);
    goto LABEL_10;
  }
  Service = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)ppvOut[0] + 48LL))(ppvOut[0]);
  v3 = Service;
  if ( Service < 0 )
  {
    v4 = 623LL;
    goto LABEL_5;
  }
  pgui.cbSize = 72;
  memset_0(&pgui.flags, 0, 0x44uLL);
  if ( GetGUIThreadInfo(0, &pgui) && (pgui.flags & 4) != 0 )
    SendNotifyMessageW(pgui.hwndMenuOwner, 0x1Fu, 0LL, 0LL);
  v3 = 0;
LABEL_10:
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)ppvOut);
  return v3;
}
