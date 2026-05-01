/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UUri@Foundation@Windows@winrt@@@3@@Z @ 0x18023C88C
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UUri@Foundation@Windows@winrt@@V?$vector@UUri@Foundation@Windows@winrt@@V?$allocator@UUri@Foundation@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@4@@impl@winrt@@UUri@Foundation@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x18023C700 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UUri@Foundation@Windows@winrt@@V-$ve.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18052E98C (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::Foundation::Uri,std::vector<winrt::Windows::Foundation::Uri>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Uri,winrt::impl::collection_version>::iterator::GetMany(
        _QWORD *a1,
        __m128i *a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rsi
  unsigned int v5; // edi
  winrt::Windows::Foundation::IUnknown *v6; // rbx
  unsigned int v7; // ebp
  __int64 result; // rax
  __m128i v9; // [rsp+20h] [rbp-18h]

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v4 = (winrt::Windows::Foundation::IUnknown *)a1[5];
  v9 = *a2;
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  if ( v5 >= (unsigned int)((__int64)(a1[6] - (_QWORD)v4) >> 3) )
    v5 = (__int64)(a1[6] - (_QWORD)v4) >> 3;
  if ( v5 )
  {
    winrt::Windows::Foundation::IUnknown::operator=((winrt::Windows::Foundation::IUnknown *)v9.m128i_i64[0], v4);
    v6 = (winrt::Windows::Foundation::IUnknown *)(v9.m128i_i64[0] + 8);
    v7 = v5 - 1;
    if ( v5 != 1 )
    {
      do
      {
        v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8);
        winrt::Windows::Foundation::IUnknown::operator=(v6, v4);
        v6 = (winrt::Windows::Foundation::IUnknown *)((char *)v6 + 8);
        --v7;
      }
      while ( v7 );
    }
  }
  result = v5;
  a1[5] += 8LL * v5;
  return result;
}
