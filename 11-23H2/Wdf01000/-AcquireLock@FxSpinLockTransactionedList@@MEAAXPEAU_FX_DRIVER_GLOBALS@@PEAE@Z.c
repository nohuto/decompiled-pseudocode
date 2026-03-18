/*
 * XREFs of ?AcquireLock@FxSpinLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@PEAE@Z @ 0x1C004F7C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxSpinLockTransactionedList::AcquireLock(
        FxSpinLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 *Irql)
{
  *Irql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock.m_Lock);
}
