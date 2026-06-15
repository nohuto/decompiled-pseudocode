/*
 * XREFs of wil::details::lambda_call__lambda_84296fe18ba082025981336f3f60a145___::_lambda_call__lambda_84296fe18ba082025981336f3f60a145___ @ 0x180068410
 * Callers:
 *     ?DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180145B04 (-DeriveAndCacheMixFormatsForConnector@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioen.c)
 *     _CEndpointCharacteristics::DeriveAndCacheMixFormatsForConnector_::_1_::dtor$2 @ 0x180146327 (_CEndpointCharacteristics--DeriveAndCacheMixFormatsForConnector_--_1_--dtor$2.c)
 * Callees:
 *     _lambda_84296fe18ba082025981336f3f60a145_::operator() @ 0x180068C54 (_lambda_84296fe18ba082025981336f3f60a145_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_84296fe18ba082025981336f3f60a145___::_lambda_call__lambda_84296fe18ba082025981336f3f60a145___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 24) )
  {
    *(_BYTE *)(a1 + 24) = 0;
    return lambda_84296fe18ba082025981336f3f60a145_::operator()();
  }
  return result;
}
