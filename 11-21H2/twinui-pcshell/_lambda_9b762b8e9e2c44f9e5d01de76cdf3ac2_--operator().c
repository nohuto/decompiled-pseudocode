/*
 * XREFs of _lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_::operator() @ 0x1801B44FC
 * Callers:
 *     ?ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804FABE0 (-ControlGained@CDesktopPositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1800F1EEC (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z @ 0x1804FB640 (-IsWindowMinimizing@CDesktopPositioner@@AEAAJPEAUIUnknown@@PEAE@Z.c)
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@PEAUIUnknown@@@Z @ 0x1804FB808 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_9b762b8e9e2c44f9e5d01de76cdf3ac2_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, _QWORD, GUID *, struct IApplicationView **); // rbx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  CDesktopPositioner *v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  CDesktopPositioner *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  unsigned __int8 v13; // [rsp+60h] [rbp+28h] BYREF
  int v14; // [rsp+68h] [rbp+30h] BYREF
  struct IApplicationViewOperation *v15; // [rsp+70h] [rbp+38h] BYREF
  struct IApplicationView *v16; // [rsp+78h] [rbp+40h] BYREF

  v16 = 0LL;
  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v2 + 32LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  v4 = v3(v2, *(unsigned int *)a1[1], &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(struct IApplicationView *, int *))(*(_QWORD *)v16 + 216LL))(v16, &v14);
    v5 = v4;
    if ( v4 < 0 )
    {
      v6 = 667LL;
      goto LABEL_5;
    }
    v15 = 0LL;
    v7 = (CDesktopPositioner *)a1[2];
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    v8 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(v7, v16, &v15);
    v5 = v8;
    if ( v8 >= 0 )
    {
      v8 = CDesktopPositioner::PositionViewForPositionerHandoff(a1[2], v16, v15, *(unsigned int *)a1[3], *a1[4], *a1[5]);
      v5 = v8;
      if ( v8 >= 0 )
      {
        if ( v14
          && (v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, __int64))(*(_QWORD *)v15 + 96LL))(
                     v15,
                     1LL),
              v5 = v8,
              v8 < 0) )
        {
          v9 = 678LL;
        }
        else
        {
          v13 = 0;
          if ( *(_DWORD *)a1[3] == 4
            && (int)CDesktopPositioner::IsWindowMinimizing(v10, (struct IUnknown *)*a1[5], &v13) >= 0
            && v13
            && (v8 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, _QWORD))(*(_QWORD *)v15 + 96LL))(
                       v15,
                       0LL),
                v5 = v8,
                v8 < 0) )
          {
            v9 = 686LL;
          }
          else
          {
            v8 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)v16 + 320LL))(
                   v16,
                   v15);
            v5 = v8;
            if ( v8 >= 0 )
            {
              v5 = 0;
              goto LABEL_22;
            }
            v9 = 689LL;
          }
        }
      }
      else
      {
        v9 = 672LL;
      }
    }
    else
    {
      v9 = 670LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v8);
LABEL_22:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v15);
    goto LABEL_23;
  }
  v6 = 664LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_23:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  return v5;
}
