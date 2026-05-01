/*
 * XREFs of ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1800F0318
 * Callers:
 *     ?InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1800F02F0 (-InitializePosition@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentati.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F0580 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F0618 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 *     ??$As@UIOcclusionBasedApplicationViewPosition@@@?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIOcclusionBasedApplicationViewPosition@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F1590 (--$As@UIOcclusionBasedApplicationViewPosition@@@-$ComPtr@UIApplicationViewPosition@@@WRL@Microso.c)
 *     ?CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x1800F1EEC (-CreateAppViewOperationWithTitleBarAndChromeConfigured@CDesktopPositioner@@AEAAJPEAUIApplication.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _lambda_d1dba2fc4860aad3d85b44a4a5b86b3d_::operator() @ 0x1801B4718 (_lambda_d1dba2fc4860aad3d85b44a4a5b86b3d_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION_VIEW_FLAGS@@PEAUIApplicationViewOperation@@W4PositionScenario@@PEAUIImmersiveMonitor@@HW4BoundsPreference@WindowManagement@UI@Windows@@H@Z @ 0x1804FB8D4 (-PositionViewWithOptions@CDesktopPositioner@@AEAAJPEAUIApplicationView@@UtagRECT@@W4TRY_POSITION.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::InitializePositionHelper(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  int v11; // eax
  int RestorePosition; // eax
  int v13; // eax
  struct IImmersiveMonitor **AddressOf; // rax
  int v15; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rdx
  int v21; // eax
  struct IApplicationViewOperation *v22; // [rsp+50h] [rbp-79h] BYREF
  struct IApplicationViewPosition *v23; // [rsp+58h] [rbp-71h] BYREF
  __int64 v24; // [rsp+60h] [rbp-69h] BYREF
  __int64 v25; // [rsp+68h] [rbp-61h] BYREF
  struct IUnknown v26; // [rsp+70h] [rbp-59h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp-49h] BYREF
  __int64 v28; // [rsp+90h] [rbp-39h] BYREF
  struct IApplicationView *v29; // [rsp+98h] [rbp-31h] BYREF
  struct tagRECT v30; // [rsp+A0h] [rbp-29h] BYREF
  struct IApplicationViewPosition **v31; // [rsp+B0h] [rbp-19h]
  struct tagRECT v32; // [rsp+C0h] [rbp-9h] BYREF
  struct tagRECT v33; // [rsp+D0h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v29 = (struct IApplicationView *)a3;
  v28 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v28);
  LODWORD(v26.lpVtbl) = 0;
  *(_QWORD *)&v27.left = 0LL;
  *(_QWORD *)&v27.right = 0LL;
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           v29,
                           &v26,
                           (enum PositionerPropertySetHelpers::ActivationPropertyFlags *)&v27);
  v9 = DetailsForActivation;
  if ( DetailsForActivation < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x9D2,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation);
LABEL_41:
    wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v28);
    return v9;
  }
  v10 = v28;
  if ( !v28 )
  {
    v22 = 0LL;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
    v11 = CDesktopPositioner::CreateAppViewOperationWithTitleBarAndChromeConfigured(this, a2, &v22);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9D8,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v11);
LABEL_40:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
      goto LABEL_41;
    }
    v23 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
    RestorePosition = CDesktopPositioner::_GetRestorePosition(
                        this,
                        a2,
                        (struct PositionerPropertySetHelpers::ViewSizePreferences *)&v27,
                        &v23);
    v9 = RestorePosition;
    if ( RestorePosition < 0 )
    {
      v17 = 2524LL;
    }
    else
    {
      if ( v29 && v23 )
      {
        v25 = 0LL;
        if ( (int)Microsoft::WRL::ComPtr<IApplicationViewPosition>::As<IOcclusionBasedApplicationViewPosition>(
                    &v23,
                    &v25) >= 0 )
        {
          *(_QWORD *)&v30.left = &v25;
          *(_QWORD *)&v30.right = &v29;
          v31 = &v23;
          lambda_d1dba2fc4860aad3d85b44a4a5b86b3d_::operator()(&v30);
        }
        v32 = 0LL;
        if ( v23 )
        {
          v13 = (*(__int64 (__fastcall **)(struct IApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v23 + 24LL))(
                  v23,
                  &v32);
          if ( v13 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xA08,
              (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
              (const char *)(unsigned int)v13);
        }
        v24 = 0LL;
        AddressOf = (struct IImmersiveMonitor **)Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v24);
        v27 = v32;
        if ( (int)CDesktopPositioner::_GetRectAndFlagsFromPresentationArgs(
                    this,
                    a4,
                    &v27,
                    &v33,
                    (enum TRY_POSITION_VIEW_FLAGS *)&v26,
                    AddressOf) < 0 )
        {
          v15 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v22 + 80LL))(
                  v22,
                  v23);
          v9 = v15;
          if ( v15 < 0 )
          {
            v20 = 2592LL;
          }
          else
          {
            v15 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                    a2,
                    v22);
            v9 = v15;
            if ( v15 >= 0 )
            {
LABEL_15:
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_16:
              Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v22);
              v10 = v28;
              goto LABEL_17;
            }
            v20 = 2593LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v20,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v15);
          goto LABEL_29;
        }
        *(_QWORD *)&v27.left = 0LL;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27.left);
        v18 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
                (void **)&v27,
                &v33);
        v9 = v18;
        if ( v18 >= 0 )
        {
          v30 = v33;
          v21 = CDesktopPositioner::PositionViewWithOptions(this, a2, &v30, LODWORD(v26.lpVtbl), v22, 7, v24, 0, 0, 0);
          if ( v21 >= 0 )
            goto LABEL_34;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xA16,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
            (const char *)(unsigned int)v21);
          v18 = (*(__int64 (__fastcall **)(struct IApplicationViewOperation *, struct IApplicationViewPosition *))(*(_QWORD *)v22 + 80LL))(
                  v22,
                  v23);
          v9 = v18;
          if ( v18 < 0 )
          {
            v19 = 2585LL;
            goto LABEL_26;
          }
          v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                  a2,
                  v22);
          v9 = v18;
          if ( v18 >= 0 )
          {
LABEL_34:
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27.left);
            goto LABEL_15;
          }
          v19 = 2586LL;
        }
        else
        {
          v19 = 2577LL;
        }
LABEL_26:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)(unsigned int)v18);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27.left);
LABEL_29:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
LABEL_39:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v23);
        goto LABEL_40;
      }
      RestorePosition = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IApplicationViewOperation *))(*(_QWORD *)a2 + 320LL))(
                          a2,
                          v22);
      v9 = RestorePosition;
      if ( RestorePosition >= 0 )
        goto LABEL_16;
      v17 = 2598LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)RestorePosition);
    goto LABEL_39;
  }
LABEL_17:
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
