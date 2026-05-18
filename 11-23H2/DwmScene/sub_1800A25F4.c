/*
 * XREFs of sub_1800A25F4 @ 0x1800A25F4
 * Callers:
 *     sub_1800A0A84 @ 0x1800A0A84 (sub_1800A0A84.c)
 * Callees:
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 *     sub_18002B7C0 @ 0x18002B7C0 (sub_18002B7C0.c)
 *     sub_1800A1BDC @ 0x1800A1BDC (sub_1800A1BDC.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800A25F4(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax

  sub_1800A1BDC(a1);
  sub_1800A1BDC(v4 + 176);
  sub_1800A1BDC(a1 + 352);
  sub_1800A1BDC(a1 + 528);
  sub_1800A1BDC(a1 + 704);
  *(_QWORD *)(a1 + 880) = 0LL;
  *(_QWORD *)(a1 + 888) = 0LL;
  v5 = sub_18001C190();
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *(_QWORD *)(a1 + 880) = v5;
  *(_QWORD *)(a1 + 896) = 0LL;
  *(_QWORD *)(a1 + 904) = 0LL;
  *(_QWORD *)(a1 + 912) = a2;
  sub_18002B7C0(a1 + 928);
  *(_DWORD *)(a1 + 920) = 0;
  return a1;
}
