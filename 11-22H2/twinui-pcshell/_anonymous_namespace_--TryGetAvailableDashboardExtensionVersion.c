/*
 * XREFs of _anonymous_namespace_::TryGetAvailableDashboardExtensionVersion @ 0x1800B6A10
 * Callers:
 *     ?ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4DashboardInvokeType@Dashboard@3UI@WindowsUdk@6@URect@Foundation@56@@Z @ 0x18005A0D0 (-ToggleDashboardVisibility@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXW4.c)
 *     ?IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NXZ @ 0x180061910 (-IsDashboardExtensionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NX.c)
 *     _lambda_5ac696817d9ead6e33159563da3f5a7c_::operator() @ 0x1802364C4 (_lambda_5ac696817d9ead6e33159563da3f5a7c_--operator().c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::DismissDashboardAsync$_ResumeCoro$1 @ 0x1802389D0 (winrt--Windows--Internal--Shell--implementation--DashboardManager--DismissDashboardAsync$_Resume.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::ShowDashboardAsync$_ResumeCoro$1 @ 0x180242E90 (winrt--Windows--Internal--Shell--implementation--DashboardManager--ShowDashboardAsync$_ResumeCor.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x180245F00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_180245F00.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::VerifyAndActivateAppAsync$_ResumeCoro$1 @ 0x180246660 (winrt--Windows--Internal--Shell--implementation--DashboardManager--VerifyAndActivateAppAsync$_Re.c)
 *     ?IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt@@CA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180697178 (-IsDashboardExtensionVersionPresent@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     ?TryLookup@?$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Windows@winrt@@Uhstring@5@UIInspectable@345@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x18009330C (-TryLookup@-$consume_Windows_Foundation_Collections_IMap@UIPropertySet@Collections@Foundation@Wi.c)
 *     _anonymous_namespace_::TryGetTextFromProperty @ 0x180093414 (_anonymous_namespace_--TryGetTextFromProperty.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x180093C8C (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAp_ea_180093C8C.c)
 *     _anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion @ 0x180096FA8 (_anonymous_namespace_--DashboardExtensionVersion--DashboardExtensionVersion.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?get@?$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@P6AXXZ@Z @ 0x1800B24C4 (-get@-$static_lazy@VDashboardManagerTelemetry@@@details@wil@@QEAAPEAVDashboardManagerTelemetry@@.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?ExtensionProperties@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800B4B90 (-ExtensionProperties@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExte.c)
 *     ?c_str@hstring@winrt@@QEBAPEBGXZ @ 0x1800B6CE4 (-c_str@hstring@winrt@@QEBAPEBGXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x180133DCC (--$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x1801C5F74 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall anonymous_namespace_::TryGetAvailableDashboardExtensionVersion(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  void (__fastcall ***v4)(_QWORD, void *, _QWORD); // rcx
  void (__fastcall ***v5)(_QWORD, void *, _QWORD *); // rbx
  void (__fastcall ***v6)(_QWORD, void *, _QWORD *); // r14
  void (__fastcall ***v7)(_QWORD, void *, _QWORD *); // rsi
  void (__fastcall ***v8)(_QWORD, void *, _QWORD *); // r15
  const unsigned __int16 *v9; // r14
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  __int64 v12; // r9
  unsigned __int16 *v13; // rax
  __int64 *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned int v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v23[8]; // [rsp+48h] [rbp-B8h] BYREF
  void (__fastcall ***v24)(_QWORD, void *, _QWORD *); // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v25)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  void (__fastcall ***v26)(_QWORD, void *, _QWORD *); // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v27[3]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v28[3]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v30[4]; // [rsp+C0h] [rbp-40h] BYREF
  void *v31[4]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v32[3]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v33[32]; // [rsp+118h] [rbp+18h] BYREF

  v27[0] = a1;
  v20 = 8;
  v29[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)v27, L"com.microsoft.windows.extension.dashboard");
  v28[0] = v29;
  v28[1] = &v20;
  v28[2] = &qword_18098E268;
  _InterlockedIncrement64(&qword_18098E268);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v21,
      v29,
      &v20);
    _InterlockedDecrement64(&qword_18098E268);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E268);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
      v2,
      &v21,
      v28);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(v27);
  v3 = v21;
  if ( v21
    && (winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ExtensionProperties(
          &v21,
          &v25),
        v25) )
  {
    winrt::param::hstring::create_string_reference((winrt::param::hstring *)v30, L"Version", 7);
    v4 = *(void (__fastcall ****)(_QWORD, void *, _QWORD))winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Foundation::Collections::IPropertySet,winrt::hstring,winrt::Windows::Foundation::IInspectable>::TryLookup(
                                                            &v25,
                                                            (winrt::Windows::Foundation::IUnknown *)&v22,
                                                            v30);
    if ( v4 )
    {
      v26 = 0LL;
      (**v4)(v4, &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IPropertySet>, &v26);
      v5 = v26;
      v24 = v26;
      v6 = v26;
      v7 = v26;
      v8 = v26;
    }
    else
    {
      v24 = 0LL;
      v5 = 0LL;
      v6 = 0LL;
      v7 = 0LL;
      v8 = 0LL;
    }
    if ( v22 )
    {
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
      v5 = v6;
      v7 = v8;
    }
    anonymous_namespace_::TryGetTextFromProperty((winrt::hstring *)v23, &v24);
    v9 = winrt::hstring::c_str((winrt::hstring *)v23);
    v11 = (_DWORD *)wil::details::static_lazy<DashboardManagerTelemetry>::get(
                      v10,
                      (void (__cdecl *)())_lambda_938f0666c6fda9bf7acb6191ba7f32b7_::_lambda_invoker_cdecl_)[1];
    if ( *v11 > 5u )
    {
      v22 = (__int64)v9;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        (int)v11,
        (int)&dword_180875FE1,
        0,
        v12,
        (const WCHAR **)&v22);
      v5 = v7;
    }
    v13 = (unsigned __int16 *)winrt::hstring::c_str((winrt::hstring *)v23);
    std::wstring::wstring(v31, v13);
    v14 = anonymous_namespace_::DashboardExtensionVersion::DashboardExtensionVersion(v32, v31);
    v15 = v14[2];
    v14[2] = 0LL;
    v16 = v14[1];
    v14[1] = 0LL;
    v17 = *v14;
    *v14 = 0LL;
    *(_QWORD *)a1 = v17;
    *(_QWORD *)(a1 + 8) = v16;
    *(_QWORD *)(a1 + 16) = v15;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(v14 + 3);
    *(_OWORD *)(a1 + 40) = *(_OWORD *)(v14 + 5);
    v14[5] = 0LL;
    v14[6] = 7LL;
    *((_WORD *)v14 + 12) = 0;
    *(_BYTE *)(a1 + 56) = 1;
    std::wstring::_Tidy_deallocate(v33, v15);
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy(v32);
    std::wstring::_Tidy_deallocate(v31, v18);
    winrt::handle_type<winrt::impl::hstring_traits>::close(v23);
    if ( v5 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v24);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v25);
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  }
  else
  {
    if ( v3 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    *(_BYTE *)(a1 + 56) = 0;
  }
  return a1;
}
