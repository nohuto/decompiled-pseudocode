/*
 * XREFs of ??0?$ActivityBase@VControlCenterLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18041D7F8
 * Callers:
 *     ??$?0$$V@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B580 (--$-0$$V@EM_CompleteHide@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integral_const.c)
 *     ??$?0$$V@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B630 (--$-0$$V@EM_PositionViewActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integr.c)
 *     ??$?0$$V@EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B6E0 (--$-0$$V@EM_PriorityBoostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$inte.c)
 *     ??$?0$$V@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B790 (--$-0$$V@EM_PriorityUnboostRequested@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$in.c)
 *     ??$?0$$V@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B840 (--$-0$$V@EM_ReturnFocusActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integra.c)
 *     ??$?0$$V@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B8F0 (--$-0$$V@EM_ViewDestroyedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integ.c)
 *     ??$?0$$V@EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041B9A0 (--$-0$$V@EM_ViewHiddenActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integral.c)
 *     ??$?0$$V@EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041BA50 (--$-0$$V@EM_ViewShownActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integral_.c)
 *     ??$?0$$V@EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x18041BB00 (--$-0$$V@EM_ViewUncloakingActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$inte.c)
 *     ??$?0PEBG@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG@Z @ 0x18041BBB0 (--$-0PEBG@EM_EventQueuedActivity@ControlCenterTelemetry@ControlCenterUITelemetry@@AEAA@U-$integr.c)
 *     ?RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z @ 0x180422018 (-RaiseHideDeepLinkRequestedEvent@CControlCenterExperienceManager@@AEAAJPEAUHSTRING__@@_N@Z.c)
 *     ?RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z @ 0x18042229C (-RaiseHideExperienceRequestedEvent@CControlCenterExperienceManager@@AEAAJ_N_K11@Z.c)
 *     ?RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z @ 0x180422598 (-RaisePropertyChangedEvent@CControlCenterExperienceManager@@AEAAJPEBG_N@Z.c)
 *     ?RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z @ 0x1804227D0 (-RaiseStartAnimationEvent@CControlCenterExperienceManager@@AEAAJ_K00@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<ControlCenterLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
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
