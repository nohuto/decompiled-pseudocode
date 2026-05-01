/*
 * XREFs of ?End@?$consume_Windows_UI_Composition_ICompositionScopedBatch@UICompositionScopedBatch@Composition@UI@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180558B44
 * Callers:
 *     ?Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z @ 0x1805555C8 (-Close@CAppThumbnailWindow@@QEAAJAEBW4AnimationType@1@@Z.c)
 *     ?SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z @ 0x18055AEA0 (-SetupFlickScaleFactorAnimations@CAppThumbnailWindow@@AEAAX_N@Z.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     ?StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ @ 0x18065C390 (-StartDismissAnimation@TouchEdgeGripperWindow@@AEAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

__int64 __fastcall winrt::impl::consume_Windows_UI_Composition_ICompositionScopedBatch<winrt::Windows::UI::Composition::ICompositionScopedBatch>::End(
        _QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1 + 64LL))(*a1);
  if ( (int)result < 0 )
    winrt::throw_hresult(result);
  return result;
}
