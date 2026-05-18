/*
 * XREFs of sub_18003699C @ 0x18003699C
 * Callers:
 *     sub_180036A60 @ 0x180036A60 (sub_180036A60.c)
 * Callees:
 *     sub_180029FA0 @ 0x180029FA0 (sub_180029FA0.c)
 *     sub_18002A244 @ 0x18002A244 (sub_18002A244.c)
 *     sub_180032B48 @ 0x180032B48 (sub_180032B48.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 *     sub_1800365A8 @ 0x1800365A8 (sub_1800365A8.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003699C(__int64 a1)
{
  unsigned int i; // edi
  _QWORD *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v6[16]; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+40h] [rbp-18h] BYREF

  sub_18002A244(a1 + 8, (__int64)v7);
  sub_18002A244(a1 + 112, (__int64)v6);
  for ( i = 0; i < (unsigned int)sub_180034264(a1); ++i )
  {
    v3 = sub_1800341C8(a1, &v5, i);
    sub_1800365A8(a1, v3);
  }
  *(_DWORD *)(a1 + 1368) = -8388609;
  *(_DWORD *)(a1 + 1372) = 2139095039;
  *(_DWORD *)(a1 + 1376) = 0;
  *(_QWORD *)(a1 + 1384) = 0LL;
  sub_180032B48((__int64 ***)(a1 + 1424));
  sub_180029FA0((__int64)v6);
  return sub_180029FA0((__int64)v7);
}
