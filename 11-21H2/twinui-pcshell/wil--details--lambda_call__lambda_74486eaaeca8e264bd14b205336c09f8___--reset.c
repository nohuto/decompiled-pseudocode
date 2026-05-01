/*
 * XREFs of wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset @ 0x18057D928
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::TabProxyWindow::SetWindowLivePreviewAsync$_ResumeCoro$1 @ 0x1801BC650 (winrt--Windows--Internal--Shell--implementation--TabProxyWindow--SetWindowLivePreviewAsync$_Resu.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall wil::details::lambda_call__lambda_74486eaaeca8e264bd14b205336c09f8___::reset(__int64 a1)
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
