/*
 * XREFs of ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180028C1C
 * Callers:
 *     ??0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18000FF0C (--0StreamResourceConsumer@@QEAA@PEBG0KU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_.c)
 *     ?AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@KPEA_K@Z @ 0x180011F60 (-AcquireSaDeviceResource@CConstraintModelResourceManager@@UEAAJPEAVCEndpointCharacteristics@@U_G.c)
 *     MigrateSpatialProperties @ 0x18001997C (MigrateSpatialProperties.c)
 *     ?ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigurationSettings@@@Z @ 0x180022BF0 (-ReadConfiguration@EffectPackConfiguration@@QEAAJPEAUIPropertyStore@@0W4ValidEffectPackConfigura.c)
 *     ?InitTopologyIdInfo@EndpointDevice@@AEAAJXZ @ 0x180027C60 (-InitTopologyIdInfo@EndpointDevice@@AEAAJXZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800377B0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 *     ?InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@KPEAPEAG@Z @ 0x18003E8E8 (-InitializePolicy@CVADServer@@IEAAJPEAUIAudioProcess@@PEAVCEndpointCharacteristics@@PEBU_GUID@@K.c)
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CBD0 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18005CE2C (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18005D3CC (--0AtmosCheck@@QEAA@XZ.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x18005FC60 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x18005FF7C (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800E8490 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1800FE5F4 (--0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z.c)
 *     ??0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z @ 0x1800FE664 (--0ResourceGroupInstance@@QEAA@_KPEAUIKsControl@@PEBGK@Z.c)
 *     ?SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z @ 0x1801021CC (-SetAssignedResourceGroup@ResourceGroupInstance@@AEAAJH@Z.c)
 *     ?UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDIO_DIRECTION@@@Z @ 0x180102484 (-UpdateResourceEndpoint@CConstraintModelResourceManager@@AEAAXW4_AudioResourceType@@PEBG1KW4AUDI.c)
 *     AudioServerGetAudioStreamInfo @ 0x180120B30 (AudioServerGetAudioStreamInfo.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x180142E30 (-RuntimeClassInitialize@SpatialAudioDevicePropertyWriter@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ?QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z @ 0x18014696C (-QueryRegisterForOverrides@SpatialAudioEncoderProperties@@AEAAJAEBU_GUID@@@Z.c)
 *     ?CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x1801545D0 (-CreateGlobalEffectPackConfiguration@EffectPackConfiguration@@SAJU_GUID@@AEAV-$shared_ptr@$$CBUE.c)
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18015B36C (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 *     ?ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z @ 0x180162B24 (-ParseSimpleAttribute@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEBGPEAGI@Z.c)
 *     ?ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z @ 0x180162FD4 (-ParseText@CConstraintModelXMLParser@@AEAAJPEAUIXmlReader@@PEAGI@Z.c)
 *     ?SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndpointDevice@@@Z @ 0x180165680 (-SetActiveEndpoint@PhoneTopology@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAUIEndp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyW(char *a1, __int64 a2, char *a3)
{
  __int64 v3; // r9
  signed __int64 v4; // r10
  unsigned __int16 v5; // ax
  unsigned __int16 *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)&a1[v4];
      if ( !v5 )
        break;
      *(_WORD *)a1 = v5;
      a1 += 2;
      --a2;
    }
    while ( a2 );
    v6 = (unsigned __int16 *)(a1 - 2);
    if ( a2 )
      v6 = (unsigned __int16 *)a1;
    *v6 = 0;
    return a2 == 0 ? 0x8007007A : 0;
  }
  return result;
}
