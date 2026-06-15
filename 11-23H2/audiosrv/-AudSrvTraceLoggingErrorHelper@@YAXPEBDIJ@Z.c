/*
 * XREFs of ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758
 * Callers:
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x180004BC0 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x180005870 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     AudioServerDestroyStream @ 0x1800128C0 (AudioServerDestroyStream.c)
 *     ?ToString@CAppInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x1800192D4 (-ToString@CAppInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@.c)
 *     ?GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z @ 0x180019C30 (-GetVolumeRange@CVolumeControlBase@@UEAAJIPEAM00@Z.c)
 *     ?GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z @ 0x180019CF0 (-GetMasterVolumeLevel@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?GetLevelData@CVolumeHardware@@MEAAJXZ @ 0x180019EF0 (-GetLevelData@CVolumeHardware@@MEAAJXZ.c)
 *     ?GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z @ 0x18001A2B0 (-GetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJPEAM@Z.c)
 *     ?Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z @ 0x18001C0B0 (-Initialize@CVolumeControlBase@@MEAAJPEAUIMMDevice@@@Z.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x18001C644 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 *     ?ToMigratedString@CAudioEndpointId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18001D200 (-ToMigratedString@CAudioEndpointId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@.c)
 *     ?FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18001D608 (-FindMeterControlForEndpoint@CMeterHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?RegisterForNotifications@CMuteHardware@@UEAAJXZ @ 0x18001D810 (-RegisterForNotifications@CMuteHardware@@UEAAJXZ.c)
 *     ?FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18001D888 (-FindMuteControlForEndpoint@CMuteHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18001DAC0 (-RegisterForNotifications@CVolumeHardware@@UEAAJXZ.c)
 *     ?FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18001DB20 (-FindVolumeControlForEndpoint@CVolumeHardware@@IEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180020EF8 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x1800211F8 (-Initialize@CVolumeHardware@@AEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteControlHandler@@@Z @ 0x1800212E0 (-Make@CMuteHardware@@SAJPEAUIMMDevice@@PEAUIControlChangeNotify@@PEAUIPartsList@@PEAPEAVIMuteCon.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18003DD98 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     PolicyConfigGetDeviceFormat @ 0x18003ECB0 (PolicyConfigGetDeviceFormat.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z @ 0x18003EEA0 (-Initialize@CAudioSessionInstanceId@@QEAAJPEAUIAudioProcess@@PEBGPEBU_GUID@@H@Z.c)
 *     ?Initialize@CAudioEndpointId@@QEAAJPEBG@Z @ 0x18003EF38 (-Initialize@CAudioEndpointId@@QEAAJPEBG@Z.c)
 *     ?Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z @ 0x18003EFC8 (-Initialize@CAppAudioSessionId@@QEAAJPEAUIAudioProcess@@PEBU_GUID@@H@Z.c)
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x180046B90 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x180046C2C (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180048000 (-Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?GetMute@CMuteControlBase@@UEAAJPEAH@Z @ 0x180048690 (-GetMute@CMuteControlBase@@UEAAJPEAH@Z.c)
 *     ?Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x18004C060 (-Initialize@SESSION_EVENT@@QEAAJKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x18004C750 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004C794 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004C840 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x180050D30 (-Disconnect@CPerStreamVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z @ 0x180050FC4 (-NotifyClientOfDisconnection@CAudioSession@@QEAAJW4AudioSessionDisconnectReason@@@Z.c)
 *     ?Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z @ 0x180051320 (-Invoke@CAudioSessionManagerNotification@@UEAAJVCAudioSessionNotificationProcess@@@Z.c)
 *     AudioServerGetChannelCount @ 0x1800515A0 (AudioServerGetChannelCount.c)
 *     ?OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@Z @ 0x180051820 (-OnStateChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@W4_AudioSessionState@@1@.c)
 *     AudioServerGetAudioSession @ 0x180051960 (AudioServerGetAudioSession.c)
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180051A50 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     AudioServerGetAllVolumes @ 0x180051C40 (AudioServerGetAllVolumes.c)
 *     ?GetAllVolumes@CVADServer@@UEAAJIPEAM@Z @ 0x180051D10 (-GetAllVolumes@CVADServer@@UEAAJIPEAM@Z.c)
 *     ?GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSessionControl@@@Z @ 0x180051DE0 (-GetAudioSessionControl@CAudioSessionManager@@UEAAJK_NPEAVCAudioSession@@PEAPEAVCServerAudioSess.c)
 *     ?GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180052270 (-GetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioSessionControl@@@Z @ 0x180052788 (-CreateAudioSessionControl@CAudioSessionManager@@QEAAJPEAVCAudioSession@@K_NPEAPEAVCServerAudioS.c)
 *     ?SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z @ 0x180052C40 (-SetPropertyValue@CPolicyConfig@@UEAAJPEBGHAEBU_tagpropertykey@@PEBUtagPROPVARIANT@@@Z.c)
 *     ?SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARIANT@@@Z @ 0x180052CE0 (-SetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@AEBUtagPROPVARI.c)
 *     ?TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z @ 0x180052D6C (-TryGetDevicePropertyStore@@YAJPEAUIMMDevice@@HKPEAPEAUIPropertyStore@@@Z.c)
 *     ?AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x180053CA0 (-AddAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     AudioSessionGetState @ 0x180054520 (AudioSessionGetState.c)
 *     ?FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z @ 0x180054B10 (-FinishConstruction@CServerAudioSessionControl@@UEAAJK_NPEAVCAudioSession@@@Z.c)
 *     ?GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800551A0 (-GetInstanceId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x180058230 (-Initialize@CAudioSrv@@UEAAJJ@Z.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x18005889C (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ?GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180062E40 (-GetChannelVolumeLevel@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z @ 0x180064A90 (-GetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEAM@Z.c)
 *     ?GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z @ 0x180065AC0 (-GetChannelCount@CVolumeControlBase@@UEAAJPEAI@Z.c)
 *     _lambda_7800ae632c03a9c3e8babfed67b18905_::operator() @ 0x18006B458 (_lambda_7800ae632c03a9c3e8babfed67b18905_--operator().c)
 *     sub_180080843 @ 0x180080843 (sub_180080843.c)
 *     sub_180080A05 @ 0x180080A05 (sub_180080A05.c)
 *     sub_180080AF7 @ 0x180080AF7 (sub_180080AF7.c)
 *     ?GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z @ 0x180081750 (-GetDisplayName@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     AudioSessionGetAllVolumes @ 0x180081BD0 (AudioSessionGetAllVolumes.c)
 *     AudioSessionGetChannelCount @ 0x180081CA0 (AudioSessionGetChannelCount.c)
 *     AudioSessionGetDisplayName @ 0x180081D60 (AudioSessionGetDisplayName.c)
 *     AudioSessionGetProcessId @ 0x180081E20 (AudioSessionGetProcessId.c)
 *     AudioSessionIsSystemSoundsSession @ 0x180081EE0 (AudioSessionIsSystemSoundsSession.c)
 *     AudioSessionSetDisplayName @ 0x180081F90 (AudioSessionSetDisplayName.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z @ 0x180082B7C (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG0@Z.c)
 *     ?GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z @ 0x180082F60 (-GetChannelsPeakValues@CMeterSoftware@@UEAAJIPEAM@Z.c)
 *     ?GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z @ 0x1800830E0 (-GetMeteringChannelCount@CMeterControlBase@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CMeterHardware@@UEAAJPEAM@Z @ 0x180083160 (-GetPeakValue@CMeterHardware@@UEAAJPEAM@Z.c)
 *     ?GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z @ 0x180083290 (-GetPeakValue@CMeterSoftware@@UEAAJPEAM@Z.c)
 *     sub_180086BC8 @ 0x180086BC8 (sub_180086BC8.c)
 *     sub_180086C23 @ 0x180086C23 (sub_180086C23.c)
 *     sub_180086D21 @ 0x180086D21 (sub_180086D21.c)
 *     sub_18008D499 @ 0x18008D499 (sub_18008D499.c)
 *     sub_18008E709 @ 0x18008E709 (sub_18008E709.c)
 *     sub_18008E799 @ 0x18008E799 (sub_18008E799.c)
 *     sub_18008E7CB @ 0x18008E7CB (sub_18008E7CB.c)
 *     sub_18008EA79 @ 0x18008EA79 (sub_18008EA79.c)
 *     ?CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z @ 0x1800DF300 (-CompleteConstruction@CPerEndpointVolumeAudioSession@@EEAAJK@Z.c)
 *     ?Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x1800DF6C0 (-Disconnect@CPerEndpointVolumeAudioSession@@EEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DF9D0 (-GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFB70 (-GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z @ 0x1800DFC70 (-GetChannelsPeakValues@CAudioSession@@UEAAJIPEAM@Z.c)
 *     ?GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0000 (-GetIconPath@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0100 (-GetId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800E0270 (-GetMeteringChannelCount@CAudioSession@@UEAAJPEAI@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x1800E0440 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z @ 0x1800E0610 (-GetStreamSwitchId@CAudioSession@@UEAAJPEAPEAG@Z.c)
 *     ?GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z @ 0x1800E0978 (-GetVolumeStrip@CPerEndpointVolumeAudioSession@@AEAAJPEAPEAUIVolumeStrip@@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x1800E1BEC (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x1800E2350 (-PropertyStoreGetValue@CAudioSession@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z @ 0x1800E2AA0 (-SetDisplayName@CAudioSession@@UEAAJPEBGPEBU_GUID@@_N@Z.c)
 *     ?SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z @ 0x1800E2E80 (-SetIconPath@CAudioSession@@UEAAJPEBGPEBU_GUID@@@Z.c)
 *     ?OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@@@Z @ 0x1800E4730 (-OnChannelVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@KQEAMKPEBU_GUID@.c)
 *     ?OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800E49A0 (-OnDisplayNameChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z @ 0x1800E4B80 (-OnGroupingParamChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@U_GUID@@PEBU3@@Z.c)
 *     ?OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z @ 0x1800E4D20 (-OnIconPathChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@PEBGPEBU_GUID@@@Z.c)
 *     ?OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z @ 0x1800E4F00 (-OnVolumeChanged@CServerAudioSessionControl@@UEAAJPEAUIAudioSessionInfo@@M_NPEBU_GUID@@@Z.c)
 *     AudioSessionGetChannelVolume @ 0x1800E5570 (AudioSessionGetChannelVolume.c)
 *     AudioSessionGetDuckingState @ 0x1800E56E0 (AudioSessionGetDuckingState.c)
 *     AudioSessionGetGroupingParam @ 0x1800E57A0 (AudioSessionGetGroupingParam.c)
 *     AudioSessionGetIconPath @ 0x1800E5860 (AudioSessionGetIconPath.c)
 *     AudioSessionGetId @ 0x1800E5920 (AudioSessionGetId.c)
 *     AudioSessionGetInstanceId @ 0x1800E59E0 (AudioSessionGetInstanceId.c)
 *     AudioSessionGetIsComms @ 0x1800E5AA0 (AudioSessionGetIsComms.c)
 *     AudioSessionGetLastActivation @ 0x1800E5B60 (AudioSessionGetLastActivation.c)
 *     AudioSessionGetLastInactivation @ 0x1800E5C20 (AudioSessionGetLastInactivation.c)
 *     AudioSessionGetMute @ 0x1800E5CE0 (AudioSessionGetMute.c)
 *     AudioSessionGetStreamSwitchId @ 0x1800E5DA0 (AudioSessionGetStreamSwitchId.c)
 *     AudioSessionGetVolume @ 0x1800E5E60 (AudioSessionGetVolume.c)
 *     AudioSessionMeterGetChannelsPeakValues @ 0x1800E5F20 (AudioSessionMeterGetChannelsPeakValues.c)
 *     AudioSessionMeterGetMeteringChannelCount @ 0x1800E5FF0 (AudioSessionMeterGetMeteringChannelCount.c)
 *     AudioSessionMeterGetPeakValue @ 0x1800E60B0 (AudioSessionMeterGetPeakValue.c)
 *     AudioSessionPropertyStoreCommit @ 0x1800E6170 (AudioSessionPropertyStoreCommit.c)
 *     AudioSessionPropertyStoreGetAt @ 0x1800E6220 (AudioSessionPropertyStoreGetAt.c)
 *     AudioSessionPropertyStoreGetCount @ 0x1800E62F0 (AudioSessionPropertyStoreGetCount.c)
 *     AudioSessionPropertyStoreGetValue @ 0x1800E63B0 (AudioSessionPropertyStoreGetValue.c)
 *     AudioSessionPropertyStoreSetValue @ 0x1800E6480 (AudioSessionPropertyStoreSetValue.c)
 *     AudioSessionSetDuckingPreference @ 0x1800E6740 (AudioSessionSetDuckingPreference.c)
 *     AudioSessionSetWindowId @ 0x1800E6A80 (AudioSessionSetWindowId.c)
 *     ?DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z @ 0x1800E7FA0 (-DeleteAudioSessionClientNotification@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@@Z.c)
 *     ?GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z @ 0x1800E8490 (-GetCurrentSession@CAudioSessionManager@@UEAAJPEAUIAudioProcess@@PEBU_GUID@@KKHPEAPEAXPEAPEAG@Z.c)
 *     ?ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z @ 0x1800EFDFC (-ProcessAwayModeStateChange@CAudioSrv@@AEAAKE@Z.c)
 *     ?ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ @ 0x180109B40 (-ResetEndpoint@CBaseStreamGroupProxy@@UEAAJXZ.c)
 *     ?ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@Z @ 0x18010FBEC (-ToStreamSwitchString@CAudioSessionInstanceId@@QEBAJAEAV-$CStringT@GV-$StrTraitATL@GV-$ChTraitsC.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x18010FD50 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 *     ?GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z @ 0x18010FDB0 (-GetChannelsPeakValues@CMeterHardware@@UEAAJIPEAM@Z.c)
 *     ?QueryInterface@CMeterControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18010FFE0 (-QueryInterface@CMeterControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x180110074 (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     s_midiOpenPort @ 0x1801102E0 (s_midiOpenPort.c)
 *     ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x180110B80 (-InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadMuteState@CMuteSoftware@@AEAAJXZ @ 0x180110D44 (-LoadMuteState@CMuteSoftware@@AEAAJXZ.c)
 *     ?QueryInterface@CMuteControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180111410 (-QueryInterface@CMuteControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetMuteValue@CMuteSoftware@@UEAAJH@Z @ 0x1801116E0 (-SetMuteValue@CMuteSoftware@@UEAAJH@Z.c)
 *     ??1CPdcActivationClient@@QEAA@XZ @ 0x180111A28 (--1CPdcActivationClient@@QEAA@XZ.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180116098 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEAUIMMDevice@@HAEBU_tagpropertykey@@PEAUtagPROPVARI.c)
 *     ?GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180116148 (-GetPropertyStoreProperty@CPolicyConfig@@SAJPEBGHAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z.c)
 *     ?GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z @ 0x1801161F0 (-GetShareMode@CPolicyConfig@@UEAAJPEBGPEAW4_DeviceShareMode@@@Z.c)
 *     ?SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@@Z @ 0x180116B10 (-SetDefaultEndpointForPolicy@CPolicyConfig@@UEAAJPEBGW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_.c)
 *     ?SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z @ 0x180116CE0 (-SetEndpointAbilityToBeDefault@CPolicyConfig@@UEAAJPEBGH@Z.c)
 *     ?SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z @ 0x180117158 (-SetNeverSetAsDefaultProperty@@YAJPEAUIMMDevice@@H@Z.c)
 *     ?SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z @ 0x180117260 (-SetProcessingPeriod@CPolicyConfig@@UEAAJPEBGPEA_J@Z.c)
 *     ?SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z @ 0x180117310 (-SetShareMode@CPolicyConfig@@UEAAJPEBGW4_DeviceShareMode@@@Z.c)
 *     PolicyConfigGetMixFormat @ 0x180117D40 (PolicyConfigGetMixFormat.c)
 *     ?GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z @ 0x18011D228 (-GetAcceptableSPDIFTypeForDevice@@YAJPEAUIMMDevice@@PEBUtWAVEFORMATEX@@PEAPEAU2@H@Z.c)
 *     ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x18011DB90 (-GetChannelVolume@CVADServer@@UEAAJIPEAM@Z.c)
 *     AudioServerGetAmbHeadTracking @ 0x180120890 (AudioServerGetAmbHeadTracking.c)
 *     AudioServerGetBufferSizeLimits @ 0x180120D80 (AudioServerGetBufferSizeLimits.c)
 *     AudioServerGetChannelVolume @ 0x180120F90 (AudioServerGetChannelVolume.c)
 *     AudioServerGetMixFormat @ 0x1801221C0 (AudioServerGetMixFormat.c)
 *     AudioServerGetStreamLatency @ 0x180122E20 (AudioServerGetStreamLatency.c)
 *     AudioServerIsRawStreamSupported @ 0x1801246F0 (AudioServerIsRawStreamSupported.c)
 *     AudioServerRequestSpatialDynamicObjects @ 0x180124B00 (AudioServerRequestSpatialDynamicObjects.c)
 *     AudioServerResetEndpoint @ 0x180124BD0 (AudioServerResetEndpoint.c)
 *     AudioServerSetAmbHeadTracking @ 0x180124DC0 (AudioServerSetAmbHeadTracking.c)
 *     AudioServerSetAmbMetadata @ 0x180124E50 (AudioServerSetAmbMetadata.c)
 *     AudioServerSetAmbRotation @ 0x180124EE0 (AudioServerSetAmbRotation.c)
 *     AudioServerSetLastBufferInProgress @ 0x180125430 (AudioServerSetLastBufferInProgress.c)
 *     AudioServerSetStreamSampleRate @ 0x180125520 (AudioServerSetStreamSampleRate.c)
 *     ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x18012715C (-GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z.c)
 *     ?GetLevelData@CVolumeSoftware@@MEAAJXZ @ 0x180127230 (-GetLevelData@CVolumeSoftware@@MEAAJXZ.c)
 *     ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1801275F0 (-InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z.c)
 *     ?LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ @ 0x18012790C (-LoadDefaultVolumeForEndpoint@CVolumeSoftware@@AEAAJXZ.c)
 *     ?QueryInterface@CVolumeHardware@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801288A0 (-QueryInterface@CVolumeHardware@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CVolumeSoftware@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180128960 (-QueryInterface@CVolumeSoftware@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z @ 0x1801297B0 (-SetVolumeLimitScalar@CVolumeControlBase@@UEAAJM@Z.c)
 *     ?UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ @ 0x180129A40 (-UpdateMasterVolumeLevel@CVolumeSoftware@@MEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 */

