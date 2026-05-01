/*
 * XREFs of ?GetInputAnimationObject@?$consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics@UIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUCompositor@Composition@UI@Windows@3@AEBUGestureAnimationData@Input@Internal@673@@Z @ 0x180558B7C
 * Callers:
 *     ??$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@?$factory_cache_entry@UInputAnimationTarget@Input@Internal@UI@Windows@winrt@@UIInputAnimationTargetStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@Z @ 0x180554E68 (--$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@-$factory_cache_entry@UInputAnimationTar.c)
 *     ?GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor@Composition@456@AEBUGestureAnimationData@23456@@Z @ 0x180558BE4 (-GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor.c)
 *     ?StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@34567@AEBUDisplayMonitorInfoCollection@Shell@5WindowsUdk@7@@Z @ 0x18055B734 (-StartMinimizeGestureOperation@CAppThumbnailWindow@@QEAAXUInputGestureOperation@Input@Internal@U.c)
 *     ?SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@AEAAXAEBUGestureAnimationData@Input@UI@WindowsUdk@7@W4ShellView@4UI@WindowsUdk@7@UPoint@Foundation@67@@Z @ 0x180761090 (-SetupTaskbarOffsetTrigger@EdgeAnimationRelationshipManager@implementation@Animations@Shell@Inte.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

_QWORD *__fastcall winrt::impl::consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics<winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>::GetInputAnimationObject(
        __int64 **a1,
        _QWORD *a2,
        _QWORD *a3,
        __int128 *a4)
{
  __int64 *v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // rax
  signed int v8; // eax
  __int128 v10; // [rsp+40h] [rbp-18h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = *a1;
  v5 = *a4;
  v11 = 0LL;
  v7 = *v4;
  v10 = v5;
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int128 *, __int64 *))(v7 + 56))(v4, *a3, &v10, &v11);
  if ( v8 < 0 )
    winrt::throw_hresult(v8);
  *a2 = v11;
  return a2;
}
