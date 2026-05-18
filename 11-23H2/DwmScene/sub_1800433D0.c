/*
 * XREFs of sub_1800433D0 @ 0x1800433D0
 * Callers:
 *     sub_180042E7C @ 0x180042E7C (sub_180042E7C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800433D0(__int64 a1)
{
  __int64 result; // rax

  result = 1065353216LL;
  *(_DWORD *)(a1 + 120) = 1;
  *(_DWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 88) = 1065353216;
  *(_DWORD *)(a1 + 92) = 1065353216;
  *(_DWORD *)(a1 + 96) = 1065353216;
  *(_DWORD *)(a1 + 100) = 1065353216;
  *(_QWORD *)(a1 + 104) = 1065353216LL;
  *(_QWORD *)(a1 + 112) = 1135869952LL;
  *(_BYTE *)(a1 + 72) = 0;
  return result;
}
