/*
 * XREFs of ??1FxObject@@UEAA@XZ @ 0x1C0004920
 * Callers:
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1C00018D8 (--1FxPagedObject@@UEAA@XZ.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1C0001CA0 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x1C0002D30 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1C00049A0 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1C000E590 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1C000E750 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1C003F280 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1C003F840 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 *     ??1FxNPagedLookasideList@@MEAA@XZ @ 0x1C0041344 (--1FxNPagedLookasideList@@MEAA@XZ.c)
 *     ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x1C0041394 (--1FxNPagedLookasideListFromPool@@MEAA@XZ.c)
 *     ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x1C004167C (--1FxPagedLookasideListFromPool@@MEAA@XZ.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1C00416F0 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1C0042360 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1C00428A4 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x1C0042ED0 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??1FxString@@UEAA@XZ @ 0x1C004F2A8 (--1FxString@@UEAA@XZ.c)
 *     ??1FxRelatedDevice@@UEAA@XZ @ 0x1C00899EC (--1FxRelatedDevice@@UEAA@XZ.c)
 * Callees:
 *     WPP_IFR_SF_qqdd @ 0x1C0019480 (WPP_IFR_SF_qqdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0045FBC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     WPP_IFR_SF_sqq @ 0x1C004676C (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxObject::~FxObject(FxObject *this, unsigned int a2, unsigned int a3)
{
  FxTagTracker *m_Lock; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  unsigned __int16 m_Type; // r9
  __int64 v8; // rax
  unsigned __int16 *p_ObjectType; // rcx
  const char *HandleName; // rdx
  unsigned __int64 v11; // rdi
  const void *v12; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxObject_vtbl *)FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::`scalar deleting destructor'(m_Lock, a2);
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    v8 = 0LL;
    if ( !FxObjectsInfoCount )
      goto LABEL_22;
    p_ObjectType = &FxObjectsInfo[0].ObjectType;
    while ( m_Type != *p_ObjectType )
    {
      if ( m_Type > *p_ObjectType )
      {
        v8 = (unsigned int)(v8 + 1);
        p_ObjectType += 12;
        if ( (unsigned int)v8 < FxObjectsInfoCount )
          continue;
      }
      goto LABEL_22;
    }
    HandleName = FxObjectsInfo[v8].HandleName;
    if ( !HandleName )
LABEL_22:
      HandleName = "WDFOBJECT";
    v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v12 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, (unsigned __int8)HandleName, a3, m_Type, traceGuid, HandleName, v12, this);
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v11, (unsigned __int64)this);
  }
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqdd(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
