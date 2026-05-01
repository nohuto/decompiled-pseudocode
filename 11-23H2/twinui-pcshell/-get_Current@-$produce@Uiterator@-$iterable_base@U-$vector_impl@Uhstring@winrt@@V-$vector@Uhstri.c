/*
 * XREFs of ?get_Current@?$produce@Uiterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@U?$IIterator@Uhstring@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1806FCC00
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Current@iterator@?$iterable_base@U?$vector_impl@Uhstring@winrt@@V?$vector@Uhstring@winrt@@V?$allocator@Uhstring@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@2@@impl@winrt@@Uhstring@3@Ucollection_version@23@@winrt@@QEBA?AUhstring@3@XZ @ 0x1806FA2CC (-Current@iterator@-$iterable_base@U-$vector_impl@Uhstring@winrt@@V-$vector@Uhstring@winrt@@V-$al.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::hstring>>::get_Current(
        __int64 a1,
        struct winrt::impl::hstring_header **a2)
{
  _QWORD *v3; // rcx
  struct winrt::impl::hstring_header **v4; // rax
  struct winrt::impl::hstring_header *v5; // rcx
  __int64 result; // rax
  struct winrt::impl::hstring_header *v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (_QWORD *)((a1 - 16) & -(__int64)(a1 != 0));
  try
  {
    v4 = winrt::iterable_base<winrt::impl::vector_impl<winrt::hstring,std::vector<winrt::hstring>,winrt::impl::single_threaded_collection_base>,winrt::hstring,winrt::impl::collection_version>::iterator::Current(
           v3,
           &v7);
    v5 = *v4;
    *v4 = 0LL;
    *a2 = v5;
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)&v7);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v7);
  }
  return result;
}
