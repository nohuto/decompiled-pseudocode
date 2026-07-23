/*
 * XREFs of sub_14082926C @ 0x14082926C
 * Callers:
 *     sub_1403C10B0 @ 0x1403C10B0 (sub_1403C10B0.c)
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 */

__int64 sub_14082926C()
{
  return PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
}
