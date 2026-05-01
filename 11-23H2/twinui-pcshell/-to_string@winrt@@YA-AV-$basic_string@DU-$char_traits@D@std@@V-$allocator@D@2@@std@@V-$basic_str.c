/*
 * XREFs of ?to_string@winrt@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180728E80
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x18027F45C (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x18027F858 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_18027F858.c)
 *     ?HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBU?$IAsyncOperation@_N@Foundation@56@@Z @ 0x18072DD20 (-HandleProviderAppLaunchResult@BootProviderActivator@implementation@Shell@Internal@Windows@winrt.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     WINRT_IMPL_WideCharToMultiByte @ 0x1801C8358 (WINRT_IMPL_WideCharToMultiByte.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x1807277FC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 */

__int64 __fastcall winrt::to_string(__int64 a1, __int64 a2)
{
  const WCHAR *v2; // rbp
  int v3; // esi
  int v5; // eax
  int cbMultiByte; // edi
  CHAR *lpMultiByteStr; // rax
  __int128 v8; // xmm1
  LPSTR v10[2]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v11; // [rsp+60h] [rbp-38h]

  v2 = *(const WCHAR **)a2;
  v3 = *(_DWORD *)(a2 + 8);
  v5 = WINRT_IMPL_WideCharToMultiByte(0xFDE9u, 0, *(LPCWCH *)a2, v3, 0LL, 0, 0LL, 0LL);
  cbMultiByte = v5;
  if ( v5 )
  {
    std::string::string(v10, v5);
    lpMultiByteStr = (CHAR *)v10;
    if ( *((_QWORD *)&v11 + 1) >= 0x10uLL )
      lpMultiByteStr = v10[0];
    WINRT_IMPL_WideCharToMultiByte(0xFDE9u, 0, v2, v3, lpMultiByteStr, cbMultiByte, 0LL, 0LL);
    v8 = v11;
    *(_OWORD *)a1 = *(_OWORD *)v10;
    *(_OWORD *)(a1 + 16) = v8;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 15LL;
    *(_BYTE *)a1 = 0;
  }
  return a1;
}
