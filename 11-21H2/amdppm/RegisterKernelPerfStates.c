/*
 * XREFs of RegisterKernelPerfStates @ 0x1C00342A0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C00319E4 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(_QWORD *))RegisterKernelPerfStatesCallback);
}
