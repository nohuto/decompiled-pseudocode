/*
 * XREFs of sub_1800F82B0 @ 0x1800F82B0
 * Callers:
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 * Callees:
 *     sub_1800129F4 @ 0x1800129F4 (sub_1800129F4.c)
 *     sub_1800F5EB0 @ 0x1800F5EB0 (sub_1800F5EB0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F82B0(__int64 a1, __int64 a2)
{
  __int64 *v4; // r8

  sub_1800129F4((__int64 *)a1, a2);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  sub_1800129F4((__int64 *)(a1 + 40), a2 + 40);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
  *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
  *(_BYTE *)(a1 + 92) = *(_BYTE *)(a2 + 92);
  sub_1800F5EB0((_QWORD *)(a1 + 96), a2 + 96, v4);
  return a1;
}
