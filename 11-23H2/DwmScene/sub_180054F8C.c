/*
 * XREFs of sub_180054F8C @ 0x180054F8C
 * Callers:
 *     sub_18008F1BC @ 0x18008F1BC (sub_18008F1BC.c)
 *     sub_18008F290 @ 0x18008F290 (sub_18008F290.c)
 * Callees:
 *     memset @ 0x18000C0BC (memset.c)
 */

__int64 __fastcall sub_180054F8C(void *a1, __int64 a2)
{
  memset(a1, 0, a2 - (_QWORD)a1);
  return a2;
}
