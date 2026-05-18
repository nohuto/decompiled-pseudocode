/*
 * XREFs of sub_18009B6F0 @ 0x18009B6F0
 * Callers:
 *     sub_18009BA60 @ 0x18009BA60 (sub_18009BA60.c)
 * Callees:
 *     sub_180098614 @ 0x180098614 (sub_180098614.c)
 */

__int64 __fastcall sub_18009B6F0(_QWORD *a1)
{
  _QWORD *v1; // rdx
  __int64 result; // rax

  v1 = (_QWORD *)a1[2];
  a1[2] = *v1;
  sub_180098614((__int64)a1, v1);
  result = *a1;
  --*(_QWORD *)(*a1 + 8LL);
  return result;
}
