/*
 * XREFs of ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x140005ABC
 * Callers:
 *     ?ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z @ 0x140005A58 (-ValidateStreamDescriptor@@YAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@@Z.c)
 *     ?CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@PEAUIAudioGraphCallback@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140057740 (-CreateStream@CSystemAudioDeviceExclusive@@UEAAJPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUAUDIO_DE.c)
 *     ?ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z @ 0x140076658 (-ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateAudioStreamDirection(unsigned int a1)
{
  if ( a1 > 1 )
    return a1 != 2 ? 0x80070057 : 0;
  else
    return 0LL;
}
