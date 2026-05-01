/*
 * XREFs of ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1803E3F84
 * Callers:
 *     ?AddMruItem@JsonGameMruManager@@QEAAXV?$shared_ptr@UGameMruItem@@@std@@@Z @ 0x1803E3158 (-AddMruItem@JsonGameMruManager@@QEAAXV-$shared_ptr@UGameMruItem@@@std@@@Z.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?GetResults@?$consume_Windows_Foundation_IAsyncAction@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800ADAB8 (-GetResults@-$consume_Windows_Foundation_IAsyncAction@UIAsyncAction@Foundation@Windows@winrt@@@i.c)
 *     ??$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBUIAsyncAction@Foundation@Windows@1@I@Z @ 0x1800AE5C4 (--$wait_for_completed@UIAsyncAction@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEBUIAsyncActio.c)
 *     ?Status@?$consume_Windows_Foundation_IAsyncInfo@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800AEC0C (-Status@-$consume_Windows_Foundation_IAsyncInfo@U-$IAsyncOperation@UStorageFile@Storage@Windows@.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1800B0B04 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonArray@Json@Data@23@XZ @ 0x1803E1BC4 (--$ActivateInstance@UJsonArray@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@w.c)
 *     ??$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@winrt@@QEBA?AUJsonObject@Json@Data@23@XZ @ 0x1803E1C74 (--$ActivateInstance@UJsonObject@Json@Data@Windows@winrt@@@IActivationFactory@Foundation@Windows@.c)
 *     ??$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@Z @ 0x1803E2574 (--$call@AEAV_lambda_ab3e553f5135d66a1c20f494927a541c_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ??$call@P6A?AUJsonArray@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UJsonArray@Json@Data@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUJsonArray@Json@Data@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1803E27E4 (--$call@P6A-AUJsonArray@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-$facto.c)
 *     ??$call@P6A?AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIActivationFactory@Foundation@45@@impl@winrt@@QEAA?A_P$$QEAP6A?AUJsonObject@Json@Data@Windows@2@AEBUIActivationFactory@Foundation@62@@Z@Z @ 0x1803E2934 (--$call@P6A-AUJsonObject@Json@Data@Windows@winrt@@AEBUIActivationFactory@Foundation@45@@Z@-$fact.c)
 *     ??0hresult_canceled@winrt@@QEAA@XZ @ 0x1803E2DA0 (--0hresult_canceled@winrt@@QEAA@XZ.c)
 *     ??R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z @ 0x1803E3060 (--R_lambda_ab3e553f5135d66a1c20f494927a541c_@@QEBA@AEBUIFileIOStatics@Storage@Windows@winrt@@@Z.c)
 *     ?Append@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x1803E333C (-Append@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJ.c)
 *     _anonymous_namespace_::GameMruItemToJsonObject @ 0x1803E34B8 (_anonymous_namespace_--GameMruItemToJsonObject.c)
 *     ?Insert@?$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstring@5@UIJsonValue@2345@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBUIJsonValue@Json@Data@Windows@3@@Z @ 0x1803E3C0C (-Insert@-$consume_Windows_Foundation_Collections_IMap@UJsonObject@Json@Data@Windows@winrt@@Uhstr.c)
 *     ?ToString@?$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803E46A8 (-ToString@-$consume_Windows_Foundation_IStringable@UTileId@StartScreen@UI@WindowsUdk@winrt@@@imp.c)
 */

