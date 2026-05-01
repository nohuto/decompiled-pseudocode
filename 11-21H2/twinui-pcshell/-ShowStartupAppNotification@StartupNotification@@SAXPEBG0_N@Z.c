/*
 * XREFs of ?ShowStartupAppNotification@StartupNotification@@SAXPEBG0_N@Z @ 0x180586ECC
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x180580BC0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180066424 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x180067B6C (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x18033DA10 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?InitializeResMessage@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEAUHINSTANCE__@@HZZ @ 0x18053BFC4 (-InitializeResMessage@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@Q.c)
 *     ??$as@UXmlElement@Dom@Xml@Data@Windows@winrt@@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@6@$0A@@impl@winrt@@YA?AUXmlElement@Dom@Xml@Data@Windows@1@PEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@01@@Z @ 0x180583048 (--$as@UXmlElement@Dom@Xml@Data@Windows@winrt@@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@.c)
 *     ??$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUXmlDocument@Dom@Xml@Data@Windows@2@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@Z @ 0x1805830B0 (--$call@AEAV_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_@@@-$factory_cache_entry@UToastNotification.c)
 *     ??$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@?$factory_cache_entry@UToastNotificationManager@Notifications@UI@Windows@winrt@@UIToastNotificationManagerStatics@2345@@impl@winrt@@QEAA?AUToastNotifier@Notifications@UI@Windows@2@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@Z @ 0x18058320C (--$call@AEAV_lambda_9963adada1db90a1e471b6d32fa55098_@@@-$factory_cache_entry@UToastNotification.c)
 *     ??$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@?$factory_cache_entry@UToastNotification@Notifications@UI@Windows@winrt@@UIToastNotificationFactory@2345@@impl@winrt@@QEAA?AUToastNotification@Notifications@UI@Windows@2@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@Z @ 0x180583368 (--$call@AEAV_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_@@@-$factory_cache_entry@UToastNotification.c)
 *     ?CreateToastNotification@?$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNotificationFactory@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotification@Notifications@UI@Windows@3@AEBUXmlDocument@Dom@Xml@Data@73@@Z @ 0x1805861A0 (-CreateToastNotification@-$consume_Windows_UI_Notifications_IToastNotificationFactory@UIToastNot.c)
 *     ?CreateToastNotifier@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUToastNotifier@Notifications@UI@Windows@3@AEBUhstring@param@3@@Z @ 0x1805861F8 (-CreateToastNotifier@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToast.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVectorView@UIXmlNodeList@Dom@Xml@Data@Windows@winrt@@UIXmlNode@23456@@impl@winrt@@QEBA?AUIXmlNode@Dom@Xml@Data@Windows@3@I@Z @ 0x180586250 (-GetAt@-$consume_Windows_Foundation_Collections_IVectorView@UIXmlNodeList@Dom@Xml@Data@Windows@w.c)
 *     ?GetElementsByTagName@?$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUXmlNodeList@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180586348 (-GetElementsByTagName@-$consume_Windows_Data_Xml_Dom_IXmlDocument@UIXmlDocument@Dom@Xml@Data@Win.c)
 *     ?GetTemplateContent@?$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastNotificationManagerStatics@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBA?AUXmlDocument@Dom@Xml@Data@Windows@3@AEBW4ToastTemplateType@Notifications@UI@83@@Z @ 0x180586904 (-GetTemplateContent@-$consume_Windows_UI_Notifications_IToastNotificationManagerStatics@UIToastN.c)
 *     ?Group@?$consume_Windows_UI_Notifications_IToastNotification2@UToastNotification@Notifications@UI@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@@Z @ 0x18058695C (-Group@-$consume_Windows_UI_Notifications_IToastNotification2@UToastNotification@Notifications@U.c)
 *     ?InnerText@?$consume_Windows_Data_Xml_Dom_IXmlNodeSerializer@UIXmlNode@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@@Z @ 0x180586A3C (-InnerText@-$consume_Windows_Data_Xml_Dom_IXmlNodeSerializer@UIXmlNode@Dom@Xml@Data@Windows@winr.c)
 *     ?SelectSingleNode@?$consume_Windows_Data_Xml_Dom_IXmlNodeSelector@UIXmlDocument@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBA?AUIXmlNode@Dom@Xml@Data@Windows@3@AEBUhstring@param@3@@Z @ 0x180586DE0 (-SelectSingleNode@-$consume_Windows_Data_Xml_Dom_IXmlNodeSelector@UIXmlDocument@Dom@Xml@Data@Win.c)
 *     ?SetAttribute@?$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt@@@impl@winrt@@QEBAXAEBUhstring@param@3@0@Z @ 0x180586E90 (-SetAttribute@-$consume_Windows_Data_Xml_Dom_IXmlElement@UIXmlElement@Dom@Xml@Data@Windows@winrt.c)
 */

