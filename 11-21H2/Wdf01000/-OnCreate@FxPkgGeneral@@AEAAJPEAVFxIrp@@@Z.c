/*
 * XREFs of ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0003FB0
 * Callers:
 *     ?Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z @ 0x1C0003EF0 (-Dispatch@FxPkgGeneral@@UEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0005B30 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C0006B70 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0007230 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ??0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0007A14 (--0FxNonPagedObject@@QEAA@GGPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0008700 (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000A580 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     WPP_IFR_SF_qL @ 0x1C0013680 (WPP_IFR_SF_qL.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0021414 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x1C0030604 (WPP_IFR_SF_qqd.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C0032F1C (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x1C00532C0 (WPP_IFR_SF_qqqd.c)
 *     ?Complete@FxRequest@@QEAAJJ@Z @ 0x1C0063FCC (-Complete@FxRequest@@QEAAJJ@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z @ 0x1C0081C50 (-ForwardRequest@FxIoQueue@@QEAAJPEAV1@PEAVFxRequest@@@Z.c)
 *     ?DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ @ 0x1C008F224 (-DecrementOpenHandleCount@FxPkgGeneral@@AEAAXXZ.c)
 *     ?ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z @ 0x1C008F254 (-ForwardCreateRequest@FxPkgGeneral@@AEAAJPEAVFxIrp@@P6AJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z3@Z.c)
 */

