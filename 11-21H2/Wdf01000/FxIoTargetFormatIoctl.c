/*
 * XREFs of FxIoTargetFormatIoctl @ 0x1C0005420
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x1C0005270 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x1C0034F80 (imp_WdfIoTargetFormatRequestForIoctl.c)
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005DAC (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00066D0 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x1C001B2C8 (-SetMemory@FxRequestBuffer@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006CA68 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDdqq @ 0x1C0072A18 (WPP_IFR_SF_qqDdqq.c)
 */

__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        WDFIOTARGET__ *IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  unsigned int globals; // r14d
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFMEMORY__ *v16; // r12
  WDFMEMORY__ *v17; // r13
  __int64 v18; // rdx
  FxRequest *v19; // rcx
  _WDFMEMORY_OFFSET *v20; // rsi
  IFxMemory *v21; // rbx
  _MDL *v22; // rax
  _WDFMEMORY_OFFSET *v23; // rbx
  int v24; // r14d
  bool v25; // cf
  FxRequestContext *m_RequestContext; // rdx
  unsigned __int64 BufferLength; // rcx
  unsigned __int64 v29; // rbx
  unsigned __int16 v30; // r9
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r14
  FxRequestBuffer *v33; // [rsp+20h] [rbp-91h]
  FxFileObject *_a6; // [rsp+30h] [rbp-81h]
  IFxMemory *pOutputMemory; // [rsp+60h] [rbp-51h] BYREF
  FxIoTarget *pTarget; // [rsp+68h] [rbp-49h] BYREF
  FxRequestBuffer inputBuf; // [rsp+70h] [rbp-41h] BYREF
  FxRequestBuffer outputBuf; // [rsp+90h] [rbp-21h] BYREF
  FxRequest *pRequest; // [rsp+100h] [rbp+4Fh] BYREF
  void *_a1; // [rsp+108h] [rbp+57h]
  IFxMemory *pInputMemory; // [rsp+110h] [rbp+5Fh] BYREF
  unsigned int v42; // [rsp+118h] [rbp+67h]

  v42 = Ioctl;
  _a1 = IoTarget;
  pTarget = 0LL;
  globals = Ioctl;
  pRequest = 0LL;
  pInputMemory = 0LL;
  pOutputMemory = 0LL;
  inputBuf.DataType = FxRequestBufferUnspecified;
  memset(&inputBuf.u, 0, sizeof(inputBuf.u));
  outputBuf.DataType = FxRequestBufferUnspecified;
  memset(&outputBuf.u, 0, sizeof(outputBuf.u));
  FxObjectHandleGetPtr(FxDriverGlobals, IoTarget, 0x1200u, (void **)&pTarget);
  m_Globals = pTarget->m_Globals;
  v16 = OutputBuffer;
  v17 = InputBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDdqq(
      pTarget->m_Globals,
      v12,
      v13,
      v14,
      (const _GUID *)v33,
      IoTarget,
      (const void *)Request,
      globals,
      Internal,
      InputBuffer,
      OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v18) = 0;
  v19 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v18 = LOWORD(v19->__vftable);
    v19 = (FxRequest *)((char *)v19 - v18);
  }
  if ( v19->m_Type == 4104 )
    pRequest = v19;
  else
    FxObjectHandleGetPtrQI(v19, (void **)&pRequest, (void *)Request, 0x1008u, v18);
  v20 = InputBufferOffsets;
  if ( v17 )
  {
    FxObjectHandleGetPtr(m_Globals, v17, 0x100Au, (void **)&pInputMemory);
    if ( v20 )
    {
      BufferLength = v20->BufferLength;
      v29 = BufferLength + v20->BufferOffset;
      if ( v29 < BufferLength || v29 > pInputMemory->GetBufferSize(pInputMemory) )
      {
        v30 = 44;
LABEL_29:
        WPP_IFR_SF_d(m_Globals, 2u, 0xEu, v30, WPP_FxIoTargetAPI_cpp_Traceguids, -1073741675);
        return 3221225621LL;
      }
    }
    v21 = pInputMemory;
    v22 = pInputMemory->GetMdl(pInputMemory);
    inputBuf.u.Memory.Memory = v21;
    inputBuf.u.Memory.Offsets = v20;
    if ( v22 )
    {
      inputBuf.DataType = FxRequestBufferReferencedMdl;
      inputBuf.u.RefMdl.Mdl = v22;
    }
    else
    {
      inputBuf.DataType = FxRequestBufferMemory;
    }
  }
  v23 = OutputBufferOffsets;
  if ( v16 )
  {
    FxObjectHandleGetPtr(m_Globals, v16, 0x100Au, (void **)&pOutputMemory);
    if ( v23 )
    {
      v31 = v23->BufferLength;
      v32 = v31 + v23->BufferOffset;
      if ( v32 < v31 || v32 > pOutputMemory->GetBufferSize(pOutputMemory) )
      {
        v30 = 45;
        goto LABEL_29;
      }
      globals = v42;
    }
    FxRequestBuffer::SetMemory(&outputBuf, pOutputMemory, v23);
  }
  v24 = FxIoTarget::FormatIoctlRequest(pTarget, pRequest, globals, Internal, &inputBuf, &outputBuf, _a6);
  if ( v24 >= 0 )
  {
    v25 = Internal != 0;
    Internal = -Internal;
    m_RequestContext = pRequest->m_RequestContext;
    m_RequestContext->m_CompletionParams.Parameters.Ioctl.IoControlCode = v42;
    m_RequestContext->m_CompletionParams.Type = v25 + 14;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = (unsigned __int64)v17;
    if ( v20 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v20->BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = (unsigned __int64)v16;
    if ( v23 )
      m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Offset = v23->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqd(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, _a1, (const void *)Request, v24);
  return (unsigned int)v24;
}
