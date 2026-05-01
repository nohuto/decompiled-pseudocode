/*
 * XREFs of ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180097FF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z @ 0x180093334 (-HasKey@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA_NPEAUHSTRING__@@@Z.c)
 *     ?GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PEAW4ActivationPropertyFlags@1@PEAUViewSizePreferences@1@@Z @ 0x180097200 (-GetDetailsForActivation@PositionerPropertySetHelpers@@YAJPEAUIApplicationView@@PEAUIUnknown@@PE.c)
 *     ?IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ @ 0x1800982E0 (-IsHolographicWin32SlatesFeatureEnabled@@YA_NXZ.c)
 *     ?_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x18009848C (-_IsViewWin32Slate@HolographicPositioner@@CA_NPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z.c)
 *     ?_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180099AFC (-_IsViewContextHolographic@HolographicPositioner@@AEAA_NPEAUIApplicationView@@PEAUIPropertySet@C.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsVoiceActivation@PositionerPropertySetHelpers@@YAJV?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@PEA_N@Z @ 0x18014735C (-IsVoiceActivation@PositionerPropertySetHelpers@@YAJV-$ComPtr@UIPropertySet@Collections@Foundati.c)
 *     ?IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z @ 0x18016A720 (-IsViewManaged@HolographicPositioner@@UEAAJPEAUIApplicationView@@PEAH@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802E6814 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x1803CAFE4 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     _LogEventWithApplicationViewData_unsigned_int_ @ 0x1803CC42C (_LogEventWithApplicationViewData_unsigned_int_.c)
 *     ??$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEBU_WNF_STATE_NAME@@$$QEBW4UserDisplayContext@Holographic@Shell@Internal@Windows@@@Z @ 0x1803CC6F4 (--$_QueryAndCompareWNFContext@W4UserDisplayContext@Holographic@Shell@Internal@Windows@@@@YA_NAEB.c)
 *     ?_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z @ 0x1803D1D18 (-_GetApplicationViewUniqueIdForTracing@HolographicPositioner@@CAIPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall HolographicPositioner::ShouldHandleActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3)
{
  char v6; // al
  __int64 v7; // rcx
  unsigned int v8; // ebx
  PositionerPropertySetHelpers *v9; // rcx
  int DetailsForActivation; // eax
  char v11; // r14
  HRESULT v12; // eax
  int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v16; // rcx
  int (__fastcall *v18)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **); // rbx
  __int64 v19; // rdx
  struct IUnknown v20; // [rsp+20h] [rbp-40h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v21; // [rsp+28h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v22; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-28h] BYREF
  HSTRING string; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  LODWORD(v20.lpVtbl) = 0;
  if ( (*(int (__fastcall **)(struct IApplicationView *, const wchar_t *, struct IUnknown *))(*(_QWORD *)a2 + 152LL))(
         a2,
         L"Microsoft.MixedReality.Portal_8wekyb3d8bbwe!App",
         &v20) < 0
    || (v6 = 1, !LODWORD(v20.lpVtbl)) )
  {
    v6 = 0;
  }
  if ( v6 )
    return 0LL;
  v21 = 0LL;
  (**(void (__fastcall ***)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a2)(
    a2,
    &GUID_f3527610_c76d_4316_ac8e_28651acf3df3,
    &v21);
  v7 = (__int64)v21;
  if ( v21 )
  {
    LODWORD(v20.lpVtbl) = 6;
    if ( (*(int (__fastcall **)(struct IApplicationView *, struct IUnknown *))(*(_QWORD *)a2 + 400LL))(a2, &v20) >= 0
      && LODWORD(v20.lpVtbl) == 1 )
    {
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v21);
      return 1LL;
    }
    v7 = (__int64)v21;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( !IsHolographicWin32SlatesFeatureEnabled() )
  {
    v21 = 0LL;
    v18 = **(int (__fastcall ***)(struct IApplicationView *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a2;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    if ( v18(a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v21) >= 0 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    return 0LL;
  }
LABEL_9:
  LOBYTE(v8) = 0;
  v22 = 0LL;
  if ( !a3
    || ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct Windows::Foundation::Collections::IPropertySet **))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v22) < 0 )
  {
    if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
    {
      LODWORD(v20.lpVtbl) = 0;
      if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v20) >= 0 )
      {
        if ( LODWORD(v20.lpVtbl) )
        {
          LODWORD(v21) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
          LODWORD(v20.lpVtbl) = 3;
          HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(&v20, &v21);
          LOBYTE(v8) = 1;
        }
      }
    }
    goto LABEL_21;
  }
  DetailsForActivation = PositionerPropertySetHelpers::GetDetailsForActivation(
                           v9,
                           (struct IApplicationView *)a3,
                           &v20,
                           0LL);
  if ( DetailsForActivation < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2A3,
      (unsigned int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)DetailsForActivation,
      (int)v20.lpVtbl);
  if ( ((__int64)v20.lpVtbl & 0x10) != 0 )
  {
    v8 = 0;
    goto LABEL_22;
  }
  v11 = 1;
  if ( ((__int64)v20.lpVtbl & 4) != 0 )
  {
    LODWORD(v20.lpVtbl) = 0;
    if ( HolographicPositioner::IsViewManaged((HolographicPositioner *)((char *)this - 32), a2, (int *)&v20) >= 0
      && LODWORD(v20.lpVtbl) )
    {
      LOBYTE(v8) = 1;
      goto LABEL_49;
    }
    LOBYTE(v8) = 0;
  }
  else
  {
    if ( ((__int64)v20.lpVtbl & 1) == 0 )
      goto LABEL_53;
    v21 = v22;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
    string = 0LL;
    v12 = WindowsCreateStringReference(L"AppInstanceId", 0xDu, &hstringHeader, &string);
    if ( v12 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
      __debugbreak();
    }
    if ( Windows::Internal::ShellHelpers::PropertySetHelper::HasKey(
           (Windows::Internal::ShellHelpers::PropertySetHelper *)&v21,
           string) )
    {
      LODWORD(v20.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
      LogEventWithApplicationViewData_unsigned_int_(a2, v19, &v20);
    }
    else
    {
      v11 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v21);
    LOBYTE(v8) = 0;
    if ( v11 )
    {
LABEL_53:
      LOBYTE(v8) = HolographicPositioner::_IsViewContextHolographic(
                     (HolographicPositioner *)((char *)this - 168),
                     a2,
                     v22);
      if ( (_BYTE)v8 )
        goto LABEL_49;
    }
  }
  if ( !*((_DWORD *)this + 72) )
  {
    LODWORD(v20.lpVtbl) = 1;
    if ( (unsigned __int8)_QueryAndCompareWNFContext<enum Windows::Internal::Shell::Holographic::UserDisplayContext>(
                            v15,
                            &v20) )
    {
      BYTE4(v20.lpVtbl) = 0;
      v21 = v22;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v21);
      PositionerPropertySetHelpers::IsVoiceActivation(&v21, (char *)&v20.lpVtbl + 4);
      if ( BYTE4(v20.lpVtbl) )
      {
        LODWORD(v20.lpVtbl) = HolographicPositioner::_GetApplicationViewUniqueIdForTracing(a2);
        LODWORD(v21) = 4;
        HolographicPositionerTelemetry::LaunchInHolographic<enum HolographicLaunchReason,unsigned int>(&v21, &v20);
        LOBYTE(v8) = 1;
LABEL_49:
        if ( (unsigned __int8)HolographicPositioner::_IsViewWin32Slate(a2, 6LL) )
          *((_BYTE *)this + 136) = 1;
      }
    }
  }
LABEL_21:
  v8 = (unsigned __int8)v8;
LABEL_22:
  v16 = v22;
  if ( v22 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v8;
}
