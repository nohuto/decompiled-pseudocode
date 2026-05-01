/*
 * XREFs of sub_18000C2A0 @ 0x18000C2A0
 * Callers:
 *     sub_18000E264 @ 0x18000E264 (sub_18000E264.c)
 *     sub_18000EC08 @ 0x18000EC08 (sub_18000EC08.c)
 * Callees:
 *     sub_18000C0A8 @ 0x18000C0A8 (sub_18000C0A8.c)
 *     sub_18000E81C @ 0x18000E81C (sub_18000E81C.c)
 */

__int64 __fastcall sub_18000C2A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7)
{
  unsigned int v7; // r10d
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r11

  sub_18000E81C(a7);
  return sub_18000C0A8(v10, v7, v8, v9);
}
