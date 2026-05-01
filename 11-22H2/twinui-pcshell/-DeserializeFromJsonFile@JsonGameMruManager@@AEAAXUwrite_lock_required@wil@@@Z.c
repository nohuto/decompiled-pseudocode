/*
 * XREFs of ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800AFBC8
 * Callers:
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x1800AF6BC (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x18008D2F8 (--0-$shared_ptr@V-$test_merged_data@U_tip_DeactivateRemoteDesktopTipTest@@@details@tip@@@std@@QE.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@?$factory_cache_entry@UFileIO@Storage@Windows@winrt@@UIFileIOStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@Z @ 0x1800AEFA0 (--$call@AEAV_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_@@@-$factory_cache_entry@UFileIO@Storage@Wi.c)
 *     ?ReadTextAsync@?$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUIStorageFile@Storage@Windows@3@@Z @ 0x1800AF0F8 (-ReadTextAsync@-$consume_Windows_Storage_IFileIOStatics@UIFileIOStatics@Storage@Windows@winrt@@@.c)
 *     ??$wait_get@U?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@1@@Z @ 0x1800AFCC0 (--$wait_get@U-$IAsyncOperation@Uhstring@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA-A_PAEB.c)
 *     ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1800B0B04 (-GetJsonStorageFile@JsonGameMruManager@@AEBA-AUStorageFile@Storage@Windows@winrt@@XZ.c)
 *     ?create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z @ 0x1800B4460 (-create_string_reference@hstring@param@winrt@@AEAAXQEBG_K@Z.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@?$vector@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@V?$allocator@V?$shared_ptr@UPeoplePaneViewInfo@@@std@@@2@@std@@QEAAPEAV?$shared_ptr@UPeoplePaneViewInfo@@@1@QEAV21@AEBV21@@Z @ 0x1803E1D24 (--$_Emplace_reallocate@AEBV-$shared_ptr@UPeoplePaneViewInfo@@@std@@@-$vector@V-$shared_ptr@UPeop.c)
 *     ??$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@?$factory_cache_entry@UJsonObject@Json@Data@Windows@winrt@@UIJsonObjectStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@Z @ 0x1803E243C (--$call@AEAV_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_@@@-$factory_cache_entry@UJsonObject@Json@D.c)
 *     ?GetAt@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@I@Z @ 0x1803E3998 (-GetAt@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJs.c)
 *     ?GetNamedArray@?$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803E3A98 (-GetNamedArray@-$consume_Windows_Data_Json_IJsonObject@UIJsonObject@Json@Data@Windows@winrt@@@im.c)
 *     ?GetObjectW@?$consume_Windows_Data_Json_IJsonValue@UIJsonValue@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x1803E3BB8 (-GetObjectW@-$consume_Windows_Data_Json_IJsonValue@UIJsonValue@Json@Data@Windows@winrt@@@impl@wi.c)
 *     _anonymous_namespace_::JsonObjectToGameMruItem @ 0x1803E3CBC (_anonymous_namespace_--JsonObjectToGameMruItem.c)
 *     ?Parse@?$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1803E3F2C (-Parse@-$consume_Windows_Data_Json_IJsonObjectStatics@UIJsonObjectStatics@Json@Data@Windows@winr.c)
 *     ?Size@?$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJsonValue@2345@@impl@winrt@@QEBA@XZ @ 0x1803E4410 (-Size@-$consume_Windows_Foundation_Collections_IVector@UJsonArray@Json@Data@Windows@winrt@@UIJso.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall JsonGameMruManager::DeserializeFromJsonFile(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  int v6; // esi
  __int64 ObjectW; // rax
  _QWORD *v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v10; // [rsp+28h] [rbp-B0h] BYREF
  __int64 v11; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v12; // [rsp+38h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+40h] [rbp-98h] BYREF
  __int64 v14; // [rsp+48h] [rbp-90h] BYREF
  std::_Ref_count_base *v15; // [rsp+50h] [rbp-88h]
  __int64 *v16; // [rsp+58h] [rbp-80h] BYREF
  _QWORD v17[3]; // [rsp+60h] [rbp-78h] BYREF
  _QWORD v18[4]; // [rsp+78h] [rbp-60h] BYREF
  _BYTE v19[64]; // [rsp+98h] [rbp-40h] BYREF
  __int64 v20; // [rsp+F0h] [rbp+18h] BYREF
  __int64 v21; // [rsp+F8h] [rbp+20h] BYREF

  JsonGameMruManager::GetJsonStorageFile(a1, &v20);
  v3 = v20;
  if ( v20 )
  {
    v16 = &v20;
    v17[1] = &qword_18098DE68;
    _InterlockedIncrement64(&qword_18098DE68);
    if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics> )
    {
      winrt::impl::consume_Windows_Storage_IFileIOStatics<winrt::Windows::Storage::IFileIOStatics>::ReadTextAsync(
        &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>,
        &v21,
        &v20);
      _InterlockedDecrement64(&qword_18098DE68);
    }
    else
    {
      _InterlockedDecrement64(&qword_18098DE68);
      winrt::impl::factory_cache_entry<winrt::Windows::Storage::FileIO,winrt::Windows::Storage::IFileIOStatics>::call<_lambda_8bcef120e7c5e2e3c02b5340d469f3bd_ &>(
        v2,
        (__int64)&v21,
        &v16);
    }
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::hstring>>(&v13, &v21);
    if ( v21 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v21);
    if ( v13 )
    {
      v18[0] = v13;
      v17[0] = v18;
      v17[2] = &qword_180990BB8;
      _InterlockedIncrement64(&qword_180990BB8);
      if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics> )
      {
        winrt::impl::consume_Windows_Data_Json_IJsonObjectStatics<winrt::Windows::Data::Json::IJsonObjectStatics>::Parse(
          &winrt::impl::factory_cache_entry_v<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>,
          &v10,
          v18);
        _InterlockedDecrement64(&qword_180990BB8);
      }
      else
      {
        _InterlockedDecrement64(&qword_180990BB8);
        winrt::impl::factory_cache_entry<winrt::Windows::Data::Json::JsonObject,winrt::Windows::Data::Json::IJsonObjectStatics>::call<_lambda_6572cb39eb053ecf8aa601a8cecd7f9b_ &>(
          v4,
          &v10,
          v17);
      }
      winrt::param::hstring::create_string_reference((winrt::param::hstring *)v19, L"titles", 6uLL);
      winrt::impl::consume_Windows_Data_Json_IJsonObject<winrt::Windows::Data::Json::IJsonObject>::GetNamedArray(
        &v10,
        &v9,
        v19);
      v5 = 0;
      v6 = winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::Size(&v9);
      while ( v5 != v6 )
      {
        winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Data::Json::JsonArray,winrt::Windows::Data::Json::IJsonValue>::GetAt(
          &v9,
          &v11,
          v5);
        ObjectW = winrt::impl::consume_Windows_Data_Json_IJsonValue<winrt::Windows::Data::Json::IJsonValue>::GetObjectW(
                    &v11,
                    &v12);
        anonymous_namespace_::JsonObjectToGameMruItem(&v14, ObjectW);
        if ( v12 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v12);
        if ( v14 )
        {
          v8 = *(_QWORD **)(a1 + 64);
          if ( v8 == *(_QWORD **)(a1 + 72) )
          {
            std::vector<std::shared_ptr<PeoplePaneViewInfo>>::_Emplace_reallocate<std::shared_ptr<PeoplePaneViewInfo> const &>(
              a1 + 56,
              *(_QWORD *)(a1 + 64),
              &v14);
          }
          else
          {
            std::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>::shared_ptr<tip::details::test_merged_data<_tip_DeactivateRemoteDesktopTipTest>>(
              v8,
              &v14);
            *(_QWORD *)(a1 + 64) += 16LL;
          }
        }
        if ( v15 )
          std::_Ref_count_base::_Decref(v15);
        if ( v11 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
        ++v5;
      }
      if ( v9 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
      if ( v10 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v10);
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v13);
    v3 = v20;
  }
  if ( v3 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
}
