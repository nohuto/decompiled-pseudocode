/*
 * XREFs of WPP_SF_Sd @ 0x1800CB2DC
 * Callers:
 *     ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800101F0 (-GetMute@CAudioSession@@UEAAJPEAH@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800117B0 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x18001F350 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x1800202B0 (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     sub_18007F2DA @ 0x18007F2DA (sub_18007F2DA.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x1800CA3D4 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800D7900 (-GetChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800DBC60 (-GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?MmeOnDeviceStateChanged@@YAJPEBGK@Z @ 0x18011047C (-MmeOnDeviceStateChanged@@YAJPEBGK@Z.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x18011D6D0 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_Sd(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
{
  __int64 v4; // rax

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
  }
  if ( !a4 )
    a4 = L"NULL";
  return EtwTraceMessage(a1, 43LL, a3, a2, a4);
}
