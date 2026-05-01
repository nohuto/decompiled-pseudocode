/*
 * XREFs of ?GetJsonStorageFile@JsonGameMruManager@@AEBA?AUStorageFile@Storage@Windows@winrt@@XZ @ 0x1800B0B04
 * Callers:
 *     ?DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z @ 0x1800AFBC8 (-DeserializeFromJsonFile@JsonGameMruManager@@AEAAXUwrite_lock_required@wil@@@Z.c)
 *     ?SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z @ 0x1803E3F84 (-SerializeToJsonFile@JsonGameMruManager@@AEBAXUwrite_lock_required@wil@@@Z.c)
 * Callees:
 *     ?CreateFileAsync@?$consume_Windows_Storage_IStorageFolder@UIStorageFolder@Storage@Windows@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4CreationCollisionOption@Storage@Windows@3@@Z @ 0x1800AFE14 (-CreateFileAsync@-$consume_Windows_Storage_IStorageFolder@UIStorageFolder@Storage@Windows@winrt@.c)
 *     ??$wait_get@U?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@impl@winrt@@YA?A_PAEBU?$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@1@@Z @ 0x1800B0248 (--$wait_get@U-$IAsyncOperation@UStorageFile@Storage@Windows@winrt@@@Foundation@Windows@winrt@@@i.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x1800B25FC (--0hstring@param@winrt@@QEAA@AEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@Z.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall JsonGameMruManager::GetJsonStorageFile(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rdx
  const char *v5; // r9
  _QWORD *result; // rax
  _QWORD v7[6]; // [rsp+28h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v9; // [rsp+60h] [rbp+8h] BYREF
  _QWORD *v10; // [rsp+68h] [rbp+10h]
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v10 = (_QWORD *)a2;
  v3 = (__int64 *)(a1 + 8);
  v9 = 3;
  winrt::param::hstring::hstring(v7, a1 + 16);
  try
  {
    v4 = winrt::impl::consume_Windows_Storage_IStorageFolder<winrt::Windows::Storage::IStorageFolder>::CreateFileAsync(
           v3,
           &v11,
           v7,
           &v9);
    winrt::impl::wait_get<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Storage::StorageFile>>(a2, v4);
    if ( v11 )
      winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v11);
    result = (_QWORD *)a2;
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xB9,
      (unsigned int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\gamemrumanager.cpp",
      v5);
    *v10 = 0LL;
    return v10;
  }
  return result;
}