__int64 __fastcall FxPkgGeneral::OnCreate(FxPkgGeneral *this, FxIrp *FxIrp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  _IRP *m_Irp; // rax
  _LIST_ENTRY *Blink; // r13
  _FILE_OBJECT *v7; // rdx
  FxDeviceBase *m_DeviceBase; // rsi
  int v9; // eax
  _LIST_ENTRY *p_m_FileObjectInfoHeadList; // r15
  _IRP *v11; // rax
  int v12; // r14d
  _FX_DRIVER_GLOBALS *v13; // rcx
  _IRP *v14; // rcx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int _a4; // edi
  FxNonPagedObject *v18; // rax
  FxNonPagedObject *v19; // rdi
  KIRQL v20; // al
  unsigned __int8 v21; // r8
  unsigned __int8 v22; // al
  FxObject *v23; // rdi
  _QWORD *v24; // rcx
  FxDeviceBase_vtbl *v25; // r8
  _LIST_ENTRY **p_Blink; // rdx
  unsigned __int64 v27; // rdx
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *i; // rsi
  FxDeviceBase *v30; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v31; // xmm1_8
  FxRequest *v32; // rsi
  _LIST_ENTRY *v33; // r14
  FxRequest *FsContext2; // r8
  unsigned int m_Flags; // eax
  int v36; // eax
  FxIoQueue *m_DefaultQueueForCreates; // rcx
  char v38; // cl
  __int64 v39; // r14
  __int64 v40; // r9
  unsigned __int64 v41; // rsi
  FxDeviceBase *v42; // rbx
  unsigned __int64 v43; // rbx
  _LIST_ENTRY *v44; // rax
  _LIST_ENTRY *v45; // rcx
  _LIST_ENTRY *v46; // rcx
  __int64 v47; // r9
  unsigned __int16 m_ObjectSize; // ax
  const void *v49; // rsi
  __int64 v50; // r8
  FxVerifierLock *m_DeviceObject; // rcx
  _LIST_ENTRY *v52; // rdx
  FxDeviceBase *v53; // rcx
  unsigned __int64 Flink; // rdx
  unsigned __int16 v55; // ax
  unsigned __int64 v56; // rdx
  unsigned __int16 v57; // ax
  const void *v58; // rcx
  FxObject *v59; // rsi
  _IO_STACK_LOCATION *v60; // rcx
  _LIST_ENTRY *v61; // rax
  FxDeviceBase *v62; // rcx
  unsigned __int16 v63; // ax
  const void *v64; // rcx
  _LIST_ENTRY *v65; // rax
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v66; // xmm1_8
  FxDeviceBase *v67; // rax
  _LIST_ENTRY *v68; // rdx
  FxDeviceBase *v69; // rcx
  unsigned __int64 m_Driver; // rdx
  unsigned __int16 v71; // ax
  unsigned __int64 v72; // rdx
  unsigned __int16 v73; // ax
  unsigned __int16 v74; // r9
  const void *v75; // rcx
  bool v76; // zf
  FxDeviceBase *v77; // rcx
  unsigned __int16 v78; // ax
  FxNonPagedObject *v79; // rcx
  _LIST_ENTRY *v80; // rdx
  FxObject **v81; // rcx
  unsigned __int16 v82; // ax
  unsigned __int16 v83; // r9
  const void *v84; // rcx
  FxIoQueue *v85; // rcx
  unsigned __int16 v86; // ax
  _LIST_ENTRY *v87; // rcx
  FxObject *v88; // rdi
  FxObject *v89; // rdx
  FxDeviceBase *v90; // r8
  unsigned __int16 v91; // ax
  __int64 (__fastcall *SectionObjectPointer)(FxRequest *, FxObject *, __int64, __int64); // rax
  _LIST_ENTRY *v93; // rcx
  char v94; // al
  int v95; // edi
  FxIoQueue *m_DriverCreatedQueue; // rdx
  unsigned __int16 v97; // cx
  const void *v98; // rdx
  FxDeviceBase *v99; // rcx
  unsigned __int16 v100; // ax
  const void *v101; // rcx
  _IRP *InvokeOnCancel; // [rsp+30h] [rbp-69h]
  int _a3; // [rsp+38h] [rbp-61h]
  _FILE_OBJECT *FileObject; // [rsp+50h] [rbp-49h]
  _FILE_OBJECT *FileObjecta; // [rsp+50h] [rbp-49h]
  _FX_DRIVER_GLOBALS *globals; // [rsp+58h] [rbp-41h]
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+60h] [rbp-39h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp-1h] BYREF
  FxPoolTypeOrPoolFlags v109; // [rsp+A0h] [rbp+7h] BYREF
  FxRequest *outputRequest; // [rsp+100h] [rbp+67h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+108h] [rbp+6Fh] BYREF
  char v112; // [rsp+110h] [rbp+77h]
  FxObject *Object; // [rsp+118h] [rbp+7Fh]

  m_Globals = this->m_Globals;
  v112 = 0;
  LOBYTE(outputRequest) = 0;
  m_Irp = FxIrp->m_Irp;
  memset(&attributes, 0, sizeof(attributes));
  *(_QWORD *)&v109.UsePoolType = 0LL;
  Blink = 0LL;
  pRequest = 0LL;
  globals = m_Globals;
  v7 = m_Irp->Tail.Overlay.CurrentStackLocation->FileObject;
  FileObject = v7;
  LODWORD(m_Irp) = _InterlockedExchangeAdd(&this->m_OpenHandleCount, 1u);
  m_DeviceBase = this->m_DeviceBase;
  v9 = (_DWORD)m_Irp + 1;
  if ( BYTE4(m_DeviceBase[1].m_Globals) && v9 > 2 )
  {
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    v49 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v49 = 0LL;
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x15u, WPP_FxPkgGeneral_cpp_Traceguids, v49);
    _a4 = -1073741790;
LABEL_159:
    FxPkgGeneral::DecrementOpenHandleCount(this);
    FxIrp->m_Irp->IoStatus.Status = _a4;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
