/*
 * XREFs of sub_14062C578 @ 0x14062C578
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_14062C598 @ 0x14062C598 (sub_14062C598.c)
 *     sub_1409DA758 @ 0x1409DA758 (sub_1409DA758.c)
 */

__int64 sub_14062C578()
{
  __int64 result; // rax

  result = sub_14062C598();
  if ( (int)result >= 0 )
    return sub_1409DA758();
  return result;
}
