/*
 * XREFs of RegisterKernelCpc @ 0x1C0033850
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C0031044 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, (__int64 (__fastcall *)(__int64))RegisterKernelPerfStatesCallback);
}
