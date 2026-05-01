/*
 * XREFs of sub_18000F624 @ 0x18000F624
 * Callers:
 *     sub_18000CFDC @ 0x18000CFDC (sub_18000CFDC.c)
 *     sub_180010248 @ 0x180010248 (sub_180010248.c)
 * Callees:
 *     sub_18000CC5C @ 0x18000CC5C (sub_18000CC5C.c)
 *     sub_18000D110 @ 0x18000D110 (sub_18000D110.c)
 *     sub_18000F864 @ 0x18000F864 (sub_18000F864.c)
 *     sub_18001036C @ 0x18001036C (sub_18001036C.c)
 */

__int64 __fastcall sub_18000F624(__int64 a1)
{
  _QWORD v3[25]; // [rsp+20h] [rbp-C8h] BYREF

  sub_18000CC5C((__int64)v3);
  sub_18001036C(a1, v3);
  sub_18000F864(v3);
  return sub_18000D110(v3);
}
