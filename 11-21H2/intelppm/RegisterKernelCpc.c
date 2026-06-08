/*
 * XREFs of RegisterKernelCpc @ 0x1C00243A0
 * Callers:
 *     <none>
 * Callees:
 *     InitCpcStatesInternal @ 0x1C0027340 (InitCpcStatesInternal.c)
 */

__int64 __fastcall RegisterKernelCpc(__int64 a1)
{
  return InitCpcStatesInternal(a1, RegisterKernelPerfStatesCallback);
}
