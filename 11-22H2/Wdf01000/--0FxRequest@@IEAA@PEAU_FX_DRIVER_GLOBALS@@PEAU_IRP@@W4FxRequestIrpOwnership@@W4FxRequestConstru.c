/*
 * XREFs of ??0FxRequest@@IEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@G@Z @ 0x1C0002C40
 * Callers:
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C0002AFC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ??0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z @ 0x1C003A774 (--0FxRequestFromLookaside@@QEAA@PEAVFxDevice@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C0002D68 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 */

void __fastcall FxRequest::FxRequest(
        FxRequest *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _IRP *Irp,
        FxRequestIrpOwnership Ownership,
        FxRequestConstructorCaller Caller)
{
  FxRequestBase::FxRequestBase(this, FxDriverGlobals, 0x168u, Irp, Ownership, Caller, FxObjectTypeExternal);
  this->__vftable = (FxRequest_vtbl *)FxRequest::`vftable';
  this->m_SystemBuffer.__vftable = (FxRequestSystemBuffer_vtbl *)FxRequestSystemBuffer::`vftable';
  this->m_OutputBuffer.__vftable = (FxRequestOutputBuffer_vtbl *)FxRequestOutputBuffer::`vftable';
  this->m_OutputBufferOffset = 232;
  this->m_SystemBufferOffset = 216;
  this->m_OwnerListEntry.Blink = &this->m_OwnerListEntry;
  this->m_OwnerListEntry.Flink = &this->m_OwnerListEntry;
  this->m_OwnerListEntry2.Blink = &this->m_OwnerListEntry2;
  this->m_OwnerListEntry2.Flink = &this->m_OwnerListEntry2;
  this->m_ForwardProgressList.Blink = &this->m_ForwardProgressList;
  this->m_ForwardProgressList.Flink = &this->m_ForwardProgressList;
  this->m_SystemBuffer.m_Buffer = 0LL;
  this->m_OutputBuffer.m_Buffer = 0LL;
  this->m_Presented = Caller == FxRequestConstructorCallerIsDriver;
  this->m_IoQueue = 0LL;
  this->m_PowerStopState = 0;
  *(_WORD *)&this->m_Reserved = 0;
  this->m_ForwardProgressQueue = 0LL;
  this->m_InternalContext = 0LL;
}
