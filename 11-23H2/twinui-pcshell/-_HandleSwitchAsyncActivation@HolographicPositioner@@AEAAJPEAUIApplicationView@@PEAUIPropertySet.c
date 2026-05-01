/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1804AF068
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x1804AAB00 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x1800DDC18 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x1802D05FC (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x1804AE9FC (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
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
  __int64 (__fastcall *v7)(__int64, _QWORD, struct IApplicationView **); // rbx
  int ApplicationViewUniqueId; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // r8
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, _QWORD, struct IApplicationView **); // rbx
  __int64 (__fastcall ***v16)(_QWORD, GUID *, __int64 *); // r8
  unsigned int v18; // [rsp+20h] [rbp-50h] BYREF
  struct IApplicationView *v19; // [rsp+28h] [rbp-48h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v20; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-34h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v24; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v20 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v20);
  v24 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
              v24,
              v4,
              &v21) < 0 )
    goto LABEL_9;
  v5 = v21;
  v19 = 0LL;
  v6 = *((_QWORD *)this + 27);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
  ApplicationViewUniqueId = v7(v6, v5, &v19);
  v9 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v18 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v19, &v18);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1765LL;
      goto LABEL_16;
    }
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                                v24,
                                v11);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1767LL;
      goto LABEL_16;
    }
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
LABEL_9:
    v24 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(
                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                v24,
                v12,
                &v22) >= 0 )
    {
      v13 = v22;
      v19 = 0LL;
      v14 = *((_QWORD *)this + 27);
      v15 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v14 + 48LL);
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
      ApplicationViewUniqueId = v15(v14, v13, &v19);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1776LL;
        goto LABEL_16;
      }
      v18 = 0;
      ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v19, &v18);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1779LL;
        goto LABEL_16;
      }
      v24 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
      ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v20,
                                  v24,
                                  v16);
      v9 = ApplicationViewUniqueId;
      if ( ApplicationViewUniqueId < 0 )
      {
        v10 = 1781LL;
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
    }
    v9 = 0;
    goto LABEL_19;
  }
  v10 = 1762LL;
LABEL_16:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)ApplicationViewUniqueId);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v19);
LABEL_19:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v20);
  return v9;
}
