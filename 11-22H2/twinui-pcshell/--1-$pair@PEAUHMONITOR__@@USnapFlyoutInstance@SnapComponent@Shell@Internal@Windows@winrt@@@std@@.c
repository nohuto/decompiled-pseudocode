/*
 * XREFs of ??1?$pair@PEAUHMONITOR__@@USnapFlyoutInstance@SnapComponent@Shell@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x18019B0C0
 * Callers:
 *     SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1 @ 0x180225EC0 (SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1.c)
 *     _SnapFlyoutHost::CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_::_1_::dtor$32 @ 0x180226CB1 (_SnapFlyoutHost--CreateSnapFlyoutInstanceAsync$_ResumeCoro$1_--_1_--dtor$32.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$11 @ 0x1802B666E (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$11.c)
 *     _TouchEdgeGestureManager::TouchEdgeGestureManager_::_1_::dtor$13 @ 0x1802B6680 (_TouchEdgeGestureManager--TouchEdgeGestureManager_--_1_--dtor$13.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create_::_1_::dtor$1 @ 0x1802B6A0D (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6A0D.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create_::_1_::dtor$3 @ 0x1802B6A1F (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6A1F.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create_::_1_::dtor$5 @ 0x1802B6A31 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6A31.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::Create_::_1_::dtor$7 @ 0x1802B6A55 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_1802B6A55.c)
 *     _XamlSnapAssistViewHost::OnAppSnapped_::_1_::dtor$2 @ 0x18076D1D0 (_XamlSnapAssistViewHost--OnAppSnapped_--_1_--dtor$2.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall std::pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>::~pair<HMONITOR__ *,winrt::Windows::Internal::Shell::SnapComponent::SnapFlyoutInstance>(
        char *a1)
{
  winrt::Windows::Foundation::IUnknown *v1; // rcx

  v1 = (winrt::Windows::Foundation::IUnknown *)(a1 + 8);
  if ( *(_QWORD *)v1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref(v1);
}
