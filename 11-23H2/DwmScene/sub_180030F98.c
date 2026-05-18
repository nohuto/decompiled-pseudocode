/*
 * XREFs of sub_180030F98 @ 0x180030F98
 * Callers:
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_18003655C @ 0x18003655C (sub_18003655C.c)
 * Callees:
 *     sub_18002E1F8 @ 0x18002E1F8 (sub_18002E1F8.c)
 */

__int64 *__fastcall sub_180030F98(__int64 *a1, __int64 a2)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  sub_18002E1F8(a1, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 4, (_QWORD **)a2, (_QWORD *)(a2 + 8));
  return a1;
}
