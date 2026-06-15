/*
 * XREFs of ?GenerateStreamIdentifier@@YA_JXZ @ 0x1800EB67C
 * Callers:
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18000F420 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 * Callees:
 *     <none>
 */

__int64 GenerateStreamIdentifier(void)
{
  __int64 result; // rax

  do
    result = _InterlockedIncrement64(&CAudioStream::s_llStreamIdentifier);
  while ( !result );
  return result;
}
