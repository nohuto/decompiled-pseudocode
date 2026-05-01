/*
 * XREFs of ?SetAt@?$produce@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAX@Z @ 0x18054FE20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAt@?$vector_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@winrt@@QEAAXIAEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@2@@Z @ 0x18054FE88 (-SetAt@-$vector_base@U-$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Compositio.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::SetAt(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h]

  v5 = a3;
  try
  {
    winrt::vector_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::SetAt();
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v4);
  }
  return result;
}
