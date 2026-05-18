/*
 * XREFs of sub_18009ECCC @ 0x18009ECCC
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_18009ECCC(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IndexBufferState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v4 = (__int64 *)(a1 + 40);
  *v4 = 0LL;
  v4[1] = 0LL;
  *(_BYTE *)(a1 + 68) = 1;
  sub_1800124F8(v4, (_QWORD *)(a2 + 1120));
  *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 1136);
  return a1;
}
