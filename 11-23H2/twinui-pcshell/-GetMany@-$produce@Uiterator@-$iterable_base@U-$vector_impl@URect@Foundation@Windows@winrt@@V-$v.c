/*
 * XREFs of ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@URect@Foundation@Windows@winrt@@V?$vector@URect@Foundation@Windows@winrt@@V?$allocator@URect@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@URect@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@URect@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAURect@Foundation@Windows@3@PEAI@Z @ 0x1805237D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18052E98C (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Rect,std::vector<winrt::Windows::Foundation::Rect>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Rect,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::Foundation::Rect>>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  const void **v10; // rdi
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v8 = a1 + 16;
  if ( !a1 )
    v8 = 32LL;
  v9 = a1 + 8;
  if ( !a1 )
    v9 = 24LL;
  try
  {
    winrt::impl::collection_version::iterator_type::check_version(
      (winrt::impl::collection_version::iterator_type *)v9,
      (const struct winrt::impl::collection_version *)(*(_QWORD *)v8 + 40LL));
    v10 = (const void **)(a1 + 24);
    if ( !a1 )
      v10 = (const void **)40;
    v11 = a1 + 32;
    if ( !a1 )
      v11 = 48LL;
    if ( a2 >= (unsigned int)((__int64)(*(_QWORD *)v11 - (_QWORD)*v10) >> 4) )
      a2 = (__int64)(*(_QWORD *)v11 - (_QWORD)*v10) >> 4;
    if ( a2 )
      memmove_0(a3, *v10, 16LL * a2);
    *v10 = (char *)*v10 + 16 * a2;
    *a4 = a2;
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v13);
  }
  return result;
}
