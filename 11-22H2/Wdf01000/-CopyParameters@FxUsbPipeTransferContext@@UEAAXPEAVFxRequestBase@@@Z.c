/*
 * XREFs of ?CopyParameters@FxUsbPipeTransferContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C000F150
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxUsbPipeTransferContext::CopyParameters(FxUsbPipeTransferContext *this, FxRequestBase *Request)
{
  _URB_BULK_OR_INTERRUPT_TRANSFER *m_Urb; // rdx

  m_Urb = this->m_Urb;
  this->m_CompletionParams.IoStatus.Information = m_Urb->TransferBufferLength;
  this->m_UsbParameters.Parameters.PipeWrite.Length = m_Urb->TransferBufferLength;
  this->m_UsbParameters.UsbdStatus = this->GetUsbdStatus(this);
}
