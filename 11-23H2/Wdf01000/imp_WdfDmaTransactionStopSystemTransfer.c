/*
 * XREFs of imp_WdfDmaTransactionStopSystemTransfer @ 0x1C001A360
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C001EEE8 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 */

void __fastcall imp_WdfDmaTransactionStopSystemTransfer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxDmaTransactionBase *pDmaTrans; // [rsp+50h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans);
  m_Globals = pDmaTrans->m_Globals;
  if ( (unsigned int)(pDmaTrans->m_DmaEnabler->m_Profile - 7) <= 1 )
  {
    FxDmaSystemTransaction::StopTransfer((FxDmaSystemTransaction *)pDmaTrans);
  }
  else
  {
    WPP_IFR_SF_ql(
      m_Globals,
      2u,
      0xFu,
      0x27u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      pDmaTrans->m_DmaEnabler->m_Profile);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
