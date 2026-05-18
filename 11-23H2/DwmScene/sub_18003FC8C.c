/*
 * XREFs of sub_18003FC8C @ 0x18003FC8C
 * Callers:
 *     sub_1800408A8 @ 0x1800408A8 (sub_1800408A8.c)
 * Callees:
 *     sub_180029F5C @ 0x180029F5C (sub_180029F5C.c)
 *     sub_18003FB30 @ 0x18003FB30 (sub_18003FB30.c)
 *     sub_18003FB70 @ 0x18003FB70 (sub_18003FB70.c)
 *     sub_18003FBB0 @ 0x18003FBB0 (sub_18003FBB0.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18003FC8C(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  sub_180029F5C(a1 + 16, 0);
  *(_QWORD *)(a1 + 72) = 0xFFFFFFFF00000001uLL;
  *(_QWORD *)(a1 + 80) = 0LL;
  sub_18003FB30((__int64 *)(a1 + 88));
  *(_QWORD *)(a1 + 104) = a2;
  *(_DWORD *)(a1 + 112) = 1;
  *(_BYTE *)(a1 + 116) = 0;
  sub_18003FBB0(a1 + 120);
  sub_1800E0D60(a1 + 184);
  *(_DWORD *)(a1 + 192) = 0;
  sub_18003FB70((__int64 *)(a1 + 200));
  return a1;
}
