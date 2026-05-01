/*
 * XREFs of _std::vector_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_std::allocator_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner___::_Emplace_reallocate_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_const_&__::_1_::catch$3 @ 0x18054B8BE
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _CxxThrowException_0 @ 0x1801C7518 (_CxxThrowException_0.c)
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 */

void __fastcall __noreturn std::vector_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_std::allocator_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner___::_Emplace_reallocate_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_const____::_1_::catch_3(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
    *(winrt::Windows::Internal::Shell::RegistrationData **)(a2 + 112),
    *(winrt::Windows::Internal::Shell::RegistrationData **)(a2 + 120));
  std::_Deallocate<16,0>(*(void **)(a2 + 32), 8LL * *(_QWORD *)(a2 + 136));
  throw;
}
