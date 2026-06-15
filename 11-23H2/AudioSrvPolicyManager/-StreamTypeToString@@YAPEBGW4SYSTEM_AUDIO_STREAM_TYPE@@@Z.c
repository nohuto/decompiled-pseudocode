/*
 * XREFs of ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18003AF58
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E20 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CCE0 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall StreamTypeToString(unsigned int a1)
{
  if ( a1 > 2 )
    return L"unknown";
  else
    return off_18004F658[a1];
}
