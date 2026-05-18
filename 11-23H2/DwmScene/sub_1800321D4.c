/*
 * XREFs of sub_1800321D4 @ 0x1800321D4
 * Callers:
 *     sub_180036AD4 @ 0x180036AD4 (sub_180036AD4.c)
 * Callees:
 *     sub_18002FD24 @ 0x18002FD24 (sub_18002FD24.c)
 */

__int64 __fastcall sub_1800321D4(__int64 *a1, __int64 a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  return *(_QWORD *)sub_18002FD24(a1, (__int64)v3, a2) + 64LL;
}
