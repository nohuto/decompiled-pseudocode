/*
 * XREFs of wil::details::lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___::_lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___ @ 0x18011C648
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x180017334 (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::details::lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___::_lambda_call__lambda_192e387dcf8e46dd73c68c7fa6747328___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    result = *(_QWORD *)a1;
    if ( *(_QWORD *)(*(_QWORD *)a1 + 32LL) )
      return CAudioStream::CloseAudioHandle(**(CAudioStream ***)(a1 + 8));
  }
  return result;
}
