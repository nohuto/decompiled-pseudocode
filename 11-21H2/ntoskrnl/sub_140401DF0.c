/*
 * XREFs of sub_140401DF0 @ 0x140401DF0
 * Callers:
 *     sub_140401E3C @ 0x140401E3C (sub_140401E3C.c)
 *     sub_140A3792C @ 0x140A3792C (sub_140A3792C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140401DF0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = xmmword_1400147D0;
  *(_OWORD *)(a1 + 176) = xmmword_1400147E0;
  *(_OWORD *)(a1 + 192) = xmmword_1400147F0;
  *(_OWORD *)(a1 + 208) = xmmword_140014800;
  return result;
}
