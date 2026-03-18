/*
 * XREFs of ?DispatchStep2@FxPkgIo@@QEAAJPEAU_IRP@@PEAVFxIoInCallerContext@@PEAVFxIoQueue@@@Z @ 0x1C000F746
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C000D160 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z @ 0x1C000EB40 (-Send@FxIoTargetSelf@@UEAAXPEAU_IRP@@@Z.c)
 * Callees:
 *     ?DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IRP@@@Z @ 0x1C00065C4 (-DispatchToInCallerContextCallback@FxPkgIo@@QEAAJPEAVFxIoInCallerContext@@PEAVFxRequest@@PEAU_IR.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C000DB80 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1C003A900 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     ?VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z @ 0x1C0062DD0 (-VerifierFreeRequestToTestForwardProgess@FxPkgIo@@AEAAJPEAVFxRequest@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006612C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z @ 0x1C00676D4 (-GetReservedRequest@FxIoQueue@@QEAAJPEAU_IRP@@PEAPEAVFxRequest@@@Z.c)
 */

__int64 __fastcall FxPkgIo::DispatchStep2(
        FxPkgIo *this,
        _IRP *Irp,
        FxIoInCallerContext *IoInCallerCtx,
        FxIoQueue *Queue)
{
  char v4; // r13
  bool v9; // r15
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  int v12; // eax
  FxRequest *v13; // rsi
  int _a1; // ebx
  int ReservedRequest; // eax
  int v16; // eax
  WDFQUEUE__ *ObjectHandleUnchecked; // rax
  WDFREQUEST__ *v18; // r8
  FxRequest *request; // [rsp+60h] [rbp+8h] BYREF

  request = 0LL;
  v4 = 0;
  v9 = Queue && Queue->m_SupportForwardProgress;
  if ( KeGetCurrentIrql() <= 1u )
  {
    KeEnterCriticalRegion();
    v4 = 1;
  }
  if ( Queue && (m_CxDeviceInfo = Queue->m_CxDeviceInfo) != 0LL )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  v12 = FxRequest::_CreateForPackage(this->m_Device, p_RequestAttributes, Irp, &request);
  v13 = request;
  _a1 = v12;
  if ( v9 )
  {
    if ( v12 < 0 )
    {
LABEL_16:
      if ( this->m_Filter && !Queue )
        goto $CompleteIrp;
      if ( !v9 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xDu, 0x10u, WPP_FxPkgIo_cpp_Traceguids, _a1);
        goto $CompleteIrp;
      }
LABEL_19:
      ReservedRequest = FxIoQueue::GetReservedRequest(Queue, Irp, &request);
      _a1 = ReservedRequest;
      if ( ReservedRequest == 259 )
        goto $IrpIsGone;
      if ( ReservedRequest >= 0 )
      {
        v13 = request;
        goto LABEL_22;
      }
$CompleteIrp:
      Irp->IoStatus.Information = 0LL;
      Irp->IoStatus.Status = _a1;
      IofCompleteRequest(Irp, 0);
      goto $IrpIsGone;
    }
    if ( (this->m_Globals->FxEnhancedVerifierOptions & 0xF0000) == 0 )
    {
LABEL_29:
      if ( !Queue->m_FwdProgContext->m_IoResourcesAllocate.Method )
        goto LABEL_22;
      v13->m_Presented = 1;
      FxObject::GetObjectHandleUnchecked(v13);
      ObjectHandleUnchecked = (WDFQUEUE__ *)FxObject::GetObjectHandleUnchecked(Queue);
      if ( Queue->m_FwdProgContext->m_IoResourcesAllocate.Method(ObjectHandleUnchecked, v18) >= 0 )
        goto LABEL_22;
      FxRequest::FreeRequest(v13);
      request = 0LL;
      goto LABEL_19;
    }
    _a1 = FxPkgIo::VerifierFreeRequestToTestForwardProgess(this, request);
  }
  if ( _a1 < 0 )
    goto LABEL_16;
  if ( v9 )
    goto LABEL_29;
LABEL_22:
  if ( IoInCallerCtx && IoInCallerCtx->m_Method && !v13->m_Reserved )
  {
    v13->m_InternalContext = Queue;
    v16 = FxPkgIo::DispatchToInCallerContextCallback(this, IoInCallerCtx, v13, Irp);
  }
  else
  {
    v16 = FxIoQueue::QueueRequest(Queue, v13);
  }
  _a1 = v16;
$IrpIsGone:
  if ( v4 )
    KeLeaveCriticalRegion();
  return (unsigned int)_a1;
}
