/*
 * XREFs of ?ValidateBridgeStreamDescriptor@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@@Z @ 0x140076608
 * Callers:
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x140063540 (-CreateBridgeStreamToTargetStreamGroup@CStreamGroup@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStr.c)
 *     ?CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIStreamGroup@@PEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1400773B0 (-CreateBridgeStreamToTargetStreamGroup@CStreamInstance@@UEAAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUI.c)
 * Callees:
 *     ?ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z @ 0x140005ABC (-ValidateAudioStreamDirection@@YAJW4SYSTEM_AUDIO_STREAM_TYPE@@@Z.c)
 */

__int64 __fastcall ValidateBridgeStreamDescriptor(struct BRIDGE_STREAM_DESCRIPTOR *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  if ( !a1 )
    return 2147500035LL;
  result = ValidateAudioStreamDirection(*(_DWORD *)a1);
  if ( (int)result >= 0 )
    return v2;
  return result;
}
