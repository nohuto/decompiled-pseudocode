/*
 * XREFs of ?HandleRecoveryForView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804FB540
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1800F1EEC (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::HandleRecoveryForView(CDesktopPositioner *this, struct IApplicationView *a2)
{
  CDesktopPositioner *v3; // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IApplicationViewOperation *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (CDesktopPositioner *)((char *)this - 128);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  v4 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(v3, a2, &v9);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
           a2,
           v9);
    v5 = v4;
    if ( v4 >= 0 )
    {
      v5 = 0;
      goto LABEL_7;
    }
    v6 = 707LL;
  }
  else
  {
    v6 = 706LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_7:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  return v5;
}
