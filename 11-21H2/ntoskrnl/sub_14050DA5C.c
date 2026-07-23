/*
 * XREFs of sub_14050DA5C @ 0x14050DA5C
 * Callers:
 *     sub_140398190 @ 0x140398190 (sub_140398190.c)
 *     sub_1403ACD34 @ 0x1403ACD34 (sub_1403ACD34.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14050DA5C(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 result; // rax

  v1 = __readcr2();
  __writecr2(v1);
  result = a1 + __rdtsc();
  __writemsr(0x10u, result);
  return result;
}
