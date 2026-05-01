/*
 * XREFs of ?find_interface@?$implements@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@3@U?$IVectorView@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@5673@U?$IIterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@5673@@winrt@@UEBAPEAXAEBUguid@2@@Z @ 0x180550CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 */

__int64 __fastcall winrt::implements<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>::find_interface(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r9
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8

  if ( winrt::operator==(
         a2,
         winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>) )
  {
    v4 = v3 + 16;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(
         v2,
         winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IVectorView<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>) )
  {
    v4 = v3 + 24;
    return v4 & -(__int64)(v3 != 0);
  }
  if ( winrt::operator==(
         v5,
         winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>) )
  {
    v4 = v3 + 32;
    return v4 & -(__int64)(v3 != 0);
  }
  return v6;
}
