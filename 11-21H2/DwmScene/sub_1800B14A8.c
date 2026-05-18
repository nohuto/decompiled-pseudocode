/*
 * XREFs of sub_1800B14A8 @ 0x1800B14A8
 * Callers:
 *     sub_1800B15EC @ 0x1800B15EC (sub_1800B15EC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800B14A8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 56) = 1;
  *(_QWORD *)a1 = &Spectre::Engine::ScissorState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  result = a1;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 1164);
  return result;
}
