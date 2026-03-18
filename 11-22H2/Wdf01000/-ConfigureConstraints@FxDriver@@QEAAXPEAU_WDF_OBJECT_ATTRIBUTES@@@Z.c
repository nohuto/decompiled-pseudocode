/*
 * XREFs of ?ConfigureConstraints@FxDriver@@QEAAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003FF70
 * Callers:
 *     ?Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0040090 (-Initialize@FxDriver@@QEAAJPEBU_UNICODE_STRING@@PEAU_WDF_DRIVER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxDriver::ConfigureConstraints(FxDriver *this, _WDF_OBJECT_ATTRIBUTES *DriverAttributes)
{
  FxCallbackMutexLock *p_m_CallbackMutexLock; // rsi
  _WDF_EXECUTION_LEVEL ExecutionLevel; // eax
  _WDF_SYNCHRONIZATION_SCOPE SynchronizationScope; // eax

  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  this->m_ObjectFlags |= 0x11u;
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( DriverAttributes )
  {
    ExecutionLevel = DriverAttributes->ExecutionLevel;
    if ( ExecutionLevel != WdfExecutionLevelInheritFromParent )
      this->m_ExecutionLevel = ExecutionLevel;
    SynchronizationScope = DriverAttributes->SynchronizationScope;
    if ( SynchronizationScope != WdfSynchronizationScopeInheritFromParent )
      this->m_SynchronizationScope = SynchronizationScope;
  }
  this->m_DriverDeviceAdd.m_CallbackLock = (FxCallbackLock *)((unsigned __int64)p_m_CallbackMutexLock & -(__int64)((unsigned int)(this->m_SynchronizationScope - 2) <= 1));
}
