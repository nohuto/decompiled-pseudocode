/*
 * XREFs of ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBURemoteSystem@Shell@Internal@Windows@3@@winrt@@YA?A_PAEBUhstring@0@AEBURemoteSystem@Shell@Internal@Windows@0@@Z @ 0x18070C040
 * Callers:
 *     ?current_value_withlock@iterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@V?$map@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@std@@@8@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@AEBA?AU?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@3@XZ @ 0x18071ADA8 (-current_value_withlock@iterator@-$iterable_base@U-$map_impl@Uhstring@winrt@@URemoteSystem@Shell.c)
 * Callees:
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800DBAC0 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 *     ??0?$heap_implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Internal@Windows@2@@Collections@Foundation@Windows@winrt@@@impl@winrt@@@impl@winrt@@QEAA@Uhstring@2@URemoteSystem@Shell@Internal@Windows@2@@Z @ 0x18070E264 (--0-$heap_implements@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@URemoteSystem@Shell@Inte.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>,winrt::hstring const &,winrt::Windows::Internal::Shell::RemoteSystem const &>(
        __int64 *a1,
        winrt::impl **a2,
        __int64 **a3)
{
  __int64 v6; // rbp
  struct winrt::impl::hstring_header *v7; // rdx
  unsigned int v8; // r8d
  __int64 v9; // rax
  void *v11; // [rsp+28h] [rbp-30h]
  __int64 *v12; // [rsp+60h] [rbp+8h] BYREF
  struct winrt::impl::hstring_header *v13; // [rsp+78h] [rbp+20h] BYREF

  v12 = a1;
  v6 = 0LL;
  v11 = operator new(0x28uLL);
  v12 = *a3;
  winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v12);
  v13 = winrt::impl::duplicate_hstring(*a2, v7, v8);
  v9 = winrt::impl::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>::heap_implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::Windows::Internal::Shell::RemoteSystem>>>(
         v11,
         &v13,
         &v12);
  if ( v9 )
    v6 = v9 + 16;
  *a1 = v6;
  return a1;
}
