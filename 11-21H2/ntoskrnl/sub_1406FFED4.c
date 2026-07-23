/*
 * XREFs of sub_1406FFED4 @ 0x1406FFED4
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140683DF0 @ 0x140683DF0 (sub_140683DF0.c)
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140687598 @ 0x140687598 (sub_140687598.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_1406A1DE0 @ 0x1406A1DE0 (sub_1406A1DE0.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1406D77F0 @ 0x1406D77F0 (sub_1406D77F0.c)
 *     sub_1406E4FA4 @ 0x1406E4FA4 (sub_1406E4FA4.c)
 *     sub_1406E9850 @ 0x1406E9850 (sub_1406E9850.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1406FFF24 @ 0x1406FFF24 (sub_1406FFF24.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     DnsPrint_RpcStatsBuffer_0 @ 0x1409B05AC (DnsPrint_RpcStatsBuffer_0.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall sub_1406FFED4(__int64 a1, __int64 a2)
{
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  return ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 56), 1u);
}
