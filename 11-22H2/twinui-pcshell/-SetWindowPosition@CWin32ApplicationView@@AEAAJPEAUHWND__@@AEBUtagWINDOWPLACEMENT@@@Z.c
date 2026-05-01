/*
 * XREFs of ?SetWindowPosition@CWin32ApplicationView@@AEAAJPEAUHWND__@@AEBUtagWINDOWPLACEMENT@@@Z @ 0x1803CF284
 * Callers:
 *     ?SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z @ 0x1803CEDA0 (-SetPosition@CWin32ApplicationView@@UEAAJPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CWin32ApplicationView::SetWindowPosition(
        CWin32ApplicationView *this,
        HWND a2,
        const struct tagWINDOWPLACEMENT *a3)
{
  __int64 v5; // rbx
  int v6; // ebx
  const char *v8; // r9
  __int64 v9; // rdx
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v12 = (volatile signed __int32 *)this;
  if ( a3->showCmd == 3 )
  {
    v5 = 0LL;
    v13 = 0LL;
    GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get((__int64 *)&v12);
    if ( v12 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)v12 + 6) + 768LL);
      if ( v5 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 8LL))(*(_QWORD *)(*((_QWORD *)v12 + 6) + 768LL));
      v10[0] = 0LL;
      v14 = 0LL;
      v13 = v5;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v14);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v10);
    }
    Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v12);
    v6 = (*(__int64 (__fastcall **)(__int64, HWND))(*(_QWORD *)v5 + 32LL))(v5, a2);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v13);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3D7,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    return 0LL;
  }
  if ( SetWindowPlacement(a2, a3) )
    return 0LL;
  if ( GetLastError() != 5 )
  {
    v9 = 1011LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v8);
  }
  if ( a3->showCmd == 1 || a3->showCmd == 4 )
    goto LABEL_18;
  if ( a3->showCmd != 6 )
  {
    if ( a3->showCmd != 9 )
    {
      v9 = 1004LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v9,
               (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v8);
    }
LABEL_18:
    if ( !PostMessageW(a2, 0x112u, 0xF120uLL, 0LL) )
    {
      v9 = 1001LL;
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)v9,
               (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
               v8);
    }
    return 0LL;
  }
  if ( !PostMessageW(a2, 0x112u, 0xF020uLL, 0LL) )
  {
    v9 = 996LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v9,
             (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
             v8);
  }
  return 0LL;
}
