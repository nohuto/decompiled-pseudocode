/*
 * XREFs of ?Append@?$consume_Windows_Foundation_Collections_IVector@U?$IVector@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@winrt@@@Collections@Foundation@Windows@winrt@@UCompositionAnimationTriggerValuePartner@Internal@Composition@UI@45@@impl@winrt@@QEBA@AEBUCompositionAnimationTriggerValuePartner@Internal@Composition@UI@Windows@3@@Z @ 0x180555424
 * Callers:
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AEA0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ @ 0x18055B380 (-SetupTriggersForDragDirectionChange@CAppThumbnailWindow@@AEAAXXZ.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_Foundation_Collections_IVector<winrt::Windows::Foundation::Collections::IVector<winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>,winrt::Windows::UI::Composition::Internal::CompositionAnimationTriggerValuePartner>::Append(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*a1 + 104LL))(*a1, *a2);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
