/*
 * XREFs of sub_1406D17F4 @ 0x1406D17F4
 * Callers:
 *     sub_14067FE98 @ 0x14067FE98 (sub_14067FE98.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0 @ 0x14077E168 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z_0.c)
 *     sub_1407806B0 @ 0x1407806B0 (sub_1407806B0.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_1406D17F4(_QWORD *a1)
{
  if ( a1[4] )
    sub_14042A5E0(a1 + 2, a1 + 6);
  sub_140346D64(a1, 0x50454D43u);
}
