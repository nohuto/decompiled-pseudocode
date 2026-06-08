/*
 * XREFs of RegisterKernelPerfStates @ 0x1C0035140
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C003282C (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
