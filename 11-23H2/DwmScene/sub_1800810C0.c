/*
 * XREFs of sub_1800810C0 @ 0x1800810C0
 * Callers:
 *     sub_180042E7C @ 0x180042E7C (sub_180042E7C.c)
 *     sub_18004A02C @ 0x18004A02C (sub_18004A02C.c)
 *     sub_18004ADAC @ 0x18004ADAC (sub_18004ADAC.c)
 *     sub_180051128 @ 0x180051128 (sub_180051128.c)
 *     sub_18005938C @ 0x18005938C (sub_18005938C.c)
 *     sub_18008F548 @ 0x18008F548 (sub_18008F548.c)
 *     sub_18009660C @ 0x18009660C (sub_18009660C.c)
 * Callees:
 *     sub_180015604 @ 0x180015604 (sub_180015604.c)
 *     sub_180017648 @ 0x180017648 (sub_180017648.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800810C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)a1 = &Spectre::Engine::Component::`vftable';
  sub_180017648((_QWORD *)(a1 + 24), a2);
  sub_180015604((_QWORD *)(a1 + 56), a3);
  *(_BYTE *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 76) = 0;
  *(_QWORD *)(a1 + 80) = 0LL;
  return a1;
}
