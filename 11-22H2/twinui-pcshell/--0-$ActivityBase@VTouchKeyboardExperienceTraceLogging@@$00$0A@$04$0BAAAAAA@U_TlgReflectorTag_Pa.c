/*
 * XREFs of ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800ABA6C
 * Callers:
 *     ??$?0$$V@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800AB8D8 (--$-0$$V@TouchKeyboardExperienceManagerDelayedInitialization@TouchKeyboardExperienceTelemetryLog.c)
 *     ??$?0$$V@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1800AB9B8 (--$-0$$V@TouchKeyboardExperienceManagerSubscribeToServices@TouchKeyboardExperienceTelemetryLogge.c)
 *     ?OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x18020AD94 (-OnInputAppRequestedHide@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z @ 0x18020AF08 (-OnInputAppRequestedResize@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@@Z.c)
 *     ?OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z @ 0x18020B060 (-OnInputAppRequestedShow@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@UViewOptions@@@Z.c)
 *     ??$?0$$V@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507DD8 (--$-0$$V@OnApplicationChromeOffsetsChanged@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integ.c)
 *     ??$?0$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507E8C (--$-0$$V@OnApplicationFramePositionChanged@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integ.c)
 *     ??$?0$$V@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507F40 (--$-0$$V@OnLightDismiss@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_constant@D$0A@@.c)
 *     ??$?0$$V@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x180507FF4 (--$-0$$V@OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_cons.c)
 *     ??$?0$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@AEAA@U?$integral_constant@D$0A@@wistd@@@Z @ 0x1805080A8 (--$-0$$V@OnViewCreated@TouchKeyboardExperienceTelemetryLogger@@AEAA@U-$integral_constant@D$0A@@w.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z @ 0x180514450 (-OnCommand@TouchKeyboardExperienceManager@@UEAAJPEAUIApplicationFrame@@PEBU_GUID@@K@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180516DE0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 */

struct wil::details::IFailureCallback *__fastcall wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
        struct wil::details::IFailureCallback *a1,
        __int64 a2)
{
  *(_QWORD *)a1 = &wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::`vftable';
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
