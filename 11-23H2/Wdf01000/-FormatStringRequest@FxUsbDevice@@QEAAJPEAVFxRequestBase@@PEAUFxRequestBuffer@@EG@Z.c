/*
 * XREFs of ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C005FB28
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00589D0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     ?MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C0001E04 (-MarkDisposeOverride@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001EB0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0002648 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z @ 0x1C000F45A (-FxFormatUsbRequest@@YAXPEAVFxRequestBase@@PEAU_URB@@W4_FX_URB_TYPE@@PEAUUSBD_HANDLE__@@@Z.c)
 *     ?GetFxUrbTypeForRequest@FxUsbDevice@@QEAA?AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z @ 0x1C000F646 (-GetFxUrbTypeForRequest@FxUsbDevice@@QEAA-AW4_FX_URB_TYPE@@PEAVFxRequestBase@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ??0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z @ 0x1C005C31C (--0FxUsbDeviceStringContext@@QEAA@W4_FX_URB_TYPE@@@Z.c)
 *     ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C005C60C (-AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z.c)
 *     ?AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z @ 0x1C005C6E0 (-AllocateUrb@FxUsbDeviceStringContext@@QEAAJPEAUUSBD_HANDLE__@@@Z.c)
 */

__int64 __fastcall FxUsbDevice::FormatStringRequest(
        FxUsbDevice *this,
        FxRequestBase *Request,
        FxRequestBuffer *RequestBuffer,
        unsigned __int8 StringIndex,
        unsigned __int16 LangID)
{
  int _a3; // ebx
  const void *_a1; // rax
  __int64 result; // rax
  FxRequestContext *m_RequestContext; // rbx
  bool FxUrbTypeForRequest; // al
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_URB_TYPE v15; // bp
  void *v16; // r8
  FX_POOL **v17; // rax
  FxUsbDeviceStringContext *v18; // rax
  signed int Urb; // eax
  unsigned int v20; // ebp
  unsigned int BufferLength; // eax
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory_vtbl *v23; // rax
  __m128i v24; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  _a3 = FxRequestBase::ValidateTarget(Request, this);
  if ( _a3 < 0 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qid(this->m_Globals, 2u, 0xEu, 0x14u, WPP_FxusbDeviceKm_cpp_Traceguids, _a1, (__int64)Request, _a3);
    return (unsigned int)_a3;
  }
  m_RequestContext = Request->m_RequestContext;
  if ( !m_RequestContext || m_RequestContext->m_RequestType != 20 )
  {
    FxUrbTypeForRequest = FxUsbDevice::GetFxUrbTypeForRequest(this, Request);
    m_Globals = this->m_Globals;
    v15 = FxUrbTypeForRequest;
    v24.m128i_i64[0] = 0LL;
    v24.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v16 = retaddr;
    else
      v16 = 0LL;
    v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v24, 0x128uLL, m_Globals->Tag, v16);
    if ( !v17 )
      return 3221225626LL;
    FxUsbDeviceStringContext::FxUsbDeviceStringContext((FxUsbDeviceStringContext *)v17, v15);
    m_RequestContext = v18;
    if ( !v18 )
      return 3221225626LL;
    if ( v15 == FxUrbTypeUsbdAllocated )
    {
      Urb = FxUsbDeviceStringContext::AllocateUrb(v18, this->m_USBDHandle);
      v20 = Urb;
      if ( Urb < 0 )
      {
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, 0x15u, WPP_FxusbDeviceKm_cpp_Traceguids, Urb);
        ((void (__fastcall *)(FxRequestContext *, __int64))m_RequestContext->~FxRequestContext)(m_RequestContext, 1LL);
        return v20;
      }
      FxObject::MarkDisposeOverride(Request, ObjectLock);
    }
    FxRequestBase::SetContext(Request, m_RequestContext);
  }
  BufferLength = FxRequestBuffer::GetBufferLength(RequestBuffer);
  result = FxUsbDeviceStringContext::AllocateDescriptor(
             (FxUsbDeviceStringContext *)m_RequestContext,
             this->m_Globals,
             BufferLength);
  if ( (int)result >= 0 )
  {
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, RequestBuffer);
    m_RequestMemory = m_RequestContext[2].m_RequestMemory;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    v23 = *(IFxMemory_vtbl **)&m_RequestContext[2].m_RequestType;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    HIDWORD(m_RequestContext[1].__vftable) = 2;
    m_RequestMemory[5].__vftable = v23;
    HIDWORD(m_RequestContext[2].m_RequestMemory[4].__vftable) = m_RequestContext[3].__vftable;
    BYTE2(m_RequestContext[2].m_RequestMemory[16].__vftable) = StringIndex;
    WORD2(m_RequestContext[2].m_RequestMemory[16].__vftable) = LangID;
    FxFormatUsbRequest(
      Request,
      (_FILE_OBJECT *)m_RequestContext[2].m_RequestMemory,
      (_FX_URB_TYPE)(m_RequestContext[2].m_RequestMemory != (IFxMemory *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb
                                                          + 1),
      this->m_USBDHandle);
    return 0LL;
  }
  return result;
}
