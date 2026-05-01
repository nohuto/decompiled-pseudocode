/*
 * XREFs of _winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::_parameters_ @ 0x180282434
 * Callers:
 *     winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection$_InitCoro$2 @ 0x1802828E8 (winrt--Windows--Internal--Shell--implementation--SwitchConnectionHandler--CloseCloudPCConnection.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::CloseCloudPCConnection_::_47_::_parameters_::_parameters_(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4)
{
  __int64 v4; // rax

  *a1 = a2;
  a1[1] = 0LL;
  a1[2] = 0LL;
  a1[1] = *a3;
  a1[2] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v4 = *a4;
  *a4 = 0LL;
  a1[3] = v4;
  return a1;
}