// Hidden C++ exception states: #wind=11
void __fastcall JsonGameMruManager::SerializeToJsonFile(__int64 a1, char a2)
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  const char *v4; // r9
  void (__fastcall ***v5)(_QWORD, __int64 *, __int64 *); // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rdi
  _QWORD *v8; // rax
  void (__fastcall ***v9)(_QWORD, void *, __int64 *); // rcx
  void (__fastcall ***v10)(_QWORD, __int64 *, __int64 *); // rcx
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-108h] BYREF
  __int64 v13; // [rsp+28h] [rbp-100h] BYREF
  __int64 v14; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v15; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v16; // [rsp+40h] [rbp-E8h] BYREF
  void (__fastcall **v17)(_QWORD, __int64 *, __int64 *); // [rsp+48h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+50h] [rbp-D8h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v19)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+58h] [rbp-D0h] BYREF
  const struct winrt::Windows::Foundation::IActivationFactory *(__fastcall *v20)(const struct winrt::Windows::Foundation::IActivationFactory *, __int64); // [rsp+60h] [rbp-C8h] BYREF
  volatile signed __int32 *v21; // [rsp+68h] [rbp-C0h] BYREF
  _QWORD v22[6]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-88h] BYREF
  _BYTE pExceptionObject[24]; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v25[4]; // [rsp+C8h] [rbp-60h] BYREF
  __int64 v26; // [rsp+E8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+0h]
  int v28; // [rsp+138h] [rbp+10h] BYREF
  __int64 v29; // [rsp+140h] [rbp+18h] BYREF
  void (__fastcall ***v30)(_QWORD, void *, __int64 *); // [rsp+148h] [rbp+20h] BYREF

  LOBYTE(v28) = a2;
  JsonGameMruManager::GetJsonStorageFile(a1, (__int64)&v15);
  try
  {
    if ( v15 )
    {
      v22[3] = &qword_180990BD8;
      _InterlockedIncrement64(&qword_180990BD8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Foundation::IActivationFactory> )
      {
        winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonObject>(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Foundation::IActivationFactory>,
          &v12);
        _InterlockedDecrement64(&qword_180990BD8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180990BD8);
        v19 = _lambda_63b666b759e740627ed77e2c1fafff5a_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Json::JsonObject (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
          v3,
          (__int64)&v12,
          (void (__fastcall **)(__int64, __int64 *))&v19);
      }
      v22[4] = &qword_180990BF8;
      _InterlockedIncrement64(&qword_180990BF8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory> )
      {
        winrt::Windows::Foundation::IActivationFactory::ActivateInstance<winrt::Windows::Data::Json::JsonArray>(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory>,
          &v30);
        _InterlockedDecrement64(&qword_180990BF8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180990BF8);
        v20 = _lambda_26ceda9fe0b282db3cefe2785cdd4c46_::_lambda_invoker_cdecl_;
        winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Foundation::IActivationFactory>::call<winrt::Windows::Data::Json::JsonArray (*)(winrt::Windows::Foundation::IActivationFactory const &)>(
          v5,
          (__int64)&v30,
          (void (__fastcall **)(__int64, __int64 *))&v20);
      }
      v6 = *(_QWORD **)(a1 + 56);
      v7 = *(_QWORD **)(a1 + 64);
      while ( v6 != v7 )
      {
        v8 = std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
               &v23,
               v6);
        v9 = (void (__fastcall ***)(_QWORD, void *, __int64 *))*anonymous_namespace_::GameMruItemToJsonObject(&v17, v8);
        if ( v9 )
        {
          v16 = 0LL;
          (**v9)(v9, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v16);
          v14 = v16;
        }
        else
        {
          v14 = 0LL;
        }
        winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Append(
          (__int64 *)&v30,
          &v14);
        if ( v14 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v14);
        if ( v17 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
        v6 += 2;
      }
      if ( v30 )
      {
        v18 = 0LL;
        (**v30)(v30, &winrt::impl::guid_v<winrt::Windows::Data::Json::IJsonValue>, &v18);
        v13 = v18;
      }
      else
      {
        v13 = 0LL;
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v25, L"titles", 6);
      winrt::impl::consume_Windows_Foundation_Collections_IMap<winrt::Windows::Data::Json::JsonObject,winrt::hstring,winrt::Windows::Data::Json::IJsonValue>::Insert(
        &v12,
        v25,
        &v13);
      if ( v13 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v13);
      v28 = 0;
      v26 = *(_QWORD *)winrt::impl::consume_Windows_Foundation_IStringable<winrt::WindowsUdk::UI::StartScreen::TileId>::ToString(
                         &v12,
                         &v21);
      v22[0] = &v15;
      v22[1] = &v26;
      v22[2] = &v28;
      v22[5] = &qword_18098DE68;
      _InterlockedIncrement64(&qword_18098DE68);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
      {
        _lambda_ab3e553f5135d66a1c20f494927a541c_::operator()(
          v22,
          (__int64)&v29,
          (int)&winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>);
        _InterlockedDecrement64(&qword_18098DE68);
      }
      else
      {
        _InterlockedDecrement64(&qword_18098DE68);
        winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_ab3e553f5135d66a1c20f494927a541c_ &>(
          v10,
          (__int64)&v29,
          (__int64)v22);
      }
      v11 = winrt::impl::consume_Windows_Foundation_IAsyncInfo<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>::Status(&v29);
      if ( !v11 )
        v11 = winrt::impl::wait_for_completed<winrt::Windows::Foundation::IAsyncAction>(&v29);
      if ( v11 == 2 )
      {
        winrt::hresult_canceled::hresult_canceled((winrt::hresult_canceled *)pExceptionObject);
        throw (winrt::hresult_canceled *)pExceptionObject;
      }
      winrt::impl::consume_Windows_Foundation_IAsyncAction<winrt::Windows::Foundation::IAsyncAction>::GetResults(&v29);
      if ( v29 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v29);
      winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
      if ( v30 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v30);
      if ( v12 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
    }
    if ( v15 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v15);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xEF,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v4);
  }
}
