/*
 * XREFs of ?_CloseView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804ADDD4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___::Invoke @ 0x1801BF1E0 (CAsyncCallbackWithLambda__lambda_bb4ce11a71704f27eabe982d791ac7c0___--Invoke.c)
 *     ?HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1804AC130 (-HandleRecoveryForView@HolographicPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804AE51C (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 * Callees:
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18000BF8C (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FindViewHostItem@HolographicPositioner@@AEAA?AV?$ComPtr@UIViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x1804AE9B8 (-_FindViewHostItem@HolographicPositioner@@AEAA-AV-$ComPtr@UIViewHostItem@Holographic@Shell@Inter.c)
 *     ?_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1804B05F4 (-_TransitionViewFromHolographic@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIViewHostI.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_CloseView(HolographicPositioner *this, struct IApplicationView *a2)
{
  struct Windows::Internal::Shell::Holographic::IViewHostItem **ViewHostItem; // rax
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v5; // r8
  IUnknown *v6; // rcx
  __int64 *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  unsigned int Service; // ebx
  __int64 v11; // rdx
  void (__fastcall *v12)(char *, GUID *, IUnknown **); // rbx
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  void *ppvOut[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct Windows::Internal::Shell::Holographic::IViewHostItem *v19; // [rsp+70h] [rbp+30h] BYREF
  IUnknown *punk; // [rsp+78h] [rbp+38h] BYREF

  LODWORD(v19) = 0;
  if ( !HolographicPositioner::_IsViewWin32Slate((void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2, 6) )
  {
    ppvOut[0] = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
    punk = 0LL;
    LODWORD(v19) = 2;
    v12 = *(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this + 1) + 32LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    v12((char *)this + 8, &GUID_00000000_0000_0000_c000_000000000046, &punk);
    Service = IUnknown_QueryService(punk, &stru_180894DA8, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punk);
    if ( (Service & 0x80000000) == 0 )
    {
      v15 = ApplicationViewHelpers::CloseView(
              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64))a2,
              (__int64)ppvOut[0],
              10,
              1,
              13);
      Service = v15;
      if ( v15 >= 0 )
      {
        Service = 0;
        goto LABEL_19;
      }
      v13 = (unsigned int)v15;
      v14 = 2183LL;
    }
    else
    {
      v13 = Service;
      v14 = 2176LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)v13);
LABEL_19:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)ppvOut);
    return Service;
  }
  ViewHostItem = (struct Windows::Internal::Shell::Holographic::IViewHostItem **)HolographicPositioner::_FindViewHostItem(
                                                                                   this,
                                                                                   &punk,
                                                                                   a2);
  v5 = *ViewHostItem;
  *ViewHostItem = 0LL;
  v19 = v5;
  v6 = punk;
  if ( punk )
  {
    punk = 0LL;
    ((void (__fastcall *)(IUnknown *))v6->lpVtbl->Release)(v6);
    v5 = v19;
  }
  if ( !v5 )
  {
    v7 = (__int64 *)*((_QWORD *)this + 35);
    v8 = *v7;
    v19 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64 *, struct IApplicationView *, char *, struct Windows::Internal::Shell::Holographic::IViewHostItem **))(v8 + 48))(
           v7,
           a2,
           (char *)this + 288,
           &v19);
    Service = v9;
    if ( v9 < 0 )
    {
      v11 = 2168LL;
      goto LABEL_10;
    }
    v5 = v19;
  }
  v9 = HolographicPositioner::_TransitionViewFromHolographic(this, a2, v5);
  Service = v9;
  if ( v9 >= 0 )
  {
    Service = 0;
    goto LABEL_12;
  }
  v11 = 2171LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)v9);
LABEL_12:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v19);
  return Service;
}
