/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803D2184
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1803CDAD0 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@@XZ @ 0x180034084 (-ReleaseAndGetAddressOf@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAPEAPEAUIApplicationView@.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180036348 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180093960 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18010A0FC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x1803D1B20 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall HolographicPositioner::_HandleSwitchAsyncActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rbx
  __int64 *AddressOf; // rax
  int ApplicationViewUniqueId; // eax
  unsigned int v10; // ebx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64 *); // rbx
  __int64 *v18; // rax
  unsigned int v19; // ebx
  __int64 v20; // r8
  unsigned int v22; // [rsp+20h] [rbp-50h] BYREF
  struct IApplicationView *v23; // [rsp+28h] [rbp-48h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-40h] BYREF
  unsigned int v25; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v26; // [rsp+3Ch] [rbp-34h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v28; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v24 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  v28 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v24, (__int64)v28, v4, &v25) < 0 )
    goto LABEL_9;
  v5 = v25;
  v23 = 0LL;
  v6 = *((_QWORD *)this + 28);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v6 + 48LL);
  AddressOf = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v23);
  ApplicationViewUniqueId = v7(v6, v5, AddressOf);
  v10 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v22 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v23, &v22);
    v10 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v11 = 1777LL;
      goto LABEL_16;
    }
    v12 = v22;
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
                                v28,
                                v13,
                                v12);
    v10 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v11 = 1779LL;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
LABEL_9:
    v28 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v24, (__int64)v28, v14, &v26) >= 0 )
    {
      v15 = v26;
      v23 = 0LL;
      v16 = *((_QWORD *)this + 28);
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v16 + 48LL);
      v18 = Microsoft::WRL::ComPtr<IApplicationView>::ReleaseAndGetAddressOf((__int64 *)&v23);
      ApplicationViewUniqueId = v17(v16, v15, v18);
      v10 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v11 = 1788LL;
        goto LABEL_16;
      }
      v22 = 0;
      ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v23, &v22);
      v10 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v11 = 1791LL;
        goto LABEL_16;
      }
      v19 = v22;
      v28 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
      ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v24,
                                  v28,
                                  v20,
                                  v19);
      v10 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v11 = 1793LL;
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
    }
    v10 = 0;
    goto LABEL_19;
  }
  v11 = 1774LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)ApplicationViewUniqueId);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v23);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
  return v10;
}
