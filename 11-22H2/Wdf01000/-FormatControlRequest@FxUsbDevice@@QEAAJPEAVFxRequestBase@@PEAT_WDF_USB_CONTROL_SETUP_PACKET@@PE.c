/*
 * XREFs of ?FormatControlRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@PEAUFxRequestBuffer@@@Z @ 0x1C005F8A0
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForControlTransfer @ 0x1C0058810 (imp_WdfUsbTargetDeviceFormatRequestForControlTransfer.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0059400 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 * Callees:
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0001E04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001EB0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0002648 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C000F45A (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ??0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C000F504 (--0FxUsbDeviceControlContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C000F646 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_i @ 0x1C00458F4 (WPP_IFR_SF_i.c)
 *     ?StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@PEAT_WDF_USB_CONTROL_SETUP_PACKET@@@Z @ 0x1C0060BE0 (-StoreAndReferenceMemory@FxUsbDeviceControlContext@@QEAAXPEAVFxUsbDevice@@PEAUFxRequestBuffer@@P.c)
 *     USBD_UrbAllocate @ 0x1C008856C (USBD_UrbAllocate.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0089D58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

int __fastcall FxUsbDevice::FormatControlRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        _WDF_USB_CONTROL_SETUP_PACKET *SetupPacket,
        FxRequestBuffer *RequestBuffer)
{
  unsigned int BufferLength; // eax
  unsigned __int8 v9; // dl
  int result; // eax
  int _a3; // ebx
  const void *ObjectHandleUnchecked; // rax
  FxRequestContext *m_RequestContext; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_URB_TYPE v16; // bp
  void *v17; // r8
  FX_POOL **v18; // rax
  __int64 v19; // rax
  USBD_HANDLE__ *m_USBDHandle; // rbp
  signed int v21; // r15d
  _FX_DRIVER_GLOBALS *v22; // rdx
  __m128i pMdl; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  if ( BufferLength > 0xFFFFuLL )
  {
    WPP_IFR_SF_i(this->m_Globals, v9, 0xEu, 0x16u, WPP_FxusbDeviceKm_cpp_Traceguids, BufferLength);
    return -1073741811;
  }
  _a3 = FxRequestBase::ValidateTarget(Request, this);
  if ( _a3 < 0 )
  {
    ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(
      this->m_Globals,
      2u,
      0xEu,
      0x17u,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      ObjectHandleUnchecked,
      (__int64)Request,
      _a3);
    return _a3;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 19 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    m_Globals = this->m_Globals;
    v16 = FxUrbTypeForRequest;
    pMdl.m128i_i64[0] = 0LL;
    pMdl.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v17 = retaddr;
    else
      v17 = 0LL;
    v18 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &pMdl, 0x128uLL, m_Globals->Tag, v17);
    if ( !v18 )
      return -1073741670;
    FxUsbDeviceControlContext::FxUsbDeviceControlContext((FxUsbDeviceControlContext *)v18, v16);
    m_RequestContext = (FxRequestContext *)v19;
    if ( !v19 )
      return -1073741670;
    if ( v16 == FxUrbTypeUsbdAllocated )
    {
      m_USBDHandle = this->m_USBDHandle;
      v21 = USBD_UrbAllocate(m_USBDHandle, (_URB **)(v19 + 272));
      if ( v21 < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x18u, WPP_FxusbDeviceKm_cpp_Traceguids, v21);
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v21;
      }
      m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)m_USBDHandle;
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  if ( ((RequestBuffer->DataType - 2) & 0xFFFFFFFD) != 0
    || (v22 = this->m_Globals,
        pMdl.m128i_i64[0] = 0LL,
        result = FxRequestBuffer::GetOrAllocateMdl(
                   RequestBuffer,
                   v22,
                   (_MDL **)&pMdl,
                   (_MDL **)&m_RequestContext[2].m_RequestType,
                   (unsigned __int8 *)&m_RequestContext[3],
                   IoModifyAccess,
                   0,
                   0LL),
        result >= 0) )
  {
    FxUsbDeviceControlContext::StoreAndReferenceMemory(
      (FxUsbDeviceControlContext *)m_RequestContext,
      this,
      RequestBuffer,
      SetupPacket);
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
      (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                          + 1),
      this->m_USBDHandle);
    return 0;
  }
  return result;
}
