/*
 * XREFs of sub_18009D860 @ 0x18009D860
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_18003B5D8 @ 0x18003B5D8 (sub_18003B5D8.c)
 */

__int64 __fastcall sub_18009D860(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::VertexLayoutState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (_QWORD *)(a1 + 40);
  *v4 = 0LL;
  v4[1] = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_BYTE *)(a1 + 68) = 1;
  sub_18003B5D8(v4, (_QWORD *)(a2 + 736));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 752);
  return a1;
}
