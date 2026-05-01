/*
 * XREFs of ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804AAB00
 * Callers:
 *     ?InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x1804AC350 (-InitializePositionWithShowCommand@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknow.c)
 * Callees:
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x1800DDC18 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1804A98AC (--0-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Par.c)
 *     ??1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1804A9FC8 (--1ControlGainedForActivation@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x1804AD37C (-StartActivity@ControlGainedForActivation@HolographicPositionerTelemetry@@QEAAXPEAUIApplicationV.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1804AD5C8 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_.c)
 *     ?_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x1804AE51C (-_EnsureShellStateForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AEC20 (-_HandleAppActivationResponse@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AECE8 (-_HandleControlGainedForView@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@.c)
 *     ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AF068 (-_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1804AFD80 (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::ControlGainedForActivation(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        struct IUnknown *a4)
{
  PositionerPropertySetHelpers *v7; // rcx
  int DetailsForActivation; // eax
  unsigned int v9; // ebx
  struct Windows::Foundation::Collections::IPropertySet *v10; // rsi
  struct IApplicationView *v11; // rdx
  HolographicPositioner *v12; // rcx
  int v13; // eax
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  struct IApplicationView *v17; // rdx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  int v25; // eax
  bool v27[4]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v28[12]; // [rsp+24h] [rbp-DCh] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+30h] [rbp-D0h] BYREF
  int v30; // [rsp+38h] [rbp-C8h]
  struct Windows::Foundation::Collections::IPropertySet *v31; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-B8h] BYREF
  HSTRING v33; // [rsp+60h] [rbp-A0h]
  _QWORD v34[40]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v30 = 0;
  wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v34,
    (__int64)"ControlGainedForActivation");
  v34[0] = &HolographicPositionerTelemetry::ControlGainedForActivation::`vftable';
  HolographicPositionerTelemetry::ControlGainedForActivation::StartActivity(
    (HolographicPositionerTelemetry::ControlGainedForActivation *)v34,
    a2,
    a4);
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v7,
                           (__int64 (__fastcall ***)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))a4,
                           (struct IUnknown *)v28,
                           0LL);
  v9 = DetailsForActivation;
  if ( DetailsForActivation >= 0 )
  {
    v10 = 0LL;
    v31 = 0LL;
    if ( a4 )
    {
      *(_QWORD *)&v28[4] = 0LL;
      ((void (__fastcall *)(struct IUnknown *, GUID *, _BYTE *))a4->lpVtbl->QueryInterface)(
        a4,
        &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
        &v28[4]);
      v10 = *(struct Windows::Foundation::Collections::IPropertySet **)&v28[4];
      *(_QWORD *)&v28[4] = 0LL;
      v31 = v10;
      wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v28[4]);
      if ( v10 )
      {
        if ( (v28[0] & 8) != 0 )
        {
          v13 = HolographicPositioner::_HandleAppActivationResponse(v12, v11, v10);
          v9 = v13;
          if ( v13 < 0 )
          {
            v14 = (unsigned int)v13;
            v15 = 820LL;
LABEL_31:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v15,
              (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)v14);
            goto LABEL_37;
          }
        }
        v29 = v10;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v29);
        v33 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"ClientRequestedNavigationType",
          0x1Eu,
          0x1Du);
        v30 = 1;
        if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                    v33,
                    v16,
                    &v28[4]) >= 0
          && *(_DWORD *)&v28[4] == 1 )
        {
          v19 = HolographicPositioner::_HandleSwitchAsyncActivation((HolographicPositioner *)(a1 - 168), v17, v10);
          v9 = v19;
          if ( v19 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x33C,
              (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v19);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
LABEL_37:
            wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v31);
            goto LABEL_38;
          }
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v29);
      }
    }
    v27[0] = 0;
    v20 = HolographicPositioner::_EnsureShellStateForView((HolographicPositioner *)(a1 - 168), a2, v27);
    v9 = v20;
    if ( v20 < 0 )
    {
      v14 = (unsigned int)v20;
      v15 = 833LL;
      goto LABEL_31;
    }
    if ( v27[0] )
    {
      v21 = HolographicPositioner::_HandleControlGainedForView((HolographicPositioner *)(a1 - 168), a2, v10);
      v9 = v21;
      if ( v21 < 0 )
      {
        v14 = (unsigned int)v21;
        v15 = 839LL;
        goto LABEL_31;
      }
      v22 = HolographicPositioner::_RaiseRequestNavigateToView((HolographicPositioner *)(a1 - 168), a2);
      v9 = v22;
      if ( v22 < 0 )
      {
        v14 = (unsigned int)v22;
        v15 = 845LL;
        goto LABEL_31;
      }
      if ( (v28[0] & 1) != 0 )
      {
LABEL_36:
        v9 = 0;
        goto LABEL_37;
      }
      v23 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD))(*(_QWORD *)a2 + 432LL))(a2, 0LL);
      v9 = v23;
      if ( v23 < 0 )
      {
        v14 = (unsigned int)v23;
        v15 = 851LL;
        goto LABEL_31;
      }
      if ( (v28[0] & 4) == 0
        && (v28[0] & 2) == 0
        && (*(int (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2) < 0 )
      {
        v24 = *(_QWORD *)(a1 + 64);
        if ( !v24 )
        {
          v9 = -2147019873;
          v14 = 2147947423LL;
          v15 = 868LL;
          goto LABEL_31;
        }
        if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)v24 + 48LL))(v24) >= 0 )
        {
          v25 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
          if ( v25 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x367,
              (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
              (const char *)(unsigned int)v25);
        }
      }
    }
    wil::ActivityBase<HolographicPositionerProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v34);
    goto LABEL_36;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x327,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)DetailsForActivation);
LABEL_38:
  HolographicPositionerTelemetry::ControlGainedForActivation::~ControlGainedForActivation((HolographicPositionerTelemetry::ControlGainedForActivation *)v34);
  return v9;
}
