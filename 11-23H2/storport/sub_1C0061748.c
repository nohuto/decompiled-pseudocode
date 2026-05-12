/*
 * XREFs of sub_1C0061748 @ 0x1C0061748
 * Callers:
 *     sub_1C00ACDF4 @ 0x1C00ACDF4 (sub_1C00ACDF4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1C0061748(__int64 a1, int a2)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 96) = a2;
  *(_WORD *)(a1 + 88) = 1;
  result = *(_QWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 92) = 4;
  *(_WORD *)(a1 + 90) = *(_WORD *)(result + 56);
  return result;
}
