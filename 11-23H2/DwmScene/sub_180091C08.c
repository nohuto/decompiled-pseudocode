/*
 * XREFs of sub_180091C08 @ 0x180091C08
 * Callers:
 *     sub_1800916DC @ 0x1800916DC (sub_1800916DC.c)
 * Callees:
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_18001D0F4 @ 0x18001D0F4 (sub_18001D0F4.c)
 *     sub_180091CCC @ 0x180091CCC (sub_180091CCC.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180091C08(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx

  sub_18001246C((_QWORD *)a1, (_QWORD *)a2);
  sub_18001246C((_QWORD *)(v4 + 16), (_QWORD *)(v5 + 16));
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 52);
  sub_180091CCC(a1 + 56, a2 + 56);
  sub_18001D0F4(a1 + 120, a2 + 120);
  return a1;
}
