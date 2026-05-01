/*
 * XREFs of ?GetInputAppId@TouchKeyboardExperienceManager@@CA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18045E7CC
 * Callers:
 *     _lambda_3f7c4ca579c2955647d5fca56c9af8c5_::operator() @ 0x1801AF8E8 (_lambda_3f7c4ca579c2955647d5fca56c9af8c5_--operator().c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F718C (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@@Z @ 0x1800FBBE8 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAp_ea_1800FBBE8.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18010AACC (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ??$assign@Uhstring@winrt@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBUhstring@winrt@@@Z @ 0x180329DD4 (--$assign@Uhstring@winrt@@$0A@@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA.c)
 *     ??$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@Z @ 0x180380FE0 (--$call@AEAV_lambda_e84bcefeb7ed3703767eef0b25e91c21_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ??$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY07$$CBG@Z @ 0x180457D94 (--$InputAppIdInitialized@PEBGAEAY07$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 *     ??$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEAY08$$CBG@Z @ 0x180457E20 (--$InputAppIdInitialized@PEBGAEAY08$$CBG@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAPEBGAEA.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall TouchKeyboardExperienceManager::GetInputAppId(_QWORD *a1)
{
  unsigned __int64 v2; // rax
  _QWORD *v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  volatile signed __int32 *v10; // rax
  _QWORD *v12; // [rsp+48h] [rbp-B8h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v14; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v15[3]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v16[5]; // [rsp+78h] [rbp-88h] BYREF
  _WORD pvData[264]; // [rsp+A0h] [rbp-60h] BYREF

  v15[1] = a1;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  memset_0(pvData, 0, 0x208uLL);
  pcbData = 520;
  if ( RegGetValueW(HKEY_LOCAL_MACHINE, L"Software\\Microsoft\\Input", L"InputAppId", 2u, 0LL, pvData, &pcbData)
    || pcbData <= 2 )
  {
    winrt::param::hstring::create_string_reference(
      (winrt::param::hstring *)v16,
      L"com.microsoft.windows.input.app",
      31LL);
    v15[0] = v16;
    v15[2] = &qword_1807B40F8;
    _InterlockedIncrement64(&qword_1807B40F8);
    if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
    {
      winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
        &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
        &v12,
        v16);
      _InterlockedAdd64(&qword_1807B40F8, 0xFFFFFFFFFFFFFFFFuLL);
    }
    else
    {
      _InterlockedAdd64(&qword_1807B40F8, 0xFFFFFFFFFFFFFFFFuLL);
      winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_e84bcefeb7ed3703767eef0b25e91c21_ &>(
        v4,
        &v12,
        v15);
    }
    if ( v12 )
    {
      v5 = winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
             (__int64 *)&v12,
             &v14);
      std::wstring::assign<winrt::hstring,0>((__int64)a1, v5);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v14, v6, v7, v8);
      v10 = (volatile signed __int32 *)a1;
      if ( a1[3] >= 8uLL )
        v10 = (volatile signed __int32 *)*a1;
      v14 = v10;
      TouchKeyboardExperienceTelemetryLogger::InputAppIdInitialized<unsigned short const *,unsigned short const (&)[8]>(
        (__int64 *)&v14,
        v9);
    }
    if ( v12 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  }
  else
  {
    v2 = -1LL;
    do
      ++v2;
    while ( pvData[v2] );
    std::wstring::assign((char *)a1, pvData, v2);
    v3 = a1;
    if ( a1[3] >= 8uLL )
      v3 = (_QWORD *)*a1;
    v12 = v3;
    TouchKeyboardExperienceTelemetryLogger::InputAppIdInitialized<unsigned short const *,unsigned short const (&)[9]>(
      (__int64 *)&v12,
      (__int64)L"Registry");
  }
  return a1;
}
