/*
 * XREFs of imp_WdfRequestChangeTarget @ 0x1C0034FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 */

__int64 __fastcall imp_WdfRequestChangeTarget(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        WDFIOTARGET__ *IoTarget)
{
  FxRequest *pRequest; // [rsp+30h] [rbp+8h] BYREF
  FxIoTarget *pTarget; // [rsp+48h] [rbp+20h] BYREF

  pRequest = 0LL;
  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  FxObjectHandleGetPtr(pRequest->m_Globals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  return FxRequestBase::ValidateTarget(pRequest, pTarget);
}
