/*
 * XREFs of ?CopyParameters@FxUsbDeviceControlContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C000F5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxUsbDeviceControlContext::CopyParameters(FxUsbDeviceControlContext *this, FxRequestBase *Request)
{
  _URB_CONTROL_TRANSFER *m_Urb; // rdx

  m_Urb = this->m_Urb;
  this->m_CompletionParams.IoStatus.Information = m_Urb->TransferBufferLength;
  this->m_UsbParameters.Parameters.DeviceControlTransfer.Length = m_Urb->TransferBufferLength;
  this->m_UsbParameters.UsbdStatus = this->GetUsbdStatus(this);
}
