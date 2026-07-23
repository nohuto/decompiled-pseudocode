/*
 * XREFs of KeInitializeTimer2 @ 0x1403588D0
 * Callers:
 *     sub_1407D5050 @ 0x1407D5050 (sub_1407D5050.c)
 *     sub_1407D53D0 @ 0x1407D53D0 (sub_1407D53D0.c)
 *     sub_1408292C0 @ 0x1408292C0 (sub_1408292C0.c)
 *     sub_140852250 @ 0x140852250 (sub_140852250.c)
 *     sub_1408534E0 @ 0x1408534E0 (sub_1408534E0.c)
 *     sub_140858B18 @ 0x140858B18 (sub_140858B18.c)
 *     sub_14085A124 @ 0x14085A124 (sub_14085A124.c)
 *     sub_140A58CF8 @ 0x140A58CF8 (sub_140A58CF8.c)
 *     sub_140B0433C @ 0x140B0433C (sub_140B0433C.c)
 * Callees:
 *     sub_1403588EC @ 0x1403588EC (sub_1403588EC.c)
 */

__int64 __fastcall KeInitializeTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  *(_WORD *)(a1 + 2) = 0;
  return sub_1403588EC(a1, a2, a3, a4);
}
