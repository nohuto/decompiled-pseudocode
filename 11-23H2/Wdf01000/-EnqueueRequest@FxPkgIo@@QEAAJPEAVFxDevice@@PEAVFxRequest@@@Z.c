/*
 * XREFs of ?EnqueueRequest@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxRequest@@@Z @ 0x1C00062F4
 * Callers:
 *     imp_WdfDeviceEnqueueRequest @ 0x1C0005DD0 (imp_WdfDeviceEnqueueRequest.c)
 * Callees:
 *     ?PostProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C00011F8 (-PostProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     ?SetCompletionState@FxRequest@@QEAA?AW4FxRequestCompletionState@@W42@@Z @ 0x1C000354C (-SetCompletionState@FxRequest@@QEAA-AW4FxRequestCompletionState@@W42@@Z.c)
 *     ?QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0004AC0 (-QueueRequestFromForward@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?PreProcessSendAndForget@FxRequest@@QEAAXXZ @ 0x1C0008160 (-PreProcessSendAndForget@FxRequest@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000FAEE (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z @ 0x1C00BB0B0 (-Vf_VerifyEnqueueRequestRestoreFlags@FxPkgIo@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@F@Z.c)
 *     ?Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z @ 0x1C00BB0F8 (-Vf_VerifyEnqueueRequestUpdateFlags@FxPkgIo@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@PEAF@Z.c)
 */

int __fastcall FxPkgIo::EnqueueRequest(FxPkgIo *this, FxDevice *Device, FxRequest *pRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  __int16 v4; // r14
  FxIoQueue *m_InternalContext; // rsi
  unsigned __int8 v9; // r8
  int v10; // ebp
  int result; // eax
  const void *_a1; // rax
  const _GUID *traceGuid; // rdx
  const void *ObjectHandleUnchecked; // rax
  __int64 _a2; // rdx
  int _a3; // r10d
  unsigned __int16 v17; // r9
  _FX_DRIVER_GLOBALS *v18; // rdx
  FxPkgIo *v19; // rcx
  FxRequestContext *m_RequestContext; // rax
  __int16 origVerifierFlags; // [rsp+70h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  v4 = 0;
  origVerifierFlags = 0;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = FxObject::GetObjectHandleUnchecked(pRequest);
    WPP_IFR_SF_q(m_Globals, 5u, 0xDu, 0x12u, traceGuid, _a1);
  }
  if ( !m_Globals->FxVerifierOn )
  {
LABEL_4:
    m_InternalContext = (FxIoQueue *)pRequest->m_InternalContext;
    pRequest->m_InternalContext = 0LL;
    if ( m_InternalContext
      || (m_InternalContext = this->m_DispatchTable[pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction]) != 0LL )
    {
      if ( !this->m_Filter
        || m_InternalContext != this->m_DefaultQueue
        || FxIoQueue::IsIoEventHandlerRegistered(
             m_InternalContext,
             (_WDF_REQUEST_TYPE)pRequest->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction) )
      {
        FxObject::AddRef(m_InternalContext, 0LL, 0, 0LL);
        FxObject::AddRef(
          pRequest,
          (void *)0x74617453,
          690,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
        FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateNone);
        v10 = FxIoQueue::QueueRequestFromForward(m_InternalContext, pRequest, v9);
        m_InternalContext->Release(m_InternalContext, 0LL, 0, 0LL);
        if ( v10 >= 0 )
          return v10;
        FxRequest::SetCompletionState(pRequest, FxRequestCompletionStateIoPkg);
        pRequest->Release(
          pRequest,
          (void *)1952543827,
          722,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
LABEL_22:
        if ( m_Globals->FxVerifierOn )
          FxPkgIo::Vf_VerifyEnqueueRequestRestoreFlags(v19, v18, pRequest, v4);
        return v10;
      }
    }
    else if ( !this->m_Filter )
    {
      v10 = -1073741808;
      FxObject::GetObjectHandleUnchecked(pRequest);
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Device);
      v17 = 19;
LABEL_15:
      WPP_IFR_SF_qid(m_Globals, 2u, 0xDu, v17, WPP_FxPkgIo_cpp_Traceguids, ObjectHandleUnchecked, _a2, _a3);
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_22;
    }
    m_RequestContext = pRequest->m_RequestContext;
    if ( !m_RequestContext || !m_RequestContext->m_RequestType )
    {
      FxRequest::PreProcessSendAndForget(pRequest);
      IofCallDriver(Device->m_AttachedDevice.FxDeviceBase::m_DeviceObject, pRequest->m_Irp.m_Irp);
      FxRequest::PostProcessSendAndForget(pRequest);
      return 0;
    }
    v10 = -1073741808;
    FxObject::GetObjectHandleUnchecked(Device);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(pRequest);
    v17 = 20;
    goto LABEL_15;
  }
  result = FxPkgIo::Vf_VerifyEnqueueRequestUpdateFlags(this, m_Globals, pRequest, &origVerifierFlags);
  if ( result >= 0 )
  {
    v4 = origVerifierFlags;
    goto LABEL_4;
  }
  return result;
}
