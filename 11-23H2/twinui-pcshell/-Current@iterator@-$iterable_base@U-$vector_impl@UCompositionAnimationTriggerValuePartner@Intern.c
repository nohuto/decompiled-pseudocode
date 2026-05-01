/*
 * XREFs of ?Current@iterator@?$iterable_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@Ucollection_version@23@@winrt@@QEBA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@XZ @ 0x18054E198
 * Callers:
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180550D50 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$vector_impl@UCompositionAnimationTriggerValu.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 *     ?check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z @ 0x18052E98C (-check_version@iterator_type@collection_version@impl@winrt@@QEBAXAEBU234@@Z.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,winrt::impl::collection_version>::iterator::Current(
        _QWORD *a1,
        winrt::Windows::Foundation::IUnknown *a2)
{
  _QWORD *v4; // rax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  winrt::impl::collection_version::iterator_type::check_version(
    (winrt::impl::collection_version::iterator_type *)(a1 + 3),
    (const struct winrt::impl::collection_version *)(a1[4] + 40LL));
  v4 = (_QWORD *)a1[5];
  if ( v4 == (_QWORD *)a1[6] )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  *(_QWORD *)a2 = *v4;
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
