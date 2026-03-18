/*
 * XREFs of ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C000D590
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ @ 0x1C000D844 (-IsPowerStateNotifyingDriver@FxIoQueue@@AEAAEXZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 */

unsigned __int8 __fastcall FxIoQueue::ProcessCancelledRequestsOnQueue(FxIoQueue *this, unsigned __int8 *PreviousIrql)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  _LIST_ENTRY *p_m_CanceledOnQueueList; // rdi
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v7; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequestBase *v9; // rsi
  const void *_a1; // rax
  const void *_a2; // rdx
  unsigned __int8 v12; // r8
  WDFREQUEST__ *ObjectHandleUnchecked; // rsi
  WDFQUEUE__ *v14; // rbp
  unsigned __int8 v15; // r8
  void (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v18; // rdx
  FxCallbackLock *v19; // rcx
  char v21; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( FxIoQueue::IsPowerStateNotifyingDriver(this) )
    return 0;
  p_m_CanceledOnQueueList = &this->m_CanceledOnQueueList;
  while ( 1 )
  {
    Flink = p_m_CanceledOnQueueList->Flink;
    if ( p_m_CanceledOnQueueList->Flink == p_m_CanceledOnQueueList )
      break;
    v7 = Flink->Flink;
    if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
      __fastfail(3u);
    Blink->Flink = v7;
    v9 = (FxRequestBase *)&Flink[-18];
    v7->Blink = Blink;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    FxObject::GetObjectHandleUnchecked(this);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(v9);
    WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x55u, WPP_FxIoQueue_cpp_Traceguids, _a1, _a2);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(v9, 64);
    FxNonPagedObject::Unlock(this, *PreviousIrql, v12);
    ObjectHandleUnchecked = (WDFREQUEST__ *)FxObject::GetObjectHandleUnchecked(v9);
    v14 = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    Method = this->m_IoCanceledOnQueue.Method;
    if ( Method )
    {
      m_CallbackLock = this->m_IoCanceledOnQueue.m_CallbackLock;
      v21 = 0;
      if ( m_CallbackLock )
      {
        m_CallbackLock->Lock(m_CallbackLock, (unsigned __int8 *)&v21);
        this->m_IoCanceledOnQueue.Method(v14, ObjectHandleUnchecked);
      }
      else
      {
        Method(v14, ObjectHandleUnchecked);
      }
      v19 = this->m_IoCanceledOnQueue.m_CallbackLock;
      if ( v19 )
      {
        LOBYTE(v18) = v21;
        v19->Unlock(v19, v18);
      }
    }
    FxNonPagedObject::Lock(this, PreviousIrql, v15);
  }
  return 1;
}
