/*
 * XREFs of ?StreamTypeToString@@YAPEBGW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x18003C3E8
 * Callers:
 *     ?OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x180005E70 (-OnStreamStarted@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 *     ?OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStreamInfo@@@Z @ 0x18000CD30 (-OnStreamStopped@CApplicationManager@@QEAAJPEAVCProcess@@PEAUIAudioSessionInfo@@PEAUIAudioStream.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall StreamTypeToString(unsigned int a1)
{
  if ( a1 > 2 )
    return L"unknown";
  else
    return off_180050658[a1];
}
