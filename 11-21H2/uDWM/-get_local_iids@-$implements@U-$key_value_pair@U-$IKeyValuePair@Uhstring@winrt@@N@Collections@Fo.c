/*
 * XREFs of ?get_local_iids@?$implements@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@winrt@@UEBA?AU?$pair@IPEBUguid@winrt@@@std@@XZ @ 0x18004A0A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::implements<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::get_local_iids(
        __int64 a1,
        __int64 a2)
{
  *(_DWORD *)a2 = 1;
  *(_QWORD *)(a2 + 8) = &winrt::impl::uncloaked_iids<winrt::impl::interface_list<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::value;
  return a2;
}
