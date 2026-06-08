/*
 * XREFs of RegisterKernelPerfStates @ 0x1C0035270
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C003295C (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