void __fastcall AudSrvTraceLoggingErrorHelper(const char *a1, int a2, int a3)
{
  const CHAR *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  unsigned __int16 *v9; // rax
  __int64 v10; // rcx
  int v11; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v13; // [rsp+40h] [rbp-21h]
  _DWORD v14[2]; // [rsp+48h] [rbp-19h] BYREF
  __int64 v15; // [rsp+50h] [rbp-11h]
  unsigned __int16 *v16; // [rsp+58h] [rbp-9h] BYREF
  int v17; // [rsp+60h] [rbp-1h]
  int v18; // [rsp+64h] [rbp+3h]
  void *v19; // [rsp+68h] [rbp+7h]
  __int64 v20; // [rsp+70h] [rbp+Fh]
  const CHAR *v21; // [rsp+78h] [rbp+17h]
  int v22; // [rsp+80h] [rbp+1Fh]
  int v23; // [rsp+84h] [rbp+23h]
  int *v24; // [rsp+88h] [rbp+27h]
  __int64 v25; // [rsp+90h] [rbp+2Fh]
  int *v26; // [rsp+98h] [rbp+37h]
  __int64 v27; // [rsp+A0h] [rbp+3Fh]

  v5 = a1;
  v6 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                     a1,
                     _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                 + 8);
  if ( *(_DWORD *)v6 > 4u )
  {
    v11 = a3;
    v26 = &v11;
    v12 = a2;
    v24 = &v12;
    v27 = 4LL;
    v25 = 4LL;
    if ( v5 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( v5[v7] );
      v8 = v7 + 1;
    }
    else
    {
      v5 = MultiByteStr;
      v8 = 1;
    }
    v22 = v8;
    v14[1] = 4;
    v9 = *(unsigned __int16 **)(v6 + 8);
    v10 = *(_QWORD *)(v6 + 32);
    v16 = v9;
    v23 = 0;
    v15 = 0LL;
    v21 = v5;
    v14[0] = 184549376;
    v17 = *v9;
    v19 = &unk_180191E05;
    v18 = 2;
    v20 = 0x100000023LL;
    LODWORD(v13) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(__int64, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, int, __int64))EtwEventWriteTransfer)(
      v10,
      v14,
      0LL,
      0LL,
      5,
      &v16,
      v11,
      v13);
  }
}