$RequestIsGone:
    if ( v112 )
      KeLeaveCriticalRegion();
    return (unsigned int)_a4;
  }
  p_m_FileObjectInfoHeadList = &this->m_FileObjectInfoHeadList;
  memset(&attributes.Size + 1, 0, 20);
  attributes.Size = 56;
  memset(&attributes.ParentObject, 0, 24);
  attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
  attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList )
  {
    Blink = this->m_FileObjectInfoHeadList.Blink;
    if ( LODWORD(Blink[5].Blink) )
      attributes = *(_WDF_OBJECT_ATTRIBUTES *)&Blink[5].Blink;
    attributes.ExecutionLevel = this->m_ExecutionLevel;
    attributes.SynchronizationScope = this->m_SynchronizationScope;
  }
  v11 = FxIrp->m_Irp;
  v12 = (__int64)m_DeviceBase[1].m_DisposeSingleEntry.Next & 0x7FFFFFFF;
  v13 = m_DeviceBase->m_Globals;
  PreviousIrql = 0;
  if ( v12 == 1 )
  {
    Object = 0LL;
    goto LABEL_5;
  }
  if ( !v7 && (v12 != 4 || !BYTE4(m_DeviceBase[1].m_Globals)) )
  {
    if ( v13->FxVerboseOn )
    {
      WPP_IFR_SF_q(v13, 5u, 0xDu, 0xAu, WPP_FxFileObject_cpp_Traceguids, v11);
      v13 = m_DeviceBase->m_Globals;
    }
    FxVerifierDbgBreakPoint(v13);
    _a4 = -1073741438;
    goto LABEL_156;
  }
  *(_QWORD *)&v109.UsePoolType = 0LL;
  v109.u.PoolFlags = 64LL;
  v18 = (FxNonPagedObject *)FxObjectHandleAllocCommon(v13, &v109, 0xA0uLL, 0, &attributes, 0, FxObjectTypeExternal);
  Object = v18;
  v19 = v18;
  if ( !v18 )
  {
    _a4 = -1073741670;
    goto LABEL_156;
  }
  FxNonPagedObject::FxNonPagedObject(v18, 0x1018u, 0xA0u, m_DeviceBase->m_Globals);
  v19->__vftable = (FxNonPagedObject_vtbl *)FxFileObject::`vftable'{for `FxNonPagedObject'};
  v19[1].__vftable = (FxNonPagedObject_vtbl *)FxFileObject::`vftable'{for `IFxHasCallbacks'};
  *(_QWORD *)&v19[1].m_Type = FileObject;
  v19[1].m_Globals = 0LL;
  v19->m_DeviceBase = m_DeviceBase;
  v20 = KeAcquireSpinLockRaiseToDpc(&v19->m_SpinLock.m_Lock);
  v19->m_ObjectFlags |= 2u;
  KeReleaseSpinLock(&v19->m_SpinLock.m_Lock, v20);
  _a4 = FxObject::Commit(v19, &attributes, 0LL, m_DeviceBase, 1u);
  if ( _a4 < 0 )
  {
    FxObject::ClearEvtCallbacks(Object);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 48LL))(v50);
