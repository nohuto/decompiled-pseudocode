/*
 * XREFs of sub_18009DA50 @ 0x18009DA50
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 */

__int64 __fastcall sub_18009DA50(__int64 a1, __int64 a2)
{
  __int64 *v3; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  v3 = (__int64 *)(a1 + 40);
  *v3 = 0LL;
  v3[1] = 0LL;
  *(_BYTE *)(a1 + 56) = 1;
  sub_1800124F8(v3, (_QWORD *)(a2 + 704));
  return a1;
}
