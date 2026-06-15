/*
 * XREFs of WPP_SF_Sd @ 0x1800E3AE8
 * Callers:
 *     s_mmeNotifyDeviceStateChanged @ 0x180002200 (s_mmeNotifyDeviceStateChanged.c)
 *     ?OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z @ 0x1800083E0 (-OnDeviceStateChanged@CMonitorManager@@EEAAJPEBGK@Z.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?StateCheckExpired@CAudioSession@@AEAA?AW4StateCheckExpirationResult@1@XZ @ 0x180024CF8 (-StateCheckExpired@CAudioSession@@AEAA-AW4StateCheckExpirationResult@1@XZ.c)
 *     ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800DFAC0 (-GetChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetMute@CAudioSession@@UEAAJPEAH@Z @ 0x1800E0390 (-GetMute@CAudioSession@@UEAAJPEAH@Z.c)
 *     ?SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z @ 0x1800E3030 (-SetMute@CAudioSession@@UEAAJHPEBU_GUID@@HPEAH@Z.c)
 *     ?GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800E4440 (-GetChannelVolume@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180110D44 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
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
