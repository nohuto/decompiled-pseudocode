/*
 * XREFs of ShouldAddEnterprisePinToOutput @ 0x1802883A8
 * Callers:
 *     GetPidlsFromTaskbarLayout @ 0x18017BD4C (GetPidlsFromTaskbarLayout.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18008610C (--1-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_constan.c)
 *     ??1?$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation@Windows@winrt@@QEAA@XZ @ 0x180092FD0 (--1-$AsyncOperationCompletedHandler@UTileCollection@StartScreen@UI@WindowsUdk@winrt@@@Foundation.c)
 *     ??0hstring@param@winrt@@QEAA@QEBG@Z @ 0x1800B3E54 (--0hstring@param@winrt@@QEAA@QEBG@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     ?reason_string@details@tip@@YAPEBDPEBD@Z @ 0x180171034 (-reason_string@details@tip@@YAPEBDPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA@XZ @ 0x180287684 (--1-$test_data_control@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@V.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data_basic@tip2@@@details@tip2@@@1@XZ @ 0x1802877C4 (--C-$tip_test@V-$merged_data@U_tip_TaskbarEnterprisePinTest_attributes@PinnedListTip@@Vtest_data.c)
 *     ?CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z @ 0x1802878A0 (-CreateNumberValue@JsonValue@Json@Data@Windows@winrt@@SA@N@Z.c)
 *     GetStoredEnterprisePinGeneration @ 0x180287CFC (GetStoredEnterprisePinGeneration.c)
 *     ?get_or_add_flag_under_lock@?$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z @ 0x18028909C (-get_or_add_flag_under_lock@-$shared_data@$0A@$0A@$00@details@tip2@@AEAAPEAUtest_flag@3@GPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ @ 0x1803E2CF4 (--0JsonObject@Json@Data@Windows@winrt@@QEAA@XZ.c)
 *     ??B?$require_one@UIJsonObject@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA?AUIJsonValue@Json@Data@Windows@2@XZ @ 0x1803E2F88 (--B-$require_one@UIJsonObject@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA-AUIJso.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x1803E333C (-Append@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJ.c)
 *     ?CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z @ 0x1803E3438 (-CreateStringValue@JsonValue@Json@Data@Windows@winrt@@SA@AEBUhstring@param@5@@Z.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x1803E3C0C (-Insert@-$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstr.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1803E4410 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 *     ?_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z @ 0x18075DB2C (-_GetAppIDFromIDList@@YAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@PEAPEAGPEAH@Z.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall ShouldAddEnterprisePinToOutput(
        __int64 a1,
        const struct _ITEMIDLIST **a2,
        struct IApplicationResolver *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        void *a7)
{
  double v7; // xmm0_8
  int v11; // edi
  int v12; // eax
  const char *v13; // rdx
  const char *v14; // rax
  __int64 v15; // r9
  void **v17; // rax
  int AppIDFromIDList; // eax
  __int64 StringValue; // rsi
  __int64 NumberValue; // rsi
  __int64 StoredEnterprisePinGeneration; // rax
  const char *v22; // rdx
  const char *v23; // rax
  __int64 v24; // r9
  const char *v25; // rdx
  const char *v26; // rax
  __int64 v27; // r9
  const char *v28; // rdx
  const char *v29; // rax
  __int64 v30; // r9
  void *v31[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v32[32]; // [rsp+30h] [rbp-98h] BYREF
  _BYTE v33[32]; // [rsp+50h] [rbp-78h] BYREF
  int v34; // [rsp+70h] [rbp-58h] BYREF
  _BYTE v35[8]; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int16 *v36; // [rsp+80h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]

  v31[1] = a7;
  v11 = -1;
  v34 = -1;
  v12 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a1 + 64LL))(a1, &v34);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x118,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)(unsigned int)v12,
      (int)v31[0]);
  if ( v34 >= 0 )
  {
    v36 = 0LL;
    v17 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put((void **)&v36);
    AppIDFromIDList = _GetAppIDFromIDList(a3, *a2, (unsigned __int16 **)v17, 0LL);
    if ( AppIDFromIDList < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x123,
        (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
        (const char *)(unsigned int)AppIDFromIDList,
        (int)v31[0]);
    winrt::Windows::Data::Json::JsonObject::JsonObject((winrt::Windows::Data::Json::JsonObject *)v35);
    winrt::param::hstring::hstring((winrt::param::hstring *)v33, v36);
    StringValue = winrt::Windows::Data::Json::JsonValue::CreateStringValue((const struct winrt::param::hstring *)v31);
    winrt::param::hstring::hstring((winrt::param::hstring *)v32, L"appId");
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
      v35,
      v32,
      StringValue);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v31);
    NumberValue = winrt::Windows::Data::Json::JsonValue::CreateNumberValue(v7, (double)v34);
    winrt::param::hstring::hstring((winrt::param::hstring *)v32, L"pinGeneration");
    winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
      v35,
      v32,
      NumberValue);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v31);
    winrt::impl::require_one<winrt::Windows::Data::Json::IJsonObject,winrt::Windows::Data::Json::IJsonValue>::operator winrt::Windows::Data::Json::IJsonValue(
      v35,
      v31);
    winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Append(
      a6,
      v31);
    winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v31);
    if ( *a5
      && (unsigned int)winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(a5) )
    {
      StoredEnterprisePinGeneration = GetStoredEnterprisePinGeneration((__int64)v31, (__int64)a5, (__int64)v36);
      if ( *(_BYTE *)(StoredEnterprisePinGeneration + 4) )
        v11 = *(_DWORD *)StoredEnterprisePinGeneration;
      if ( v11 == v34
        && (*(unsigned int (__fastcall **)(__int64, const struct _ITEMIDLIST *))(*(_QWORD *)a4 + 72LL))(a4, *a2) == 1 )
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          (__int64)a7,
          (__int64 *)v31);
        v23 = tip::details::reason_string(
                (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_user_unpin_respected",
                v22);
        tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v24 + 8, 3LL, v23);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(v31);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v35);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v36);
        return 0;
      }
      else
      {
        tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
          (__int64)a7,
          (__int64 *)v31);
        v26 = tip::details::reason_string(
                (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::enterprise_pin_shows",
                v25);
        tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v27 + 8, 4LL, v26);
        tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(v31);
        winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v35);
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v36);
        return 1;
      }
    }
    else
    {
      tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
        (__int64)a7,
        (__int64 *)v31);
      v29 = tip::details::reason_string(
              (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::stored_enterprise_pin_data_empty",
              v28);
      tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v30 + 8, 2LL, v29);
      tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(v31);
      winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>::~AsyncOperationCompletedHandler<winrt::WindowsUdk::UI::StartScreen::TileCollection>((winrt::Windows::Foundation::IUnknown *)v35);
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v36);
      return 1;
    }
  }
  else
  {
    tip2::tip_test<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::operator->(
      (__int64)a7,
      (__int64 *)v31);
    v14 = tip::details::reason_string(
            (tip::details *)"PinnedListTip::TaskbarEnterprisePinTestReason::no_enterprise_pin_generation",
            v13);
    tip2::details::shared_data<0,0,1>::get_or_add_flag_under_lock(v15 + 8, 1LL, v14);
    tip2::test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>::~test_data_control<tip2::details::merged_data<PinnedListTip::_tip_TaskbarEnterprisePinTest_attributes,tip2::test_data_basic>>(v31);
    return 1;
  }
}
