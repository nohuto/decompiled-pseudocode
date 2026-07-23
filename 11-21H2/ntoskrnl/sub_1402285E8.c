/*
 * XREFs of sub_1402285E8 @ 0x1402285E8
 * Callers:
 *     MmUnmapVideoDisplay @ 0x140215660 (MmUnmapVideoDisplay.c)
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_14022689C @ 0x14022689C (sub_14022689C.c)
 *     sub_140227254 @ 0x140227254 (sub_140227254.c)
 *     sub_140228464 @ 0x140228464 (sub_140228464.c)
 *     sub_140228CD0 @ 0x140228CD0 (sub_140228CD0.c)
 *     ?get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z @ 0x14024D7F4 (-get_DynamicTerminalClasses@CMSPAddress@@UEAAJPEAUtagVARIANT@@@Z.c)
 *     sub_14028ECFC @ 0x14028ECFC (sub_14028ECFC.c)
 *     sub_1402C4E50 @ 0x1402C4E50 (sub_1402C4E50.c)
 *     sub_14032E130 @ 0x14032E130 (sub_14032E130.c)
 *     sub_1403C92F4 @ 0x1403C92F4 (sub_1403C92F4.c)
 *     sub_1403C9494 @ 0x1403C9494 (sub_1403C9494.c)
 *     sub_1403C9590 @ 0x1403C9590 (sub_1403C9590.c)
 *     sub_1405853E4 @ 0x1405853E4 (sub_1405853E4.c)
 *     sub_140597940 @ 0x140597940 (sub_140597940.c)
 *     sub_1405ABD20 @ 0x1405ABD20 (sub_1405ABD20.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_1405AE144 @ 0x1405AE144 (sub_1405AE144.c)
 *     sub_1405B07F4 @ 0x1405B07F4 (sub_1405B07F4.c)
 *     sub_1405B585C @ 0x1405B585C (sub_1405B585C.c)
 *     sub_140B05620 @ 0x140B05620 (sub_140B05620.c)
 * Callees:
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 */

__int64 __fastcall sub_1402285E8(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v6; // esi
  __int64 result; // rax

  v6 = 0;
  do
  {
    a3 = a3 << 25 >> 16;
    result = sub_1402CF280(a1, a3, 1LL, v6++);
  }
  while ( v6 <= a2 );
  return result;
}