// Hidden C++ exception states: #wind=13
void __fastcall StartupNotification::ShowStartupAppNotification(
        unsigned __int16 *a1,
        const unsigned __int16 *a2,
        char a3,
        __int64 a4)
{
  __int64 v6; // rbx
  int v7; // eax
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r8
  void (__fastcall ***v11)(_QWORD, __int64 *, __int64 *); // rcx
  void (__fastcall ***v12)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v13; // rbx
  signed int v14; // eax
  int v15; // [rsp+20h] [rbp-E0h]
  __int64 v16; // [rsp+30h] [rbp-D0h] BYREF
  void (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+38h] [rbp-C8h] BYREF
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int64 (__fastcall ***v22)(_QWORD, void *, __int64 *); // [rsp+60h] [rbp-A0h] BYREF
  unsigned int *v23; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 *v25; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int16 *v26[3]; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 *v27[6]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v28[4]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v29[4]; // [rsp+E8h] [rbp-18h] BYREF
  _QWORD v30[4]; // [rsp+108h] [rbp+8h] BYREF
  _QWORD v31[4]; // [rsp+128h] [rbp+28h] BYREF
  _QWORD v32[4]; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v33[4]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v34[4]; // [rsp+188h] [rbp+88h] BYREF
  _QWORD v35[4]; // [rsp+1A8h] [rbp+A8h] BYREF
  _QWORD v36[4]; // [rsp+1C8h] [rbp+C8h] BYREF
  _QWORD v37[9]; // [rsp+1E8h] [rbp+E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]
  unsigned int v39; // [rsp+250h] [rbp+150h] BYREF
  __int64 v40; // [rsp+258h] [rbp+158h] BYREF

  LOBYTE(v39) = a3;
  if ( (unsigned int)dword_1807ABFF8 > 5 )
  {
    v16 = (__int64)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
      (int)&dword_1807ABFF8,
      (int)&dword_1806C8860,
      0,
      a4,
      (const WCHAR **)&v16);
  }
  v39 = 5;
  v23 = &v39;
  v27[3] = (unsigned __int16 *)&qword_1807B6C98;
  _InterlockedIncrement64(&qword_1807B6C98);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::GetTemplateContent(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>,
      &v40,
      &v39);
    v6 = -1LL;
    _InterlockedAdd64(&qword_1807B6C98, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    v6 = -1LL;
    _InterlockedAdd64(&qword_1807B6C98, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_0d9de8a1e187476e1ef9a6d5ee55fe59_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)&v40,
      &v23);
  }
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v29, L"/toast", 6LL);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSelector<winrt::Windows::Data::Xml::Dom::IXmlDocument>::SelectSingleNode(
    &v40,
    &v22,
    v29);
  winrt::impl::as<winrt::Windows::Data::Xml::Dom::XmlElement,winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type,0>(
    &v18,
    v22);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v30, L"ms-settings:startupapps", 23LL);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v31, L"launch", 6LL);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v18,
    v31,
    v30);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v32, L"protocol", 8LL);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v33, L"activationType", 14LL);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlElement<winrt::Windows::Data::Xml::Dom::IXmlElement>::SetAttribute(
    &v18,
    v33,
    v32);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v34, L"text", 4LL);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlDocument<winrt::Windows::Data::Xml::Dom::IXmlDocument>::GetElementsByTagName(
    &v40,
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
  v7 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
         (__int64)v27,
         &_ImageBase,
         2202LL,
         a1);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3D,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)(unsigned int)v7,
      v15);
  v8 = Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeResMessage(
         (__int64)v26,
         &_ImageBase,
         2203LL);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (int)"pcshell\\twinui\\startupappmonitor\\lib\\startupnotification.cpp",
      (const char *)(unsigned int)v8,
      v15);
  v9 = -1LL;
  do
    ++v9;
  while ( v27[0][v9] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v35, v27[0], v9);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<winrt::Windows::Data::Xml::Dom::IXmlNode>::InnerText(
    &v21,
    v35);
  v10 = -1LL;
  do
    ++v10;
  while ( v26[0][v10] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v36, v26[0], v10);
  winrt::impl::consume_Windows_Data_Xml_Dom_IXmlNodeSerializer<winrt::Windows::Data::Xml::Dom::IXmlNode>::InnerText(
    &v20,
    v36);
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v28, L"Windows.SystemToast.StartupApp", 30LL);
  v24 = v28;
  v27[4] = (unsigned __int16 *)&qword_1807B6C98;
  _InterlockedIncrement64(&qword_1807B6C98);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationManagerStatics<winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::CreateToastNotifier(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>,
      &v19,
      v28);
    _InterlockedAdd64(&qword_1807B6C98, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAdd64(&qword_1807B6C98, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotificationManager,winrt::Windows::UI::Notifications::IToastNotificationManagerStatics>::call<_lambda_9963adada1db90a1e471b6d32fa55098_ &>(
      v11,
      (__int64)&v19,
      &v24);
  }
  v25 = &v40;
  v27[5] = (unsigned __int16 *)&qword_1807B6CB8;
  _InterlockedIncrement64(&qword_1807B6CB8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory> )
  {
    winrt::impl::consume_Windows_UI_Notifications_IToastNotificationFactory<winrt::Windows::UI::Notifications::IToastNotificationFactory>::CreateToastNotification(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>,
      &v16,
      &v40);
    _InterlockedAdd64(&qword_1807B6CB8, 0xFFFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAdd64(&qword_1807B6CB8, 0xFFFFFFFFFFFFFFFFuLL);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Notifications::ToastNotification,winrt::Windows::UI::Notifications::IToastNotificationFactory>::call<_lambda_e7825ad3ff420bc6a1e9d59d2abf4009_ &>(
      v12,
      (__int64)&v16,
      &v25);
  }
  do
    ++v6;
  while ( a2[v6] );
  winrt::param::hstring::create_string_reference((winrt::param::hstring *)v37, a2, v6);
  winrt::impl::consume_Windows_UI_Notifications_IToastNotification2<winrt::Windows::UI::Notifications::ToastNotification>::Group(
    &v16,
    v37);
  v13 = v16;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48LL))(v19, v16);
  if ( v14 < 0 )
    winrt::throw_hresult(v14);
  if ( v13 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
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
  if ( v40 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v40);
}
