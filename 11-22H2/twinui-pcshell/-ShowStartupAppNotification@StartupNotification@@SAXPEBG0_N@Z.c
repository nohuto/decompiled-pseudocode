/*
 * XREFs of ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180644CB0
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x18063FC30 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800B49D8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x1805F6D50 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ??$as@UXmlElement@Dom@Xml@Data@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUXmlElement@Dom@Xml@Data@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x1806417CC (--$as@UXmlElement@Dom@Xml@Data@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@.c)
 *     ??$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@Z @ 0x180641834 (--$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@-$factory_cache_entry@UToastNotification.c)
 *     ??$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@Z @ 0x18064196C (--$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@-$factory_cache_entry@UToastNotification.c)
 *     ??$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@Z @ 0x180641AA4 (--$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?CreateToastNotification@?$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUXmlDocument@Dom@Xml@Data@Windows@3@@Z @ 0x180643E94 (-CreateToastNotification@-$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNot.c)
 *     ?CreateToastNotifier@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180643EEC (-CreateToastNotifier@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToast.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@UIXmlNodeList@Dom@Xml@Data@Windows@winrt@@UIXmlNode@23456@@impl@winrt@@QEBA@I@Z @ 0x180643FC4 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@UIXmlNodeList@Dom@Xml@Data@Windows@w.c)
 *     ?GetElementsByTagName@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806440C4 (-GetElementsByTagName@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Win.c)
 *     ?GetTemplateContent@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBW4ToastTemplateType@Notifications@UI@Windows@3@@Z @ 0x18064466C (-GetTemplateContent@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastN.c)
 *     ?Group@?$consume_Windows_UI_Notifications_IToastNotification2@UToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806446C4 (-Group@-$consume_Windows_UI_Notifications_IToastNotification2@UToastNotification@Notifications@U.c)
 *     ?InnerText@?$consume_Windows_Data_Xml_Dom_IXmlNodeSerializer@UIXmlNode@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1806447BC (-InnerText@-$consume_Windows_Data_Xml_Dom_IXmlNodeSerializer@UIXmlNode@Dom@Xml@Data@Windows@winr.c)
 *     ?SelectSingleNode@?$consume_Windows_Data_Xml_Dom_IXmlNodeSelector@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x180644B80 (-SelectSingleNode@-$consume_Windows_Data_Xml_Dom_IXmlNodeSelector@UIXmlDocument@Dom@Xml@Data@Win.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@0@Z @ 0x180644C38 (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18074BCA8 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall StartupNotification::ShowStartupAppNotification(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        char a3)
{
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v6; // r9
  __int64 v7; // rbx
  int v8; // eax
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r8
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v13)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v14; // rbx
  signed int v15; // eax
  int v16; // [rsp+20h] [rbp-E0h]
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, void *, __int64 *); // [rsp+58h] [rbp-A8h] BYREF
  unsigned int *v23; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v24; // [rsp+68h] [rbp-98h] BYREF
  __int64 *v25; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 *v26[3]; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v27[6]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v28[4]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v29[4]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v30[4]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v31[4]; // [rsp+120h] [rbp+20h] BYREF
  _QWORD v32[4]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v33[4]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v34[4]; // [rsp+180h] [rbp+80h] BYREF
  _QWORD v35[4]; // [rsp+1A0h] [rbp+A0h] BYREF
  _QWORD v36[4]; // [rsp+1C0h] [rbp+C0h] BYREF
  _QWORD v37[8]; // [rsp+1E0h] [rbp+E0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+228h] [rbp+128h]
  __int64 v39; // [rsp+230h] [rbp+130h] BYREF
  unsigned int v40; // [rsp+240h] [rbp+140h] BYREF
  __int64 v41; // [rsp+248h] [rbp+148h] BYREF

  LOBYTE(v40) = a3;
  if ( !a1 || !(unsigned int)_o__wcsicmp(a1, &LocaleName) )
    MicrosoftTelemetryAssertTriggeredNoArgs();
  if ( (unsigned int)dword_180986E18 > 5 )
  {
    v41 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)&dword_180986E18,
      (int)&dword_180870DF6,
      0,
      v6,
      (const WCHAR **)&v41);
  }
  v40 = 5;
  v23 = &v40;
  v27[3] = (unsigned __int16 *)&qword_180991DC8;
  _InterlockedIncrement64(&qword_180991DC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::GetTemplateContent(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>,
      &v39,
      &v40);
    v7 = -1LL;
    _InterlockedAdd64(&qword_180991DC8, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v7 = -1LL;
    _InterlockedAdd64(&qword_180991DC8, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_ &>(
      v5,
      (__int64)&v39,
      &v23);
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v29, L"/toast", 6);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSelector<winrt::Windows::Data::Xml::Dom::IXmlDocument>::SelectSingleNode(
    &v39,
    &v22,
    v29);
  winrt::impl::as<winrt::Windows::Data::Xml::Dom::XmlElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    v22);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v30, L"ms-settings:startupapps", 23);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v31, L"launch", 6);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v18,
    v31,
    v30);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v32, L"protocol", 8);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v33, L"activationType", 14);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v18,
    v33,
    v32);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v34, L"text", 4);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::GetElementsByTagName(
    &v39,
    &v17,
    v34);
  winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Data::Xml::Dom::IXmlNodeList,winrt::Windows::Data::Xml::Dom::IXmlNode>::GetAt(
    &v17,
    (winrt::Windows::Foundation::IUnknown *)&v21,
    0);
  memset(v27, 0, 24);
  winrt::impl::consume_Windows_Foundation_Collections_IVectorView<winrt::Windows::Data::Xml::Dom::IXmlNodeList,winrt::Windows::Data::Xml::Dom::IXmlNode>::GetAt(
    &v17,
    (winrt::Windows::Foundation::IUnknown *)&v20,
    1u);
  memset(v26, 0, sizeof(v26));
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
         (__int64)v27,
         &_ImageBase,
         2202LL,
         a1);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3F,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)(unsigned int)v8,
      v16);
  v9 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
         (__int64)v26,
         &_ImageBase,
         2203LL);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x40,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)(unsigned int)v9,
      v16);
  v10 = -1LL;
  do
    ++v10;
  while ( v27[0][v10] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v35, v27[0], v10);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<winrt::Windows::Data::Xml::Dom::IXmlNode>::InnerText(
    &v21,
    v35);
  v11 = -1LL;
  do
    ++v11;
  while ( v26[0][v11] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v36, v26[0], v11);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<winrt::Windows::Data::Xml::Dom::IXmlNode>::InnerText(
    &v20,
    v36);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v28, L"Windows.SystemToast.StartupApp", 30);
  v24 = v28;
  v27[4] = (unsigned __int16 *)&qword_180991DC8;
  _InterlockedIncrement64(&qword_180991DC8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>,
      &v19,
      v28);
    _InterlockedAdd64(&qword_180991DC8, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAdd64(&qword_180991DC8, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_9963adada1db90a1e471b6d32fa55098_ &>(
      v12,
      (__int64)&v19,
      &v24);
  }
  v25 = &v39;
  v27[5] = (unsigned __int16 *)&qword_180991DA8;
  _InterlockedIncrement64(&qword_180991DA8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>,
      &v41,
      &v39);
    _InterlockedAdd64(&qword_180991DA8, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAdd64(&qword_180991DA8, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>::call<_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_ &>(
      v13,
      (__int64)&v41,
      &v25);
  }
  do
    ++v7;
  while ( a2[v7] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v37, a2, v7);
  winrt::impl::consume_Windows_UI_Notifications_IToastNotification2<winrt::Windows::UI::Notifications::ToastNotification>::Group(
    &v41,
    v37);
  v14 = v41;
  v15 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v41);
  if ( v15 < 0 )
    winrt::throw_hresult(v15);
  if ( v14 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v41);
  winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v19);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v26);
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v27);
  if ( v21 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  if ( v22 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v22);
  if ( v39 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v39);
}
