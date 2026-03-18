/*
 * XREFs of FxIoTargetSendIo @ 0x1C00726D4
 * Callers:
 *     imp_WdfIoTargetSendReadSynchronously @ 0x1C0038F70 (imp_WdfIoTargetSendReadSynchronously.c)
 *     imp_WdfIoTargetSendWriteSynchronously @ 0x1C00735D0 (imp_WdfIoTargetSendWriteSynchronously.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00058D8 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ??1FxIoContext@@UEAA@XZ @ 0x1C0005E18 (--1FxIoContext@@UEAA@XZ.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0005E74 (--0FxIoContext@@QEAA@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C00134A8 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     ?ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPTOR@@K@Z @ 0x1C001A074 (-ValidateMemoryDescriptor@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_MEMORY_DESCRIPT.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C001A138 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C001A228 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C001A8A0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxRequestBase@@@Z @ 0x1C001AD20 (-FxValidateRequestOptions@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAVFxReque.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_Dd @ 0x1C003511C (WPP_IFR_SF_Dd.c)
 *     WPP_IFR_SF_qqD @ 0x1C0072928 (WPP_IFR_SF_qqD.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x1C0075364 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 */

__int64 __fastcall FxIoTargetSendIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        WDFREQUEST__ *Request,
        unsigned __int8 MajorCode,
        _WDF_MEMORY_DESCRIPTOR *IoBuffer,
        __int64 *DeviceOffset,
        _WDF_REQUEST_SEND_OPTIONS *RequestOptions,
        unsigned __int64 *BytesReturned)
{
  unsigned int level; // r14d
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  int v14; // ebx
  FxRequestBase *v15; // r8
  int v16; // eax
  _WDF_MEMORY_DESCRIPTOR *v17; // rsi
  signed int v18; // eax
  int v19; // eax
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void *v21; // rdx
  FxFileObject *_a3; // [rsp+28h] [rbp-D8h]
  FxRequestBuffer ioBuf; // [rsp+40h] [rbp-C0h] BYREF
  FxSyncRequest v25; // [rsp+60h] [rbp-A0h] BYREF
  FxIoContext context; // [rsp+190h] [rbp+90h] BYREF
  FxIoTarget *pTarget; // [rsp+270h] [rbp+170h] BYREF

  pTarget = 0LL;
  ioBuf.DataType = FxRequestBufferUnspecified;
  level = MajorCode;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, (unsigned __int64)IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  FxIoContext::FxIoContext(&context);
  FxSyncRequest::FxSyncRequest(&v25, m_Globals, &context, Request);
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqD(m_Globals, v12, v13, 0x1Cu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, Request, level);
  v14 = FxVerifierCheckIrqlLevel(m_Globals, 0);
  if ( v14 >= 0 )
  {
    v16 = FxValidateRequestOptions(m_Globals, RequestOptions, v15);
    v14 = v16;
    if ( v16 >= 0 )
    {
      v17 = IoBuffer;
      if ( IoBuffer
        && (v18 = FxRequestBuffer::ValidateMemoryDescriptor(&ioBuf, (IFxMemory *)m_Globals, IoBuffer, 0),
            v14 = v18,
            v18 < 0) )
      {
        WPP_IFR_SF_qL(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTargetAPI_cpp_Traceguids, v17, v18);
      }
      else
      {
        v19 = FxIoTarget::FormatIoRequest(pTarget, v25.m_TrueRequest, level, &ioBuf, DeviceOffset, _a3);
        v14 = v19;
        if ( v19 < 0 )
        {
          WPP_IFR_SF_Dd(m_Globals, 2u, 0xEu, 0x20u, WPP_FxIoTargetAPI_cpp_Traceguids, level, v19);
        }
        else
        {
          if ( m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v25.m_TrueRequest);
            if ( ObjectHandleUnchecked )
              v21 = (const void *)ObjectHandleUnchecked;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Fu, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget, v21);
          }
          v14 = FxIoTarget::SubmitSync(pTarget, v25.m_TrueRequest, RequestOptions, 0LL);
          if ( BytesReturned )
            *BytesReturned = v25.m_TrueRequest->m_Irp.m_Irp->IoStatus.Information;
        }
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTargetAPI_cpp_Traceguids, v16);
    }
  }
  FxSyncRequest::~FxSyncRequest(&v25);
  FxIoContext::~FxIoContext(&context);
  return (unsigned int)v14;
}
