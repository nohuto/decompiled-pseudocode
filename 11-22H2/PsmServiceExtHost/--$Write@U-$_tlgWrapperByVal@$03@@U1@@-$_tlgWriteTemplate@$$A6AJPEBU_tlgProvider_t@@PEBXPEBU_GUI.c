/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180055166
 * Callers:
 *     ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EBCC (-HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180043430 (-RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z.c)
 *     ?SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z @ 0x18004623C (-SstpPublish@@YAXPEBU_SYSTEM_STATE_TRACKER@@@Z.c)
 *     ?RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800467B8 (-RmpCpuSetManagerApplyWorkloadAllowedMasks@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180048270 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARAMETERS@@@Z @ 0x18004E660 (-HampClientStart@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAT_RM_SID@@PEAXKKPEAU_HAM_CLIENT_CONNECTION_PARA.c)
 *     ?RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z @ 0x180056C40 (-RmpMemoryMonitorInstanceOnSystemStateChanged@@YAJPEAU_RM_PARTITION@@PEAX@Z.c)
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x18006C380 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     RmgrSrv_RmGetNotification @ 0x18006C660 (RmgrSrv_RmGetNotification.c)
 *     ?HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F900 (-HampHostPlmServiceDesktopBridgeHost@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007E490 (-HampPdcDamPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x18007E950 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z @ 0x180083924 (-RmSrvCpuSetManagerCreateClientContext@@YAJPEAU_RM_SERVICE_GLOBALS@@KPEAPEAX@Z.c)
 *     ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180083F80 (-RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 *     ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180084274 (-RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 *     ?RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180084888 (-RmSrvGameModeUnregisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 *     ?RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180086338 (-RmpCpuSetManagerApplyProcessPolicy@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z.c)
 *     ?RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089A90 (-RmpGameModeTryApplyCpuSetAllocation@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180028480 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v12 = 4;
  v13 = 0;
  v8 = a5;
  v9 = 4;
  v10 = 0;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 4u, &v7);
}
