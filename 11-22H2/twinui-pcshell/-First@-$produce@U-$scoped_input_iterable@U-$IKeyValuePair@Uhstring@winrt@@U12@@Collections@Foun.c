/*
 * XREFs of ?First@?$produce@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x18041EDF0
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$make@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@PEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@3@@winrt@@YA?A_P$$QEAPEAU?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@0@@Z @ 0x18041CCE0 (--$make@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x18041D944 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::First(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 result; // rax
  _BYTE pExceptionObject[40]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF
  __int64 v9; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0LL;
  *a2 = 0LL;
  v4 = a1 - 16;
  v5 = a1 + 8;
  if ( !a1 )
    v5 = 24LL;
  try
  {
    if ( *(_BYTE *)v5 )
    {
      winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    if ( a1 )
    {
      if ( a1 == -9 )
        goto LABEL_10;
    }
    else
    {
      v4 = 0LL;
    }
    v3 = v4;
LABEL_10:
    v8 = v3;
    winrt::make<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *> *>(
      &v9,
      &v8);
    *a2 = v9;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v8);
  }
  return result;
}
