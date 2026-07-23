/*
 * XREFs of sub_14091CDE8 @ 0x14091CDE8
 * Callers:
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     sub_1406E93C0 @ 0x1406E93C0 (sub_1406E93C0.c)
 */

_UNKNOWN **__fastcall sub_14091CDE8(__int64 a1, int a2, int a3, __int64 a4)
{
  _DWORD v5[6]; // [rsp+40h] [rbp-18h] BYREF

  v5[0] = a2;
  v5[1] = a3;
  return sub_1406E93C0(a1, (__int64)sub_1407F4D50, (__int64)sub_14091CE30, a4, (__int64)v5, 1, 1);
}
