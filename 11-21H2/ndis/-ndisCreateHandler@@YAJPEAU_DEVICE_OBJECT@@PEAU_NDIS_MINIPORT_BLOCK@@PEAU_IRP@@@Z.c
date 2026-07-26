/*
 * XREFs of ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0006E00
 * Callers:
 *     ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0006DE0 (-ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfCreateIrpHandler @ 0x1C005B0B0 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C00060EC (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C8B0 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000D240 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000D340 (WPP_RECORDER_SF_qqL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000D430 (WPP_RECORDER_SF_qq.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002BA64 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0034520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036040 (_guard_dispatch_icall_nop.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C0056990 (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C0063430 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00BFCF0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00BFE00 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  void *v5; // r12
  const struct _GUID *v6; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  void *SecurityDescriptor; // r15
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v10; // rbx
  KPROCESSOR_MODE AccessMode; // r14
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v13; // r14
  signed __int32 v14; // eax
  struct _KTHREAD *CurrentThread; // r14
  int *ThreadProperty; // rax
  PACCESS_TOKEN v17; // rax
  void *v18; // rsi
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // ebx
  int v21; // esi
  unsigned int v22; // ebx
  KIRQL v23; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v24; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v25; // r8
  _NDIS_IF_BLOCK *IfBlock; // rbx
  KIRQL v27; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  char v29; // r14
  KIRQL v30; // al
  _NDIS_IF_BLOCK *v31; // rsi
  KIRQL v32; // r15
  ULONG_PTR MpRefCountTracker; // r8
  int v34; // ecx
  __int64 v35; // r10
  unsigned __int8 v36; // r9
  _BYTE *v37; // rdx
  KIRQL v39; // dl
  unsigned int NumAdminOpens; // ecx
  char v41; // al
  char v42; // r15
  unsigned __int8 v43; // r12
  KIRQL CurrentIrql; // al
  char v45; // r14
  int v46; // edx
  KIRQL v47; // bl
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v50; // al
  int v51; // ebx
  unsigned __int64 *p_Lock; // rcx
  __int64 Pool2; // rax
  __int64 v54; // rcx
  _IO_STACK_LOCATION *v55; // rax
  _OID_LIST *OidList; // rax
  char v57; // al
  char v58; // r8
  char v59; // cl
  char v60; // dl
  int v61; // edx
  unsigned int NumUserOpens; // eax
  char v64; // al
  NTSTATUS v65; // ebx
  KIRQL v66; // al
  __int64 v67; // rdx
  ULONG_PTR v68; // rbx
  unsigned int v69; // edx
  int v70; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  _ULONG_REFERENCE *p_Ref; // rsi
  void *BusInterface; // rcx
  KIRQL v75; // al
  KIRQL v76; // al
  KIRQL v77; // dl
  char v78; // [rsp+50h] [rbp-49h]
  char v79; // [rsp+51h] [rbp-48h]
  unsigned __int8 v80; // [rsp+52h] [rbp-47h] BYREF
  char v81; // [rsp+53h] [rbp-46h]
  char v82; // [rsp+54h] [rbp-45h]
  BOOLEAN v83; // [rsp+55h] [rbp-44h]
  BOOLEAN EffectiveOnly; // [rsp+56h] [rbp-43h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+57h] [rbp-42h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-41h] BYREF
  ACCESS_MASK AccessMask; // [rsp+5Ch] [rbp-3Dh] BYREF
  void *v88; // [rsp+60h] [rbp-39h]
  NTSTATUS AccessStatus; // [rsp+68h] [rbp-31h] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+6Ch] [rbp-2Dh] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-29h] BYREF
  struct _DEVICE_OBJECT *v92; // [rsp+78h] [rbp-21h]
  PVOID TokenInformation; // [rsp+80h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+88h] [rbp-11h] BYREF
  _IO_STACK_LOCATION *v95; // [rsp+90h] [rbp-9h]
  int v96; // [rsp+98h] [rbp-1h]
  int v97; // [rsp+9Ch] [rbp+3h]
  __int128 v98; // [rsp+A0h] [rbp+7h]

  v92 = a1;
  v78 = 0;
  v82 = 0;
  v88 = 0LL;
  v80 = 0;
  v81 = 0;
  v5 = 0LL;
  v79 = 0;
  v6 = &WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v6,
      11,
      15,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)a1,
      (char)a3);
    a1 = v92;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v95 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    a3->IoStatus.Status = -1073741823;
    IofCompleteRequest(a3, 2);
    return 3221225473LL;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, &a2->Header, a3);
  SecurityDescriptor = a2->SecurityDescriptor;
  AccessStatus = 0;
  Privileges = 0LL;
  GrantedAccess = 0;
  AccessMask = 0x10000000;
  FileObjectGenericMapping = IoGetFileObjectGenericMapping();
  RtlMapGenericMask(&AccessMask, FileObjectGenericMapping);
  v10 = *(struct _ACCESS_STATE **)(CurrentStackLocation->Parameters.WMI.ProviderId + 8);
  SeLockSubjectContext(&v10->SubjectSecurityContext);
  if ( (CurrentStackLocation->Flags & 1) != 0 )
    AccessMode = 1;
  else
    AccessMode = a3->RequestorMode;
  GenericMapping = IoGetFileObjectGenericMapping();
  v13 = SeAccessCheck(
          SecurityDescriptor,
          &v10->SubjectSecurityContext,
          1u,
          AccessMask,
          0,
          &Privileges,
          GenericMapping,
          AccessMode,
          &GrantedAccess,
          &AccessStatus);
  v83 = v13;
  if ( Privileges )
  {
    SeAppendPrivileges(v10, Privileges);
    SeFreePrivileges(Privileges);
  }
  if ( v13 )
  {
    v10->PreviouslyGrantedAccess |= GrantedAccess;
    v10->RemainingDesiredAccess &= ~(GrantedAccess | 0x2000000);
  }
  SeUnlockSubjectContext(&v10->SubjectSecurityContext);
  v14 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v14 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentThread = KeGetCurrentThread();
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( ThreadProperty )
  {
    v21 = *ThreadProperty;
    v96 = ThreadProperty[1];
    v97 = v21;
    ObfDereferenceObject(ThreadProperty);
    v22 = v21;
    if ( v21 )
      goto LABEL_23;
  }
  else
  {
    v96 = 0;
  }
  CopyOnOpen = 0;
  EffectiveOnly = 0;
  ImpersonationLevel = SecurityAnonymous;
  TokenInformation = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  }
  else
  {
    v17 = PsReferenceImpersonationToken(CurrentThread, &CopyOnOpen, &EffectiveOnly, &ImpersonationLevel);
    v18 = v17;
    if ( v17 )
    {
      v65 = SeQueryInformationToken(v17, TokenSessionId, &TokenInformation);
      PsDereferenceImpersonationToken(v18);
      if ( v65 >= 0 )
      {
        ThreadSessionId = (unsigned int)TokenInformation;
        goto LABEL_18;
      }
    }
    CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
  }
  ThreadSessionId = CurrentProcessSessionId;
LABEL_18:
  if ( ThreadSessionId == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId < dword_1C00EE550 )
  {
    v21 = 0;
    v66 = KeAcquireSpinLockRaiseToDpc(&qword_1C00ECD98);
    if ( ThreadSessionId < dword_1C00EE550 )
      v21 = *((_DWORD *)qword_1C00EE558 + 6 * ThreadSessionId);
    KeReleaseSpinLock(&qword_1C00ECD98, v66);
    if ( !v21 )
      v21 = 1;
  }
  else
  {
    v21 = 1;
  }
  v97 = v21;
  v22 = v21;
LABEL_23:
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v24 = qword_1C00ECDC0;
  v25 = 0LL;
  if ( qword_1C00ECDC0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
  {
    while ( *((_DWORD *)v24 + 4) != v22 )
    {
      if ( *((_DWORD *)v24 + 4) <= v22 )
      {
        v24 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v24;
        if ( v24 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00ECDC0 )
          continue;
      }
      goto LABEL_26;
    }
    v25 = v24;
  }
LABEL_26:
  v98 = *(_OWORD *)((char *)v25 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v23);
  IfBlock = 0LL;
  v27 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  if ( a2->IfBlockAvailable )
  {
    IfBlock = a2->IfBlock;
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker);
    ++IfBlock->MiniportLinkReference;
  }
  KeReleaseSpinLock(&SpinLock, v27);
  if ( !IfBlock )
    goto LABEL_106;
  Compartment = IfBlock->Compartment;
  if ( v21 == *((_DWORD *)Compartment + 4) )
    goto LABEL_30;
  v67 = v98 - *(_QWORD *)((char *)Compartment + 1684);
  if ( (_QWORD)v98 == *(_QWORD *)((char *)Compartment + 1684) )
    v67 = *((_QWORD *)&v98 + 1) - *(_QWORD *)((char *)Compartment + 1692);
  if ( !v67 || (*((_DWORD *)Compartment + 420) & 2) == 0 && v21 == 1 )
LABEL_30:
    v29 = 1;
  else
    v29 = 0;
  v30 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v31 = a2->IfBlock;
  v32 = v30;
  MpRefCountTracker = (ULONG_PTR)v31->MpRefCountTracker;
  if ( MpRefCountTracker - 2 <= 1 )
    goto LABEL_40;
  if ( MpRefCountTracker < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
  if ( *(_BYTE *)(MpRefCountTracker + 2) <= 0x16u )
    ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 0x16uLL);
  v34 = *(unsigned __int8 *)(MpRefCountTracker + 1);
  if ( *(_BYTE *)(MpRefCountTracker + 1) )
  {
    if ( v34 != 1 )
      goto LABEL_40;
    v68 = MpRefCountTracker + 1416;
    v69 = *(_DWORD *)(MpRefCountTracker + 1472);
    v70 = (unsigned __int16)v69 >> 1;
    if ( v69 >> 17 < 0x3FFE && v70 == (v69 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 1416));
      *(_DWORD *)(v68 + 56) &= 0x10001u;
      goto LABEL_40;
    }
    if ( v70 != 0 || (v69 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 1416), 0);
      goto LABEL_40;
    }
    goto LABEL_100;
  }
  v35 = *(_QWORD *)(MpRefCountTracker + 8);
  if ( !v35 || (v36 = *(_BYTE *)(MpRefCountTracker + 3)) == 0 )
  {
LABEL_39:
    if ( _bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 0x16u) )
      goto LABEL_40;
LABEL_100:
    ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 0x16uLL);
  }
  while ( 1 )
  {
    v37 = (_BYTE *)(v35 + 2LL * (unsigned __int8)v34);
    if ( *v37 == 22 )
    {
      v64 = v37[1];
      if ( v64 )
        break;
    }
    LOBYTE(v34) = v34 + 1;
    if ( (unsigned __int8)v34 >= v36 )
      goto LABEL_39;
  }
  v37[1] = v64 - 1;
LABEL_40:
  if ( v31->MiniportLinkReference-- == 1 )
  {
    Miniport = v31->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v32);
  if ( !v29 )
  {
LABEL_106:
    v51 = -1073741772;
    goto LABEL_107;
  }
  v39 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v80 = v39;
  if ( v83 )
  {
    NumAdminOpens = a2->NumAdminOpens;
    if ( NumAdminOpens < 0x1000000 )
    {
      v41 = 1;
      a2->NumAdminOpens = NumAdminOpens + 1;
      v42 = 0;
      v81 = 1;
      goto LABEL_45;
    }
    goto LABEL_105;
  }
  NumUserOpens = a2->NumUserOpens;
  if ( NumUserOpens >= 0x1000000 )
  {
LABEL_105:
    v51 = -1073741670;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v39);
LABEL_107:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    p_Ref = &a2->Ref;
    v57 = 0;
    v59 = 0;
    v58 = 0;
LABEL_125:
    if ( v59 )
    {
      v76 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
      --a2->NumUserOpens;
      v80 = v76;
      KeReleaseSpinLock(&p_Ref->SpinLock, v76);
      v57 = v78;
      v58 = v82;
    }
    if ( v58 )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v80);
      v77 = v80;
      --a2->UserModeOpenReferences;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v77);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
      v57 = v78;
    }
    if ( v57 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    goto LABEL_60;
  }
  v42 = 1;
  a2->NumUserOpens = NumUserOpens + 1;
  v41 = 0;
  v79 = 1;
LABEL_45:
  v43 = v41;
  KeReleaseSpinLock(&a2->Ref.SpinLock, v39);
  if ( (a2->PnPFlags & 0x20100) != 0 )
  {
    v51 = -1073741823;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v57 = 0;
    v60 = v81;
    v58 = 0;
    v59 = v79;
LABEL_122:
    p_Ref = &a2->Ref;
    if ( v60 )
    {
      v75 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumAdminOpens;
      v80 = v75;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v75);
      v57 = v78;
      v59 = v79;
      v58 = v82;
    }
    v5 = v88;
    goto LABEL_125;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout.QuadPart = -500000LL;
  KeWaitForSingleObject(&a2->OpenReadyEvent, Executive, 0, 0, &Timeout);
  v45 = 1;
  v78 = 1;
  v47 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( a2->Ref.Closing )
    goto LABEL_111;
  RefCountTracker = a2->RefCountTracker;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
  ReferenceCount = a2->Ref.ReferenceCount;
  a2->Ref.ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    a2->Ref.ReferenceCount = -1;
LABEL_111:
    v45 = 0;
    v78 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v46) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v46,
      20,
      12,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)a2,
      a2->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v47);
  if ( !v78 )
  {
    v51 = -1073676282;
LABEL_114:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v57 = v78;
    v58 = 0;
    v60 = v81;
    v59 = v79;
    goto LABEL_122;
  }
  v50 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v51 = 0;
  v80 = v50;
  a2->MiniportThread = 0LL;
  p_Lock = &a2->Lock;
  if ( a2->PnPDeviceState == NdisPnPDeviceQueryStopped )
  {
    v51 = -1073676282;
    KeReleaseSpinLock(p_Lock, v50);
    goto LABEL_114;
  }
  ++a2->UserModeOpenReferences;
  KeReleaseSpinLock(p_Lock, v50);
  Pool2 = ExAllocatePool2(64LL, 32LL, 1668236366LL);
  v88 = (void *)Pool2;
  v54 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = v92;
    *(_BYTE *)(Pool2 + 24) = v83;
    v55 = v95;
    *(_QWORD *)(v54 + 8) = a2;
    *(_QWORD *)(v54 + 16) = 0LL;
    v55->FileObject->FsContext = (void *)v54;
    OidList = a2->OidList;
    if ( OidList )
    {
      *(_QWORD *)(v54 + 16) = OidList;
    }
    else if ( a3->RequestorMode == 1 )
    {
      v51 = -1073741823;
    }
  }
  else
  {
    v51 = -1073741670;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  v57 = v45;
  v78 = v45;
  v58 = 1;
  v82 = 1;
  v59 = v42;
  v79 = v42;
  v60 = v43;
  if ( v51 < 0 )
    goto LABEL_122;
  if ( (a2->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = a2->BusInterface;
    if ( BusInterface )
    {
      (*((void (__fastcall **)(_QWORD, _QWORD))BusInterface + 4))(*((_QWORD *)BusInterface + 1), v43);
      goto LABEL_60;
    }
    v59 = v42;
    v51 = -1073741823;
    v57 = v45;
    v82 = 1;
    v78 = v45;
    v79 = v42;
    goto LABEL_122;
  }
LABEL_60:
  a3->IoStatus.Status = v51;
  IofCompleteRequest(a3, 2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v61) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v61,
      11,
      16,
      (struct _GUID *)&WPP_31fc045ef7a830d4d2887bbee76fe91d_Traceguids,
      (char)v92,
      (char)a3,
      v51);
  }
  return (unsigned int)v51;
}
