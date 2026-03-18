/*
 * XREFs of MmGetNextSession @ 0x14035ECF0
 * Callers:
 *     PfpPrivSourceEnum @ 0x1407417B0 (PfpPrivSourceEnum.c)
 *     ObpProcessRemoveObjectQueue @ 0x140749540 (ObpProcessRemoveObjectQueue.c)
 *     ExCallSessionCallBack @ 0x1407C5C90 (ExCallSessionCallBack.c)
 *     PfpProcessScenarioPhase @ 0x1407D3650 (PfpProcessScenarioPhase.c)
 *     PopInvokeWin32Callout @ 0x1407D38BC (PopInvokeWin32Callout.c)
 *     MmEnumerateSystemImages @ 0x140820BD0 (MmEnumerateSystemImages.c)
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x140983CF0 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     PopSendSuspendResumeApplicationNotification @ 0x14098A528 (PopSendSuspendResumeApplicationNotification.c)
 *     MmPerfLogSessionRundown @ 0x140A325B8 (MmPerfLogSessionRundown.c)
 *     VfThunkApplyPristineToAllSession @ 0x140ADB2FC (VfThunkApplyPristineToAllSession.c)
 *     VfThunkApplyWdmThunkToAllSession @ 0x140ADB47C (VfThunkApplyWdmThunkToAllSession.c)
 * Callees:
 *     MiGetNextSession @ 0x14035ED08 (MiGetNextSession.c)
 */

__int64 __fastcall MmGetNextSession(void *a1)
{
  return MiGetNextSession(a1);
}
