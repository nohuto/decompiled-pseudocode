/*
 * XREFs of ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x18004AA90
 * Callers:
 *     ?PublishApoTelemetry@@YAJPEBG@Z @ 0x18001110C (-PublishApoTelemetry@@YAJPEBG@Z.c)
 *     ?Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x180019650 (-Initialize@CVADServer@@UEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PE.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18004493C (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUID@@@Z @ 0x18004A188 (-GetConnectorSignalProcessingModes@@YAJPEAUIPropertyStore@@AEBU_tagpropertykey@@1PEAKPEAPEAU_GUI.c)
 *     ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18004A334 (-RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z.c)
 *     ?DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z @ 0x1800C8320 (-DevQueryResultCallback@@YAXPEAUHDEVQUERY__@@PEAXPEBU_DEV_QUERY_RESULT_ACTION_DATA@@@Z.c)
 *     ?RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z @ 0x1800D429C (-RuntimeClassInitialize@AudioEffectsWatcher@@QEAAJPEBGKHW4DiscoverySettings@@@Z.c)
 *     ?RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z @ 0x1800D47D8 (-RuntimeClassInitialize@CMMNotificationDelegator@AudioEffectsWatcher@@QEAAJPEBGPEAX@Z.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800F5DE8 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z @ 0x1800F7FC0 (-AddAuxiliaryInputStream@CSharedStreamGroupProxy@@UEAAJU_GUID@@_JPEAUSystemAudioStream@@PEBG@Z.c)
 *     ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x1800FA5D0 (-RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z.c)
 *     ?CreateInstance@CAecAttributes@@SAJPEBGW4AEC_LOOPBACK_SELECTION_MODE@@PEAPEAVCStreamGroupAttributes@@@Z @ 0x1801053D8 (-CreateInstance@CAecAttributes@@SAJPEBGW4AEC_LOOPBACK_SELECTION_MODE@@PEAPEAVCStreamGroupAttribu.c)
 *     ?GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@PEAPEAG@Z @ 0x18010553C (-GetActiveRenderEndpointWithFallbackToDefault@CAecAttributes@@QEAAJW4__MIDL___MIDL_itf_mmdevicea.c)
 *     ?GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z @ 0x18010581C (-GetCurrentLoopbackEndpointId@CAecAttributes@@QEAAJPEAPEAG@Z.c)
 *     ?GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIAudioProcess@@PEAPEAVCAppSubmixClient@@@Z @ 0x180107784 (-GetAppSubmixClientContextHelper@CProcessSubmixManager@@AEAAJKW4ProcessSubmixCapture@@PEBGPEAUIA.c)
 *     ?RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@@Z @ 0x18010FE90 (-RuntimeClassInitialize@CVirtualAudioStream@@QEAAJPEAUIAudioProcess@@KPEBGW4__MIDL___MIDL_itf_mm.c)
 *     ?RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionState@@@Z @ 0x180110000 (-RuntimeClassInitialize@VirtualAudioSessionInfo@@QEAAJPEAUIAudioProcess@@PEBG_N2W4_AudioSessionS.c)
 *     ?SetCaptureEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z @ 0x180117734 (-SetCaptureEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z.c)
 *     ?SetRenderEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z @ 0x18011782C (-SetRenderEndpoint@CBtAudioResourceManager@@QEAAJPEBG@Z.c)
 * Callees:
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
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
      v4 = (const unsigned __int16 *)&unk_18017F160;
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
