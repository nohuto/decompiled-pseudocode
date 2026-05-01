/*
 * XREFs of ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x180066EF4
 * Callers:
 *     ?Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4AppExtensionOptions@2345@@Z @ 0x1800F5080 (-Find@AppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@SA@AEBUhstring@param@5@AEBW4.c)
 *     ?GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x1800F5200 (-GetSearchAppAUMID@CUndockedSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ?GetSearchAppAUMID@CUndockedMiniSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x180171B80 (-GetSearchAppAUMID@CUndockedMiniSearchAppExperienceManagerConfig@@UEAA-AUhstring@winrt@@XZ.c)
 *     ?TryGetCortanaAumid@CortanaExperienceHelpers@@YA?AUhstring@winrt@@XZ @ 0x18038862C (-TryGetCortanaAumid@CortanaExperienceHelpers@@YA-AUhstring@winrt@@XZ.c)
 * Callees:
 *     ??$get_activation_factory@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@winrt@@YA?AUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@0@AEBUhstring@param@0@@Z @ 0x180067750 (--$get_activation_factory@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@AEBW4AppExtensionOptions@5673@@Z @ 0x1800F5304 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionSta.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ @ 0x1800F70DC (-unconditional_release_ref@-$com_ptr@UIGlobalInterfaceTable@impl@winrt@@@winrt@@AEAAXXZ.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18018F6EB (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
        void (__fastcall ***a1)(_QWORD, __int64 *, __int64 *),
        __int64 a2,
        _QWORD *a3)
{
  void (__fastcall ***v5)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 v6; // rax
  char v7; // r14
  bool v8; // zf
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // [rsp+70h] [rbp+20h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF

  v12 = a1;
  winrt::param::hstring::create_string_reference(
    (winrt::param::hstring *)v11,
    L"WindowsUdk.ApplicationModel.AppExtensions.AppExtension",
    0x36uLL);
  winrt::get_activation_factory<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>(&v12, v11);
  v5 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v12;
  if ( v12 )
  {
    v13 = 0LL;
    (**v12)(v12, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v13);
    v6 = v13;
    v10[0] = v13;
    if ( v13 )
    {
      v7 = 1;
      goto LABEL_4;
    }
  }
  else
  {
    v6 = 0LL;
    v10[0] = 0LL;
  }
  v7 = 0;
LABEL_4:
  if ( v6 )
    winrt::com_ptr<winrt::impl::IGlobalInterfaceTable>::unconditional_release_ref(v10);
  if ( v7 )
  {
    v10[1] = &qword_1807B40F8;
    _InterlockedIncrement64(&qword_1807B40F8);
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
            (signed __int64)v12,
            0LL) )
    {
      v12 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1807B4100);
    }
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      a2,
      *a3,
      a3[1],
      v10[0]);
    _InterlockedDecrement64(&qword_1807B40F8);
    v8 = v12 == 0LL;
  }
  else
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &v12,
      a2,
      *a3,
      a3[1],
      v10[0]);
    v8 = v5 == 0LL;
  }
  if ( !v8 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  return a2;
}
