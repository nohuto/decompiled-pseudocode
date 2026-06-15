/*
 * XREFs of wil::details::lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___::_lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___ @ 0x14005EADC
 * Callers:
 *     ?GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z @ 0x14005F300 (-GetClientReleaseEvent@CAudioDeviceGraph@@UEAAJIPEAUCP_EVENT_METADATA_BLOB@@0@Z.c)
 * Callees:
 *     _lambda_70348e31779f8b8cef919996b578f4f9_::operator() @ 0x14005EDC4 (_lambda_70348e31779f8b8cef919996b578f4f9_--operator().c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___::_lambda_call__lambda_70348e31779f8b8cef919996b578f4f9___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return lambda_70348e31779f8b8cef919996b578f4f9_::operator()();
  }
  return result;
}
