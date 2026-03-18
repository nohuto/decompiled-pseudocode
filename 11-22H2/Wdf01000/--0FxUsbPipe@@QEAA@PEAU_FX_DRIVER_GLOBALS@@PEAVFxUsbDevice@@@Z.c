/*
 * XREFs of ??0FxUsbPipe@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxUsbDevice@@@Z @ 0x1C005969C
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C005DC2C (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z @ 0x1C005F080 (-SelectSetting@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@@Z.c)
 * Callees:
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C0052648 (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 */

void __fastcall FxUsbPipe::FxUsbPipe(FxUsbPipe *this, _FX_DRIVER_GLOBALS *FxDriverGlobals, FxUsbDevice *UsbDevice)
{
  _FX_URB_TYPE m_UrbType; // al

  FxIoTarget::FxIoTarget(this, FxDriverGlobals, 0x1B0u, 0x1203u);
  this->m_UsbDevice = UsbDevice;
  this->__vftable = (FxUsbPipe_vtbl *)FxUsbPipe::`vftable';
  this->m_ListEntry.Blink = &this->m_ListEntry;
  this->m_ListEntry.Flink = &this->m_ListEntry;
  *(_OWORD *)&this->m_PipeInformation.MaximumPacketSize = 0LL;
  *(_QWORD *)&this->m_PipeInformation.MaximumTransferSize = 0LL;
  this->m_Reader = 0LL;
  this->m_UsbInterface = 0LL;
  *(_WORD *)&this->m_InterfaceNumber = 256;
  this->m_USBDHandle = UsbDevice->m_USBDHandle;
  m_UrbType = UsbDevice->m_UrbType;
  this->m_ObjectFlags |= 2u;
  this->m_UrbType = m_UrbType;
}
