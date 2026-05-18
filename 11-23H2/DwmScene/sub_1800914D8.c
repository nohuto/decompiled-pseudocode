/*
 * XREFs of sub_1800914D8 @ 0x1800914D8
 * Callers:
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 * Callees:
 *     sub_18001D0F4 @ 0x18001D0F4 (sub_18001D0F4.c)
 *     sub_180091CCC @ 0x180091CCC (sub_180091CCC.c)
 *     sub_180091E20 @ 0x180091E20 (sub_180091E20.c)
 *     sub_180091F1C @ 0x180091F1C (sub_180091F1C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_1800914D8(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rax

  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 32) = 0LL;
  sub_180091CCC(a1 + 40, a2 + 56);
  sub_18001D0F4(a1 + 104, a2 + 120);
  *(_BYTE *)(a1 + 168) = 0;
  sub_180091E20(a2);
  sub_180091F1C(a3);
  return a1;
}
