/*
 * XREFs of ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C00022E8
 * Callers:
 *     FxIoTargetFormatIoctl @ 0x1C0005C48 (FxIoTargetFormatIoctl.c)
 *     FxIoTargetSendIoctl @ 0x1C00505DC (FxIoTargetSendIoctl.c)
 *     ?FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z @ 0x1C005D4FC (-FormatCycleRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C00606BC (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z @ 0x1C0001EB0 (-SetContext@FxRequestBase@@QEAAXPEAUFxRequestContext@@@Z.c)
 *     ?CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0001EF0 (-CopyFileObjectAndFlags@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?VerifierSetFormatted@FxRequestBase@@QEAAXXZ @ 0x1C0001F54 (-VerifierSetFormatted@FxRequestBase@@QEAAXXZ.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C00021A8 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ @ 0x1C0002238 (-ContextReleaseAndRestore@FxRequestBase@@QEAAXXZ.c)
 *     ?GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z @ 0x1C000228C (-GetBuffer@FxRequestBuffer@@QEAAJPEAPEAX@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x1C0002648 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxIoContext@@QEAA@XZ @ 0x1C0002A08 (--0FxIoContext@@QEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0008F1C (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C000B140 (memmove.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     ?GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERATION@@EPEA_K@Z @ 0x1C0089D58 (-GetOrAllocateMdl@FxRequestBuffer@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAU_MDL@@1PEAEW4_LOCK_OPERAT.c)
 */

__int64 __fastcall FxIoTarget::FormatIoctlRequest(
        FxIoTarget *this,
        FxRequestBase *Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        FxRequestBuffer *InputBuffer,
        FxRequestBuffer *OutputBuffer)
{
  __int64 result; // rax
  int Buffer; // ebx
  FxRequestContext *m_RequestContext; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v13; // rax
  FxIoContext *v14; // rax
  FxRequestContext *v15; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned __int8 v17; // dl
  size_t BufferLength; // r13
  unsigned int v19; // eax
  void *v20; // r8
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rcx
  unsigned int v24; // r9d
  FxRequestContext_vtbl *v25; // rcx
  signed int _a1; // eax
  unsigned __int16 v27; // r9
  _IRP::<unnamed_type_AssociatedIrp> v28; // rcx
  unsigned __int16 v29; // r8
  void *pBuffer[2]; // [rsp+40h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v31; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+38h]
  char v33; // [rsp+A8h] [rbp+48h]
  unsigned int v35; // [rsp+B0h] [rbp+50h]
  _DWORD Request_0a[20]; // [rsp+D0h] [rbp+70h]

  pBuffer[0] = 0LL;
  v33 = 0;
  result = FxRequestBase::ValidateTarget(Request, this);
  Buffer = result;
  if ( (int)result >= 0 )
  {
    m_RequestContext = Request->m_RequestContext;
    if ( !m_RequestContext || m_RequestContext->m_RequestType != 1 )
    {
      m_Globals = this->m_Globals;
      v13 = retaddr;
      *(_QWORD *)&v31.UsePoolType = 0LL;
      v31.u.PoolFlags = 64LL;
      if ( !m_Globals->FxPoolTrackingOn )
        v13 = 0LL;
      v14 = (FxIoContext *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v31, 0xB0uLL, m_Globals->Tag, v13);
      if ( !v14 || (FxIoContext::FxIoContext(v14), (m_RequestContext = v15) == 0LL) )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x10u, WPP_FxIoTargetKm_cpp_Traceguids);
        return 3221225626LL;
      }
      FxRequestBase::SetContext(Request, v15);
    }
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 34) = 1;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = Request->m_Irp.m_Irp->UserBuffer;
    m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)Request->m_Irp.m_Irp->MdlAddress;
    *((_DWORD *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 2) = Request->m_Irp.m_Irp->Flags;
    CurrentStackLocation = Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = 0LL;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = 0LL;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = 0LL;
    CurrentStackLocation[-1].FileObject = 0LL;
    m_RequestContext->StoreAndReferenceMemory(m_RequestContext, InputBuffer);
    FxRequestContext::_StoreAndReferenceMemoryWorker(
      m_RequestContext,
      (IFxMemory **)&m_RequestContext[1].m_CompletionParams.Parameters.Ioctl.Output.Length,
      OutputBuffer);
    v17 = (Internal != 0) + 14;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = v17;
    *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 35) = v17;
    FxIoTarget::CopyFileObjectAndFlags(this, Request);
    BufferLength = FxRequestBuffer::GetBufferLength(InputBuffer);
    v19 = FxRequestBuffer::GetBufferLength(OutputBuffer);
    v20 = 0LL;
    v21 = v19;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = Ioctl;
    v35 = Ioctl & 3;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Create.Options = BufferLength;
    Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.Read.Length = v19;
    if ( v35 )
    {
      if ( v35 == 1 || v35 == 2 )
      {
        _a1 = FxRequestBuffer::GetBuffer(InputBuffer, (IFxMemory **)pBuffer);
        Buffer = _a1;
        if ( _a1 < 0 )
        {
          v27 = 20;
        }
        else
        {
          Request->m_Irp.m_Irp->AssociatedIrp.SystemBuffer = pBuffer[0];
          _a1 = FxRequestBuffer::GetOrAllocateMdl(
                  OutputBuffer,
                  this->m_Globals,
                  &Request->m_Irp.m_Irp->MdlAddress,
                  (_MDL **)&m_RequestContext[1].m_CompletionParams.IoStatus.Information,
                  (unsigned __int8 *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 33,
                  (_LOCK_OPERATION)(v35 != 1),
                  m_RequestContext[1].m_CompletionParams.IoStatus.Information != 0,
                  &m_RequestContext[1].m_CompletionParams.Parameters.Others.Argument4.Value);
          Buffer = _a1;
          if ( _a1 >= 0 )
            goto LABEL_12;
          v27 = 21;
        }
      }
      else
      {
        if ( v35 != 3 )
          goto LABEL_12;
        _a1 = FxRequestBuffer::GetBuffer(OutputBuffer, (IFxMemory **)pBuffer);
        Buffer = _a1;
        if ( _a1 >= 0 )
        {
          Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
          _a1 = FxRequestBuffer::GetBuffer(InputBuffer, (IFxMemory **)pBuffer);
          Buffer = _a1;
          if ( _a1 >= 0 )
          {
            Request->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation[-1].Parameters.SetFile.DeleteHandle = pBuffer[0];
            goto LABEL_12;
          }
          v27 = 23;
        }
        else
        {
          v27 = 22;
        }
      }
      WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v27, WPP_FxIoTargetKm_cpp_Traceguids, _a1);
      goto LABEL_51;
    }
    if ( (_DWORD)BufferLength )
    {
      v22 = BufferLength;
      if ( (unsigned int)BufferLength > (unsigned int)v21 )
        goto LABEL_16;
    }
    else if ( !v19 )
    {
      Request->m_Irp.m_Irp->UserBuffer = 0LL;
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
LABEL_12:
      FxRequestBase::VerifierSetFormatted(Request);
      return (unsigned int)Buffer;
    }
    v22 = v21;
