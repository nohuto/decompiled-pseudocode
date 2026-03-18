/*
 * XREFs of ?ConfigureConstraints@FxIoQueue@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@@Z @ 0x1C0025214
 * Callers:
 *     ?Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@E@Z @ 0x1C0024F78 (-Initialize@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qDDd @ 0x1C006417C (WPP_IFR_SF_qDDd.c)
 */

__int64 __fastcall FxIoQueue::ConfigureConstraints(
        FxIoQueue *this,
        _WDF_OBJECT_ATTRIBUTES *ObjectAttributes,
        FxDriver *Caller)
{
  FxCallbackSpinLock *p_m_CallbackSpinLock; // r15
  FxCallbackLock *m_CallbackLockPtr; // rdi
  FxCallbackMutexLock *p_m_CallbackMutexLock; // r14
  _WDF_EXECUTION_LEVEL m_ExecutionLevel; // r8d
  bool v10; // si
  _WDF_EXECUTION_LEVEL v11; // edx
  _WDF_SYNCHRONIZATION_SCOPE m_SynchronizationScope; // ecx
  FxIoQueueIoDefault *p_m_IoDefault; // rbp
  __int64 result; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v16; // r10
  const void *ObjectHandleUnchecked; // rax
  unsigned int v18; // edx
  unsigned int globals; // r8d
  int v20; // [rsp+40h] [rbp-68h]
  FxCallbackLock *ParentLevel; // [rsp+B8h] [rbp+10h] BYREF
  FxCallbackLock *ParentScope; // [rsp+C8h] [rbp+20h] BYREF

  p_m_CallbackSpinLock = &this->m_CallbackSpinLock;
  m_CallbackLockPtr = 0LL;
  LODWORD(ParentLevel) = 0;
  LODWORD(ParentScope) = 0;
  this->m_CallbackSpinLock.Initialize(&this->m_CallbackSpinLock, this);
  p_m_CallbackMutexLock = &this->m_CallbackMutexLock;
  this->m_CallbackMutexLock.Initialize(&this->m_CallbackMutexLock, this);
  if ( ObjectAttributes )
  {
    this->m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    this->m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_DeviceBase->GetConstraints(
    &this->m_DeviceBase->IFxHasCallbacks,
    (_WDF_EXECUTION_LEVEL *)&ParentLevel,
    (_WDF_SYNCHRONIZATION_SCOPE *)&ParentScope);
  m_ExecutionLevel = this->m_ExecutionLevel;
  v10 = 1;
  v11 = (int)ParentLevel;
  if ( m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    this->m_ExecutionLevel = (int)ParentLevel;
    m_ExecutionLevel = v11;
  }
  m_SynchronizationScope = this->m_SynchronizationScope;
  if ( m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
  {
    m_SynchronizationScope = (int)ParentScope;
    this->m_SynchronizationScope = (int)ParentScope;
  }
  if ( m_ExecutionLevel == WdfExecutionLevelPassive )
  {
    this->m_ObjectFlags |= 0x11u;
    this->m_PassiveLevel = 1;
  }
  else
  {
    p_m_CallbackMutexLock = (FxCallbackMutexLock *)p_m_CallbackSpinLock;
  }
  this->m_CallbackLockPtr = p_m_CallbackMutexLock;
  this->m_CallbackLockObjectPtr = this;
  if ( m_SynchronizationScope == WdfSynchronizationScopeDevice )
  {
    if ( Caller && Caller != this->m_Globals->Driver )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qL(v16, 2u, 0xDu, 0x14u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC000000D);
    }
    else
    {
      if ( v11 == this->m_ExecutionLevel )
      {
        this->m_CallbackLockPtr = this->m_DeviceBase->GetCallbackLockPtr(
                                    &this->m_DeviceBase->IFxHasCallbacks,
                                    &this->m_CallbackLockObjectPtr);
        goto LABEL_11;
      }
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qDDd(
        this->m_Globals,
        v18,
        0xDu,
        0x15u,
        WPP_FxIoQueue_cpp_Traceguids,
        ObjectHandleUnchecked,
        v18,
        globals,
        v20);
    }
    return 3221225485LL;
  }
  v10 = m_SynchronizationScope == WdfSynchronizationScopeQueue;
LABEL_11:
  p_m_IoDefault = &this->m_IoDefault;
  if ( v10 )
  {
    m_CallbackLockPtr = this->m_CallbackLockPtr;
    p_m_IoDefault = &this->m_IoDefault;
  }
  ParentLevel = m_CallbackLockPtr;
  ParentScope = m_CallbackLockPtr;
  p_m_IoDefault->m_CallbackLock = m_CallbackLockPtr;
  result = 0LL;
  this->m_IoStop.m_CallbackLock = ParentLevel;
  this->m_IoResume.m_CallbackLock = ParentScope;
  this->m_IoRead.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoWrite.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoDeviceControl.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoInternalDeviceControl.m_CallbackLock = m_CallbackLockPtr;
  this->m_PurgeComplete.m_CallbackLock = m_CallbackLockPtr;
  this->m_ReadyNotify.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoCanceledOnQueue.m_CallbackLock = m_CallbackLockPtr;
  this->m_IoCancelCallbackLockPtr = m_CallbackLockPtr;
  return result;
}
