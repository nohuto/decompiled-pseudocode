/*
 * XREFs of sub_18003906C @ 0x18003906C
 * Callers:
 *     sub_1800CFABC @ 0x1800CFABC (sub_1800CFABC.c)
 * Callees:
 *     sub_1800291A0 @ 0x1800291A0 (sub_1800291A0.c)
 */

__int64 __fastcall sub_18003906C(__int64 a1)
{
  sub_1800291A0(a1);
  *(_QWORD *)a1 = &Spectre::Engine::CommandList::`vftable';
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return a1;
}
