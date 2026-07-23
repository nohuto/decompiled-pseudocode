/*
 * XREFs of sub_140656BA8 @ 0x140656BA8
 * Callers:
 *     sub_1403FF3BC @ 0x1403FF3BC (sub_1403FF3BC.c)
 *     sub_1403FF93C @ 0x1403FF93C (sub_1403FF93C.c)
 *     sub_1404000C8 @ 0x1404000C8 (sub_1404000C8.c)
 *     sub_1404001EC @ 0x1404001EC (sub_1404001EC.c)
 *     sub_140400318 @ 0x140400318 (sub_140400318.c)
 *     sub_140401470 @ 0x140401470 (sub_140401470.c)
 *     sub_140401C90 @ 0x140401C90 (sub_140401C90.c)
 * Callees:
 *     sub_140A3412C @ 0x140A3412C (sub_140A3412C.c)
 */

__int64 __fastcall sub_140656BA8(__int64 a1)
{
  return sub_140A3412C(a1 - *(unsigned int *)(a1 - 4));
}
