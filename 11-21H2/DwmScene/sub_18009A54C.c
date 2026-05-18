/*
 * XREFs of sub_18009A54C @ 0x18009A54C
 * Callers:
 *     sub_180059880 @ 0x180059880 (sub_180059880.c)
 * Callees:
 *     sub_18002B240 @ 0x18002B240 (sub_18002B240.c)
 */

__int64 __fastcall sub_18009A54C(__int64 a1)
{
  __int64 result; // rax

  sub_18002B240((_QWORD *)a1);
  *(_QWORD *)a1 = &Spectre::Engine::ConstantBufferGeneric::`vftable';
  result = a1;
  *(_DWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  return result;
}
