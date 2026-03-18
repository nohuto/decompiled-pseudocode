/*
 * XREFs of ??0FxUsbPipeTransferContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C0059834
 * Callers:
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C005B4E0 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0061078 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 * Callees:
 *     ??0FxUsbRequestContext@@QEAA@E@Z @ 0x1C000F0A8 (--0FxUsbRequestContext@@QEAA@E@Z.c)
 */

void __fastcall FxUsbPipeTransferContext::FxUsbPipeTransferContext(
        FxUsbPipeTransferContext *this,
        _FX_URB_TYPE FxUrbType)
{
  _URB_BULK_OR_INTERRUPT_TRANSFER *p_m_UrbLegacy; // rax

  FxUsbRequestContext::FxUsbRequestContext(this, 0x10u);
  this->__vftable = (FxUsbPipeTransferContext_vtbl *)FxUsbPipeTransferContext::`vftable';
  p_m_UrbLegacy = &this->m_UrbLegacy;
  this->m_UnlockPages = 0;
  if ( FxUrbType )
    p_m_UrbLegacy = 0LL;
  this->m_PartialMdl = 0LL;
  this->m_USBDHandle = 0LL;
  this->m_Urb = p_m_UrbLegacy;
}
