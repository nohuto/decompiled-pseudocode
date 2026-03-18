/*
 * XREFs of imp_WdfRequestGetIoQueue @ 0x1C0002610
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 */

WDFQUEUE__ *__fastcall imp_WdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 Offset; // rcx
  FxRequest *_a1; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoQueue *m_IoQueue; // r8
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v8; // r8
  FxRequest *pRequest; // [rsp+48h] [rbp+10h] BYREF

  pRequest = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(Offset) = 0;
  _a1 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    Offset = LOWORD(_a1->__vftable);
    _a1 = (FxRequest *)((char *)_a1 - Offset);
  }
  if ( _a1->m_Type == 4104 )
  {
    pRequest = _a1;
  }
  else
  {
    FxObjectHandleGetPtrQI(_a1, (void **)&pRequest, (void *)Request, 0x1008u, Offset);
    _a1 = pRequest;
  }
  m_Globals = _a1->m_Globals;
  if ( _a1->m_Completed || (m_IoQueue = _a1->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x45u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request);
    return 0LL;
  }
  if ( !_a1->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && *(FxIoQueue **)(_a1->m_DeviceBase[3].m_SpinLock.m_Lock + 144) == m_IoQueue )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x46u, WPP_FxRequestApi_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  m_ObjectSize = m_IoQueue->m_ObjectSize;
  v8 = (unsigned __int64)m_IoQueue ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return (WDFQUEUE__ *)v8;
}
