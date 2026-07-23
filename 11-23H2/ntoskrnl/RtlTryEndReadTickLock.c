/*
 * XREFs of RtlTryEndReadTickLock @ 0x1402C003C
 * Callers:
 *     KeQueryCpuSetInformation @ 0x14085124C (KeQueryCpuSetInformation.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RtlTryEndReadTickLock(_QWORD *a1, __int64 a2)
{
  return *a1 == a2;
}
