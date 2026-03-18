/*
 * XREFs of HalMcFinishMicrocode @ 0x1403BAEE8
 * Callers:
 *     HalpProcInitSystem @ 0x140A54E70 (HalpProcInitSystem.c)
 * Callees:
 *     HalpMcExportAndChargeNeededData @ 0x140824960 (HalpMcExportAndChargeNeededData.c)
 */

__int64 HalMcFinishMicrocode()
{
  return HalpMcExportAndChargeNeededData();
}
