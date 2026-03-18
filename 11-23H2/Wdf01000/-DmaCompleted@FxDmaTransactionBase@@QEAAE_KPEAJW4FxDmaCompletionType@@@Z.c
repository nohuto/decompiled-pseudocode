/*
 * XREFs of ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C001F684
 * Callers:
 *     imp_WdfDmaTransactionDmaCompleted @ 0x1C000BE80 (imp_WdfDmaTransactionDmaCompleted.c)
 *     imp_WdfDmaTransactionDmaCompletedFinal @ 0x1C000BEE0 (imp_WdfDmaTransactionDmaCompletedFinal.c)
 *     imp_WdfDmaTransactionDmaCompletedWithLength @ 0x1C000BF50 (imp_WdfDmaTransactionDmaCompletedWithLength.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00183B0 (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     WPP_IFR_SF_qPPd @ 0x1C002009C (WPP_IFR_SF_qPPd.c)
 *     WPP_IFR_SF_qc @ 0x1C00201B4 (WPP_IFR_SF_qc.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C003ACFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
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
  int v13; // esi
  unsigned __int64 m_Remaining; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  const void *ObjectHandleUnchecked; // rax
  unsigned __int64 v19; // rdx
  unsigned int v20; // r8d
  const void *v21; // rax
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v23; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int _a4; // [rsp+40h] [rbp-38h]

  m_Globals = this->m_Globals;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
  v10 = _a1;
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x16u, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, TransferredLength);
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
    m_Remaining = this->m_Remaining;
    this->m_Transferred += TransferredLength;
    this->m_CurrentFragmentLength = TransferredLength;
    this->m_Remaining = _a3 + m_Remaining - TransferredLength;
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
      WPP_IFR_SF_qPPd(m_Globals, v19, v20, 0x19u, traceGuid, ObjectHandleUnchecked, v19, this->m_TransactionLength, _a4);
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
    v21 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(m_Globals, 5u, 0xFu, 0x1Au, WPP_FxDmaTransactionBase_cpp_Traceguids, v21, v13);
  }
  this->ReleaseResources(this, 0);
  m_EncodedRequest = this->m_EncodedRequest;
  if ( m_EncodedRequest )
  {
    v23 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
    this->m_EncodedRequest = v23;
    FxRequest::ReleaseIrpReference(v23);
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
    WPP_IFR_SF_qc(m_Globals, v15, v16, v17, traceGuid, v10, v12);
  return v12;
}
