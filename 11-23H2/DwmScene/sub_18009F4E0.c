/*
 * XREFs of sub_18009F4E0 @ 0x18009F4E0
 * Callers:
 *     sub_18009F624 @ 0x18009F624 (sub_18009F624.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18009F4E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = &Spectre::Engine::ScissorState::`vftable';
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  result = a1;
  *(_BYTE *)(a1 + 56) = 1;
  *(_OWORD *)(a1 + 40) = *(_OWORD *)(a2 + 1164);
  return result;
}
