/*
 * XREFs of ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8
 * Callers:
 *     imp_WdfRequestSend @ 0x1C0005B00 (imp_WdfRequestSend.c)
 *     FxIoTargetSendIo @ 0x1C000E794 (FxIoTargetSendIo.c)
 *     FxIoTargetSendIoctl @ 0x1C00505DC (FxIoTargetSendIoctl.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0051A00 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0053FF0 (-SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OP.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C00565F0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C0057090 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0057840 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0059400 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C005B4E0 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?Deconfig@FxUsbDevice@@QEAAJXZ @ 0x1C005D2F4 (-Deconfig@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C005D5FC (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C005F080 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 *     ?GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C005FD84 (-GetString@FxUsbDevice@@QEAAJPEAG0EGPEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z.c)
 *     ?InitDevice@FxUsbDevice@@QEAAJK@Z @ 0x1C005FFC8 (-InitDevice@FxUsbDevice@@QEAAJK@Z.c)
 * Callees:
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0002238 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x1C0006988 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qD @ 0x1C001F28C (WPP_IFR_SF_qD.c)
 *     ??0FxCREvent@@QEAA@E@Z @ 0x1C0029A78 (--0FxCREvent@@QEAA@E@Z.c)
 *     ?Cancel@FxRequestBase@@QEAAEXZ @ 0x1C003F90C (-Cancel@FxRequestBase@@QEAAEXZ.c)
 */

__int64 __fastcall FxIoTarget::SubmitSync(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        unsigned int *Action)
{
  const void *_a1; // rax
  const void *_a2; // rdx
  const _GUID *traceGuid; // r8
  _FX_DRIVER_GLOBALS *v11; // r10
  char v12; // r12
  int v13; // edi
  unsigned int v14; // r9d
  unsigned int v15; // edi
  unsigned __int64 ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v17; // r10
  FxRequestBase *v18; // rdx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v20; // rax
  const void *v21; // r11
  FxRequestBase *v22; // r10
  NTSTATUS v23; // ebx
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // dl
  unsigned __int8 v26; // r8
  FxTargetSubmitSyncParams params; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int8 irql; // [rsp+C0h] [rbp+40h] BYREF
  int status; // [rsp+C8h] [rbp+48h] BYREF
  __int64 timeout; // [rsp+D0h] [rbp+50h] BYREF

  FxCREvent::FxCREvent(&params.SynchEvent, (unsigned __int8)Request);
  timeout = 0LL;
  status = 0;
  memset(&params.Status, 0, 24);
  irql = 0;
  if ( this->m_Globals->FxVerboseOn )
  {
    FxObject::GetObjectHandleUnchecked(Request);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(v11, 5u, 0xEu, 0x24u, traceGuid, _a1, _a2);
  }
  v12 = Request->m_RequestBaseFlags & 0x10;
  if ( Action )
    v13 = *Action;
  else
    v13 = 0;
  if ( Options && (Options->Flags & 1) != 0 && Options->Timeout )
  {
    timeout = Options->Timeout;
    v13 |= 0x10u;
  }
  if ( (v13 & 0x20) != 0 )
  {
    params.OrigTargetCompletionContext = Request->m_TargetCompletionContext;
    params.OrigTargetCompletionRoutine = Request->m_CompletionRoutine.m_Completion;
  }
  else
  {
    params.OrigTargetCompletionContext = 0LL;
    params.OrigTargetCompletionRoutine = 0LL;
  }
  Request->m_CompletionRoutine.m_Completion = FxIoTarget::_SyncCompletionRoutine;
  Request->m_TargetCompletionContext = &params;
  if ( Options )
    v14 = Options->Flags & 0xFFFFFFFE;
  else
    v14 = 0;
  v15 = FxIoTarget::Submit(this, Request, Options, v14) | v13;
  if ( this->m_Globals->FxVerboseOn )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(Request);
    v18 = Request;
    if ( ObjectHandleUnchecked )
      v18 = (FxRequestBase *)ObjectHandleUnchecked;
    WPP_IFR_SF_qD(v17, (unsigned __int8)v18, 0xEu, 0x26u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v18, v15);
  }
  FxObject::AddRef(Request, &status, 1754, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( (v15 & 1) != 0 )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v20 = FxObject::GetObjectHandleUnchecked(Request);
      v22 = Request;
      if ( v20 )
        v22 = (FxRequestBase *)v20;
      WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x27u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, v22, v21);
    }
    this->Send(this, Request->m_Irp.m_Irp);
    goto LABEL_27;
  }
  if ( (v15 & 2) != 0 )
  {
LABEL_27:
    v15 |= 0xCu;
    goto LABEL_30;
  }
  if ( (v15 & 0x20) != 0 )
  {
    Request->m_TargetCompletionContext = params.OrigTargetCompletionContext;
    Request->m_CompletionRoutine.m_Completion = params.OrigTargetCompletionRoutine;
  }
LABEL_30:
  if ( (v15 & 4) != 0 )
  {
    if ( (v15 & 8) != 0 )
    {
      KeEnterCriticalRegion();
      v23 = KeWaitForSingleObject(
              &params,
              Executive,
              0,
              0,
              (PLARGE_INTEGER)((unsigned __int64)&timeout & -(__int64)((v15 & 0x10) != 0)));
      KeLeaveCriticalRegion();
      status = v23;
      if ( v23 == 258 )
      {
        FxNonPagedObject::Lock(this, &irql, v24);
        v25 = irql;
        Request->m_TargetFlags |= 8u;
        FxNonPagedObject::Unlock(this, v25, v26);
        FxRequestBase::Cancel(Request);
        KeEnterCriticalRegion();
        KeWaitForSingleObject(&params, Executive, 0, 0, 0LL);
        KeLeaveCriticalRegion();
      }
    }
    status = params.Status;
  }
  else
  {
    status = Request->m_Irp.m_Irp->IoStatus.Status;
  }
  Request->Release(Request, &status, 1865, "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
  if ( Action )
    *Action = v15;
  if ( v12 )
    FxRequestBase::ContextReleaseAndRestore(Request);
  return (unsigned int)status;
}
