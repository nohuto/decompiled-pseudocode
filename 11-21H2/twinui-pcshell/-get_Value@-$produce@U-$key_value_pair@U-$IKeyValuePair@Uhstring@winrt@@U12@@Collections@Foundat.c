/*
 * XREFs of ?get_Value@?$produce@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18003BFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z @ 0x1800F2CB4 (-duplicate_hstring@impl@winrt@@YAPEAUhstring_header@12@PEAU312@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>::get_Value(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  __int64 v4; // rcx
  struct winrt::impl::hstring_header *v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a1 + 16;
  if ( !a1 )
    v4 = 32LL;
  v5 = winrt::impl::duplicate_hstring(*(winrt::impl **)v4, (struct winrt::impl::hstring_header *)0x20);
  v7 = 0LL;
  *a2 = v5;
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  return 0LL;
}
