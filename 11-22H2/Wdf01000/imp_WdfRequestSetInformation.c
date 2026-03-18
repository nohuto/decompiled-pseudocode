/*
 * XREFs of imp_WdfRequestSetInformation @ 0x1C0007030
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall imp_WdfRequestSetInformation(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 Information)
{
  unsigned __int8 v4; // r8
  FxRequest *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+48h] [rbp+20h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v5 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( m_Globals->FxVerifierIO )
  {
    PreviousIrql = 0;
    FxNonPagedObject::Lock(pRequest, &PreviousIrql, v4);
    if ( !m_Globals->FxVerifierOn || FxRequest::Vf_VerifyRequestIsNotCompleted(v5, m_Globals) >= 0 )
      v5->m_Irp.m_Irp->IoStatus.Information = Information;
    FxNonPagedObject::Unlock(v5, PreviousIrql, v7);
  }
  else
  {
    pRequest->m_Irp.m_Irp->IoStatus.Information = Information;
  }
}
