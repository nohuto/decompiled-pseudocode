/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180076440
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180012C88 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18003F6EC (-IsVoiceActivation@PositionerPropertySetHelpers@@YAJV-$ComPtr@UIPropertySet@Collections@Foundati.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x18005CE70 (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800765C0 (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x180076980 (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x1800DDB28 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ @ 0x180153204 (-_IsDisplayContextHolographic@HolographicPositioner@@AEAA_NXZ.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x18016BDA0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x1804A8074 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     _LogEventWithApplicationViewData_unsigned_int_ @ 0x1804A94A0 (_LogEventWithApplicationViewData_unsigned_int_.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x1804AC620 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1804AEBF4 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        __int64 (__fastcall ***a3)(struct IApplicationView *, GUID *, ViewSizePreferenceHelpers **))
{
  BOOL v6; // edi
  char v7; // al
  bool IsViewContextHolographic; // r14
  HRESULT (__stdcall *v9)(IUnknown *, const IID *const, void **); // rbx
  PositionerPropertySetHelpers *v10; // rcx
  int DetailsForActivation; // eax
  char v12; // bl
  HolographicPositioner *v13; // rbx
  int (__fastcall *v15)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  __int64 v16; // rdx
  struct IUnknown v17; // [rsp+20h] [rbp-50h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v18; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v19; // [rsp+30h] [rbp-40h] BYREF
  void (__fastcall ***v20)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v22; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v20 = (void (__fastcall ***)(_QWORD, GUID *, _QWORD *))a2;
  v6 = 0;
  LODWORD(v17.lpVtbl) = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, const wchar_t *, struct IUnknown *))(*(_QWORD *)a2 + 152LL))(
         a2,
         L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App",
         &v17) < 0
    || (v7 = 1, !LODWORD(v17.lpVtbl)) )
  {
    v7 = 0;
  }
  if ( v7 )
    return 0LL;
  wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(&v18, &v20);
  if ( !v18
    || (LODWORD(v17.lpVtbl) = 6,
        (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown *))(*(_QWORD *)a2 + 400LL))(a2, &v17) < 0)
    || LODWORD(v17.lpVtbl) != 1 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
    if ( IsHolographicWin32SlatesFeatureEnabled() )
    {
LABEL_7:
      IsViewContextHolographic = 0;
      v19 = 0LL;
      if ( !a3
        || (v9 = (HRESULT (__stdcall *)(IUnknown *, const IID *const, void **))**a3,
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19),
            ((int (__fastcall *)(_QWORD, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v9)(
              a3,
              &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
              &v19) < 0) )
      {
        if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
        {
          LODWORD(v17.lpVtbl) = 0;
          if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v17) >= 0 )
          {
            if ( LODWORD(v17.lpVtbl) )
            {
              LODWORD(v18) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
              LODWORD(v17.lpVtbl) = 3;
              HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(&v17, &v18);
              IsViewContextHolographic = 1;
            }
          }
        }
        goto LABEL_17;
      }
      DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(v10, a3, &v17, 0LL);
      if ( DetailsForActivation < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x2A1,
          (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)DetailsForActivation,
          (int)v17.lpVtbl);
      if ( ((__int64)v17.lpVtbl & 0x10) != 0 )
        goto LABEL_18;
      v12 = 1;
      if ( ((__int64)v17.lpVtbl & 4) != 0 )
      {
        LODWORD(v17.lpVtbl) = 0;
        IsViewContextHolographic = HolographicPositioner::IsViewManaged(
                                     (HolographicPositioner *)((char *)this - 32),
                                     a2,
                                     (int *)&v17) >= 0
                                && LODWORD(v17.lpVtbl);
      }
      else
      {
        if ( ((__int64)v17.lpVtbl & 1) == 0 )
          goto LABEL_14;
        v18 = v19;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        v22 = 0LL;
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"AppInstanceId", 0xEu, 0xDu);
        if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
               (Windows::Internal::ShellHelpers::PropertySetHelper *)&v18,
               v22) )
        {
          LODWORD(v17.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
          LogEventWithApplicationViewData_unsigned_int_(a2, v16, &v17);
        }
        else
        {
          v12 = 0;
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v18);
        IsViewContextHolographic = 0;
        if ( v12 )
        {
LABEL_14:
          v13 = (HolographicPositioner *)((char *)this - 168);
          IsViewContextHolographic = HolographicPositioner::_IsViewContextHolographic(
                                       (HolographicPositioner *)((char *)this - 168),
                                       a2,
                                       v19);
          goto LABEL_15;
        }
      }
      v13 = (HolographicPositioner *)((char *)this - 168);
LABEL_15:
      if ( !IsViewContextHolographic )
      {
        if ( !HolographicPositioner::_IsDisplayContextHolographic(v13) )
          goto LABEL_17;
        BYTE4(v17.lpVtbl) = 0;
        v18 = v19;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        PositionerPropertySetHelpers::IsVoiceActivation((__int64 *)&v18, (_BYTE *)&v17.lpVtbl + 4);
        if ( !BYTE4(v17.lpVtbl) )
          goto LABEL_17;
        LODWORD(v17.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
        LODWORD(v18) = 4;
        HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(&v18, &v17);
        IsViewContextHolographic = 1;
      }
      if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
        *((_BYTE *)this + 128) = 1;
LABEL_17:
      v6 = IsViewContextHolographic;
LABEL_18:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      return v6;
    }
    v18 = 0LL;
    v15 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    if ( v15(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v18) >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
      goto LABEL_7;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v18);
    return 0LL;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v18);
  return 1LL;
}
