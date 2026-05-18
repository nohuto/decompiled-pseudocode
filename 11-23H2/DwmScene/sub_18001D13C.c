/*
 * XREFs of sub_18001D13C @ 0x18001D13C
 * Callers:
 *     sub_18001D59C @ 0x18001D59C (sub_18001D59C.c)
 *     sub_18001D840 @ 0x18001D840 (sub_18001D840.c)
 * Callees:
 *     sub_18001C808 @ 0x18001C808 (sub_18001C808.c)
 */

__int64 *__fastcall sub_18001D13C(__int64 *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = sub_18001C808();
  return a1;
}
