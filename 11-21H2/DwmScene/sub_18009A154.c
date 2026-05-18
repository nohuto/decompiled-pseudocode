/*
 * XREFs of sub_18009A154 @ 0x18009A154
 * Callers:
 *     sub_18009695C @ 0x18009695C (sub_18009695C.c)
 *     sub_180097B04 @ 0x180097B04 (sub_180097B04.c)
 *     sub_18009A0CC @ 0x18009A0CC (sub_18009A0CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009A154(__int64 a1, int a2, int a3, int a4, int a5, int a6)
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
