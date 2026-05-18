/*
 * XREFs of sub_18001FC4C @ 0x18001FC4C
 * Callers:
 *     sub_180030140 @ 0x180030140 (sub_180030140.c)
 *     sub_180030598 @ 0x180030598 (sub_180030598.c)
 *     sub_18006A444 @ 0x18006A444 (sub_18006A444.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 *     sub_1800F5CC0 @ 0x1800F5CC0 (sub_1800F5CC0.c)
 * Callees:
 *     sub_18001D984 @ 0x18001D984 (sub_18001D984.c)
 */

_QWORD *__fastcall sub_18001FC4C(_QWORD *a1, const char *a2)
{
  sub_18001D984((__int64)a1, -2147024809, a2, 0);
  *a1 = &Spectre::Utils::SpectreInvalidArgException::`vftable';
  return a1;
}
