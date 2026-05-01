/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc_::_1_::catch$0 @ 0x1802C03F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z @ 0x1802E86AE (-IsRpcDisconnectError@Shell@Internal@Windows@@YA_NJ@Z.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::TabProxyWindow::v_WndProc_::_1_::catch_0(
        __int64 a1,
        __int64 a2)
{
  int v3; // ebx
  const char *v4; // r9

  v3 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 12LL);
  if ( !Windows::Internal::Shell::IsRpcDisconnectError((Windows::Internal::Shell *)(unsigned int)v3, a2) )
    wil::details::in1diag3::_FailFast_Unexpected(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x420,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      v4);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      *(wil::details::in1diag3 **)(a2 + 56),
      (void *)0x424,
      (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
      (const char *)(unsigned int)v3);
  return 0LL;
}
