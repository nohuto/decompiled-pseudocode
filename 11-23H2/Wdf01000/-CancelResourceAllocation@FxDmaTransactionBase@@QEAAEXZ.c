/*
 * XREFs of ?CancelResourceAllocation@FxDmaTransactionBase@@QEAAEXZ @ 0x1C001F46C
 * Callers:
 *     imp_WdfDmaTransactionCancel @ 0x1C00198B0 (imp_WdfDmaTransactionCancel.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x1C003ACFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

unsigned __int8 __fastcall FxDmaTransactionBase::CancelResourceAllocation(FxDmaTransactionBase *this)
{
  FxDmaTransactionState m_State; // edx
  unsigned __int8 v3; // di
  FxRequest *m_EncodedRequest; // rcx
  FxRequest *v5; // rcx
  const void *_a1; // rax
  int _a2; // edx
  unsigned __int64 ObjectHandleUnchecked; // rax

  m_State = this->m_State;
  if ( m_State == FxDmaTransactionStateCreated || (unsigned int)(m_State - 7) <= 1 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_ql(this->m_Globals, 2u, 0xFu, 0x1Fu, WPP_FxDmaTransactionBase_cpp_Traceguids, _a1, _a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_DMA_FATAL_ERROR, ObjectHandleUnchecked, this->m_State);
  }
  v3 = this->m_AdapterInfo->AdapterObject->DmaOperations->CancelAdapterChannel(
         this->m_AdapterInfo->AdapterObject,
         this->m_DmaEnabler->m_FDO,
         this->m_TransferContext);
  if ( v3 )
  {
    m_EncodedRequest = this->m_EncodedRequest;
    this->m_State = FxDmaTransactionStateTransferFailed;
    if ( m_EncodedRequest )
    {
      v5 = (FxRequest *)((unsigned __int64)m_EncodedRequest & 0xFFFFFFFFFFFFFFFEuLL);
      this->m_EncodedRequest = v5;
      FxRequest::ReleaseIrpReference(v5);
      this->m_EncodedRequest->Release(
        this->m_EncodedRequest,
        this,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  return v3;
}
