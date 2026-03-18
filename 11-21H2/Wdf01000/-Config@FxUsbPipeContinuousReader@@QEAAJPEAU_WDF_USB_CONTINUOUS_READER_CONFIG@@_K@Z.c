/*
 * XREFs of ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008078C
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C007A47C (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00063C4 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00199A0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00306F4 (WPP_IFR_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C006B15C (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C00799DC (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::Config(
        FxUsbPipeContinuousReader *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  FxUsbPipe *m_Pipe; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxLookasideList *v8; // rax
  FxLookasideList *v9; // rsi
  void (__fastcall *const *v10)(); // rax
  FxLookasideList *v11; // rax
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *BufferAttributes; // rax
  __int64 v14; // r9
  int _a1; // eax
  unsigned int v16; // esi
  unsigned __int64 HeaderLength; // rax
  int v18; // r15d
  FxUsbPipeContinuousReader **i; // rsi
  __int64 v20; // [rsp+48h] [rbp-19h] BYREF
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+50h] [rbp-11h] BYREF
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // [rsp+88h] [rbp+27h]

  m_Pipe = this->m_Pipe;
  v20 = 0LL;
  *(_QWORD *)&attributes.Size = 64LL;
  m_Globals = m_Pipe->m_Globals;
  if ( TotalBufferLength >= 0x1000 )
  {
    v11 = (FxLookasideList *)FxObjectHandleAllocCommon(
                               m_Globals,
                               (FxPoolTypeOrPoolFlags *)&v20,
                               0x1C0uLL,
                               0,
                               0LL,
                               0,
                               FxObjectTypeExternal);
    v9 = v11;
    if ( v11 )
    {
      FxLookasideList::FxLookasideList(v11, m_Globals, 0x1C0u, m_Globals->Tag);
      v10 = FxNPagedLookasideListFromPool::`vftable';
      goto LABEL_6;
    }
  }
  else
  {
    v8 = (FxLookasideList *)FxObjectHandleAllocCommon(
                              m_Globals,
                              (FxPoolTypeOrPoolFlags *)&v20,
                              0x140uLL,
                              0,
                              0LL,
                              0,
                              FxObjectTypeExternal);
    v9 = v8;
    if ( v8 )
    {
      FxLookasideList::FxLookasideList(v8, m_Globals, 0x140u, m_Globals->Tag);
      v10 = FxNPagedLookasideList::`vftable';
LABEL_6:
      v9->__vftable = (FxLookasideList_vtbl *)v10;
      goto LABEL_8;
    }
  }
  v9 = 0LL;
LABEL_8:
  this->m_Lookaside = v9;
  if ( !v9 )
    return 3221225626LL;
  BufferAttributes = Config->BufferAttributes;
  if ( BufferAttributes )
  {
    *(_OWORD *)&attributes.EvtCleanupCallback = *(_OWORD *)&BufferAttributes->Size;
    *(_OWORD *)&attributes.ExecutionLevel = *(_OWORD *)&BufferAttributes->EvtDestroyCallback;
    *(_OWORD *)&attributes.ContextSizeOverride = *(_OWORD *)&BufferAttributes->ParentObject;
    ContextTypeInfo = BufferAttributes->ContextTypeInfo;
  }
  else
  {
    ContextTypeInfo = 0LL;
    attributes.ParentObject = (void *)0x100000001LL;
    memset(&attributes.EvtCleanupCallback, 0, 24);
    LODWORD(attributes.EvtCleanupCallback) = 56;
    *(_OWORD *)&attributes.ContextSizeOverride = 0LL;
  }
  attributes.ContextSizeOverride = FxObject::GetObjectHandleUnchecked(this->m_Lookaside);
  result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, void (__fastcall **)(void *)))(*(_QWORD *)v14 + 64LL))(
             v14,
             TotalBufferLength,
             &attributes.EvtCleanupCallback);
  if ( (int)result >= 0 )
  {
    _a1 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_Pipe->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_WorkItem);
    v16 = _a1;
    if ( _a1 >= 0 )
    {
      this->m_Offsets.BufferLength = Config->TransferLength;
      HeaderLength = Config->HeaderLength;
      v18 = 0;
      this->m_Offsets.BufferOffset = HeaderLength;
      if ( this->m_NumReaders )
      {
        for ( i = &this->m_Readers[0].Parent; ; i += 15 )
        {
          *i = this;
          KeInitializeDpc((PRKDPC)(i + 1), FxUsbPipeContinuousReader::_FxUsbPipeContinuousReadDpc, 0LL);
          result = FxRequest::_Create(
                     m_Globals,
                     0LL,
                     0LL,
                     this->m_Pipe,
                     FxRequestOwnsIrp,
                     FxRequestConstructorCallerIsFx,
                     (FxRequest **)i - 2);
          if ( (int)result < 0 )
            break;
          *(i - 1) = (FxUsbPipeContinuousReader *)(*(i - 2))->m_Readers[0].Dpc.DeferredContext;
          KeInitializeEvent((PRKEVENT)i + 3, NotificationEvent, 1u);
          *((_BYTE *)i + 96) = 1;
          result = FxUsbPipeContinuousReader::FormatRepeater(this, (FxUsbPipeRepeatReader *)(i - 2));
          if ( (int)result < 0 )
            break;
          if ( ++v18 >= this->m_NumReaders )
            return 0LL;
        }
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xAu, WPP_FxUsbPipeKm_cpp_Traceguids, _a1);
      return v16;
    }
  }
  return result;
}
