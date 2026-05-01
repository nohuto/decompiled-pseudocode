/*
 * XREFs of ?GetMany@iterator@?$iterable_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@Ucollection_version@23@@winrt@@QEAAIU?$array_view@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@3@@Z @ 0x18054EC08
 * Callers:
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$vector_impl@URegistrationData@Shell@Internal@Windows@winrt@@V?$vector@URegistrationData@Shell@Internal@Windows@winrt@@V?$allocator@URegistrationData@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@URegistrationData@Shell@Internal@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@URegistrationData@Shell@Internal@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x18054EA90 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$vector_impl@URegistrationData@Shell@Internal@Win.c)
 * Callees:
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z @ 0x180176D7C (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@AEBU0123@@Z.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18052E98C (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

__int64 __fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,winrt::impl::collection_version>::iterator::GetMany(
        _QWORD *a1,
        __m128i *a2)
{
  winrt::Windows::Foundation::IUnknown *v4; // rsi
  unsigned int v5; // edi
  unsigned int v6; // r14d
  winrt::Windows::Foundation::IUnknown *v7; // rbx
  __int64 result; // rax

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v4 = (winrt::Windows::Foundation::IUnknown *)a1[5];
  v5 = _mm_cvtsi128_si32(_mm_srli_si128(*a2, 8));
  if ( v5 >= (unsigned int)((__int64)(a1[6] - (_QWORD)v4) >> 3) )
    v5 = (__int64)(a1[6] - (_QWORD)v4) >> 3;
  v6 = v5;
  if ( v5 )
  {
    v7 = (winrt::Windows::Foundation::IUnknown *)a2->m128i_i64[0];
    while ( 1 )
    {
      winrt::Windows::Foundation::IUnknown::operator=(v7, v4);
      v7 = (winrt::Windows::Foundation::IUnknown *)((char *)v7 + 8);
      if ( !--v6 )
        break;
      v4 = (winrt::Windows::Foundation::IUnknown *)((char *)v4 + 8);
    }
  }
  result = v5;
  a1[5] += 8LL * v5;
  return result;
}
