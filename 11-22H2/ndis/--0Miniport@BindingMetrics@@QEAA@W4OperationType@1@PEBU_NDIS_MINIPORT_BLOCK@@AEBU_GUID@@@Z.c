/*
 * XREFs of ??0Miniport@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0022044
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z @ 0x1C01139CC (-Iterate@BindEngine@Ndis@@AEAA_NAEBU_GUID@@@Z.c)
 * Callees:
 *     ??0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0021500 (--0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 */

__int64 __fastcall BindingMetrics::Miniport::Miniport(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  BindingMetrics::BaseMetric::BaseMetric(a1, a2, a3, a4);
  return a1;
}
