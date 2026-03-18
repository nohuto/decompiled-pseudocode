/*
 * XREFs of ??0FxUsbPipeRequestContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C00597E0
 * Callers:
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C00565F0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0056EC0 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     ?FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C0059D6C (-FormatAbortRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C005A0EC (-FormatResetRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C005AC48 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C000F0A8 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbPipeRequestContext::FxUsbPipeRequestContext(FxUsbPipeRequestContext *this, _FX_URB_TYPE FxUrbType)
{
  _URB_PIPE_REQUEST *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x12u);
  this->__vftable = (FxUsbPipeRequestContext_vtbl *)FxUsbPipeRequestContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_USBDHandle = 0LL;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
