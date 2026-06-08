/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C0009450
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C0008DE0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
