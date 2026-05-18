/*
 * XREFs of sub_180070754 @ 0x180070754
 * Callers:
 *     sub_1800701E0 @ 0x1800701E0 (sub_1800701E0.c)
 *     sub_18007048C @ 0x18007048C (sub_18007048C.c)
 * Callees:
 *     sub_1800973E0 @ 0x1800973E0 (sub_1800973E0.c)
 */

unsigned __int64 __fastcall sub_180070754(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a1[1] == a1[2] )
    return sub_18006FE4C(a1, a1[1], a2);
  result = sub_1800973E0(a1[1], a2);
  a1[1] += 128LL;
  return result;
}
