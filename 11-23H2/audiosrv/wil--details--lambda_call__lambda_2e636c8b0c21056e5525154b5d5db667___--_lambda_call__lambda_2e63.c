/*
 * XREFs of wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___ @ 0x18011C628
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     McGenEventWrite_EtwEventWriteTransfer @ 0x18008148A (McGenEventWrite_EtwEventWriteTransfer.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___::_lambda_call__lambda_2e636c8b0c21056e5525154b5d5db667___(
        __int64 a1,
        __int64 a2,
        int a3)
{
  __int64 result; // rax
  _BYTE v4[16]; // [rsp+30h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( (Microsoft_Windows_AudioEnableBits & 0x20) != 0 )
      return McGenEventWrite_EtwEventWriteTransfer(
               a1,
               (unsigned int)&VadServer_CreateStream_Task_Stop,
               a3,
               1,
               (__int64)v4);
  }
  return result;
}
