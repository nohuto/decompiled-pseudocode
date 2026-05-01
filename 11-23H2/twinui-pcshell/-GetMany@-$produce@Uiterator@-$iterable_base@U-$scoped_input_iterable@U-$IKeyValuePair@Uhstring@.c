/*
 * XREFs of ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x18041F490
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$make@U?$key_value_pair@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@impl@winrt@@AEBUhstring@3@AEBU43@@winrt@@YA?A_PAEBUhstring@0@0@Z @ 0x18041CC24 (--$make@U-$key_value_pair@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@w.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@XZ @ 0x18041D944 (--0hresult_illegal_method_call@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::scoped_input_iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,std::pair<winrt::hstring const,winrt::hstring> const *>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>,winrt::impl::no_collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>>::GetMany(
        __int64 a1,
        unsigned int a2,
        winrt::Windows::Foundation::IUnknown *a3,
        unsigned int *a4)
{
  winrt::Windows::Foundation::IUnknown *v5; // rdi
  unsigned int v6; // esi
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r12
  winrt::impl **v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r15
  winrt::impl **v14; // rax
  __int64 result; // rax
  winrt::impl **v16; // [rsp+20h] [rbp-48h]
  _BYTE pExceptionObject[24]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v18; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+78h] [rbp+10h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 0;
  v19 = 0;
  memset_0(a3, 0, 8LL * a2);
  v9 = a1 + 8;
  if ( !a1 )
    v9 = 24LL;
  try
  {
    if ( *(_BYTE *)(*(_QWORD *)v9 + 24LL) )
    {
      winrt::hresult_illegal_method_call::hresult_illegal_method_call((winrt::hresult_illegal_method_call *)pExceptionObject);
      throw (winrt::hresult_illegal_method_call *)pExceptionObject;
    }
    v10 = a1 + 16;
    if ( !a1 )
      v10 = 32LL;
    v11 = *(winrt::impl ***)v10;
    v12 = a1 + 24;
    if ( !a1 )
      v12 = 40LL;
    if ( v6 >= (unsigned int)((__int64)(*(_QWORD *)v12 - (_QWORD)v11) >> 4) )
      v6 = (__int64)(*(_QWORD *)v12 - (_QWORD)v11) >> 4;
    v13 = 2LL * v6;
    v14 = &v11[v13];
    v16 = &v11[v13];
    while ( v11 != v14 )
    {
      winrt::make<winrt::impl::key_value_pair<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,winrt::hstring>>,winrt::hstring const &,winrt::hstring const &>(
        (struct winrt::impl::hstring_header *)&v18,
        v11,
        v11 + 1);
      v8 |= 1u;
      winrt::Windows::Foundation::IUnknown::operator=(v5, (winrt::Windows::Foundation::IUnknown *)&v18);
      if ( v18 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v18);
      v11 += 2;
      v5 = (winrt::Windows::Foundation::IUnknown *)((char *)v5 + 8);
      v14 = v16;
    }
    *(_QWORD *)v10 += v13 * 8;
    *a4 = v6;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v19);
  }
  return result;
}
