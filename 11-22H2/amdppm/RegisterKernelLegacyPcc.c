/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C0008F60
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C00088F0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
