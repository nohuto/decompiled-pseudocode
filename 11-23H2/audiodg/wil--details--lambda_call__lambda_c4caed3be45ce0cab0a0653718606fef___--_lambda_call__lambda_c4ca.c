/*
 * XREFs of wil::details::lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___::_lambda_call__lambda_c4caed3be45ce0cab0a0653718606fef___ @ 0x140060830
 * Callers:
 *     ?CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14001B78C (-CreateDeviceEndpointInstance@CEndpointInstance@@SAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$0 @ 0x140035FCE (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$0.c)
 * Callees:
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x140037F3C (McGenEventWrite_EtwEventWriteTransfer.c)
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
               1LL,
               (__int64)v4);
  }
  return result;
}
