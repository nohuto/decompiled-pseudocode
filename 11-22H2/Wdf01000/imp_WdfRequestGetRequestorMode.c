/*
 * XREFs of imp_WdfRequestGetRequestorMode @ 0x1C0007CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BAA98 (-Vf_VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

char __fastcall imp_WdfRequestGetRequestorMode(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFREQUEST__ *Request)
{
  unsigned __int8 v2; // r8
  FxRequest *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  char RequestorMode; // di
  unsigned __int8 v7; // r8
  unsigned __int8 PreviousIrql; // [rsp+30h] [rbp+8h] BYREF
  FxRequest *pRequest; // [rsp+40h] [rbp+18h] BYREF

  pRequest = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v3 = pRequest;
  m_Globals = pRequest->m_Globals;
  if ( !m_Globals->FxVerifierIO )
    return pRequest->m_Irp.m_Irp->RequestorMode;
  PreviousIrql = 0;
  FxNonPagedObject::Lock(pRequest, &PreviousIrql, v2);
  if ( m_Globals->FxVerifierOn && FxRequest::Vf_VerifyRequestIsNotCompleted(v3, m_Globals) < 0 )
    RequestorMode = 1;
  else
    RequestorMode = v3->m_Irp.m_Irp->RequestorMode;
  FxNonPagedObject::Unlock(v3, PreviousIrql, v7);
  return RequestorMode;
}
