/*
 * XREFs of ?First@?$produce@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18003B590
 * Callers:
 *     <none>
 * Callees:
 *     ??$make@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@PEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@3@@winrt@@YA?AU?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@0@$$QEAPEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@0@@Z @ 0x18003B604 (--$make@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 *     _CxxThrowException_0 @ 0x180188F6C (_CxxThrowException_0.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x1803531FC (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::First(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v4 = a1 - 16;
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 24LL;
  if ( *(_BYTE *)v5 )
  {
    winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
  if ( !a1 )
  {
    v4 = 0LL;
    goto LABEL_6;
  }
  if ( a1 != -9 )
LABEL_6:
    v3 = v4;
  v8 = v3;
  winrt::make<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *> *>(
    &v9,
    &v8);
  *a2 = v9;
  return 0LL;
}
