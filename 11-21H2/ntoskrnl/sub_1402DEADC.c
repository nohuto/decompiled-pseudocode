/*
 * XREFs of sub_1402DEADC @ 0x1402DEADC
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 *     sub_140778C00 @ 0x140778C00 (sub_140778C00.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 * Callees:
 *     sub_1402DEB00 @ 0x1402DEB00 (sub_1402DEB00.c)
 */

__int64 __fastcall sub_1402DEADC(__int64 a1)
{
  return sub_1402DEB00(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304));
}
