/*
 * XREFs of HvcallpNoHypervisorPresent @ 0x14036E650
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1403CC2A0 (HvlSendSyntheticClusterIpi.c)
 *     HvcallInitiateHypercall @ 0x1403CD360 (HvcallInitiateHypercall.c)
 *     HvcallpExtendedFastHypercall @ 0x14042B050 (HvcallpExtendedFastHypercall.c)
 *     HvpViewMapCreateViewsForRegion @ 0x140689C78 (HvpViewMapCreateViewsForRegion.c)
 *     HvpViewMapCreateView @ 0x140689F1C (HvpViewMapCreateView.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x14068F7D4 (HvpViewMapDeleteViewTreeNode.c)
 *     HvpViewMapPromoteRangeToMapping @ 0x14074FA70 (HvpViewMapPromoteRangeToMapping.c)
 *     HvpViewMapShrinkStorage @ 0x140A1D2F8 (HvpViewMapShrinkStorage.c)
 * Callees:
 *     <none>
 */

__int64 HvcallpNoHypervisorPresent()
{
  return 4096LL;
}
