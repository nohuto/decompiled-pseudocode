/*
 * XREFs of ?find_interface@?$implements@Uiterator@?$iterable_base@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@Ucollection_version@23@@winrt@@U?$IIterator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180550D10
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::iterable_base<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,winrt::impl::collection_version>::iterator,winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  bool v2; // al
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>);
  v4 = 0LL;
  if ( v2 )
    return (v3 + 16) & -(__int64)(v3 != 0);
  return v4;
}
