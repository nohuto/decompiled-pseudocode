/*
 * XREFs of ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C00591A4
 * Callers:
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x1C0037C00 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompleted @ 0x1C0054270 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfDmaTransactionDmaCompletedWithLength @ 0x1C00542D0 (imp_WdfDmaTransactionDmaCompletedWithLength.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_ql @ 0x1C0053CE8 (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qPPd @ 0x1C005A0C4 (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x1C005A1DC (WPP_IFR_SF_qc.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C0068854 (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

char __fastcall FxDmaTransactionBase::DmaCompleted(
        FxDmaTransactionBase *this,
        unsigned __int64 TransferredLength,
        int *ReturnStatus,
        FxDmaCompletionType CompletionType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  const void *_a1; // rax
  const void *v10; // r15
  unsigned __int64 _a3; // rcx
  char v12; // bp
  signed int v13; // esi
  unsigned __int8 v14; // dl
  unsigned int v15; // r8d
  unsigned __int16 v16; // r9
  const void *ObjectHandleUnchecked; // rax
  unsigned __int64 v18; // rdx
  unsigned int v19; // r8d
  const void *v20; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v22; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v10 = _a1;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0x16u, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, TransferredLength);
  if ( this->m_State != FxDmaTransactionStateTransfer )
  {
    WPP_IFR_SF_ql(m_Globals, 2u, 0xFu, 0x17u, WPP_FxDmaTransactionBase_cpp_Traceguids, v10, this->m_State);
    FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, (unsigned __int64)v10, this->m_State);
  }
  _a3 = this->m_CurrentFragmentLength;
  v12 = 1;
  if ( TransferredLength > _a3 )
  {
    v13 = -1073741811;
    WPP_IFR_SF_qqqd(
      m_Globals,
      2u,
      0xFu,
      0x18u,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      v10,
      (const void *)TransferredLength,
      _a3,
      -1073741811);
    FxVerifierDbgBreakPoint(m_Globals);
    goto LABEL_20;
  }
  if ( (unsigned int)(CompletionType - 2) <= 1 )
  {
    this->m_Transferred += TransferredLength;
    this->m_Remaining += _a3 - TransferredLength;
    this->m_CurrentFragmentLength = TransferredLength;
  }
  else
  {
    this->m_Transferred += _a3;
  }
  v13 = ((__int64 (__fastcall *)(FxDmaTransactionBase *, const _GUID *))this->TransferCompleted)(
          this,
          WPP_FxDmaTransactionBase_cpp_Traceguids);
  if ( v13 >= 0 )
  {
    if ( this->m_RequireSingleTransfer && this->m_Remaining )
    {
      v13 = -1071644141;
      ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_qPPd(m_Globals, v18, v19, 0x19u, traceGuid, ObjectHandleUnchecked, v18, this->m_TransactionLength, _a4);
      goto LABEL_20;
    }
    if ( !this->m_Remaining || CompletionType == FxDmaCompletionTypeAbort )
    {
      v13 = 0;
      goto LABEL_20;
    }
    v13 = this->StageTransfer(this);
    if ( v13 >= 0 )
      v13 = -1073741802;
  }
  if ( v13 == -1073741802 )
  {
    v12 = 0;
    goto LABEL_28;
  }
LABEL_20:
  this->m_State = ((v13 >> 31) & 1) + 5;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
  {
    v20 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qL(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionBase_cpp_Traceguids, v20, v13);
  }
  this->ReleaseResources(this, 0);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    v22 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v22;
    FxRequest::ReleaseIrpReference(v22);
    this->m_EncodedRequest->Release(
      this->m_EncodedRequest,
      this,
      302,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
  }
  this->m_CurrentFragmentLength = 0LL;
LABEL_28:
  *ReturnStatus = v13;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qc(m_Globals, v14, v15, v16, traceGuid, v10, v12);
  return v12;
}
