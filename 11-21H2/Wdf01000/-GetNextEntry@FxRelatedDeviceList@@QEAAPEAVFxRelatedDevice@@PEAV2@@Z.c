/*
 * XREFs of ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C0091644
 * Callers:
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001C83C (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C00639C0 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C00834B0 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0088464 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C0010C88 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
 */

FxTransactionedEntry *__fastcall FxRelatedDeviceList::GetNextEntry(FxRelatedDeviceList *this, FxRelatedDevice *Entry)
{
  FxTransactionedEntry *result; // rax

  result = FxTransactionedList::GetNextEntryLocked(
             this,
             (FxTransactionedEntry *)((unsigned __int64)&Entry->m_TransactionedEntry & -(__int64)(Entry != 0LL)));
  if ( result )
    return (FxTransactionedEntry *)((char *)result - 104);
  return result;
}
