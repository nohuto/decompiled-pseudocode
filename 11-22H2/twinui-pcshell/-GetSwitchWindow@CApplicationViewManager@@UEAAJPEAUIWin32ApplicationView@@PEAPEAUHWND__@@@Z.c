/*
 * XREFs of ?GetSwitchWindow@CApplicationViewManager@@UEAAJPEAUIWin32ApplicationView@@PEAPEAUHWND__@@@Z @ 0x1803CC020
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180128890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180128890.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z @ 0x1802D1A80 (-GetSwitchWindow@CWin32ApplicationView@@QEBAJPEAPEAUHWND__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetSwitchWindow(
        CApplicationViewManager *this,
        struct IWin32ApplicationView *a2,
        HWND *a3)
{
  int SwitchWindow; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  volatile int *v7; // rdx
  CWin32ApplicationView *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  CWin32ApplicationView *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  SwitchWindow = (**(__int64 (__fastcall ***)(struct IWin32ApplicationView *, GUID *, CWin32ApplicationView **))a2)(
                   a2,
                   &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3,
                   &v11);
  v5 = SwitchWindow;
  if ( SwitchWindow >= 0 )
  {
    SwitchWindow = CWin32ApplicationView::GetSwitchWindow(v11, a3);
    v5 = SwitchWindow;
    if ( SwitchWindow >= 0 )
      goto LABEL_6;
    v6 = 697LL;
  }
  else
  {
    v6 = 695LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)SwitchWindow);
LABEL_6:
  v8 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(
      (__int64)v8,
      v7);
  }
  return v5;
}
