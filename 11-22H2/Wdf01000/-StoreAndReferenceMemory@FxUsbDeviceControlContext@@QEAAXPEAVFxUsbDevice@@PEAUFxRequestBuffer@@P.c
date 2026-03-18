/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0060BE0
 * Callers:
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C005F8A0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0008F1C (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     memset @ 0x1C000AC00 (memset.c)
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00105AE (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 */

void __fastcall FxUsbDeviceControlContext::StoreAndReferenceMemory(
        FxUsbDeviceControlContext *this,
        FxUsbDevice *Device,
        FxRequestBuffer *Buffer,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket)
{
  _URB_CONTROL_TRANSFER *m_Urb; // rcx
  _MDL *m_PartialMdl; // rcx

  this->m_CompletionParams.Type = WdfRequestTypeUsb;
  this->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&this->m_UsbParameters;
  this->m_UsbParameters.Type = WdfUsbRequestTypeDeviceControlTransfer;
  memset(this->m_Urb, 0, sizeof(_URB_CONTROL_TRANSFER));
  this->m_Urb->Hdr.Function = 8;
  this->m_Urb->Hdr.Length = 136;
  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(
    Buffer,
    (_MDL **)&this->m_Urb->TransferBuffer,
    &this->m_Urb->TransferBufferMDL,
    &this->m_Urb->TransferBufferLength);
  *(_WDF_USB_CONTROL_SETUP_PACKET *)this->m_Urb->SetupPacket = *SetupPacket;
  *(_WORD *)&this->m_Urb->SetupPacket[6] = this->m_Urb->TransferBufferLength;
  this->m_Urb->TransferFlags = 2;
  if ( (SetupPacket->Packet.bm.Byte & 0x80u) != 0 )
    this->m_Urb->TransferFlags |= 1u;
  m_Urb = this->m_Urb;
  if ( Device->m_OnUSBD )
    m_Urb->PipeHandle = Device->m_ControlPipe;
  else
    m_Urb->TransferFlags |= 8u;
  m_PartialMdl = this->m_PartialMdl;
  if ( m_PartialMdl )
    this->m_Urb->TransferBufferMDL = m_PartialMdl;
}
