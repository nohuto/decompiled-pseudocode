/*
 * XREFs of ??R_lambda_967ba6ffebbbee34df142266fb8e05a9_@@QEBA@AEBUIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@Z @ 0x180417688
 * Callers:
 *     ?Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV?$function@$$A6A_NXZ@std@@@Z @ 0x1800A29D8 (-Initialize@TouchEdgeGestureProcessor@@QEAAXPEAUIImmersiveMonitorManager@@AEBV-$function@$$A6A_N.c)
 *     ?OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800E4020 (-OnViewCreated@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?GetForInputSite@?$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureManagerStatics@Input@Internal@UI@Windows@winrt@@@impl@winrt@@QEBA@AEBUInputSite@Input@Internal@UI@Windows@3@@Z @ 0x18018D8B0 (-GetForInputSite@-$consume_Windows_UI_Internal_Input_IInputGestureManagerStatics@UIInputGestureM.c)
 */

_QWORD *__fastcall _lambda_967ba6ffebbbee34df142266fb8e05a9_::operator()(_QWORD **a1, _QWORD *a2, __int64 *a3)
{
  winrt::impl::consume_Windows_UI_Internal_Input_IInputGestureManagerStatics<winrt::Windows::UI::Internal::Input::IInputGestureManagerStatics>::GetForInputSite(
    a3,
    a2,
    *a1);
  return a2;
}
