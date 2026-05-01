/*
 * XREFs of ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x18003B6A0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x1803531FC (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::MoveNext(
        __int64 a1,
        bool *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rcx
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a1 + 8;
  if ( !a1 )
    v4 = 24LL;
  if ( *(_BYTE *)(*(_QWORD *)v4 + 24LL) )
  {
    winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  v5 = a1 + 16;
  if ( !a1 )
    v5 = 32LL;
  v6 = *(_QWORD *)v5;
  v7 = a1 + 24;
  if ( !a1 )
    v7 = 40LL;
  v8 = v6 == *(_QWORD *)v7;
  if ( v6 != *(_QWORD *)v7 )
  {
    v9 = v6 + 16;
    *(_QWORD *)v5 = v9;
    v8 = v9 == *(_QWORD *)v7;
  }
  *a2 = !v8;
  return 0LL;
}
