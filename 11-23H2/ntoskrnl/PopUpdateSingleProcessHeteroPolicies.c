/*
 * XREFs of PopUpdateSingleProcessHeteroPolicies @ 0x1408A5CE0
 * Callers:
 *     <none>
 * Callees:
 *     PsEnumProcessThreads @ 0x140820C2C (PsEnumProcessThreads.c)
 */

__int64 __fastcall PopUpdateSingleProcessHeteroPolicies(__int64 a1)
{
  PsEnumProcessThreads(a1, (__int64 (__fastcall *)(__int64, _QWORD *, __int64))PopUpdateSingleThreadHeteroPolicies, 0LL);
  return 0LL;
}
