/*
 * XREFs of ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C001B8B0
 * Callers:
 *     imp_WdfIoQueueStop @ 0x1C001B990 (imp_WdfIoQueueStop.c)
 *     imp_WdfIoQueueStopAndPurge @ 0x1C00810A0 (imp_WdfIoQueueStopAndPurge.c)
 *     ?QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z @ 0x1C0082088 (-QueueIdleSynchronously@FxIoQueue@@QEAAJE@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000DD74 (-CancelForDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z @ 0x1C000E1B8 (-InsertHeadIrpQueue@FxRequest@@QEAAJPEAVFxIrpQueue@@PEAK@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000E238 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     ?CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00135BC (-CancelIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z @ 0x1C00135E0 (-GetForwardProgressIrps@FxIoQueue@@AEAAXPEAU_LIST_ENTRY@@PEAU_FILE_OBJECT@@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z @ 0x1C001B57C (-GetNextRequest@FxRequest@@SAPEAV1@PEAVFxIrpQueue@@@Z.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C001B62C (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?IsCancelled@FxRequest@@QEAAEXZ @ 0x1C0064114 (-IsCancelled@FxRequest@@QEAAEXZ.c)
 *     ?PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@PEAPEAV1@@Z @ 0x1C00687A0 (-PeekRequest@FxRequest@@SAJPEAVFxIrpQueue@@PEAV1@PEAU_FILE_OBJECT@@PEAU_WDF_REQUEST_PARAMETERS@@.c)
 */

__int64 __fastcall FxIoQueue::QueueIdle(
        FxIoQueue *this,
        unsigned __int8 CancelRequests,
        void (__fastcall *IdleComplete)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r8
  unsigned __int16 v11; // r9
  const void *_a1; // rax
  unsigned int v14; // r14d
  unsigned __int8 v15; // r8
  const void *ObjectHandleUnchecked; // rax
  const void *_a2; // rdx
  FxRequest *v18; // rdi
  FxRequest *v19; // rcx
  _IRP *NextRequest; // rax
  unsigned __int8 v21; // r8
  FxRequest *v22; // r14
  FxRequest *v23; // rcx
  unsigned int *v24; // r8
  const void *v25; // rax
  const void *v26; // rdx
  const void *v27; // rax
  unsigned __int8 v28; // r8
  _IRP *v29; // rax
  unsigned __int8 v30; // r8
  FxRequest *v31; // r14
  unsigned __int8 v32; // dl
  unsigned __int8 v33; // r8
  const void *v34; // rax
  FxIoQueue *v35; // rcx
  FxRequest *request; // [rsp+40h] [rbp-20h] BYREF
  _LIST_ENTRY fwrIrpList; // [rsp+48h] [rbp-18h] BYREF
  unsigned __int8 irql; // [rsp+80h] [rbp+20h] BYREF

  m_Globals = this->m_Globals;
  irql = 0;
  fwrIrpList = 0LL;
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)IdleComplete);
  if ( this->m_Deleted )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = -1073741738;
    WPP_IFR_SF_qL(m_Globals, 2u, 0xDu, 0x40u, WPP_FxIoQueue_cpp_Traceguids, _a1, 0xC0000056);
LABEL_10:
    FxNonPagedObject::Unlock(this, irql, v15);
    return v14;
  }
  if ( !IdleComplete )
    goto LABEL_3;
  if ( this->m_IdleComplete.Method )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    v14 = -1073741808;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xDu, 0x41u, WPP_FxIoQueue_cpp_Traceguids, ObjectHandleUnchecked, _a2, -1073741808);
    goto LABEL_10;
  }
  this->m_IdleComplete.Method = IdleComplete;
  this->m_IdleCompleteContext = Context;
LABEL_3:
  FxIoQueue::SetState(this, FxIoQueueClearDispatchRequests|0x1);
  if ( CancelRequests )
  {
    v18 = 0LL;
    this->m_CancelDispatchedRequests = 1;
    request = 0LL;
    while ( !FxRequest::PeekRequest(&this->m_Queue, v18, 0LL, 0LL, &request) )
    {
      v18 = request;
      v19 = request;
      request->m_Canceled = 1;
      v19->Release(v19, 0LL, 3723, "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
    }
    if ( this->m_SupportForwardProgress )
    {
      fwrIrpList.Blink = &fwrIrpList;
      fwrIrpList.Flink = &fwrIrpList;
      FxIoQueue::GetForwardProgressIrps(this, &fwrIrpList, 0LL);
    }
  }
  FxNonPagedObject::Unlock(this, irql, v9);
  if ( CancelRequests )
  {
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v10);
      NextRequest = FxRequest::GetNextRequest(&this->m_Queue);
      v22 = (FxRequest *)NextRequest;
      if ( !NextRequest )
        break;
      if ( !FxRequest::IsCancelled((FxRequest *)NextRequest)
        && FxRequest::InsertHeadIrpQueue(v23, &this->m_Queue, v24) >= 0 )
      {
        goto LABEL_22;
      }
      FxObject::GetObjectHandleUnchecked(this);
      v25 = (const void *)FxObject::GetObjectHandleUnchecked(v22);
      WPP_IFR_SF_qq(m_Globals, 4u, 0xDu, 0x43u, WPP_FxIoQueue_cpp_Traceguids, v25, v26);
      FxObject::AddRef(
        v22,
        (void *)0x75657551,
        3782,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForQueue(this, v22, irql);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v27 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x42u, WPP_FxIoQueue_cpp_Traceguids, v27);
    }
LABEL_22:
    FxNonPagedObject::Unlock(this, irql, v21);
    while ( 1 )
    {
      FxNonPagedObject::Lock(this, &irql, v28);
      v29 = FxRequest::GetNextRequest(&this->m_DriverCancelable);
      v31 = (FxRequest *)v29;
      if ( !v29 )
        break;
      v32 = irql;
      *((_BYTE *)&v29[1].Size + 5) = 1;
      FxNonPagedObject::Unlock(this, v32, v30);
      FxObject::AddRef(
        v31,
        (void *)0x75657551,
        3823,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
      FxIoQueue::CancelForDriver(this, v31, v33);
    }
    if ( m_Globals->FxVerboseOn )
    {
      v34 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x44u, WPP_FxIoQueue_cpp_Traceguids, v34);
    }
    FxNonPagedObject::Unlock(this, irql, v30);
    if ( this->m_SupportForwardProgress )
      FxIoQueue::CancelIrps(v35, &fwrIrpList);
  }
  FxNonPagedObject::Lock(this, &irql, v10);
  FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
  return 0LL;
}
