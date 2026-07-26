/*
 * XREFs of ??0UpdateBindings@BindingMetrics@@QEAA@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0021ED4
 * Callers:
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C01135EC (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 * Callees:
 *     ??0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z @ 0x1C0021500 (--0BaseMetric@BindingMetrics@@QEAA@W4OperationType@1@PEBU_NDIS_MINIPORT_BLOCK@@AEBU_GUID@@@Z.c)
 */

BindingMetrics::UpdateBindings *__fastcall BindingMetrics::UpdateBindings::UpdateBindings(
        BindingMetrics::UpdateBindings *this,
        const struct _NDIS_MINIPORT_BLOCK *a2,
        const struct _GUID *a3)
{
  BindingMetrics::BaseMetric::BaseMetric((__int64)this, 0, (__int64)a2, (__int64)a3);
  *((_QWORD *)this + 6) = 0LL;
  return this;
}
