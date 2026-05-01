/*
 * XREFs of ??1?$removed_values@U?$vector_impl@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$vector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@6@@impl@winrt@@X@impl@winrt@@QEAA@XZ @ 0x18054C4C8
 * Callers:
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$29 @ 0x18054C27B (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$29.c)
 *     _CAppThumbnailWindow::CAppThumbnailWindow_::_1_::dtor$32 @ 0x18054C2AD (_CAppThumbnailWindow--CAppThumbnailWindow_--_1_--dtor$32.c)
 *     _winrt::vector_base_winrt::impl::vector_impl_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_std::vector_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_std::allocator_winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner____winrt::impl::single_threaded_collection_base__winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner_::ReplaceAll_::_1_::dtor$0 @ 0x18054FD01 (_winrt--vector_base_winrt--impl--vector_impl_winrt--Windows--UI--Composition--Internal--Composit.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$4 @ 0x18055B2C6 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$4.c)
 *     _CAppThumbnailWindow::StartMinimizeGestureOperation_::_1_::dtor$19 @ 0x18055C92B (_CAppThumbnailWindow--StartMinimizeGestureOperation_--_1_--dtor$19.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::SetupTaskbarOffsetTrigger_::_1_::dtor$4 @ 0x180761468 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_180761468.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@std@@@std@@YAXPEAUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@QEAU123456@AEAV?$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@0@@Z @ 0x18054B790 (--$_Destroy_range@V-$allocator@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@.c)
 */

void __fastcall winrt::impl::removed_values<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,void>::~removed_values<winrt::impl::vector_impl<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner,std::vector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::impl::single_threaded_collection_base>,void>(
        __int64 a1)
{
  winrt::Windows::Internal::Shell::RegistrationData *v2; // rcx

  v2 = *(winrt::Windows::Internal::Shell::RegistrationData **)a1;
  if ( v2 )
  {
    std::_Destroy_range<std::allocator<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>(
      v2,
      *(winrt::Windows::Internal::Shell::RegistrationData **)(a1 + 8));
    std::_Deallocate<16,0>(*(void **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)a1 = 0LL;
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
