/*
 * XREFs of sub_18008D514 @ 0x18008D514
 * Callers:
 *     sub_18008D4EC @ 0x18008D4EC (sub_18008D4EC.c)
 * Callees:
 *     sub_180085DE8 @ 0x180085DE8 (sub_180085DE8.c)
 */

unsigned __int64 __fastcall sub_18008D514(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 result; // rax

  v4 = sub_180085DE8((__int64)a1, a2);
  *a1 = v4;
  a1[1] = v4;
  result = v4 + 12 * a2;
  a1[2] = result;
  return result;
}
