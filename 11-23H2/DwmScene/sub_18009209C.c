/*
 * XREFs of sub_18009209C @ 0x18009209C
 * Callers:
 *     sub_180091EC8 @ 0x180091EC8 (sub_180091EC8.c)
 *     sub_1800939A0 @ 0x1800939A0 (sub_1800939A0.c)
 * Callees:
 *     sub_18000B988 @ 0x18000B988 (sub_18000B988.c)
 *     sub_180091F70 @ 0x180091F70 (sub_180091F70.c)
 */

__int64 *__fastcall sub_18009209C(__int64 *lpMem, __int64 a2)
{
  sub_180091F70(lpMem, a2);
  sub_18000B988(lpMem);
  return lpMem;
}
