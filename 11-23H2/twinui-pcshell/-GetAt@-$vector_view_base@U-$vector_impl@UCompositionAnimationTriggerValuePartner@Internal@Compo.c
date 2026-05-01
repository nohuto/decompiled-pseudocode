/*
 * XREFs of ?GetAt@?$vector_view_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@Ucollection_version@23@@winrt@@QEBA?AUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@2@I@Z @ 0x18054E6CC
 * Callers:
 *     ?GetAt@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18054E5B0 (-GetAt@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI.c)
 *     ?GetAt@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVectorView@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAX@Z @ 0x18054E640 (-GetAt@-$produce@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@C_ea_18054E640.c)
 * Callees:
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??0hresult_out_of_bounds@winrt@@QEAA@XZ @ 0x18041D968 (--0hresult_out_of_bounds@winrt@@QEAA@XZ.c)
 */

winrt::Windows::Foundation::IUnknown *__fastcall winrt::vector_view_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,winrt::impl::collection_version>::GetAt(
        __int64 a1,
        winrt::Windows::Foundation::IUnknown *a2,
        unsigned int a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v6; // rax
  _BYTE pExceptionObject[32]; // [rsp+28h] [rbp-20h] BYREF

  v3 = a1 + 8;
  v4 = a1 + 16;
  if ( !a1 )
  {
    v3 = 48LL;
    v4 = 56LL;
  }
  if ( a3 >= (unsigned int)((__int64)(*(_QWORD *)v4 - *(_QWORD *)v3) >> 3) )
  {
    winrt::hresult_out_of_bounds::hresult_out_of_bounds((winrt::hresult_out_of_bounds *)pExceptionObject);
    throw (winrt::hresult_out_of_bounds *)pExceptionObject;
  }
  v6 = a1 + 8;
  if ( !a1 )
    v6 = 48LL;
  *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * a3);
  winrt::Windows::Foundation::IUnknown::add_ref(a2);
  return a2;
}
