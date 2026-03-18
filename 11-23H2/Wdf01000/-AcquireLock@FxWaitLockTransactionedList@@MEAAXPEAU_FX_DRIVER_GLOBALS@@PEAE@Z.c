/*
 * XREFs of ?AcquireLock@FxWaitLockTransactionedList@@MEAAXPEAU_FX_DRIVER_GLOBALS@@PEAE@Z @ 0x1C004F7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C000134C (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 */

void __fastcall FxWaitLockTransactionedList::AcquireLock(
        FxWaitLockTransactionedList *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 *Irql)
{
  FxWaitLockInternal::AcquireLock(&this->m_StateChangeListLock, FxDriverGlobals, 0LL);
}
