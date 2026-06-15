/*
 * XREFs of ?StringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x18000A6E8
 * Callers:
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180003870 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000A5D8 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180050FC4 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180051820 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800551A0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?ServiceMain@@YAXKQEAPEAG@Z @ 0x180057FD0 (-ServiceMain@@YAXKQEAPEAG@Z.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081750 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0000 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0100 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0610 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800E4730 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800E49A0 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800E4B80 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800E4D20 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800E4F00 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z @ 0x1800ED1C0 (-SendSpatialResourceChangeNotification@CAudioStream@@UEAAJK_JI@Z.c)
 *     ?OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18011B704 (-OnVolumeLimitCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ.c)
 *     ?GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAPEAG@Z @ 0x18014C44C (-GetCustomDeviceFormatsSupportedOnEndpoint@EffectPack@@QEAAJPEAIPEAPEAPEAUtWAVEFORMATEX@@PEAPEAP.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCbCopyW(char *a1, unsigned __int64 a2, char *a3)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // r9
  signed __int64 v5; // r10
  unsigned __int16 v6; // ax
  unsigned __int16 *v7; // rax
  __int64 result; // rax

  v3 = a2 >> 1;
  if ( v3 - 1 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( v3 )
      *(_WORD *)a1 = 0;
  }
  else
  {
    v4 = 2147483646 - v3;
    v5 = a3 - a1;
    do
    {
      if ( !(v4 + v3) )
        break;
      v6 = *(_WORD *)&a1[v5];
      if ( !v6 )
        break;
      *(_WORD *)a1 = v6;
      a1 += 2;
      --v3;
    }
    while ( v3 );
    v7 = (unsigned __int16 *)(a1 - 2);
    if ( v3 )
      v7 = (unsigned __int16 *)a1;
    *v7 = 0;
    return v3 == 0 ? 0x8007007A : 0;
  }
  return result;
}
