/*
 * XREFs of ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$map_impl@Uhstring@winrt@@NV?$map@Uhstring@winrt@@NU?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@N@std@@@4@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@N@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800FA7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUhstring@winrt@@N@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1800B455C (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUhstring@winr.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x1800FBB18 (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::map_impl<winrt::hstring,double,std::map<winrt::hstring,double>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::hstring,double>>>::MoveNext(
        __int64 a1,
        char *a2)
{
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rcx
  __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // r9
  _QWORD *v10; // r10
  __int64 result; // rax
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1 + 16;
  v5 = 0;
  if ( !a1 )
    v4 = 32LL;
  v6 = a1 + 8;
  if ( !a1 )
    v6 = 24LL;
  try
  {
    winrt::impl::collection_version::iterator_type::check_version(
      (winrt::impl::collection_version::iterator_type *)v6,
      (const struct winrt::impl::collection_version *)(*(_QWORD *)v4 + 40LL));
    v7 = a1 + 24;
    if ( !a1 )
      v7 = 40LL;
    v8 = a1 + 32;
    if ( !a1 )
      v8 = 48LL;
    if ( *(_QWORD *)v7 != *(_QWORD *)v8 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<winrt::hstring const,double>>>,std::_Iterator_base0>::operator++((__int64 *)v7);
      if ( *v10 != *v9 )
        v5 = 1;
    }
    *a2 = v5;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v12);
  }
  return result;
}
