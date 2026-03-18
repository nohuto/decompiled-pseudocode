/*
 * XREFs of imp_WdfIoTargetWdmGetTargetFileHandle @ 0x1C0051EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

void *__fastcall imp_WdfIoTargetWdmGetTargetFileHandle(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  FxIoTargetRemote *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  void *_a2; // rbx
  FxIoTargetRemote *pTarget; // [rsp+50h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1201u, (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x3Du, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
    v3 = pTarget;
  }
  _a2 = v3->m_TargetHandle;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x3Eu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, _a2);
  return _a2;
}
