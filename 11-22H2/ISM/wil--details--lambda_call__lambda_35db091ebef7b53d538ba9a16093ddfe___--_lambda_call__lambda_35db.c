/*
 * XREFs of wil::details::lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___::_lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___ @ 0x180063E94
 * Callers:
 *     ?ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z @ 0x1800FAA94 (-ProcessLampState@LampArrayDevice@@AEAAJPEAUViewClientListEntry@1@PEA_N@Z.c)
 *     _LampArrayDevice::ProcessLampState_::_1_::dtor$1 @ 0x1800FB72C (_LampArrayDevice--ProcessLampState_--_1_--dtor$1.c)
 * Callees:
 *     _lambda_35db091ebef7b53d538ba9a16093ddfe_::operator() @ 0x180063EB4 (_lambda_35db091ebef7b53d538ba9a16093ddfe_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___::_lambda_call__lambda_35db091ebef7b53d538ba9a16093ddfe___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    return lambda_35db091ebef7b53d538ba9a16093ddfe_::operator()();
  }
  return result;
}
