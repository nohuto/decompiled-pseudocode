/*
 * XREFs of ?Invoke@FxIoQueueIoDefault@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0006EE8
 * Callers:
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C00050F0 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxIoQueueIoDefault::Invoke(FxIoQueueIoDefault *this, WDFQUEUE__ *Queue, WDFREQUEST__ *Request)
{
  FxCallbackLock *m_CallbackLock; // rcx
  __int64 v7; // rdx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF

  if ( this->Method )
  {
    m_CallbackLock = this->m_CallbackLock;
    irql = 0;
    if ( m_CallbackLock )
      m_CallbackLock->Lock(m_CallbackLock, &irql);
    this->Method(Queue, Request);
    if ( this->m_CallbackLock )
    {
      LOBYTE(v7) = irql;
      this->m_CallbackLock->Unlock(this->m_CallbackLock, v7);
    }
  }
}
