/*
 * XREFs of PoFxSetComponentLatency @ 0x14045DDB0
 * Callers:
 *     sub_1406199E0 @ 0x1406199E0 (sub_1406199E0.c)
 * Callees:
 *     sub_14045E2C4 @ 0x14045E2C4 (sub_14045E2C4.c)
 *     sub_14045E4C2 @ 0x14045E4C2 (sub_14045E4C2.c)
 */

__int64 __fastcall PoFxSetComponentLatency(__int64 a1, unsigned int a2, __int64 a3)
{
  sub_14045E2C4(*(_QWORD *)(a1 + 48));
  return sub_14045E4C2(*(_QWORD *)(a1 + 56), a2, a3);
}
