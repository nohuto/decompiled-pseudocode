/*
 * XREFs of RtlQueryPerformanceFrequency @ 0x18007B960
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlQueryPerformanceFrequency(_QWORD *a1)
{
  *a1 = MEMORY[0x7FFE0300];
  return 1LL;
}
