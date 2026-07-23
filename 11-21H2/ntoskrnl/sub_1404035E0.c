/*
 * XREFs of sub_1404035E0 @ 0x1404035E0
 * Callers:
 *     sub_140A3792C @ 0x140A3792C (sub_140A3792C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1404035E0(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 160) = xmmword_140014810;
  *(_OWORD *)(a1 + 176) = xmmword_140014820;
  *(_OWORD *)(a1 + 192) = xmmword_140014830;
  *(_OWORD *)(a1 + 208) = xmmword_140014840;
  return result;
}