LABEL_156:
    v99 = this->m_DeviceBase;
    v100 = v99->m_ObjectSize;
    v101 = (const void *)((unsigned __int64)v99 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v100 )
      v101 = 0LL;
    WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x16u, WPP_FxPkgGeneral_cpp_Traceguids, v101, _a4);
    goto LABEL_159;
  }
  if ( SLOBYTE(m_DeviceBase->m_ObjectFlags) < 0
    && (m_DeviceObject = (FxVerifierLock *)m_DeviceBase[-1].m_PhysicalDevice.m_DeviceObject) != 0LL )
  {
    FxVerifierLock::Lock(m_DeviceObject, &PreviousIrql, v21);
    v22 = PreviousIrql;
  }
  else
  {
    v22 = KeAcquireSpinLockRaiseToDpc(&m_DeviceBase->m_NPLock.m_Lock);
  }
  v23 = Object;
  v24 = &m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  v25 = m_DeviceBase[2].FxNonPagedObject::FxObject::__vftable;
  p_Blink = &Object[1].m_ChildListHead.Blink;
  if ( (FxDeviceBase *)v25->~FxObject != &m_DeviceBase[2] )
    goto LABEL_154;
  *(_QWORD *)&Object[1].m_SpinLock.m_DbgFlagIsInitialized = v24;
  *p_Blink = (_LIST_ENTRY *)v25;
  v25->~FxObject = (void (__fastcall *)(FxObject *))p_Blink;
  *v24 = p_Blink;
  FxNonPagedObject::Unlock(m_DeviceBase, v22);
  if ( v12 == 2 )
  {
    FileObject->FsContext = v23;
  }
  else if ( v12 == 3 )
  {
    FileObject->FsContext2 = v23;
  }
  v27 = 0LL;
  if ( v23->m_ObjectSize )
    v27 = (unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v28 = this->m_FileObjectInfoHeadList.Blink;
  *(_QWORD *)&v109.UsePoolType = v27;
  for ( i = v28->Blink; i != p_m_FileObjectInfoHeadList; i = i->Blink )
  {
    Blink = i;
    attributes = *(_WDF_OBJECT_ATTRIBUTES *)&i[5].Blink;
    if ( _mm_cvtsi128_si32(*(__m128i *)&attributes.Size) )
    {
      attributes.ParentObject = 0LL;
      attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
      attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
      _a4 = FxObjectAllocateContext(v23, &attributes, 1u, 0LL);
      if ( _a4 < 0 )
      {
        v52 = i[9].Blink;
        v53 = this->m_DeviceBase;
        if ( v52 )
          Flink = (unsigned __int64)v52[1].Flink;
        else
          Flink = (unsigned __int64)v53->m_Driver;
        v55 = *(_WORD *)(Flink + 10);
        v56 = Flink ^ 0xFFFFFFFFFFFFFFF8uLL;
        v76 = v55 == 0;
        v57 = v53->m_ObjectSize;
        if ( v76 )
          v56 = 0LL;
        v58 = (const void *)((unsigned __int64)v53 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v57 )
          v58 = 0LL;
        WPP_IFR_SF_qqqd(globals, 2u, 0xDu, 0x17u, WPP_FxPkgGeneral_cpp_Traceguids, &i[5].Blink, v58, v56, _a4);
        v59 = Object;
LABEL_112:
        v79 = v59->m_DeviceBase;
        LOBYTE(outputRequest) = 0;
        FxNonPagedObject::Lock(v79, (unsigned __int8 *)&outputRequest);
        v80 = v59[1].m_ChildListHead.Blink;
        if ( (_LIST_ENTRY **)v80->Blink == &v59[1].m_ChildListHead.Blink )
        {
          v81 = *(FxObject ***)&v59[1].m_SpinLock.m_DbgFlagIsInitialized;
          if ( *v81 == (FxObject *)&v59[1].m_ChildListHead.Blink )
          {
            *v81 = (FxObject *)v80;
            v80->Blink = (_LIST_ENTRY *)v81;
            FxNonPagedObject::Unlock(v59->m_DeviceBase, (unsigned __int8)outputRequest);
            FxObject::ClearEvtCallbacks(v59);
            ((void (*)(void))v59->DeleteObject)();
            goto LABEL_159;
          }
        }
LABEL_154:
        __fastfail(3u);
      }
      v23 = Object;
    }
  }
LABEL_5:
  if ( this->m_DriverCreatedQueue || (this->m_Flags & 0xC) != 0 )
  {
    if ( p_m_FileObjectInfoHeadList->Flink != p_m_FileObjectInfoHeadList
      && (Blink = this->m_FileObjectInfoHeadList.Blink, BYTE4(Blink[9].Flink)) )
    {
      v61 = Blink[9].Blink;
      v30 = this->m_DeviceBase;
      *(_LIST_ENTRY *)&attributes.Size = v61[2];
      *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v61[3];
      *(_LIST_ENTRY *)&attributes.ParentObject = v61[4];
      v31 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v61[5].Flink;
    }
    else
    {
      v30 = this->m_DeviceBase;
      *(_OWORD *)&attributes.Size = *(_OWORD *)&v30[2].m_ExecutionLevel;
      *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v30[3].FxNonPagedObject::FxObject::__vftable;
      *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v30[3].m_Globals;
      v31 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v30[3].m_ChildListHead.Flink;
    }
    attributes.ContextTypeInfo = v31;
    if ( *(FxDeviceBase **)&v30[1].m_ExecutionLevel != (FxDeviceBase *)&v30[1].m_ExecutionLevel )
    {
      attributes.ExecutionLevel = WdfExecutionLevelDispatch;
      attributes.SynchronizationScope = WdfSynchronizationScopeNone;
      attributes.ParentObject = 0LL;
    }
    _a4 = FxRequest::_CreateForPackage((FxDevice *)v30, &attributes, FxIrp->m_Irp, &pRequest);
    if ( _a4 < 0 )
    {
      v62 = this->m_DeviceBase;
      v63 = v62->m_ObjectSize;
      v64 = (const void *)((unsigned __int64)v62 ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !v63 )
        v64 = 0LL;
      WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x18u, WPP_FxPkgGeneral_cpp_Traceguids, v64, _a4);
      v32 = pRequest;
    }
    else
    {
      v32 = pRequest;
      v33 = this->m_FileObjectInfoHeadList.Blink->Blink;
      if ( v33 == p_m_FileObjectInfoHeadList )
      {
LABEL_35:
        if ( KeGetCurrentIrql() <= 1u )
        {
          KeEnterCriticalRegion();
          v112 = 1;
        }
        m_Flags = this->m_Flags;
        if ( (m_Flags & 4) == 0 && this->m_DriverCreatedQueue )
        {
          v38 = 0;
          goto LABEL_44;
        }
        v76 = this->m_ExecutionLevel == WdfExecutionLevelPassive;
        outputRequest = 0LL;
        if ( !v76 || KeGetCurrentIrql() < 2u )
        {
          v36 = FxIoQueue::QueueRequest(this->m_DefaultQueueForCreates, v32);
          m_DefaultQueueForCreates = this->m_DefaultQueueForCreates;
          _a4 = v36;
          if ( v36 < 0 )
          {
            v82 = m_DefaultQueueForCreates->m_ObjectSize;
            v83 = 27;
            v84 = (const void *)((unsigned __int64)m_DefaultQueueForCreates ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v82 )
              v84 = 0LL;
            goto LABEL_121;
          }
          if ( FxIoQueue::GetRequest(m_DefaultQueueForCreates, FileObject, 0LL, &outputRequest) < 0 )
            goto LABEL_55;
          m_Flags = this->m_Flags;
          v38 = 1;
          LOBYTE(outputRequest) = 1;
LABEL_44:
          v39 = *(_QWORD *)&v109.UsePoolType;
          v40 = 0LL;
          if ( (m_Flags & 4) != 0 )
          {
            v87 = this->m_FileObjectInfoHeadList.Blink;
            FileObjecta = (_FILE_OBJECT *)v87;
            if ( v87 != p_m_FileObjectInfoHeadList )
            {
              v88 = Object;
              do
              {
                Blink = v87;
                if ( !BYTE4(v87[9].Flink) )
                  break;
                if ( v88 )
                  v88[1].m_ChildListHead.Flink = v87->Blink;
                if ( v32->m_ObjectSize )
                  v89 = (FxObject *)((unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL);
                else
                  v89 = 0LL;
                v90 = this->m_DeviceBase;
                Object = v89;
                v91 = v90->m_ObjectSize;
                FsContext2 = (FxRequest *)((unsigned __int64)v90 ^ 0xFFFFFFFFFFFFFFF8uLL);
                v76 = v91 == 0;
                SectionObjectPointer = (__int64 (__fastcall *)(FxRequest *, FxObject *, __int64, __int64))v87[2].Blink;
                if ( v76 )
                  FsContext2 = 0LL;
                pRequest = FsContext2;
                if ( SectionObjectPointer )
                {
                  v93 = v87[2].Flink;
                  PreviousIrql = 0;
                  if ( v93 )
                  {
                    ((void (__fastcall *)(_LIST_ENTRY *, unsigned __int8 *, FxRequest *, _QWORD))v93->Flink[1].Flink)(
                      v93,
                      &PreviousIrql,
                      FsContext2,
                      0LL);
                    v89 = Object;
                    SectionObjectPointer = (__int64 (__fastcall *)(FxRequest *, FxObject *, __int64, __int64))FileObjecta->SectionObjectPointer;
                  }
                  v94 = SectionObjectPointer(pRequest, v89, v39, v40);
                  v87 = (_LIST_ENTRY *)FileObjecta;
                  LOBYTE(Object) = v94;
                  FsContext2 = (FxRequest *)FileObjecta->FsContext2;
                  if ( FsContext2 )
                  {
                    ((void (__fastcall *)(void *, _QWORD))FsContext2->AddRefOverride)(
                      FileObjecta->FsContext2,
                      PreviousIrql);
                    v87 = (_LIST_ENTRY *)FileObjecta;
                    v94 = (char)Object;
                  }
                  if ( v94 )
                    goto LABEL_55;
                  v40 = 0LL;
                }
                v87 = v87->Blink;
                FileObjecta = (_FILE_OBJECT *)v87;
              }
              while ( v87 != p_m_FileObjectInfoHeadList );
            }
            v38 = (char)outputRequest;
          }
          if ( !this->m_DriverCreatedQueue )
          {
            if ( (this->m_Flags & 8) != 0 )
            {
              if ( v32->m_ObjectSize )
                v41 = (unsigned __int64)v32 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v41 = 0LL;
              v42 = this->m_DeviceBase;
              if ( v42->m_ObjectSize )
                v43 = (unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL;
              else
                v43 = 0LL;
              v44 = Blink[1].Blink;
              if ( v44 )
              {
                v45 = Blink[1].Flink;
                LOBYTE(outputRequest) = 0;
                if ( v45 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, FxRequest **, FxRequest *, _QWORD))v45->Flink[1].Flink)(
                    v45,
                    &outputRequest,
                    FsContext2,
                    0LL);
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, __int64))Blink[1].Blink)(
                    v43,
                    v41,
                    v39,
                    v47);
                }
                else
                {
                  ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, _QWORD))v44)(v43, v41, v39, 0LL);
                }
                v46 = Blink[1].Flink;
                if ( v46 )
                {
                  ((void (__fastcall *)(_LIST_ENTRY *, _QWORD))v46->Flink[1].Blink)(v46, (unsigned __int8)outputRequest);
                  _a4 = 259;
                  goto $RequestIsGone;
                }
              }
            }
            else
            {
              if ( !BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
              {
                FxRequest::Complete(v32, 0);
                _a4 = 259;
                goto $RequestIsGone;
              }
              FxPkgGeneral::ForwardCreateRequest(this, FxIrp, FxPkgGeneral::_CreateCompletionRoutine2, v32);
            }
LABEL_55:
            _a4 = 259;
            goto $RequestIsGone;
          }
          if ( v38 )
          {
            v95 = FxIoQueue::ForwardRequest(this->m_DefaultQueueForCreates, this->m_DriverCreatedQueue, v32);
            if ( v95 < 0 )
            {
              m_DriverCreatedQueue = this->m_DriverCreatedQueue;
              v97 = m_DriverCreatedQueue->m_ObjectSize;
              v98 = (const void *)((unsigned __int64)m_DriverCreatedQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v97 )
                v98 = 0LL;
              WPP_IFR_SF_qL(globals, 2u, 0xDu, 0x1Cu, WPP_FxPkgGeneral_cpp_Traceguids, v98, v95);
              FxRequest::Complete(v32, v95);
              _a4 = 259;
              goto $RequestIsGone;
            }
            goto LABEL_55;
          }
          _a4 = FxIoQueue::QueueRequest(this->m_DriverCreatedQueue, v32);
          if ( _a4 >= 0 )
            goto $RequestIsGone;
          v85 = this->m_DriverCreatedQueue;
          v86 = v85->m_ObjectSize;
          v84 = (const void *)((unsigned __int64)v85 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v86 )
            v84 = 0LL;
          v83 = 29;
