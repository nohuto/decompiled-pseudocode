/*
 * XREFs of sub_1406FFE90 @ 0x1406FFE90
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140683DF0 @ 0x140683DF0 (sub_140683DF0.c)
 *     sub_140683F18 @ 0x140683F18 (sub_140683F18.c)
 *     sub_140684158 @ 0x140684158 (sub_140684158.c)
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140685304 @ 0x140685304 (sub_140685304.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_140687598 @ 0x140687598 (sub_140687598.c)
 *     sub_140687654 @ 0x140687654 (sub_140687654.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     sub_1406A1DE0 @ 0x1406A1DE0 (sub_1406A1DE0.c)
 *     sub_1406CA970 @ 0x1406CA970 (sub_1406CA970.c)
 *     sub_1406D4808 @ 0x1406D4808 (sub_1406D4808.c)
 *     sub_1406D77F0 @ 0x1406D77F0 (sub_1406D77F0.c)
 *     sub_1406E4FA4 @ 0x1406E4FA4 (sub_1406E4FA4.c)
 *     sub_1406E9850 @ 0x1406E9850 (sub_1406E9850.c)
 *     sub_1406FF7C4 @ 0x1406FF7C4 (sub_1406FF7C4.c)
 *     sub_1406FF880 @ 0x1406FF880 (sub_1406FF880.c)
 *     sub_1406FFA80 @ 0x1406FFA80 (sub_1406FFA80.c)
 *     sub_1406FFF24 @ 0x1406FFF24 (sub_1406FFF24.c)
 *     sub_140700280 @ 0x140700280 (sub_140700280.c)
 *     sub_1409ABC00 @ 0x1409ABC00 (sub_1409ABC00.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     sub_1409B0400 @ 0x1409B0400 (sub_1409B0400.c)
 *     DnsPrint_RpcStatsBuffer_0 @ 0x1409B05AC (DnsPrint_RpcStatsBuffer_0.c)
 *     sub_1409B0C74 @ 0x1409B0C74 (sub_1409B0C74.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 */

void __fastcall sub_1406FFE90(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite((PERESOURCE)(a1 + 56));
  if ( a2 )
  {
    if ( (*(_WORD *)(a2 + 486))++ == 0xFFFF && *(_QWORD *)(a2 + 152) != a2 + 152 )
      KiCheckForKernelApcDelivery();
  }
}
