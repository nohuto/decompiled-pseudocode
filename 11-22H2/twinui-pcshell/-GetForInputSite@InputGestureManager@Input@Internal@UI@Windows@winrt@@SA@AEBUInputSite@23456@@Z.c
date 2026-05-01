/*
 * XREFs of ?GetForInputSite@InputGestureManager@Input@Internal@UI@Windows@winrt@@SA@AEBUInputSite@23456@@Z @ 0x18041881C
 * Callers:
 *     _lambda_0c5affb431bf714a4aabb516927c6336_::operator() @ 0x180235F10 (_lambda_0c5affb431bf714a4aabb516927c6336_--operator().c)
 *     _lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_::operator() @ 0x180236F2C (_lambda_b4b97c4a9a2f7bde5cf75455e97a72d5_--operator().c)
 * Callees:
 *     ??$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@?$factory_cache_entry@UInputGestureManager@Input@Internal@UI@Windows@winrt@@UIInputGestureManagerStatics@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@Z @ 0x18018D758 (--$call@AEAV_lambda_967ba6ffebbbee34df142266fb8e05a9_@@@-$factory_cache_entry@UInputGestureManag.c)
 *     ?GetForInputSite@?$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x18018D8B0 (-GetForInputSite@-$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureM.c)
 */

const struct winrt::Windows::UI::Internal::Input::InputSite *__fastcall winrt::Windows::UI::Internal::Input::InputGestureManager::GetForInputSite(
        const struct winrt::Windows::UI::Internal::Input::InputSite *a1,
        _QWORD *a2)
{
  _QWORD *v4; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v5; // [rsp+48h] [rbp+10h]

  v4 = a2;
  v5 = &qword_18098E128;
  _InterlockedIncrement64(&qword_18098E128);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics> )
  {
    winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManagerStatics<winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::GetForInputSite(
      &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>,
      a1,
      a2);
    _InterlockedDecrement64(&qword_18098E128);
  }
  else
  {
    _InterlockedDecrement64(&qword_18098E128);
    winrt::impl::factory_cache_entry<winrt::Windows::UI::Internal::Input::InputGestureManager,winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::call<_lambda_967ba6ffebbbee34df142266fb8e05a9_ &>(
      (void (__fastcall ***)(_QWORD, __int64 *, __int64 *))a1,
      (__int64)a1,
      &v4);
  }
  return a1;
}
