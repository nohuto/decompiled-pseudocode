/*
 * XREFs of RegisterKernelPerfFeedback @ 0x1C0034280
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfFeedbackInternal @ 0x1C00316E0 (InitPerfFeedbackInternal.c)
 */

__int64 __fastcall RegisterKernelPerfFeedback(_QWORD *a1)
{
  return InitPerfFeedbackInternal(a1, (__int64 (__fastcall *)(_QWORD *))RegisterKernelPerfStatesCallback);
}
