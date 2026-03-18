/*
 * XREFs of ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C0058A08
 * Callers:
 *     imp_WdfDmaTransactionStopSystemTransfer @ 0x1C0054E80 (imp_WdfDmaTransactionStopSystemTransfer.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0019824 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

void __fastcall FxDmaSystemTransaction::StopTransfer(FxDmaSystemTransaction *this)
{
  _FxDmaDescription *m_AdapterInfo; // rax
  signed int _a2; // ebx
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
    WPP_IFR_SF_qL(v5, 5u, 0xFu, 0xBu, WPP_FxDmaTransactionSystem_hpp_Traceguids, _a1, _a2);
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
