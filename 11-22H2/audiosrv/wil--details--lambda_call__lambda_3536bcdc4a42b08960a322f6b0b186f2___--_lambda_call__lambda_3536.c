/*
 * XREFs of wil::details::lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___::_lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___ @ 0x18011C6D4
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180016F54 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___::_lambda_call__lambda_3536bcdc4a42b08960a322f6b0b186f2___(
        __int64 a1)
{
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return CAudioSession::RemoveStream(
             *(CAudioSession **)(*(_QWORD *)a1 + 144LL),
             **(struct CAudioStream ***)(a1 + 8),
             1);
  }
  return result;
}
