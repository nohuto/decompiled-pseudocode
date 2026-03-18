/*
 * XREFs of ?PutBackReservedRequest@FxIoQueue@@AEAAXPEAVFxRequest@@@Z @ 0x1C00678EC
 * Callers:
 *     ?ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C0067A34 (-ReturnReservedRequest@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIoQueue::PutBackReservedRequest(FxIoQueue *this, FxRequest *ReservedRequest)
{
  _LIST_ENTRY *p_m_ForwardProgressList; // rbx
  KIRQL v4; // al
  _LIST_ENTRY *Flink; // rdx
  KIRQL v6; // r8
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_m_ReservedRequestList; // rax
  _LIST_ENTRY *v9; // rcx

  p_m_ForwardProgressList = &ReservedRequest->m_ForwardProgressList;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock);
  Flink = p_m_ForwardProgressList->Flink;
  v6 = v4;
  if ( p_m_ForwardProgressList->Flink->Blink != p_m_ForwardProgressList
    || (Blink = p_m_ForwardProgressList->Blink, Blink->Flink != p_m_ForwardProgressList)
    || (Blink->Flink = Flink,
        Flink->Blink = Blink,
        p_m_ForwardProgressList->Blink = p_m_ForwardProgressList,
        p_m_ForwardProgressList->Flink = p_m_ForwardProgressList,
        p_m_ReservedRequestList = &this->m_FwdProgContext->m_ReservedRequestList,
        v9 = this->m_FwdProgContext->m_ReservedRequestList.Blink,
        v9->Flink != p_m_ReservedRequestList) )
  {
    __fastfail(3u);
  }
  p_m_ForwardProgressList->Blink = v9;
  p_m_ForwardProgressList->Flink = p_m_ReservedRequestList;
  v9->Flink = p_m_ForwardProgressList;
  p_m_ReservedRequestList->Blink = p_m_ForwardProgressList;
  KeReleaseSpinLock(&this->m_FwdProgContext->m_PendedReserveLock.m_Lock, v6);
}
