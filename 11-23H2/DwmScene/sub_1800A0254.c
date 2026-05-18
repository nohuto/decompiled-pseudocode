/*
 * XREFs of sub_1800A0254 @ 0x1800A0254
 * Callers:
 *     sub_180032A34 @ 0x180032A34 (sub_180032A34.c)
 * Callees:
 *     sub_180011CA0 @ 0x180011CA0 (sub_180011CA0.c)
 *     sub_18002A570 @ 0x18002A570 (sub_18002A570.c)
 *     sub_18002A62C @ 0x18002A62C (sub_18002A62C.c)
 *     sub_1800A0648 @ 0x1800A0648 (sub_1800A0648.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800A0254(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  sub_18002A570(a1);
  *(_QWORD *)(a1 + 16) = a2;
  sub_1800A0648(a1 + 32);
  *(_QWORD *)(a1 + 24) = *sub_180011CA0(&v5);
  return sub_18002A62C(a1);
}
