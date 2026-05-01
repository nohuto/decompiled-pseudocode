/*
 * XREFs of ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x1800B08F4
 * Callers:
 *     ?CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ @ 0x1800905A0 (-CompleteInitializationTask@BroadcastDVRComponent@@AEAAXXZ.c)
 * Callees:
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E210 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x18008E2C4 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180090A78 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 *     ??0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@E@Z @ 0x1800AF6BC (--0JsonGameMruManager@@AEAA@UStorageFolder@Storage@Windows@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ??$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@?$factory_cache_entry@UStorageFolder@Storage@Windows@winrt@@UIStorageFolderStatics@234@@impl@winrt@@QEAA?A_PAEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@Z @ 0x1800AF788 (--$call@AEAV_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_@@@-$factory_cache_entry@UStorageFolder@Sto.c)
 *     ?GetFolderFromPathAsync@?$consume_Windows_Storage_IStorageFolderStatics@UIStorageFolderStatics@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@@Z @ 0x1800AF890 (-GetFolderFromPathAsync@-$consume_Windows_Storage_IStorageFolderStatics@UIStorageFolderStatics@S.c)
 *     ??$wait_get@U?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x1800B01A4 (--$wait_get@U-$IAsyncOperation@UStorageFolder@Storage@Windows@winrt@@@Foundation@Windows@winrt@@.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=13
__int64 **__fastcall JsonGameMruManager::Create(__int64 **a1, __int64 a2)
{
  void *v3; // rcx
  const unsigned __int16 *v4; // r8
  __int64 v5; // rdx
  void (__fastcall ***v6)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v17; // [rsp+20h] [rbp-128h] BYREF
  void *v18; // [rsp+28h] [rbp-120h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-118h] BYREF
  __int64 *v20; // [rsp+40h] [rbp-108h]
  _QWORD v21[4]; // [rsp+50h] [rbp-F8h] BYREF
  char v22[32]; // [rsp+70h] [rbp-D8h] BYREF
  void *v23[4]; // [rsp+90h] [rbp-B8h] BYREF
  _QWORD v24[4]; // [rsp+B0h] [rbp-98h] BYREF
  _BYTE v25[32]; // [rsp+D0h] [rbp-78h] BYREF
  _BYTE v26[32]; // [rsp+F0h] [rbp-58h] BYREF
  _BYTE v27[32]; // [rsp+110h] [rbp-38h] BYREF

  v19[1] = a1;
  v3 = *(void **)(a2 + 8);
  v23[0] = *(void **)a2;
  v23[1] = v3;
  std::wstring::wstring(v24, v23);
  v5 = std::filesystem::path::parent_path((std::filesystem *)v24, (__int64)v27, v4);
  std::wstring::wstring(v25, v5);
  winrt::param::hstring::hstring(v21, v25);
  v19[0] = v21;
  v20 = &qword_18098DE48;
  _InterlockedIncrement64(&qword_18098DE48);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics> )
  {
    winrt::impl::consume_Windows_Storage_IStorageFolderStatics<winrt::Windows::Storage::IStorageFolderStatics>::GetFolderFromPathAsync(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>,
      &v17,
      v21);
    _InterlockedDecrement64(&qword_18098DE48);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098DE48);
    winrt::impl::factory_cache_entry<winrt::Windows::Storage::StorageFolder,winrt::Windows::Storage::IStorageFolderStatics>::call<_lambda_0ba328cd2edd55f5ab6423f6a7e8dff9_ &>(
      v6,
      (__int64)&v17,
      v19);
  }
  winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFolder>>(
    (__int64)&v18,
    &v17);
  if ( v17 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v17);
  std::wstring::_Tidy_deallocate(v25, v7);
  std::wstring::_Tidy_deallocate(v27, v8);
  v9 = std::filesystem::path::filename((std::filesystem *)v24, (__int64)v23);
  std::wstring::wstring(v26, v9);
  std::wstring::_Tidy_deallocate(v23, v10);
  v11 = (__int64 *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (__int64)v11;
  v20 = v11;
  if ( v11 )
  {
    v14 = std::wstring::wstring(v22, v26);
    v23[0] = v18;
    winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)v23);
    v11 = (__int64 *)JsonGameMruManager::JsonGameMruManager(v13, (winrt::Windows::Foundation::IUnknown *)v23, v14);
  }
  *a1 = v11;
  std::wstring::_Tidy_deallocate(v26, v12);
  if ( v18 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
  std::wstring::_Tidy_deallocate(v24, v15);
  return a1;
}
