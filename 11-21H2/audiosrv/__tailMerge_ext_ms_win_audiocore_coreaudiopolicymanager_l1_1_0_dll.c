/*
 * XREFs of __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180061B13
 * Callers:
 *     __imp_load_IsTSServiceSessionChangeSupported @ 0x180061B07 (__imp_load_IsTSServiceSessionChangeSupported.c)
 *     __imp_load_IsTSSessionGetAudioProtocolSupported @ 0x180061B92 (__imp_load_IsTSSessionGetAudioProtocolSupported.c)
 *     __imp_load_IsTSRegisterAudioProtocolNotificationSupported @ 0x180061BA4 (__imp_load_IsTSRegisterAudioProtocolNotificationSupported.c)
 *     __imp_load_IsTSUnregisterAudioProtocolNotificationSupported @ 0x180061BB6 (__imp_load_IsTSUnregisterAudioProtocolNotificationSupported.c)
 *     __imp_load_IsTSSessionIdRegisterVolumeTrackerForSessionSupported @ 0x180061BC8 (__imp_load_IsTSSessionIdRegisterVolumeTrackerForSessionSupported.c)
 *     __imp_load_IsHdAudioProtocolNotifyRundownSupported @ 0x180061BDA (__imp_load_IsHdAudioProtocolNotifyRundownSupported.c)
 *     __imp_load_IsTSSessionIdAudioProtocolSupported @ 0x180061BEC (__imp_load_IsTSSessionIdAudioProtocolSupported.c)
 *     __imp_load_IsPbmReportAppInteractivityChangeSupported @ 0x180061BFE (__imp_load_IsPbmReportAppInteractivityChangeSupported.c)
 *     __imp_load_IsPbmReportAppClosingSupported @ 0x180061C10 (__imp_load_IsPbmReportAppClosingSupported.c)
 *     __imp_load_IsPbmAllowMediaPlaybackForAppSupported @ 0x180061C22 (__imp_load_IsPbmAllowMediaPlaybackForAppSupported.c)
 *     __imp_load_IsPbmRegisterPlaybackManagerNotificationsSupported @ 0x180061C34 (__imp_load_IsPbmRegisterPlaybackManagerNotificationsSupported.c)
 *     __imp_load_IsPbmUnregisterPlaybackManagerNotificationsSupported @ 0x180061C46 (__imp_load_IsPbmUnregisterPlaybackManagerNotificationsSupported.c)
 *     __imp_load_IsPbmSmtcSubscriptionStateSupported @ 0x180061C58 (__imp_load_IsPbmSmtcSubscriptionStateSupported.c)
 *     __imp_load_IsPbmSoundLevelSupported @ 0x180061C6A (__imp_load_IsPbmSoundLevelSupported.c)
 *     __imp_load_IsPbmPlayingSupported @ 0x180061C7C (__imp_load_IsPbmPlayingSupported.c)
 *     __imp_load_IsPbmRegisterAppManagerNotificationSupported @ 0x180061C8E (__imp_load_IsPbmRegisterAppManagerNotificationSupported.c)
 *     __imp_load_IsPbmUnregisterAppManagerNotificationSupported @ 0x180061CA0 (__imp_load_IsPbmUnregisterAppManagerNotificationSupported.c)
 *     __imp_load_IsPbmRegisterAppClosureNotificationSupported @ 0x180061CB2 (__imp_load_IsPbmRegisterAppClosureNotificationSupported.c)
 *     __imp_load_IsPbmUnregisterAppClosureNotificationSupported @ 0x180061CC4 (__imp_load_IsPbmUnregisterAppClosureNotificationSupported.c)
 *     __imp_load_IsPbmPlayToStreamStateChangedSupported @ 0x180061CD6 (__imp_load_IsPbmPlayToStreamStateChangedSupported.c)
 *     __imp_load_IsPbmCastingAppStateChangedSupported @ 0x180061CE8 (__imp_load_IsPbmCastingAppStateChangedSupported.c)
 *     __imp_load_IsHHostEdappManagerContextRundownSupported @ 0x180061CFA (__imp_load_IsHHostEdappManagerContextRundownSupported.c)
 *     __imp_load_IsScreenReaderStateSupported @ 0x180061D0C (__imp_load_IsScreenReaderStateSupported.c)
 *     __imp_load_IsPbmReportHostedAppStateChangeSupported @ 0x180061D1E (__imp_load_IsPbmReportHostedAppStateChangeSupported.c)
 *     __imp_load_IsPbmSwitchSoftNonToHardNonInteractiveSupported @ 0x180061D30 (__imp_load_IsPbmSwitchSoftNonToHardNonInteractiveSupported.c)
 *     __imp_load_IsPbmReportApplicationStateSupported @ 0x180061D42 (__imp_load_IsPbmReportApplicationStateSupported.c)
 *     __imp_load_IsPbmLaunchBackgroundTaskSupported @ 0x180061D54 (__imp_load_IsPbmLaunchBackgroundTaskSupported.c)
 *     __imp_load_IsApmRegisterProxyAudioProcessSupported @ 0x180061D66 (__imp_load_IsApmRegisterProxyAudioProcessSupported.c)
 *     __imp_load_IsApmDuckingGainForIdSupported @ 0x180061D78 (__imp_load_IsApmDuckingGainForIdSupported.c)
 *     __imp_load_IsApmLayoutGainForIdSupported @ 0x180061D8A (__imp_load_IsApmLayoutGainForIdSupported.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800428C0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
