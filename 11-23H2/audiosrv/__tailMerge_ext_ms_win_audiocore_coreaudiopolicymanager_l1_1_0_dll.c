/*
 * XREFs of __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x180069E02
 * Callers:
 *     __imp_load_IsPbmReportHostedAppStateChangeSupported @ 0x180069DF6 (__imp_load_IsPbmReportHostedAppStateChangeSupported.c)
 *     __imp_load_IsHHostEdappManagerContextRundownSupported @ 0x180069E81 (__imp_load_IsHHostEdappManagerContextRundownSupported.c)
 *     __imp_load_IsPbmReportAppInteractivityChangeSupported @ 0x180069E93 (__imp_load_IsPbmReportAppInteractivityChangeSupported.c)
 *     __imp_load_IsPbmReportAppClosingSupported @ 0x180069EA5 (__imp_load_IsPbmReportAppClosingSupported.c)
 *     __imp_load_IsPbmAllowMediaPlaybackForAppSupported @ 0x180069EB7 (__imp_load_IsPbmAllowMediaPlaybackForAppSupported.c)
 *     __imp_load_IsPbmRegisterPlaybackManagerNotificationsSupported @ 0x180069EC9 (__imp_load_IsPbmRegisterPlaybackManagerNotificationsSupported.c)
 *     __imp_load_IsPbmUnregisterPlaybackManagerNotificationsSupported @ 0x180069EDB (__imp_load_IsPbmUnregisterPlaybackManagerNotificationsSupported.c)
 *     __imp_load_IsPbmSmtcSubscriptionStateSupported @ 0x180069EED (__imp_load_IsPbmSmtcSubscriptionStateSupported.c)
 *     __imp_load_IsPbmSoundLevelSupported @ 0x180069EFF (__imp_load_IsPbmSoundLevelSupported.c)
 *     __imp_load_IsPbmPlayingSupported @ 0x180069F11 (__imp_load_IsPbmPlayingSupported.c)
 *     __imp_load_IsPbmRegisterAppManagerNotificationSupported @ 0x180069F23 (__imp_load_IsPbmRegisterAppManagerNotificationSupported.c)
 *     __imp_load_IsPbmUnregisterAppManagerNotificationSupported @ 0x180069F35 (__imp_load_IsPbmUnregisterAppManagerNotificationSupported.c)
 *     __imp_load_IsPbmRegisterAppClosureNotificationSupported @ 0x180069F47 (__imp_load_IsPbmRegisterAppClosureNotificationSupported.c)
 *     __imp_load_IsPbmUnregisterAppClosureNotificationSupported @ 0x180069F59 (__imp_load_IsPbmUnregisterAppClosureNotificationSupported.c)
 *     __imp_load_IsPbmPlayToStreamStateChangedSupported @ 0x180069F6B (__imp_load_IsPbmPlayToStreamStateChangedSupported.c)
 *     __imp_load_IsPbmCastingAppStateChangedSupported @ 0x180069F7D (__imp_load_IsPbmCastingAppStateChangedSupported.c)
 *     __imp_load_IsScreenReaderStateSupported @ 0x180069F8F (__imp_load_IsScreenReaderStateSupported.c)
 *     __imp_load_IsPbmSwitchSoftNonToHardNonInteractiveSupported @ 0x180069FA1 (__imp_load_IsPbmSwitchSoftNonToHardNonInteractiveSupported.c)
 *     __imp_load_IsPbmReportApplicationStateSupported @ 0x180069FB3 (__imp_load_IsPbmReportApplicationStateSupported.c)
 *     __imp_load_IsPbmLaunchBackgroundTaskSupported @ 0x180069FC5 (__imp_load_IsPbmLaunchBackgroundTaskSupported.c)
 *     __imp_load_IsApmRegisterProxyAudioProcessSupported @ 0x180069FD7 (__imp_load_IsApmRegisterProxyAudioProcessSupported.c)
 *     __imp_load_IsApmDuckingGainForIdSupported @ 0x180069FE9 (__imp_load_IsApmDuckingGainForIdSupported.c)
 *     __imp_load_IsApmLayoutGainForIdSupported @ 0x180069FFB (__imp_load_IsApmLayoutGainForIdSupported.c)
 *     __imp_load_IsTSServiceSessionChangeSupported @ 0x18006A00D (__imp_load_IsTSServiceSessionChangeSupported.c)
 *     __imp_load_IsTSSessionGetAudioProtocolSupported @ 0x18006A01F (__imp_load_IsTSSessionGetAudioProtocolSupported.c)
 *     __imp_load_IsTSRegisterAudioProtocolNotificationSupported @ 0x18006A031 (__imp_load_IsTSRegisterAudioProtocolNotificationSupported.c)
 *     __imp_load_IsTSUnregisterAudioProtocolNotificationSupported @ 0x18006A043 (__imp_load_IsTSUnregisterAudioProtocolNotificationSupported.c)
 *     __imp_load_IsTSSessionIdRegisterVolumeTrackerForSessionSupported @ 0x18006A055 (__imp_load_IsTSSessionIdRegisterVolumeTrackerForSessionSupported.c)
 *     __imp_load_IsHdAudioProtocolNotifyRundownSupported @ 0x18006A067 (__imp_load_IsHdAudioProtocolNotifyRundownSupported.c)
 *     __imp_load_IsTSSessionIdAudioProtocolSupported @ 0x18006A079 (__imp_load_IsTSSessionIdAudioProtocolSupported.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180054FA0 (__delayLoadHelper2.c)
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
