/*
 * XREFs of sub_180081CE4 @ 0x180081CE4
 * Callers:
 *     sub_180081688 @ 0x180081688 (sub_180081688.c)
 *     sub_18008214C @ 0x18008214C (sub_18008214C.c)
 *     sub_180082598 @ 0x180082598 (sub_180082598.c)
 * Callees:
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

__int64 __fastcall sub_180081CE4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  sub_180017648((_QWORD *)a2, a3);
  *(_WORD *)(a2 + 32) = *(_WORD *)(a3 + 32);
  *(_DWORD *)(a2 + 36) = *(_DWORD *)(a3 + 36);
  *(_DWORD *)(a2 + 40) = *(_DWORD *)(a3 + 40);
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a3 + 44);
  result = *(unsigned int *)(a3 + 48);
  *(_DWORD *)(a2 + 48) = result;
  return result;
}
