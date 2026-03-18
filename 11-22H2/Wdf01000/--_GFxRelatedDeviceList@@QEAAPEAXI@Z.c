/*
 * XREFs of ??_GFxRelatedDeviceList@@QEAAPEAXI@Z @ 0x1C00687C0
 * Callers:
 *     ??1FxPkgPdo@@UEAA@XZ @ 0x1C00686E8 (--1FxPkgPdo@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0070ED0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C004F69C (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxRelatedDeviceList *__fastcall FxRelatedDeviceList::`scalar deleting destructor'(FxRelatedDeviceList *this)
{
  this->m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(this);
  FxPoolFree((FX_POOL_TRACKER *)this);
  return this;
}
