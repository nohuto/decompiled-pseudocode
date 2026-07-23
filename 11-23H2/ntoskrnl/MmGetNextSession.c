/*
 * XREFs of MmGetNextSession @ 0x14035EE90
 * Callers:
 *     PfpPrivSourceEnum @ 0x1407419A0 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749730 (ObpProcessRemoveObjectQueue.c)
 *     ExCallSessionCallBack @ 0x1407C5F60 (ExCallSessionCallBack.c)
 *     PfpProcessScenarioPhase @ 0x1407D3920 (PfpProcessScenarioPhase.c)
 *     PopInvokeWin32Callout @ 0x1407D3B8C (PopInvokeWin32Callout.c)
 *     MmEnumerateSystemImages @ 0x140820ED0 (MmEnumerateSystemImages.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983EF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A728 (PopSendSuspendResumeApplicationNotification.c)
 *     MmPerfLogSessionRundown @ 0x140A32868 (MmPerfLogSessionRundown.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2EC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB46C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiGetNextSession @ 0x14035EEA8 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
