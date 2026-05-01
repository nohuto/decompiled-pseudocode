/*
 * XREFs of ??1?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@XZ @ 0x18041DB88
 * Callers:
 *     ?Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z @ 0x180423140 (-Show@CControlCenterExperienceManager@@UEAAJPEAUHSTRING__@@EEEE_K11@Z.c)
 *     _CControlCenterExperienceManager::Show_::_1_::dtor$4 @ 0x180423664 (_CControlCenterExperienceManager--Show_--_1_--dtor$4.c)
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1805587E0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     _CAppThumbnailWindow::DirectionChangeThresholdTriggerFiredHandler_::_1_::dtor$1 @ 0x180558931 (_CAppThumbnailWindow--DirectionChangeThresholdTriggerFiredHandler_--_1_--dtor$1.c)
 *     ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180558960 (-DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPar.c)
 *     _CAppThumbnailWindow::DirectionChangeTriggerFiredHandler_::_1_::dtor$1 @ 0x180558A74 (_CAppThumbnailWindow--DirectionChangeTriggerFiredHandler_--_1_--dtor$1.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AEA0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     _CAppThumbnailWindow::SetupFlickScaleFactorAnimations_::_1_::dtor$17 @ 0x18055B362 (_CAppThumbnailWindow--SetupFlickScaleFactorAnimations_--_1_--dtor$17.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 *     _CAppThumbnailWindow::SetupTriggersForDragDirectionChange_::_1_::dtor$12 @ 0x18055B661 (_CAppThumbnailWindow--SetupTriggersForDragDirectionChange_--_1_--dtor$12.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     _CAppThumbnailWindow::StartMinimizeGestureOperation_::_1_::dtor$21 @ 0x18055C943 (_CAppThumbnailWindow--StartMinimizeGestureOperation_--_1_--dtor$21.c)
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180761090 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 *     _winrt::Windows::Internal::Shell::Animations::implementation::EdgeAnimationRelationshipManager::SetupTaskbarOffsetTrigger_::_1_::dtor$6 @ 0x180761480 (_winrt--Windows--Internal--Shell--Animations--implementation--EdgeAnimationRelation_ea_180761480.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 */

void __fastcall winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::~iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
        __int64 a1)
{
  _BYTE *v1; // rax

  v1 = *(_BYTE **)(a1 + 8);
  if ( v1 )
    *v1 = 1;
  if ( !*(_BYTE *)(a1 + 16) )
    *(_QWORD *)a1 = 0LL;
  if ( *(_QWORD *)a1 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)a1);
}
