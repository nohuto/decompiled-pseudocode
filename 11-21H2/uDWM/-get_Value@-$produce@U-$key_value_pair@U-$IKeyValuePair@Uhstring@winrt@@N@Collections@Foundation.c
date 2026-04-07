/*
 * XREFs of ?get_Value@?$produce@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAN@Z @ 0x1800FBF60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>::get_Value(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  v2 = a1 + 16;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_QWORD *)v2;
  return 0LL;
}
