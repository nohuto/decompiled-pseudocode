/*
 * XREFs of sub_180034264 @ 0x180034264
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034328 @ 0x180034328 (sub_180034328.c)
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_180035390 @ 0x180035390 (sub_180035390.c)
 *     sub_180035944 @ 0x180035944 (sub_180035944.c)
 *     sub_18003699C @ 0x18003699C (sub_18003699C.c)
 * Callees:
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 */

__int64 __fastcall sub_180034264(__int64 a1)
{
  __int64 v2; // rdi
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A244(a1 + 112, (__int64)v4);
  v2 = (__int64)(*(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 88)) >> 4;
  sub_180029FA0((__int64)v4);
  return (unsigned int)v2;
}
