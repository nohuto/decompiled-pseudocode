/*
 * XREFs of ?PerfEvtDevicePrepareHardwareStart@@YAEPEAUWDFDEVICE__@@PEAU_GUID@@@Z @ 0x1C002E558
 * Callers:
 *     VfEvtDevicePrepareHardware @ 0x1C00B8970 (VfEvtDevicePrepareHardware.c)
 * Callees:
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0pp_EtwWriteTransfer @ 0x1C002E7C4 (McTemplateK0pp_EtwWriteTransfer.c)
 */

char __fastcall PerfEvtDevicePrepareHardwareStart(WDFDEVICE__ *Handle, _GUID *pActivityId)
{
  char v3; // bl
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int (__fastcall *Method)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rbp
  _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned __int16 offset; // [rsp+50h] [rbp+18h] BYREF

  v3 = 0;
  offset = 0;
  m_Globals = FxObject::_GetObjectFromHandle((unsigned __int64)Handle, &offset)->m_Globals;
  if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
  {
    v3 = 1;
    Method = m_Globals->Driver->m_DriverDeviceAdd.Method;
    EtwActivityIdControl(3u, pActivityId);
    if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      McTemplateK0pp_EtwWriteTransfer(v7, &FX_POWER_HW_PREPARE_START, pActivityId, Method, Handle);
  }
  return v3;
}