LABEL_16:
    Request_0a[0] = v22;
    if ( m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset >= v22
      && (v28.MasterIrp = (_IRP *)m_RequestContext[1].__vftable) != 0LL )
    {
      Request->m_Irp.m_Irp->AssociatedIrp = v28;
    }
    else
    {
      v23 = this->m_Globals;
      *(_QWORD *)&v31.UsePoolType = 0LL;
      v31.u.PoolFlags = 64LL;
      if ( v23->FxPoolTrackingOn )
        v20 = retaddr;
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = (_IRP *)FxPoolAllocator(
                                                                v23,
                                                                &v23->FxPoolFrameworks,
                                                                &v31,
                                                                v22,
                                                                v23->Tag,
                                                                v20);
      if ( !Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp )
      {
        WPP_IFR_SF_(this->m_Globals, 2u, 0xEu, 0x11u, WPP_FxIoTargetKm_cpp_Traceguids);
        Buffer = -1073741670;
        goto LABEL_51;
      }
      v33 = 1;
    }
    Buffer = FxRequestBuffer::GetBuffer(InputBuffer, (IFxMemory **)pBuffer);
    if ( Buffer < 0 )
    {
      v29 = 18;
      v24 = Buffer;
    }
    else
    {
      if ( pBuffer[0] )
        memmove(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp, pBuffer[0], BufferLength);
      Buffer = FxRequestBuffer::GetBuffer(OutputBuffer, (IFxMemory **)pBuffer);
      v24 = Buffer;
      if ( Buffer >= 0 )
      {
        Request->m_Irp.m_Irp->UserBuffer = pBuffer[0];
        if ( v33 )
        {
          v25 = m_RequestContext[1].__vftable;
          m_RequestContext[1].__vftable = (FxRequestContext_vtbl *)Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp;
          m_RequestContext[1].m_CompletionParams.Parameters.Write.Offset = Request_0a[0];
          *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = (_DWORD)v21 != 0;
          if ( v25 )
            FxPoolFree(v25);
        }
        else
        {
          *((_BYTE *)&m_RequestContext[1].m_CompletionParams.Parameters.Usb + 32) = (_DWORD)v21 != 0;
        }
        goto LABEL_12;
      }
      v29 = 19;
    }
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xEu, v29, WPP_FxIoTargetKm_cpp_Traceguids, v24);
    if ( v33 )
    {
      FxPoolFree(Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp);
      Request->m_Irp.m_Irp->AssociatedIrp.MasterIrp = 0LL;
    }
LABEL_51:
    FxRequestBase::ContextReleaseAndRestore(Request);
    return (unsigned int)Buffer;
  }
  return result;
}
