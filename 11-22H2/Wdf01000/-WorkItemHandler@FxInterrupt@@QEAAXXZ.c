/*
 * XREFs of ?WorkItemHandler@FxInterrupt@@QEAAXXZ @ 0x1C00802A4
 * Callers:
 *     ?_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z @ 0x1C0010120 (-_InterruptWorkItemCallback@FxInterrupt@@CAXPEAX@Z.c)
 * Callees:
 *     FX_TRACK_DRIVER @ 0x1C0006D3C (FX_TRACK_DRIVER.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxInterrupt::WorkItemHandler(FxInterrupt *this)
{
  FxCallbackLock *m_CallbackLock; // rcx
  void (__fastcall **p_m_EvtInterruptWorkItem)(WDFINTERRUPT__ *, void *); // rbx
  void (__fastcall *v4)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  __int64 v6; // rdx
  void (__fastcall *v7)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char); // rax
  unsigned __int64 v8; // rax
  unsigned __int8 irql; // [rsp+40h] [rbp+8h] BYREF

  FX_TRACK_DRIVER(this->m_Globals);
  m_CallbackLock = this->m_CallbackLock;
  p_m_EvtInterruptWorkItem = &this->m_EvtInterruptWorkItem;
  if ( m_CallbackLock )
  {
    irql = 0;
    m_CallbackLock->Lock(m_CallbackLock, &irql);
    v4 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(qword_1C009FF30 + 24LL);
    if ( v4 )
      v4(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(unsigned __int64))*p_m_EvtInterruptWorkItem)(ObjectHandleUnchecked);
    LOBYTE(v6) = irql;
    this->m_CallbackLock->Unlock(this->m_CallbackLock, v6);
  }
  else
  {
    v7 = *(void (__fastcall **)(void (__fastcall **)(WDFINTERRUPT__ *, void *), __int64, __int64, __int64, char))(qword_1C009FF30 + 24LL);
    if ( v7 )
      v7(&this->m_EvtInterruptWorkItem, 8LL, 1207959552LL, 3943LL, 2);
    FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    v8 = FxObject::GetObjectHandleUnchecked(this);
    ((void (__fastcall *)(unsigned __int64))*p_m_EvtInterruptWorkItem)(v8);
  }
}
