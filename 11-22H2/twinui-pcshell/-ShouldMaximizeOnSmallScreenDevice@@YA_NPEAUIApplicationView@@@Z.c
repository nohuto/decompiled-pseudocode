/*
 * XREFs of ?ShouldMaximizeOnSmallScreenDevice@@YA_NPEAUIApplicationView@@@Z @ 0x1805B4A68
 * Callers:
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x18003A5F8 (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@U?$IVectorView@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Collections@Foundation@Windows@winrt@@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@5@@impl@winrt@@QEBA@I@Z @ 0x18004CE68 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@U-$IVectorView@UAppExtension@AppExte.c)
 *     ?FindAll@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x18004CEC8 (-FindAll@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtension.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800918B8 (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ??1?$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180098014 (--1-$com_ptr_t@UIAppStateManager@AppLimits@FamilySafety@Internal@Windows@@Uerr_exception_policy@.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119080 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapOnShow@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@Z @ 0x18045AAE8 (--$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 */

// Hidden C++ exception states: #wind=10
bool __fastcall ShouldMaximizeOnSmallScreenDevice(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  const char *v5; // r9
  __int64 (__fastcall **v6)(ApplicationViewHelpers *, GUID *, __int64); // rax
  struct IApplicationView *v7; // rdx
  __int64 v8; // rax
  bool v9; // si
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rcx
  int v11; // r14d
  int v12; // r14d
  unsigned int v13; // r12d
  __int64 v14; // rbx
  signed int v15; // eax
  __int64 (__fastcall *v16)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  winrt::hstring *v17; // rax
  const unsigned __int16 *v18; // rax
  char v19; // di
  HWND WindowForView; // rax
  __int64 v22; // [rsp+20h] [rbp-49h] BYREF
  __int64 v23; // [rsp+28h] [rbp-41h] BYREF
  int (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-39h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-31h] BYREF
  volatile signed __int32 *v26; // [rsp+40h] [rbp-29h] BYREF
  _QWORD *v27[3]; // [rsp+48h] [rbp-21h] BYREF
  _QWORD v28[12]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned int v30; // [rsp+D8h] [rbp+6Fh] BYREF
  int v31; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v32; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( !this )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapOnShow>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_SnapOnShow>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x61,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      v5);
  }
  v6 = *this;
  v25 = 0LL;
  if ( (int)(*v6)((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, (__int64)&v25) < 0 )
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, v7);
    v9 = GetPropW(WindowForView, L"DontMaximizeOnSmallScreen") != HANDLE_FLAG_INHERIT;
    goto LABEL_32;
  }
  v24 = 0LL;
  v8 = *v25;
  v24 = 0LL;
  if ( (*(int (__fastcall **)(__int64 *, int (__fastcall ****)(_QWORD, GUID *, __int64 *)))(v8 + 24))(v25, &v24) < 0 )
    goto LABEL_10;
  v32 = 0LL;
  if ( (**v24)(v24, &GUID_b00297dd_eb90_48c8_99c0_f0b2d68213d3, &v32) < 0
    || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v32 + 56LL))(v32, &v31) < 0
    || !v31 )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
LABEL_10:
    v9 = 1;
    v30 = 1;
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v28,
      L"com.microsoft.windows.dontmaximizeonsmallscreen",
      47);
    v27[0] = v28;
    v27[1] = &v30;
    v27[2] = &qword_18098E268;
    _InterlockedAdd64(&qword_18098E268, 1uLL);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::FindAll(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v23,
        v28,
        &v30);
      _InterlockedDecrement64(&qword_18098E268);
      v11 = 12;
    }
    else
    {
      _InterlockedDecrement64(&qword_18098E268);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6efd2761bda3320a8aa70aa0ac08757d_ &>(
        v10,
        &v23,
        v27);
      v11 = 4;
    }
    v12 = v11 | 2;
    v13 = 0;
    v31 = 0;
    v14 = v23;
    v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 56LL))(v23, &v31);
    if ( v15 < 0 )
      winrt::throw_hresult(v15);
    while ( v13 != v31 )
    {
      winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Foundation::Collections::IVectorView<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>,winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension>::GetAt(
        &v23,
        &v22,
        v13);
      LODWORD(v32) = 0;
      v16 = (*this)[19];
      v17 = (winrt::hstring *)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
                                &v22,
                                &v26);
      v12 |= 0x21u;
      v18 = winrt::hstring::c_str(v17);
      if ( (int)v16((ApplicationViewHelpers *)this, (GUID *)v18, (__int64)&v32) < 0 || (v19 = 1, !(_DWORD)v32) )
        v19 = 0;
      if ( (v12 & 1) != 0 )
      {
        v12 &= ~1u;
        winrt::handle_type<winrt::impl::hstring_traits>::close(&v26);
      }
      if ( v19 )
      {
        if ( v22 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
        v9 = 0;
        break;
      }
      if ( v22 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
      ++v13;
    }
    if ( v14 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v23);
    goto LABEL_30;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v32);
  v9 = 0;
LABEL_30:
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v24);
LABEL_32:
  wil::com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::FamilySafety::AppLimits::IAppStateManager,wil::err_exception_policy>((__int64 *)&v25);
  return v9;
}
