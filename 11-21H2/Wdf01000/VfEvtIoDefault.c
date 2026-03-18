/*
 * XREFs of VfEvtIoDefault @ 0x1C00C6320
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0035840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0upp_EtwWriteTransfer @ 0x1C00615A8 (McTemplateK0upp_EtwWriteTransfer.c)
 *     VerifyCriticalRegionEntry @ 0x1C0061A6C (VerifyCriticalRegionEntry.c)
 *     VerifyCriticalRegionExit @ 0x1C0061AA0 (VerifyCriticalRegionExit.c)
 *     VerifyIrqlExit @ 0x1C0061B08 (VerifyIrqlExit.c)
 *     VfWdfObjectGetTypedContext @ 0x1C00C5534 (VfWdfObjectGetTypedContext.c)
 */

void __fastcall VfEvtIoDefault(WDFQUEUE__ *Queue, unsigned __int64 Request)
{
  __int64 v4; // rbx
  char *TypedContext; // r15
  void (__fastcall *v6)(WDFQUEUE__ *, unsigned __int64); // rsi
  unsigned __int16 *v7; // rcx
  _FX_DRIVER_GLOBALS *v8; // rcx
  int (__fastcall *_Arg2)(WDFDRIVER__ *, WDFDEVICE_INIT *); // r15
  const void *Context; // rax
  __int64 v11; // r8
  _MCGEN_TRACE_CONTEXT *v12; // rcx
  KIRQL CurrentIrql; // bl
  unsigned __int8 critRegion[8]; // [rsp+30h] [rbp-30h] BYREF
  void *PPObject; // [rsp+38h] [rbp-28h] BYREF
  _GUID ActivityId; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0LL;
  TypedContext = VfWdfObjectGetTypedContext((unsigned __int64)Queue, &WDF_VF_WDFIOQUEUECREATE_CONTEXT_TYPE_INFO);
  v6 = (void (__fastcall *)(WDFQUEUE__ *, unsigned __int64))*((_QWORD *)TypedContext + 3);
  if ( v6 )
  {
    PPObject = 0LL;
    v7 = (unsigned __int16 *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
    ActivityId = 0LL;
    if ( (Request & 1) != 0 )
      v7 = (unsigned __int16 *)((char *)v7 - *v7);
    v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v7 + 2);
    if ( (v8->FxEnhancedVerifierOptions & 0xF00000) != 0 )
    {
      _Arg2 = v8->Driver->m_DriverDeviceAdd.Method;
      FxObjectHandleGetPtr(v8, Request, 0x1008u, &PPObject);
      if ( (unsigned int)IoGetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId) == -1073741275 )
      {
        EtwActivityIdControl(3u, &ActivityId);
        IoSetActivityIdIrp(*((_QWORD *)PPObject + 19), &ActivityId);
      }
      if ( ((__int64)WPP_GLOBAL_WDF_Control.Queue.Wcb.BufferChainingDpc & 1) != 0 )
      {
        if ( !*((_BYTE *)PPObject + 214) )
          v4 = *((_QWORD *)PPObject + 31);
        Context = (const void *)FxObject::GetObjectHandleUnchecked(*(FxObject **)(v4 + 96));
        McTemplateK0upp_EtwWriteTransfer(
          v12,
          &FX_REQUEST_START,
          &ActivityId,
          **(_BYTE **)(*(_QWORD *)(v11 + 152) + 184LL),
          _Arg2,
          Context);
      }
      v6(Queue, Request);
    }
    else
    {
      critRegion[0] = 0;
      CurrentIrql = KeGetCurrentIrql();
      VerifyCriticalRegionEntry(critRegion);
      v6(Queue, Request);
      VerifyIrqlExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, CurrentIrql);
      VerifyCriticalRegionExit(*(_WDF_DRIVER_GLOBALS **)TypedContext, critRegion[0], (unsigned __int64)v6);
    }
  }
}
