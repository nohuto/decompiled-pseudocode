/*
 * XREFs of ?ReleaseLock@FxWaitLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C004FB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxWaitLockTransactionedList::ReleaseLock(
        FxWaitLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 Irql)
{
  this->m_StateChangeListLock.m_OwningThread = 0LL;
  KeSetEvent(&this->m_StateChangeListLock.m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
}
