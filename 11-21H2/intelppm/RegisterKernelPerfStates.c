/*
 * XREFs of RegisterKernelPerfStates @ 0x1C003F250
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C003D774 (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(_QWORD *))RegisterKernelPerfStatesCallback);
}
