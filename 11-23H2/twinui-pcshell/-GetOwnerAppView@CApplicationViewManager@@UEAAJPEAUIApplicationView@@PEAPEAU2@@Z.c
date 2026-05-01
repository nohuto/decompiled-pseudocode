/*
 * XREFs of ?GetOwnerAppView@CApplicationViewManager@@UEAAJPEAUIApplicationView@@PEAPEAU2@@Z @ 0x1803CBF10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800CB660 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWin32ApplicationView@@UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180128890 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_180128890.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplicationViewManager::GetOwnerAppView(
        RTL_SRWLOCK *this,
        struct IApplicationView *a2,
        struct IApplicationView **a3)
{
  int ViewForHwnd; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int64 v9; // r9
  volatile int *v10; // rdx
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+38h] [rbp+10h] BYREF
  HWND v15; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  ViewForHwnd = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
                  a2,
                  &GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3,
                  &v14);
  v6 = ViewForHwnd;
  if ( ViewForHwnd < 0 )
  {
    v7 = 706LL;
LABEL_7:
    v9 = (unsigned int)ViewForHwnd;
    goto LABEL_8;
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, HWND *))(**(_QWORD **)(v14 + 216) + 48LL))(*(_QWORD *)(v14 + 216), &v15);
  v6 = v8;
  if ( v8 >= 0 )
  {
    ViewForHwnd = CApplicationViewManager::GetViewForHwnd(this - 1, v15, a3);
    v6 = ViewForHwnd;
    if ( ViewForHwnd >= 0 )
      goto LABEL_9;
    v7 = 711LL;
    goto LABEL_7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x3CB,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
    (const char *)(unsigned int)v8);
  v9 = v6;
  v7 = 709LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
    (const char *)v9);
LABEL_9:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWin32ApplicationView,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::Release(
      v11,
      v10);
  }
  return v6;
}
