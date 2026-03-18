/*
 * XREFs of imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x1C0052360
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 */

_DEVICE_OBJECT *__fastcall imp_WdfIoTargetWdmGetTargetDeviceObject(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFIOTARGET__ *IoTarget)
{
  FxIoTarget *v3; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  _DEVICE_OBJECT *_a2; // rbx
  FxIoTarget *pTarget; // [rsp+50h] [rbp+8h] BYREF

  pTarget = 0LL;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  v3 = pTarget;
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0xAu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget);
    v3 = pTarget;
  }
  _a2 = v3->m_TargetDevice;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0xBu, WPP_FxIoTargetAPIKm_cpp_Traceguids, IoTarget, _a2);
  return _a2;
}
