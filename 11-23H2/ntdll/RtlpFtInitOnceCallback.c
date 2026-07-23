/*
 * XREFs of RtlpFtInitOnceCallback @ 0x18009F8F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFtInitialize @ 0x18009F910 (RtlpFtInitialize.c)
 */

_BOOL8 __fastcall RtlpFtInitOnceCallback(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  return (int)RtlpFtInitialize(a1, a2, a3) >= 0;
}
