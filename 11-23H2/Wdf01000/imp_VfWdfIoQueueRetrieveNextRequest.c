/*
 * XREFs of imp_VfWdfIoQueueRetrieveNextRequest @ 0x1C00B5330
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z @ 0x1C0017C04 (-_GetObjectFromHandle@FxObject@@SAPEAV1@PEAXPEAG@Z.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C002E3A8 (McTemplateK0upp_EtwWriteTransfer.c)
 */

__int64 __fastcall imp_VfWdfIoQueueRetrieveNextRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        WDFREQUEST__ **OutRequest)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  unsigned __int64 v6; // r10
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 v8; // r10
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // rsi
  const void *Context; // rax
  __int64 v11; // rdx
  unsigned __int16 ObjectOffset; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0LL;
  v5 = ((__int64 (__fastcall *)(_WDF_DRIVER_GLOBALS *, WDFQUEUE__ *))WdfVersion.Functions.pfnWdfIoQueueRetrieveNextRequest)(
         DriverGlobals,
         Queue);
  if ( !v5 )
  {
    v6 = (unsigned __int64)*OutRequest;
    PPObject = 0LL;
    ObjectOffset = 0;
    ActivityId = 0LL;
    m_Globals = FxObject::_GetObjectFromHandle(v6, &ObjectOffset)->m_Globals;
    if ( (m_Globals->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = m_Globals->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(m_Globals, v8, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( (Microsoft_Windows_DriverFrameworks_KernelMode_PerformanceEnableBits[0] & 1) != 0 )
      {
        if ( !*((_BYTE *)PPObject + 214) )
          v4 = *((_QWORD *)PPObject + 31);
        Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v4 + 96));
        McTemplateK0upp_EtwWriteTransfer(
          *(_MCGEN_TRACE_CONTEXT **)(v11 + 152),
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v11 + 152) + 184LL),
          _Arg2,
          Context);
      }
    }
  }
  return v5;
}
