/*
 * XREFs of wil::details::lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___::_lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___ @ 0x180073A74
 * Callers:
 *     AudioServerCreateStream @ 0x180011CB0 (AudioServerCreateStream.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801205F4 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___::_lambda_call__lambda_4fb8f97105e4204af9bd3fdc1394c3a7___(
        __int64 a1)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( !RevertToSelf() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xB70,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        v1);
  }
}
