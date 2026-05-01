/*
 * XREFs of ??0?$ActivityBase@VNotificationCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180019CA8
 * Callers:
 *     ?RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x1800166B0 (-RaisePropertyChangedEvent@CActionCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z @ 0x180018828 (-RaiseStartAnimationEvent@CActionCenterExperienceManager@@AEAAJ_K00@Z.c)
 *     ??$?0AEA_N@EM_RaiseHideExperienceRequestedEventActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@AEA_N@Z @ 0x180018A6C (--$-0AEA_N@EM_RaiseHideExperienceRequestedEventActivity@NotificationCenterTelemetry@Notification.c)
 *     ??$?0$$V@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018B54 (--$-0$$V@EM_ReturnFocusActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@.c)
 *     ??$?0$$V@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018C30 (--$-0$$V@EM_ViewCloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ??$?0$$V@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018D0C (--$-0$$V@EM_ViewUncloakingActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AE.c)
 *     ??$?0$$V@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018DE8 (--$-0$$V@EM_ViewShownActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U-.c)
 *     ??$?0$$V@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180018EC4 (--$-0$$V@EM_ViewHiddenActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U.c)
 *     ??$?0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180019518 (--$-0$$V@EM_PositionViewActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ??$?0PEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG@Z @ 0x180019BEC (--$-0PEBG@EM_EventQueuedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA.c)
 *     ??$?0$$V@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1804138AC (--$-0$$V@EM_ViewDestroyedActivity@NotificationCenterTelemetry@NotificationCenterUITelemetry@@AEA.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<NotificationCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (struct wil::details::IFailureCallback *)((char *)a1 + 8),
    a1,
    (struct wil::details::IFailureCallback *)((char *)a1 + 96),
    0);
  *((_QWORD *)a1 + 6) = (char *)a1 + 56;
  *((_DWORD *)a1 + 14) = 0;
  *((_DWORD *)a1 + 24) = 0;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_DWORD *)a1 + 33) = 0;
  *((_BYTE *)a1 + 60) = 0;
  *((_BYTE *)a1 + 120) = 0;
  *((_QWORD *)a1 + 13) = a2;
  *((_DWORD *)a1 + 32) = 1;
  *((_QWORD *)a1 + 36) = 0LL;
  *((_QWORD *)a1 + 37) = 0LL;
  memset_0((char *)a1 + 136, 0, 0x98uLL);
  *((_QWORD *)a1 + 38) = 0LL;
  *((_QWORD *)a1 + 39) = 0LL;
  return a1;
}
