/*
 * XREFs of FxIoTargetFormatIo @ 0x1C00503FC
 * Callers:
 *     imp_WdfIoTargetFormatRequestForRead @ 0x1C000E9F0 (imp_WdfIoTargetFormatRequestForRead.c)
 *     imp_WdfIoTargetFormatRequestForWrite @ 0x1C000EA30 (imp_WdfIoTargetFormatRequestForWrite.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0006230 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00075C4 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C00104FA (-FormatReadParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C0010554 (-FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqDq @ 0x1C0050CA0 (WPP_IFR_SF_qqDq.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0055B14 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 */

__int64 __fastcall FxIoTargetFormatIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        WDFMEMORY__ *IoBuffer,
        _WDFMEMORY_OFFSET *IoBufferOffsets,
        __int64 *DeviceOffset)
{
  unsigned int flags; // esi
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFMEMORY__ *v14; // r14
  _WDFMEMORY_OFFSET *v15; // rbx
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v17; // r14
  int v19; // r14d
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  FxFileObject *globals; // [rsp+28h] [rbp-58h]
  FxRequest *pRequest; // [rsp+50h] [rbp-30h] BYREF
  FxIoTarget *pTarget; // [rsp+58h] [rbp-28h] BYREF
  FxRequestBuffer ioBuf; // [rsp+60h] [rbp-20h] BYREF
  IFxMemory *pIoMemory; // [rsp+B0h] [rbp+30h] BYREF

  pTarget = 0LL;
  pRequest = 0LL;
  pIoMemory = 0LL;
  ioBuf.DataType = FxRequestBufferUnspecified;
  flags = MajorCode;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  v14 = IoBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDq(m_Globals, v10, v11, v12, traceGuid, IoTarget, Request, flags, IoBuffer);
  FxObjectHandleGetPtr(m_Globals, (unsigned __int64)Request, 0x1008u, (void **)&pRequest);
  v15 = IoBufferOffsets;
  if ( v14 )
  {
    FxObjectHandleGetPtr(m_Globals, (unsigned __int64)v14, 0x100Au, (void **)&pIoMemory);
    if ( v15 )
    {
      BufferLength = v15->BufferLength;
      v17 = BufferLength + v15->BufferOffset;
      if ( v17 < BufferLength || v17 > pIoMemory->GetBufferSize(pIoMemory) )
      {
        WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC0000095);
        return 3221225621LL;
      }
    }
    FxRequestBuffer::SetMemory(&ioBuf, pIoMemory, v15);
  }
  v19 = FxIoTarget::FormatIoRequest(pTarget, pRequest, flags, &ioBuf, DeviceOffset, globals);
  if ( v19 >= 0 )
  {
    if ( (_BYTE)flags == 4 )
    {
      FxRequestContext::FormatWriteParams(pRequest->m_RequestContext, pIoMemory, v15);
    }
    else if ( (_BYTE)flags == 3 )
    {
      FxRequestContext::FormatReadParams(pRequest->m_RequestContext, pIoMemory, v15);
    }
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qid(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, (__int64)Request, v19);
  return (unsigned int)v19;
}
