/*
 * XREFs of WPP_SF_S @ 0x1800DDE2C
 * Callers:
 *     ?DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180002BF0 (-DeviceRemovalEvent@CAudioSrv@@UEAAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 *     ?MmeOnDeviceRemoved@@YAJPEBG@Z @ 0x18000361C (-MmeOnDeviceRemoved@@YAJPEBG@Z.c)
 *     s_mmeNotifyDeviceAdded @ 0x180003690 (s_mmeNotifyDeviceAdded.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x180004180 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 *     ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x180004D10 (-OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z @ 0x1800054B0 (-OnDeviceRemoved@CMonitorManager@@EEAAJPEBG@Z.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180006FAC (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?FindMonitor@CMonitorManager@@AEAA?AV?$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z @ 0x180008330 (-FindMonitor@CMonitorManager@@AEAA-AV-$CComPtr@VCaptureMonitor@CMonitorManager@@@ATL@@PEBG@Z.c)
 *     ?NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z @ 0x18000A5D8 (-NotifyActiveSession@CAudioSessionManager@@AEAAXPEAVCAudioSession@@_N@Z.c)
 *     ?RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18001ECEC (-RuntimeClassInitialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 *     ?OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180023DEC (-OnSessionStateChanged@CAudioSessionManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1.c)
 *     ?NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z @ 0x180024110 (-NewState@CAudioSession@@MEAAXW4_AudioSessionState@@@Z.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18003B160 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180050FC4 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180051810 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180051DD0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180052778 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ??0CServerAudioSessionControl@@IEAA@XZ @ 0x180052870 (--0CServerAudioSessionControl@@IEAA@XZ.c)
 *     ?Dispose@CServerAudioSessionControl@@EEAAJXZ @ 0x180054310 (-Dispose@CServerAudioSessionControl@@EEAAJXZ.c)
 *     ?FinalRelease@CServerAudioSessionControl@@UEAAXXZ @ 0x180055760 (-FinalRelease@CServerAudioSessionControl@@UEAAXXZ.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x180059CBC (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     ?ServerEndpointIsStarted@@YA_NPEBG@Z @ 0x180059DB0 (-ServerEndpointIsStarted@@YA_NPEBG@Z.c)
 *     _lambda_b08f66900c5e6cc9009fb22e38011b96_::operator() @ 0x180070D9C (_lambda_b08f66900c5e6cc9009fb22e38011b96_--operator().c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081780 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z @ 0x1800819C0 (-GetAllVolumes@CServerAudioSessionControl@@UEAAJIPEAM@Z.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z @ 0x1800DBC70 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEAVCEndpointStore@@@Z.c)
 *     ?DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z @ 0x1800DF7B0 (-DisconnectStreams@CAudioSession@@UEAAJW4StreamDisconnect_StreamType@@@Z.c)
 *     ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFA20 (-GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFCC0 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0050 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800E02C0 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800E0490 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetProcessId@CAudioSession@@UEAAJPEAK@Z @ 0x1800E05D0 (-GetProcessId@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0660 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?IsExclusiveModeSession@CAudioSession@@QEAAHXZ @ 0x1800E0EDC (-IsExclusiveModeSession@CAudioSession@@QEAAHXZ.c)
 *     ?NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z @ 0x1800E15B0 (-NewState@CPerEndpointVolumeAudioSession@@EEAAXW4_AudioSessionState@@@Z.c)
 *     ?PropertyStoreCommit@CAudioSession@@UEAAJXZ @ 0x1800E2220 (-PropertyStoreCommit@CAudioSession@@UEAAJXZ.c)
 *     ?PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x1800E2290 (-PropertyStoreGetAt@CAudioSession@@UEAAJKPEAU_tagpropertykey@@@Z.c)
 *     ?PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z @ 0x1800E2320 (-PropertyStoreGetCount@CAudioSession@@UEAAJPEAK@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800E4780 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800E4BD0 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800E4F50 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     ?SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x1800E51D0 (-SetAllVolumes@CServerAudioSessionControl@@UEAAJIPEBMPEBU_GUID@@PEAH@Z.c)
 *     ?BeginTermination@CAudioSrv@@UEAAJXZ @ 0x1800EF650 (-BeginTermination@CAudioSrv@@UEAAJXZ.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800EFE4C (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?LogError@@YAXPEBGZZ @ 0x180100E14 (-LogError@@YAXPEBGZZ.c)
 *     ?LogOutput@@YAXPEBGZZ @ 0x180100ED4 (-LogOutput@@YAXPEBGZZ.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180110D94 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18011117C (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127280 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x180128510 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x18012CA38 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S(__int64 a1, unsigned __int16 a2, __int64 a3, const wchar_t *a4)
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
