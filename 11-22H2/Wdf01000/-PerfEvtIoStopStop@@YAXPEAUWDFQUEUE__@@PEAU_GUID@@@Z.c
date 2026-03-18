/*
 * XREFs of ?PerfEvtIoStopStop@@YAXPEAUWDFQUEUE__@@PEAU_GUID@@@Z @ 0x1C002E73C
 * Callers:
 *     VfEvtIoStop @ 0x1C00B9A70 (VfEvtIoStop.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C002E7C4 (McTemplateK0pp_EtwWriteTransfer.c)
 */

void __fastcall PerfEvtIoStopStop(WDFQUEUE__ *Queue, _GUID *pActivityId)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int64 v4; // rcx
  const void *Context; // rax
  _MCGEN_TRACE_CONTEXT *v6; // rcx
  unsigned __int16 offset; // [rsp+50h] [rbp+18h] BYREF
  FxIoQueue *pQueue; // [rsp+58h] [rbp+20h] BYREF

  offset = 0;
  pQueue = 0LL;
  m_Globals = FxObject::_GetObjectFromHandle((unsigned __int64)Queue, &offset)->m_Globals;
  FxObjectHandleGetPtr(m_Globals, v4, 0x1003u, (void **)&pQueue);
  Context = (const void *)FxObject::GetObjectHandleUnchecked(pQueue->m_DeviceBase);
  if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
    McTemplateK0pp_EtwWriteTransfer(
      v6,
      &FX_EVTIOSTOP_STOP,
      pActivityId,
      m_Globals->Driver->m_DriverDeviceAdd.Method,
      Context);
}
