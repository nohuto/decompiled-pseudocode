/*
 * XREFs of wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::_lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___ @ 0x18057AD58
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1_::_1_::dtor$5 @ 0x1801BCE92 (_winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePrev_ea_1801BCE92.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::_lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___(
        __int64 a1)
{
  _DWORD *result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    DwmInvalidateIconicBitmaps(*(HWND *)(*(_QWORD *)a1 + 32LL));
    result = *(_DWORD **)(a1 + 8);
    *result = -2147467259;
  }
  return result;
}
