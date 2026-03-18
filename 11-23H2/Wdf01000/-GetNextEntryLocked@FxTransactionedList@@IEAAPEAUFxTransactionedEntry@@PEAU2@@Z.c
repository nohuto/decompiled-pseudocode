/*
 * XREFs of ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C004F900
 * Callers:
 *     ?SetFilterIoType@FxDevice@@AEAAXXZ @ 0x1C003E8FC (-SetFilterIoType@FxDevice@@AEAAXXZ.c)
 *     ?SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C004FCE8 (-SearchForAndRemove@FxTransactionedList@@IEAAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?PnpEventRemoved@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006B120 (-PnpEventRemoved@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ @ 0x1C006B600 (-PnpEventSurpriseRemovePendingOverload@FxPkgPnp@@MEAAXXZ.c)
 *     ?PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ @ 0x1C006E4DC (-PowerDmaEnableAndScan@FxPkgPnp@@IEAAEXZ.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0072730 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ @ 0x1C007D2A8 (-PowerPolicyDisarmWakeFromSx@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ @ 0x1C007D5B4 (-PowerPolicyPostParentToD0ToChildren@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ @ 0x1C0081E40 (-PowerDmaPowerDown@FxPkgPnp@@IEAAEXZ.c)
 *     ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00898D4 (-GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z.c)
 *     ?ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z @ 0x1C0089900 (-ProcessAdd@FxRelatedDeviceList@@MEAAJPEAUFxTransactionedEntry@@@Z.c)
 * Callees:
 *     <none>
 */

FxTransactionedEntry *__fastcall FxTransactionedList::GetNextEntryLocked(
        FxTransactionedList *this,
        FxTransactionedEntry *Entry)
{
  FxTransactionedEntry *p_m_ListHead; // rcx
  FxTransactionedEntry *result; // rax

  p_m_ListHead = (FxTransactionedEntry *)&this->m_ListHead;
  if ( !Entry )
    Entry = p_m_ListHead;
  for ( result = (FxTransactionedEntry *)Entry->m_ListLink.Flink;
        result != p_m_ListHead;
        result = (FxTransactionedEntry *)result->m_ListLink.Flink )
  {
    if ( result->m_Transaction == FxTransactionActionNothing )
      return result;
  }
  return 0LL;
}
