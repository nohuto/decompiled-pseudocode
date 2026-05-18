/*
 * XREFs of sub_18003FBE0 @ 0x18003FBE0
 * Callers:
 *     sub_180040814 @ 0x180040814 (sub_180040814.c)
 * Callees:
 *     sub_180029F5C @ 0x180029F5C (sub_180029F5C.c)
 *     sub_18002A2D4 @ 0x18002A2D4 (sub_18002A2D4.c)
 *     sub_18003FB30 @ 0x18003FB30 (sub_18003FB30.c)
 *     sub_18003FB70 @ 0x18003FB70 (sub_18003FB70.c)
 *     sub_18003FBB0 @ 0x18003FBB0 (sub_18003FBB0.c)
 *     sub_1800E0D60 @ 0x1800E0D60 (sub_1800E0D60.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18003FBE0(__int64 a1, __int64 a2)
{
  int v4; // eax

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  if ( a2 )
    v4 = sub_18002A2D4(a2 + 8);
  else
    v4 = 1;
  sub_180029F5C(a1 + 16, v4);
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
