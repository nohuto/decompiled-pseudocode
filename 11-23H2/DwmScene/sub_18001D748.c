/*
 * XREFs of sub_18001D748 @ 0x18001D748
 * Callers:
 *     sub_18001D9B8 @ 0x18001D9B8 (sub_18001D9B8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_18001CF00 @ 0x18001CF00 (sub_18001CF00.c)
 *     sub_18001D698 @ 0x18001D698 (sub_18001D698.c)
 */

_QWORD *__fastcall sub_18001D748(_QWORD *a1)
{
  _BYTE v3[256]; // [rsp+40h] [rbp-118h] BYREF

  sub_18001D698();
  sub_18001CF00();
  sub_180010DD0(a1, (__int64)v3);
  return a1;
}
