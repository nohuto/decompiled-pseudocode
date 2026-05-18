/*
 * XREFs of sub_1800911D8 @ 0x1800911D8
 * Callers:
 *     sub_1800906E4 @ 0x1800906E4 (sub_1800906E4.c)
 *     sub_180090AB8 @ 0x180090AB8 (sub_180090AB8.c)
 * Callees:
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     sub_18001F8D0 @ 0x18001F8D0 (sub_18001F8D0.c)
 */

bool __fastcall sub_1800911D8(char *a1, char *a2)
{
  bool v4; // bl

  v4 = sub_18001F8D0(a1, a2) == 0;
  sub_180011B24((__int64)a1);
  sub_180011B24((__int64)a2);
  return v4;
}
