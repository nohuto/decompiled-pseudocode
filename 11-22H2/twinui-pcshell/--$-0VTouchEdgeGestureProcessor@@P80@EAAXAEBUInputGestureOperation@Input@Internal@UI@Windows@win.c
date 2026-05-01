/*
 * XREFs of ??$?0VTouchEdgeGestureProcessor@@P80@EAAXAEBUInputGestureOperation@Input@Internal@UI@Windows@winrt@@AEBUInputGestureOperationEventArgs@23456@@Z@?$TypedEventHandler@UInputGestureOperation@Input@Internal@UI@Windows@winrt@@UInputGestureOperationEventArgs@23456@@Foundation@Windows@winrt@@QEAA@PEAVTouchEdgeGestureProcessor@@P84@EAAXAEBUInputGestureOperation@Input@Internal@UI@23@AEBUInputGestureOperationEventArgs@67823@@Z@Z @ 0x180652930
 * Callers:
 *     _lambda_c7bdcc8427e48cc0baee46c116b31384_::operator()_winrt::Windows::UI::Internal::Input::InputGestureManager_const_&_ @ 0x18065298C (_lambda_c7bdcc8427e48cc0baee46c116b31384_--operator()_winrt--Windows--UI--Internal--Input--Input.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1801C706C (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int128 v5; // [rsp+20h] [rbp-18h]
  char *v6; // [rsp+40h] [rbp+8h]

  *(_QWORD *)&v5 = a2;
  *((_QWORD *)&v5 + 1) = a3;
  v6 = (char *)operator new(0x20uLL);
  *(_OWORD *)(v6 + 8) = v5;
  _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
  *((_DWORD *)v6 + 6) = 1;
  *(_QWORD *)v6 = &winrt::impl::delegate<winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::Internal::Input::InputGestureOperation,winrt::Windows::UI::Internal::Input::InputGestureOperationEventArgs>,_lambda_aa9b9625fc964c5e7929b898838676a2_>::`vftable';
  *a1 = v6;
  return a1;
}
