/*
 * XREFs of sub_1800545BC @ 0x1800545BC
 * Callers:
 *     sub_1800561F8 @ 0x1800561F8 (sub_1800561F8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800545BC(_QWORD *a1, _QWORD *a2)
{
  __int64 result; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  a1[3] = a2[3];
  result = a2[4];
  a1[4] = result;
  a2[3] = 0LL;
  a2[4] = 0LL;
  return result;
}
