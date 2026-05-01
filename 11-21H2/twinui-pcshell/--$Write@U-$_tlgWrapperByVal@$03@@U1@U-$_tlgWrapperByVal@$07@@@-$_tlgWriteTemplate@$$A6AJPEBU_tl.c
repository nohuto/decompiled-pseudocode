/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18009E190
 * Callers:
 *     ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18009E01C (-BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800A78B4 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ??$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x180356CA0 (--$OnPriorityBoostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     ??$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z @ 0x180356D18 (--$OnPriorityUnboostProcessed@AEAJAEAI@CortanaProactiveTelemetry@@SAXAEAJAEAI@Z.c)
 *     ?BoostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A1538 (-BoostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ?UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ @ 0x1803A4808 (-UnboostPriority@MiniSearchExperienceManager@@AEAAXXZ.c)
 *     ??$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z @ 0x1803C10A0 (--$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z.c)
 *     ??$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchHeuristic@@$$QEAI@Z @ 0x1803CAC44 (--$HeuristicHolographicLaunch@W4HolographicLaunchHeuristic@@I@HolographicPositionerTelemetry@@SA.c)
 *     ??$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4HolographicLaunchReason@@$$QEAI@Z @ 0x1803CAFE4 (--$LaunchInHolographic@W4HolographicLaunchReason@@I@HolographicPositionerTelemetry@@SAX$$QEAW4Ho.c)
 *     ??$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelemetryLogger@@SAXAEAW4PLM_APPLICATION_STATE@@0@Z @ 0x180457D08 (--$InconsistentAppStateDetected@AEAW4PLM_APPLICATION_STATE@@AEAW41@@TouchKeyboardExperienceTelem.c)
 *     ?ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@@Z @ 0x180497088 (-ProcessTouchGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingV.c)
 *     ??$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z @ 0x18057AB74 (--$WindowTabHostThumbnailQueueChurn@IAEAI@WindowTabHostTelemetry@@SAX$$QEAIAEAI@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180090C50 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  struct _EVENT_DATA_DESCRIPTOR v8; // [rsp+30h] [rbp-68h] BYREF
  __int64 v9; // [rsp+50h] [rbp-48h]
  __int64 v10; // [rsp+58h] [rbp-40h]
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int64 v12; // [rsp+68h] [rbp-30h]
  __int64 v13; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]

  v13 = a7;
  v11 = a6;
  v9 = a5;
  v14 = 8LL;
  v12 = 4LL;
  v10 = 4LL;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, 0LL, 0LL, 5u, &v8);
}
