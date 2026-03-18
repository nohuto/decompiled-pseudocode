/*
 * XREFs of ?GetNextEntry@FxRelatedDeviceList@@QEAAPEAVFxRelatedDevice@@PEAV2@@Z @ 0x1C00898D4
 * Callers:
 *     imp_WdfDeviceClearRemovalRelationsDevices @ 0x1C0033F40 (imp_WdfDeviceClearRemovalRelationsDevices.c)
 *     ?ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ @ 0x1C0068A20 (-ClearEjectionDevicesList@FxPkgPdo@@QEAAXXZ.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x1C0072A98 (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0073678 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z @ 0x1C004F900 (-GetNextEntryLocked@FxTransactionedList@@IEAAPEAUFxTransactionedEntry@@PEAU2@@Z.c)
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
