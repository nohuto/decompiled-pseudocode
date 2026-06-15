/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80
 * Callers:
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400089B0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000B1F4 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B748 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x1400119CC (-Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 *     ?CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14001327C (-CreateStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSYSTEM_AUDIO_STREAM.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z @ 0x140017D24 (-TryGetApoDeviceIdPKey@@YAJAEBU_GUID@@PEBGPEAPEAG@Z.c)
 *     ?InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z @ 0x14002ACC0 (-InitLoggingInfo@CAudioPump@@UEAAJPEBU_tlgProvider_t@@U_GUID@@PEBG@Z.c)
 *     ?CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAV1@PEAUtWAVEFORMATEX@@PEAUSYSTEM_AUDIO_STREAM@@PEAPEAV1@@Z @ 0x14005944C (-CreateBridgeStreamPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM.c)
 *     ?CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CONVERTER_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x140059894 (-CreateFormatConverterPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEBUFORMAT_CON.c)
 * Callees:
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 */

__int64 __fastcall StringCchCopyNExW(char *a1, unsigned __int64 a2, const unsigned __int16 *a3, unsigned __int64 a4)
{
  const unsigned __int16 *v4; // r10
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // rax
  signed __int64 v9; // r10
  unsigned __int16 *v10; // rdx
  __int64 v11; // r8
  unsigned __int16 v12; // cx
  __int64 result; // rax
  unsigned __int64 v14; // r11
  unsigned int v15; // ecx

  v4 = a3;
  if ( !a1 && a2 || a2 > 0x7FFFFFFF || a4 >= 0x7FFFFFFF )
  {
    result = 2147942487LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    if ( !a3 )
    {
      v4 = (const unsigned __int16 *)&unk_1400A49E8;
      a4 = 0LL;
    }
    if ( a2 )
    {
      v7 = a4 - a2;
      v8 = a2;
      v9 = (char *)v4 - a1;
      v10 = (unsigned __int16 *)a1;
      v11 = 0LL;
      while ( v7 + v8 )
      {
        v12 = *(unsigned __int16 *)((char *)v10 + v9);
        if ( !v12 )
          break;
        *v10 = v12;
        ++v11;
        ++v10;
        if ( !--v8 )
        {
          *(v10 - 1) = 0;
          return 2147942522LL;
        }
      }
      v14 = a2 - v11;
      *v10 = 0;
      if ( v14 > 1 && 2 * v14 > 2 )
        memset_0(&a1[2 * v11 + 2], 0, 2 * v14 - 2);
      return 0LL;
    }
    if ( !a4 || !*v4 )
      return 0LL;
    v15 = -2147024774;
    if ( !a1 )
      return (unsigned int)-2147024809;
    return v15;
  }
  return result;
}
