/*
 * XREFs of ?GetInputAnimationObject@InputAnimationTarget@Input@Internal@UI@Windows@winrt@@SA@AEBUCompositor@Composition@456@AEBUGestureAnimationData@23456@@Z @ 0x180558BE4
 * Callers:
 *     CAppThumbnailWindow::StartSwitchGestureOperationAsync$_ResumeCoro$1 @ 0x1802106D0 (CAppThumbnailWindow--StartSwitchGestureOperationAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@?$factory_cache_entry@UInputAnimationTarget@Input@Internal@UI@Windows@winrt@@UIInputAnimationTargetStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@Z @ 0x180554E68 (--$call@AEAV_lambda_46040f8e0bae6346adc61d6c0793c606_@@@-$factory_cache_entry@UInputAnimationTar.c)
 *     ?GetInputAnimationObject@?$consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics@UIInputAnimationTargetStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUCompositor@Composition@UI@Windows@3@AEBUGestureAnimationData@Input@Internal@673@@Z @ 0x180558B7C (-GetInputAnimationObject@-$consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics@UIInpu.c)
 */

const struct winrt::Windows::UI::Composition::Compositor *__fastcall winrt::Windows::UI::Internal::Input::InputAnimationTarget::GetInputAnimationObject(
        const struct winrt::Windows::UI::Composition::Compositor *a1,
        const struct winrt::Windows::UI::Internal::Input::GestureAnimationData *a2,
        __int128 *a3)
{
  _QWORD v5[4]; // [rsp+28h] [rbp-20h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  _InterlockedIncrement64(&qword_180990DF8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputAnimationTarget,winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputAnimationTargetStatics<winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>::GetInputAnimationObject(
      (__int64 **)&winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputAnimationTarget,winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>,
      a1,
      a2,
      a3);
    _InterlockedDecrement64(&qword_180990DF8);
  }
  else
  {
    _InterlockedDecrement64(&qword_180990DF8);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputAnimationTarget,winrt::Windows::UI::Internal::Input::IInputAnimationTargetStatics>::call<_lambda_46040f8e0bae6346adc61d6c0793c606_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      v5);
  }
  return a1;
}
