/*
 * XREFs of RegisterKernelLegacyPcc @ 0x1C000CB70
 * Callers:
 *     <none>
 * Callees:
 *     InitLegacyPccInternal @ 0x1C000C7D0 (InitLegacyPccInternal.c)
 */

__int64 __fastcall RegisterKernelLegacyPcc(_QWORD *a1)
{
  return InitLegacyPccInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
