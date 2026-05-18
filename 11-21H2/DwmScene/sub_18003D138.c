/*
 * XREFs of sub_18003D138 @ 0x18003D138
 * Callers:
 *     sub_1800E6C7C @ 0x1800E6C7C (sub_1800E6C7C.c)
 * Callees:
 *     sub_18002B268 @ 0x18002B268 (sub_18002B268.c)
 */

__int64 __fastcall sub_18003D138(__int64 a1)
{
  sub_18002B268(a1);
  *(_QWORD *)a1 = &Spectre::Engine::CommandList::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return a1;
}
