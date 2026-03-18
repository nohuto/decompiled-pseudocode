/*
 * XREFs of ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0060DE4
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C005A9EC (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0002AFC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C0042DAC (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C0042E70 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0059F5C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall FxUsbPipeContinuousReader::Config(
        FxUsbPipeContinuousReader *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  FxUsbPipe *m_Pipe; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxLookasideList *v8; // rax
  FxLookasideList *v9; // rdi
  void (__fastcall *const *v10)(); // rax
  FxLookasideList *v11; // rax
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *BufferAttributes; // rax
  signed int _a1; // eax
  unsigned int v15; // edi
  unsigned __int64 HeaderLength; // rax
  int v17; // r15d
  FxUsbPipeContinuousReader **i; // rdi
  _BYTE v19[64]; // [rsp+48h] [rbp-19h] OVERLAPPED BYREF
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // [rsp+88h] [rbp+27h]

  memset(v19, 0, sizeof(v19));
  ContextTypeInfo = 0LL;
  m_Pipe = this->m_Pipe;
  *(_QWORD *)&v19[8] = 64LL;
  m_Globals = m_Pipe->m_Globals;
  if ( TotalBufferLength >= 0x1000 )
  {
    v11 = (FxLookasideList *)FxObjectHandleAllocCommon(
                               m_Globals,
                               (FxPoolTypeOrPoolFlags *)v19,
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
                              (FxPoolTypeOrPoolFlags *)v19,
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
    *(_OWORD *)&v19[16] = *(_OWORD *)&BufferAttributes->Size;
    *(_OWORD *)&v19[32] = *(_OWORD *)&BufferAttributes->EvtDestroyCallback;
    *(_OWORD *)&v19[48] = *(_OWORD *)&BufferAttributes->ParentObject;
    ContextTypeInfo = BufferAttributes->ContextTypeInfo;
  }
  else
  {
    *(_DWORD *)&v19[16] = 56;
    *(_QWORD *)&v19[40] = 0x100000001LL;
  }
  *(_QWORD *)&v19[48] = FxObject::GetObjectHandleUnchecked(v9);
  result = ((__int64 (__fastcall *)(FxLookasideList *, unsigned __int64, _BYTE *))v9->Initialize)(
             v9,
             TotalBufferLength,
             &v19[16]);
  if ( (int)result >= 0 )
  {
    _a1 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_Pipe->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_WorkItem);
    v15 = _a1;
    if ( _a1 >= 0 )
    {
      this->m_Offsets.BufferLength = Config->TransferLength;
      HeaderLength = Config->HeaderLength;
      v17 = 0;
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
          if ( ++v17 >= this->m_NumReaders )
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
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0xAu, WPP_FxUsbPipeKm_cpp_Traceguids, _a1);
      return v15;
    }
  }
  return result;
}
