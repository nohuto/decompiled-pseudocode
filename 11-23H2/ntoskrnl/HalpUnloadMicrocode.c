/*
 * XREFs of HalpUnloadMicrocode @ 0x140934DB0
 * Callers:
 *     HalpMcExportAndChargeNeededData @ 0x1408608B0 (HalpMcExportAndChargeNeededData.c)
 *     HalpLoadMicrocode @ 0x140934B30 (HalpLoadMicrocode.c)
 * Callees:
 *     MmReturnChargesToLockPagedPool @ 0x140A309A0 (MmReturnChargesToLockPagedPool.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 HalpUnloadMicrocode()
{
  PVOID v0; // rbx

  McMicrocodeOperation = 0LL;
  HalpMcUpdateMicrocodeFunc = 0LL;
  HalpMcUpdateMicrocodeFuncEx = 0LL;
  HalpMcUpdateLockFunc = 0LL;
  HalpMcUpdateUnlockFunc = 0LL;
  HalpMcUpdatePostUpdateFunc = 0LL;
  HalpMcUpdateExportDataFunc = 0LL;
  v0 = HalpMcUpdateData;
  if ( HalpMcUpdateData )
  {
    HalpMcUpdateData = 0LL;
    if ( HalpMcUpdateDataCharged )
    {
      MmReturnChargesToLockPagedPool(v0, (unsigned int)HalpMcUpdateDataSize);
      HalpMcUpdateDataCharged = 0;
    }
    LODWORD(HalpMcUpdateDataSize) = 0;
    ExFreePoolWithTag(v0, 0);
  }
  return 0LL;
}
