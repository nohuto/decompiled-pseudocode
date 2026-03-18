/*
 * XREFs of ?SubmitSyncRequestIgnoreTargetState@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@@Z @ 0x1C0053FF0
 * Callers:
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0056EC0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C005AC48 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C005D25C (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C00606BC (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0053CA8 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitSyncRequestIgnoreTargetState(
        FxIoTarget *this,
        FxRequestBase *Request,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  __int64 v6; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v8; // r10
  _WDF_REQUEST_SEND_OPTIONS Options; // [rsp+30h] [rbp-18h] BYREF

  m_Globals = this->m_Globals;
  if ( RequestOptions )
  {
    v6 = HIDWORD(*(_QWORD *)&RequestOptions->Size);
    Options = *RequestOptions;
    if ( (v6 & 4) == 0 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
        WPP_IFR_SF_q(v8, 5u, 0xEu, 0x39u, (const _GUID *)&WPP_FxIoTarget_cpp_Traceguids, _a1);
      }
      Options.Flags |= 4u;
    }
  }
  else
  {
    Options.Timeout = 0LL;
    Options.Size = 16;
    Options.Flags = 4;
  }
  return FxIoTarget::SubmitSync(this, Request, &Options, 0LL);
}
