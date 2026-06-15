/*
 * XREFs of MIDL_user_allocate @ 0x18003EE80
 * Callers:
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     PolicyConfigGetDeviceFormat @ 0x18003ECB0 (PolicyConfigGetDeviceFormat.c)
 *     s_winmmGetPnpInfo @ 0x18003EDD0 (s_winmmGetPnpInfo.c)
 *     ?GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z @ 0x180052430 (-GetAudioSessions@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEAKPEAPEAPEAXPEAPEAPEAG@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180055190 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081780 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     asm_AudioServerGetApplicationSubmixFormat @ 0x1800D3670 (asm_AudioServerGetApplicationSubmixFormat.c)
 *     asm_GetApplicationSubmixes @ 0x1800D4200 (asm_GetApplicationSubmixes.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0050 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0150 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0660 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800E84E0 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z @ 0x180115CA8 (-GetEffectPackDescriptorsForEndpoint@CPolicyConfig@@QEAAJPEBGPEAPEAUEffectPackDescriptor@@PEAI@Z.c)
 *     PolicyConfigGetDeviceFormatAndSpatialSettings @ 0x1801176A0 (PolicyConfigGetDeviceFormatAndSpatialSettings.c)
 *     PolicyConfigGetDeviceFormatForConnector @ 0x180117AF0 (PolicyConfigGetDeviceFormatForConnector.c)
 *     PolicyConfigGetMixFormat @ 0x180117D90 (PolicyConfigGetMixFormat.c)
 *     s_sndevtResolveSoundAlias @ 0x18011AC40 (s_sndevtResolveSoundAlias.c)
 *     AudioServerGetAudioStreamInfo @ 0x180120B80 (AudioServerGetAudioStreamInfo.c)
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x1801210C0 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 *     AudioServerGetMixFormat @ 0x180122210 (AudioServerGetMixFormat.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014C49C (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 * Callees:
 *     <none>
 */

void *__stdcall MIDL_user_allocate(size_t size)
{
  if ( size > 0x40000 )
    return 0LL;
  else
    return operator new[](size, (const struct std::nothrow_t *)&std::nothrow);
}
