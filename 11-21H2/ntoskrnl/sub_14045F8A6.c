/*
 * XREFs of sub_14045F8A6 @ 0x14045F8A6
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 */

__int64 sub_14045F8A6()
{
  return *((_QWORD *)sub_140347DB0() + 108);
}
