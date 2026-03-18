/*
 * XREFs of ?ProcessIdleComplete@FxIoQueue@@AEAAXPEAE@Z @ 0x1C0064C6C
 * Callers:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004CF0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z @ 0x1C0064630 (-Invoke@FxIoQueueIoResume@@QEAAXPEAUWDFQUEUE__@@PEAUWDFREQUEST__@@@Z.c)
 */

void __fastcall FxIoQueue::ProcessIdleComplete(FxIoQueue *this, unsigned __int8 *PreviousIrql, unsigned __int8 a3)
{
  FxIoQueueIoState m_IdleComplete; // xmm0
  void *m_IdleCompleteContext; // rbp
  unsigned __int8 v7; // dl
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // r8
  const void *_a1; // rax
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  FxIoQueueIoState callback; // [rsp+30h] [rbp-18h] BYREF

  m_IdleComplete = this->m_IdleComplete;
  m_IdleCompleteContext = this->m_IdleCompleteContext;
  this->m_IdleComplete.Method = 0LL;
  this->m_IdleCompleteContext = 0LL;
  v7 = *PreviousIrql;
  m_Globals = this->m_Globals;
  callback = m_IdleComplete;
  FxNonPagedObject::Unlock(this, v7, a3);
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x51u, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  if ( callback.Method )
  {
    ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(this);
    FxIoQueueIoResume::Invoke(&callback, ObjectHandleUnchecked, m_IdleCompleteContext);
  }
  FxNonPagedObject::Lock(this, PreviousIrql, v9);
}