LABEL_121:
          WPP_IFR_SF_qL(globals, 2u, 0xDu, v83, WPP_FxPkgGeneral_cpp_Traceguids, v84, _a4);
          goto $RequestIsGone;
        }
        _a4 = -1073741808;
        v77 = this->m_DeviceBase;
        v74 = 26;
        _a3 = -1073741808;
        v78 = v77->m_ObjectSize;
        v75 = (const void *)((unsigned __int64)v77 ^ 0xFFFFFFFFFFFFFFF8uLL);
        v76 = v78 == 0;
        InvokeOnCancel = FxIrp->m_Irp;
      }
      else
      {
        while ( 1 )
        {
          Blink = v33;
          if ( BYTE4(v33[9].Flink) )
          {
            v65 = v33[9].Blink;
            *(_LIST_ENTRY *)&attributes.Size = v65[2];
            *(_LIST_ENTRY *)&attributes.EvtDestroyCallback = v65[3];
            *(_LIST_ENTRY *)&attributes.ParentObject = v65[4];
            v66 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v65[5].Flink;
          }
          else
          {
            v67 = this->m_DeviceBase;
            *(_OWORD *)&attributes.Size = *(_OWORD *)&v67[2].m_ExecutionLevel;
            *(_OWORD *)&attributes.EvtDestroyCallback = *(_OWORD *)&v67[3].FxNonPagedObject::FxObject::__vftable;
            *(_OWORD *)&attributes.ParentObject = *(_OWORD *)&v67[3].m_Globals;
            v66 = (const _WDF_OBJECT_CONTEXT_TYPE_INFO *)v67[3].m_ChildListHead.Flink;
          }
          attributes.ContextTypeInfo = v66;
          if ( attributes.Size )
          {
            attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
            attributes.ParentObject = 0LL;
            attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
            _a4 = FxObjectAllocateContext(v32, &attributes, 1u, 0LL);
            if ( _a4 < 0 )
              break;
          }
          v33 = v33->Blink;
          if ( v33 == p_m_FileObjectInfoHeadList )
            goto LABEL_35;
        }
        v68 = v33[9].Blink;
        v69 = this->m_DeviceBase;
        if ( v68 )
          m_Driver = (unsigned __int64)v68[1].Flink;
        else
          m_Driver = (unsigned __int64)v69->m_Driver;
        v71 = *(_WORD *)(m_Driver + 10);
        v72 = m_Driver ^ 0xFFFFFFFFFFFFFFF8uLL;
        _a3 = _a4;
        v76 = v71 == 0;
        v73 = v69->m_ObjectSize;
        if ( v76 )
          v72 = 0LL;
        v74 = 25;
        v75 = (const void *)((unsigned __int64)v69 ^ 0xFFFFFFFFFFFFFFF8uLL);
        InvokeOnCancel = (_IRP *)v72;
        v76 = v73 == 0;
      }
      if ( v76 )
        v75 = 0LL;
      WPP_IFR_SF_qqd(globals, 2u, 0xDu, v74, WPP_FxPkgGeneral_cpp_Traceguids, v75, InvokeOnCancel, _a3);
    }
    if ( v32 )
    {
      FxObject::ClearEvtCallbacks(v32);
      v32->DeleteObject(v32);
    }
    v59 = Object;
    if ( Object )
      goto LABEL_112;
    goto LABEL_159;
  }
  v14 = FxIrp->m_Irp;
  if ( BYTE1(this->m_DeviceBase[1].m_ChildEntry.Blink) )
  {
    CurrentStackLocation = v14->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                               + 6);
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    if ( IoSetCompletionRoutineEx(
           this->m_DeviceBase->m_DeviceObject.m_DeviceObject,
           FxIrp->m_Irp,
           (PIO_COMPLETION_ROUTINE)FxPkgGeneral::_CreateCompletionRoutine,
           this,
           1u,
           1u,
           1u) < 0 )
    {
      v60 = FxIrp->m_Irp->Tail.Overlay.CurrentStackLocation;
      v60[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))FxPkgGeneral::_CreateCompletionRoutine;
      v60[-1].Context = this;
      v60[-1].Control = -32;
    }
    return (unsigned int)IofCallDriver(this->m_DeviceBase->m_AttachedDevice.m_DeviceObject, FxIrp->m_Irp);
  }
  else
  {
    v14->IoStatus.Status = 0;
    _a4 = 0;
    FxIrp->m_Irp->IoStatus.Information = 0LL;
    IofCompleteRequest(FxIrp->m_Irp, 0);
    FxIrp->m_Irp = 0LL;
  }
  return (unsigned int)_a4;
}
