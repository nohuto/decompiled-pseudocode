/*
 * XREFs of ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0002648
 * Callers:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00022E8 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0055B14 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00589D0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 *     ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x1C005B090 (-_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUW.c)
 *     ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C005F8A0 (-FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PE.c)
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C005FB28 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x1C0061078 (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0089D58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall FxRequestBuffer::GetBufferLength(FxRequestBuffer *this)
{
  _WDFMEMORY_OFFSET *Offsets; // rdx
  _WDFMEMORY_OFFSET *v4; // rdx
  unsigned __int64 *p_BufferLength; // rcx

  if ( this->DataType == FxRequestBufferMemory )
  {
    Offsets = this->u.Memory.Offsets;
    if ( !Offsets )
      return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
    p_BufferLength = &Offsets->BufferLength;
    if ( Offsets->BufferOffset )
    {
      if ( !*p_BufferLength )
        return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
             - this->u.Memory.Offsets->BufferOffset;
      return *(unsigned int *)p_BufferLength;
    }
    goto LABEL_16;
  }
  if ( this->DataType == FxRequestBufferMdl || this->DataType == FxRequestBufferBuffer )
    return this->u.Mdl.Length;
  if ( this->DataType != FxRequestBufferReferencedMdl )
    return 0LL;
  v4 = this->u.Memory.Offsets;
  if ( !v4 )
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  p_BufferLength = &v4->BufferLength;
  if ( !v4->BufferOffset )
  {
LABEL_16:
    if ( *p_BufferLength )
      return *(unsigned int *)p_BufferLength;
    return this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory);
  }
  if ( !*p_BufferLength )
    return (unsigned int)this->u.Memory.Memory->GetBufferSize(this->u.Memory.Memory)
         - this->u.Memory.Offsets->BufferOffset;
  return *(unsigned int *)p_BufferLength;
}
