/*
 * XREFs of ?find_interface@?$implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x1800FBBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx

  v2 = *a2 - winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>;
  if ( *a2 == winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>> )
    v2 = a2[1] - 0xA9F3EC6C5FBA893LL;
  v3 = 0LL;
  if ( !v2 )
    return (a1 + 16) & -(__int64)(a1 != 0);
  return v3;
}
