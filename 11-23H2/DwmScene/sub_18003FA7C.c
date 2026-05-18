/*
 * XREFs of sub_18003FA7C @ 0x18003FA7C
 * Callers:
 *     sub_18003FBB0 @ 0x18003FBB0 (sub_18003FBB0.c)
 * Callees:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 *     sub_180029054 @ 0x180029054 (sub_180029054.c)
 *     sub_180042798 @ 0x180042798 (sub_180042798.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18003FA7C(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v3; // rax
  _QWORD *v4; // rax

  *(_DWORD *)a1 = *a2;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  v3 = sub_180029054(1uLL);
  v4 = (_QWORD *)sub_18001090C(v3);
  *v4 = v4;
  v4[1] = v4;
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  sub_180042798(a1 + 24, 16LL, *(_QWORD *)(a1 + 8));
  return a1;
}
