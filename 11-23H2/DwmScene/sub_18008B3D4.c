/*
 * XREFs of sub_18008B3D4 @ 0x18008B3D4
 * Callers:
 *     sub_180088784 @ 0x180088784 (sub_180088784.c)
 *     sub_180089564 @ 0x180089564 (sub_180089564.c)
 *     sub_18008B34C @ 0x18008B34C (sub_18008B34C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18008B3D4(__int64 a1, int a2, int a3, int a4, int a5, int a6)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = &Spectre::Engine::ArrayBufferDesc::`vftable';
  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 24) = a6;
  result = a1;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  return result;
}
