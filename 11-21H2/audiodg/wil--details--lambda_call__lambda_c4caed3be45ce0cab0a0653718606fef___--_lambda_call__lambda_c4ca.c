/*
 * XREFs of wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x14005C844
 * Callers:
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$0 @ 0x140036732 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x14001B5B8 (McGenEventWrite_EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 result; // rax
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      return McGenEventWrite_EtwEventWriteTransfer(
               a1,
               (__int64)&CreateDeviceEndpointInstance_Task_Stop,
               a3,
               1,
               (__int64)v4);
  }
  return result;
}
