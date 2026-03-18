/*
 * XREFs of ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0038B94
 * Callers:
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1C0039214 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x1C0046C04 (-InitializeLockOrder@FxVerifierLock@@AEAAXXZ.c)
 */

void __fastcall FxVerifierLock::FxVerifierLock(
        FxVerifierLock *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxObject *ParentObject,
        unsigned __int8 UseMutex)
{
  this->m_Lock.m_Lock = 0LL;
  this->m_Globals = FxDriverGlobals;
  this->m_Lock.m_DbgFlagIsInitialized = 1;
  this->m_Mutex.m_DbgFlagIsInitialized = 0;
  this->m_Mutex.m_Lock.Owner = 0LL;
  this->m_Mutex.m_Lock.Contention = 0;
  this->m_Mutex.m_Lock.Count = 1;
  KeInitializeEvent(&this->m_Mutex.m_Lock.Event, SynchronizationEvent, 0);
  this->m_Mutex.m_DbgFlagIsInitialized = 1;
  this->m_OwningThread = 0LL;
  this->m_OwnedLink = 0LL;
  this->m_ThreadTableEntry.Thread = 0LL;
  this->m_ThreadTableEntry.PerThreadPassiveLockList = 0LL;
  this->m_ThreadTableEntry.PerThreadDispatchLockList = 0LL;
  this->m_Order = -1;
  *(_DWORD *)&this->m_Type = 11538450;
  this->m_ParentObject = ParentObject;
  this->m_CallbackLock = 1;
  this->m_UseMutex = UseMutex != 0;
  FxVerifierLock::InitializeLockOrder(this);
}
