/*
 * XREFs of ??R?$_Func_class@X$$V@std@@QEBAXXZ @ 0x18003ACEC
 * Callers:
 *     ?EnableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x18003AC88 (-EnableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x18003ACBC (-DisableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     _lambda_52ac8a1d7cd5e113393ebfb57ce15774_::_lambda_invoker_cdecl_ @ 0x1801A6C20 (_lambda_52ac8a1d7cd5e113393ebfb57ce15774_--_lambda_invoker_cdecl_.c)
 *     _lambda_3ef64bf90f44864a6bd4620ac4549ef0_::operator()_winrt::Windows::UI::Internal::Input::ShellGesturesController_ @ 0x18058CA54 (_lambda_3ef64bf90f44864a6bd4620ac4549ef0_--operator()_winrt--Windows--UI--Internal--Input--Shell.c)
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x18058F500 (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_class<void,>::operator()(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 56);
  if ( !v1 )
  {
    std::_Xbad_function_call();
    __debugbreak();
    JUMPOUT(0x18024660FLL);
  }
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
}
