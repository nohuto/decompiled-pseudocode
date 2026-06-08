/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C0008830
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C00082C8 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
