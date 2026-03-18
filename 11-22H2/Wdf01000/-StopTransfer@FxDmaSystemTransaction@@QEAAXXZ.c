/*
 * XREFs of ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C001EEE8
 * Callers:
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C001A360 (imp_WdfDmaTransactionStopSystemTransfer.c)
 * Callees:
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0001F2C (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  _FxDmaDescription *m_AdapterInfo; // rax
  int _a2; // ebx
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v5; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  const void *ObjectHandleUnchecked; // rax
  unsigned int v8; // edx
  unsigned __int64 v9; // rax

  m_AdapterInfo = this->m_AdapterInfo;
  this->m_IsCancelled = 1;
  _a2 = m_AdapterInfo->AdapterObject->DmaOperations->CancelMappedTransfer(
          m_AdapterInfo->AdapterObject,
          this->m_TransferContext);
  if ( this->m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(v5, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1, _a2);
  }
  if ( _a2 < 0 )
  {
    m_Globals = this->m_Globals;
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_q(m_Globals, 2u, 0xFu, 0xEu, WPP_FxDmaTransactionSystem_cpp_Traceguids, ObjectHandleUnchecked);
    if ( m_Globals->FxVerifierOn )
    {
      if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v8, 0xBu) || m_Globals->FxVerifyDownlevel )
      {
        v9 = FxObject::GetObjectHandleUnchecked(this);
        FxVerifierBugCheckWorker(m_Globals, WDF_DMA_FATAL_ERROR, v9, this->m_State);
      }
    }
  }
}
