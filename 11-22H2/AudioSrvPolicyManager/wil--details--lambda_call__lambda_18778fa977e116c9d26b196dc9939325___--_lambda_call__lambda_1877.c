/*
 * XREFs of wil::details::lambda_call__lambda_18778fa977e116c9d26b196dc9939325___::_lambda_call__lambda_18778fa977e116c9d26b196dc9939325___ @ 0x180016108
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$2 @ 0x180048D80 (_CApplicationManager--RpcGetProcess_--_1_--dtor$2.c)
 *     _CWindowsPolicyManager::InitAccessibilityAudioSettings_::_1_::dtor$0 @ 0x180049DD2 (_CWindowsPolicyManager--InitAccessibilityAudioSettings_--_1_--dtor$0.c)
 *     _ApplicationSpecificEndpointInfo::AttemptToUpdateEndpointInterfaceId_::_1_::dtor$3 @ 0x18004B334 (_ApplicationSpecificEndpointInfo--AttemptToUpdateEndpointInterfaceId_--_1_--dtor$3.c)
 *     _ApplicationSpecificEndpointInfo::RuntimeClassInitialize_::_1_::dtor$0 @ 0x18004B48D (_ApplicationSpecificEndpointInfo--RuntimeClassInitialize_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall wil::details::lambda_call__lambda_18778fa977e116c9d26b196dc9939325___::_lambda_call__lambda_18778fa977e116c9d26b196dc9939325___(
        __int64 a1)
{
  RPC_STATUS result; // eax

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    return RpcRevertToSelf();
  }
  return result;
}
