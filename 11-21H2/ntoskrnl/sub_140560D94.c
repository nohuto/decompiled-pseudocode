/*
 * XREFs of sub_140560D94 @ 0x140560D94
 * Callers:
 *     sub_140950424 @ 0x140950424 (sub_140950424.c)
 *     sub_1409504C0 @ 0x1409504C0 (sub_1409504C0.c)
 * Callees:
 *     sub_140369C50 @ 0x140369C50 (sub_140369C50.c)
 */

__int64 sub_140560D94(unsigned int a1, const char *a2, ...)
{
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, a2);
  sub_140369C50("NTOSPNP:", 0x20u, a1, a2, va, 1);
  return a1;
}
