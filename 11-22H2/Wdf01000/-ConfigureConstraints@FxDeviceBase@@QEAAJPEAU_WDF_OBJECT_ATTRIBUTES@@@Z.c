/*
 * XREFs of ?ConfigureConstraints@FxDeviceBase@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003905C
 * Callers:
 *     imp_WdfDeviceMiniportCreate @ 0x1C0038600 (imp_WdfDeviceMiniportCreate.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C003E20C (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0038A58 (--0FxCallbackMutexLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxDeviceBase::ConfigureConstraints(FxDeviceBase *this, _WDF_OBJECT_ATTRIBUTES *ObjectAttributes)
{
  unsigned int v2; // ebx
  _WDF_EXECUTION_LEVEL *p_m_ExecutionLevel; // r14
  _WDF_SYNCHRONIZATION_SCOPE *p_m_SynchronizationScope; // rsi
  _WDF_EXECUTION_LEVEL v6; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v8; // rax
  ULONG Tag; // r8d
  FX_POOL **v10; // rax
  FxCallbackLock *v11; // rax
  FxCallbackLock *v12; // rcx
  FX_POOL **v13; // rax
  const void *_a1; // rax
  __m128i v16; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  _WDF_EXECUTION_LEVEL driverLevel; // [rsp+70h] [rbp+20h] BYREF
  _WDF_SYNCHRONIZATION_SCOPE driverScope; // [rsp+78h] [rbp+28h] BYREF

  v2 = 0;
  p_m_ExecutionLevel = &this->m_ExecutionLevel;
  driverLevel = WdfExecutionLevelInvalid;
  driverScope = WdfSynchronizationScopeInvalid;
  p_m_SynchronizationScope = &this->m_SynchronizationScope;
  if ( ObjectAttributes )
  {
    *p_m_ExecutionLevel = ObjectAttributes->ExecutionLevel;
    *p_m_SynchronizationScope = ObjectAttributes->SynchronizationScope;
  }
  this->m_Driver->GetConstraints(&this->m_Driver->IFxHasCallbacks, &driverLevel, &driverScope);
  v6 = *p_m_ExecutionLevel;
  if ( *p_m_ExecutionLevel == WdfExecutionLevelInheritFromParent )
  {
    v6 = driverLevel;
    *p_m_ExecutionLevel = driverLevel;
  }
  if ( *p_m_SynchronizationScope == WdfSynchronizationScopeInheritFromParent )
    *p_m_SynchronizationScope = driverScope;
  m_Globals = this->m_Globals;
  v8 = retaddr;
  v16.m128i_i64[0] = 0LL;
  v16.m128i_i64[1] = 64LL;
  Tag = m_Globals->Tag;
  if ( v6 == WdfExecutionLevelPassive )
  {
    if ( !m_Globals->FxPoolTrackingOn )
      v8 = 0LL;
    v10 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, 0x70uLL, Tag, v8);
    if ( v10 )
    {
      FxCallbackMutexLock::FxCallbackMutexLock((FxCallbackMutexLock *)v10, this->m_Globals);
      v12 = v11;
      goto LABEL_17;
    }
  }
  else
  {
    if ( !m_Globals->FxPoolTrackingOn )
      v8 = 0LL;
    v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v16, 0x40uLL, Tag, v8);
    v12 = (FxCallbackLock *)v13;
    if ( v13 )
    {
      v13[1] = (FX_POOL *)this->m_Globals;
      *v13 = (FX_POOL *)FxCallbackSpinLock::`vftable';
      v13[2] = 0LL;
      *((_DWORD *)v13 + 6) = 0;
      v13[4] = 0LL;
      v13[7] = 0LL;
      *((_BYTE *)v13 + 48) = 1;
      goto LABEL_17;
    }
  }
  v12 = 0LL;
LABEL_17:
  this->m_CallbackLockPtr = v12;
  if ( v12 )
  {
    v12->Initialize(v12, this);
    this->m_CallbackLockObjectPtr = this;
  }
  else
  {
    v2 = -1073741670;
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0x14u, 0xAu, WPP_FxDeviceBase_cpp_Traceguids, _a1, -1073741670);
  }
  return v2;
}
