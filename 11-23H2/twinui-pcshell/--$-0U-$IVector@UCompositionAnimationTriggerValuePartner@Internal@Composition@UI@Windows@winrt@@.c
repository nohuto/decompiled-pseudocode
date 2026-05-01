/*
 * XREFs of ??$?0U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$iterable@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x180554270
 * Callers:
 *     ?DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x1805587E0 (-DirectionChangeThresholdTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationT.c)
 *     ?DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPartner@Internal@Composition@UI@Windows@winrt@@AEBUCompositionAnimationTriggerPartnerFiredEventArgs@34567@@Z @ 0x180558960 (-DirectionChangeTriggerFiredHandler@CAppThumbnailWindow@@AEAAXAEBUCompositionAnimationTriggerPar.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AEA0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180761090 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 * Callees:
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::param::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::iterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, _QWORD *, __int64 *))
{
  void (__fastcall ***v3)(_QWORD, _QWORD *, __int64 *); // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_BYTE *)(a1 + 16) = 1;
  v3 = *a2;
  if ( *a2 )
  {
    v6 = 0LL;
    (**v3)(
      v3,
      winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>>,
      &v6);
    v5 = v6;
  }
  else
  {
    v5 = 0LL;
  }
  winrt::Windows::Foundation::IUnknown::operator=(
    (winrt::Windows::Foundation::IUnknown *)a1,
    (winrt::Windows::Foundation::IUnknown *)&v5);
  if ( v5 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v5);
  return a1;
}
