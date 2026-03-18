/*
 * XREFs of ?ForwardRequestWorker@FxIoQueue@@QEAAJPEAVFxRequest@@PEAV1@@Z @ 0x1C000A250
 * Callers:
 *     imp_WdfRequestForwardToIoQueue @ 0x1C000A410 (imp_WdfRequestForwardToIoQueue.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0081C50 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@Z @ 0x1C0081CAC (-ForwardRequestToParent@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@PEAU_WDF_REQUEST_FORWARD_OPTIONS@@@.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C000A0B0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000E390 (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x1C0064138 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C8590 (-Vf_VerifyForwardRequestUpdateFlags@FxIoQueue@@QEAAFPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxIoQueue::ForwardRequestWorker(FxIoQueue *this, FxRequest *Request, FxIoQueue *DestQueue)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  FxIoQueue *v6; // rbx
  _FX_DRIVER_GLOBALS *RefCount; // rdx
  __int16 updated; // r13
  FxRequestCompletionState m_CompletionState; // r15d
  unsigned __int8 v10; // r8
  _LIST_ENTRY *p_m_OwnerListEntry2; // rsi
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned __int64 *p_m_Lock; // rbp
  unsigned __int8 v15; // r8
  unsigned __int8 v16; // r8
  int v17; // r14d
  unsigned __int8 v18; // r8
  unsigned __int16 v19; // r9
  const void *v21; // rcx
  FxVerifierLock *v22; // rcx
  FxVerifierLock *v23; // rcx
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // r8
  _LIST_ENTRY *v26; // rcx
  unsigned __int8 v27; // dl
  FxVerifierLock *v28; // rcx
  FxVerifierLock *v29; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  v6 = this;
  RefCount = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement(&Request->m_Refcnt);
  updated = 0;
  if ( SLOBYTE(Request->m_ObjectFlags) < 0 )
  {
    this = (FxIoQueue *)Request[-1].m_OwnerListEntry2.Blink;
    if ( this )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)this,
        (void *)0x74617453,
        1399,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp",
        TagAddRef,
        (unsigned int)RefCount);
  }
  if ( Request->m_Completed )
  {
    m_CompletionState = FxRequestCompletionStateNone;
    v21 = (const void *)((unsigned __int64)Request ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Request->m_ObjectSize )
      v21 = 0LL;
    WPP_IFR_SF_q(Request->m_Globals, 2u, 0x10u, 0x27u, WPP_FxRequest_cpp_Traceguids, v21);
    FxVerifierDbgBreakPoint(Request->m_Globals);
  }
  else
  {
    m_CompletionState = Request->m_CompletionState;
    Request->m_CompletionState = 0;
    if ( m_CompletionState )
      Request->Release(Request, (void *)1952543827, 1813, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
  }
  if ( m_Globals->FxVerifierOn )
    updated = FxIoQueue::Vf_VerifyForwardRequestUpdateFlags(this, RefCount, Request);
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v22 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v22, &irql, (unsigned __int8)DestQueue);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&v6->m_NPLock.m_Lock);
    irql = v10;
  }
  p_m_OwnerListEntry2 = &Request->m_OwnerListEntry2;
  Flink = Request->m_OwnerListEntry2.Flink;
  if ( Flink->Blink != &Request->m_OwnerListEntry2 )
    goto LABEL_38;
  Blink = Request->m_OwnerListEntry2.Blink;
  if ( Blink->Flink != p_m_OwnerListEntry2 )
    goto LABEL_38;
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  Request->m_OwnerListEntry2.Blink = &Request->m_OwnerListEntry2;
  p_m_OwnerListEntry2->Flink = p_m_OwnerListEntry2;
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v23 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v23, v10, v10);
    p_m_Lock = &v6->m_NPLock.m_Lock;
  }
  else
  {
    p_m_Lock = &v6->m_NPLock.m_Lock;
    KeReleaseSpinLock(&v6->m_NPLock.m_Lock, v10);
  }
  v17 = FxIoQueue::QueueRequestFromForward(DestQueue, Request, v15);
  if ( v17 < 0 )
  {
    FxRequest::SetCompletionState(Request, m_CompletionState);
    if ( m_Globals->FxVerifierOn )
      FxRequestBase::SetVerifierFlags(Request, updated);
    Request->Release(
      Request,
      (void *)1952543827,
      1461,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    FxNonPagedObject::Lock(v6, &irql, v24);
    v26 = v6->m_DriverOwned.Blink;
    if ( v26->Flink == &v6->m_DriverOwned )
    {
      v27 = irql;
      Request->m_OwnerListEntry2.Blink = v26;
      p_m_OwnerListEntry2->Flink = &v6->m_DriverOwned;
      v26->Flink = p_m_OwnerListEntry2;
      v6->m_DriverOwned.Blink = p_m_OwnerListEntry2;
      FxNonPagedObject::Unlock(v6, v27, v25);
      return (unsigned int)v17;
    }
LABEL_38:
    __fastfail(3u);
  }
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v28 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Lock(v28, &irql, v16);
  else
    irql = KeAcquireSpinLockRaiseToDpc(p_m_Lock);
  --v6->m_DriverIoCount;
  if ( v6->m_Dispatching )
  {
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v29 = *(FxVerifierLock **)&v6[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      FxVerifierLock::Unlock(v29, irql, v18);
    else
      KeReleaseSpinLock(p_m_Lock, irql);
  }
  else
  {
    FxIoQueue::DispatchEvents(v6, irql, 0LL, v19);
  }
  return (unsigned int)v17;
}
