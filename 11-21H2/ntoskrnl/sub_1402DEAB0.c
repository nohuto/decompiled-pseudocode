/*
 * XREFs of sub_1402DEAB0 @ 0x1402DEAB0
 * Callers:
 *     sub_14025B96C @ 0x14025B96C (sub_14025B96C.c)
 *     sub_1402DE844 @ 0x1402DE844 (sub_1402DE844.c)
 *     sub_1407456F8 @ 0x1407456F8 (sub_1407456F8.c)
 *     sub_140765370 @ 0x140765370 (sub_140765370.c)
 *     sub_140767CF8 @ 0x140767CF8 (sub_140767CF8.c)
 *     sub_1407702BC @ 0x1407702BC (sub_1407702BC.c)
 *     sub_140777C08 @ 0x140777C08 (sub_140777C08.c)
 *     sub_140778C00 @ 0x140778C00 (sub_140778C00.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_140862BA0 @ 0x140862BA0 (sub_140862BA0.c)
 *     sub_1409590D0 @ 0x1409590D0 (sub_1409590D0.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_1402DEAB0(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 774 && v1 <= 783;
}
