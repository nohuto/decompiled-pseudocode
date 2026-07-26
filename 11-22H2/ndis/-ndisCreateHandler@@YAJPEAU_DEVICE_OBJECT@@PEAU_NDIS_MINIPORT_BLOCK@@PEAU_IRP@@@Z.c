/*
 * XREFs of ?ndisCreateHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C0004C50
 * Callers:
 *     ?ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0004C30 (-ndisCreateIrpHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     NdisWdfCreateIrpHandler @ 0x1C0060320 (NdisWdfCreateIrpHandler.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0002E8C (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qL @ 0x1C000C160 (WPP_RECORDER_SF_qL.c)
 *     NdisReferenceWithTag @ 0x1C000CA40 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000CB40 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqL @ 0x1C000CC20 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C002F638 (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0035EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     NdisMSleep @ 0x1C0040C80 (NdisMSleep.c)
 *     ?ndisBugCheckEx@@YAX_K000@Z @ 0x1C005BCAC (-ndisBugCheckEx@@YAX_K000@Z.c)
 *     ?ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z @ 0x1C0068430 (-ndisDummyHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_OBJECT_HEADER@@PEAU_IRP@@@Z.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C00C48D0 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C00C49DC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisCreateHandler(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  struct _DEVICE_OBJECT *v3; // rax
  const struct _GUID *v6; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  void *SecurityDescriptor; // r15
  GENERIC_MAPPING *FileObjectGenericMapping; // rax
  struct _ACCESS_STATE *v10; // rbx
  KPROCESSOR_MODE AccessMode; // r14
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v13; // r12
  signed __int32 v14; // eax
  struct _KTHREAD *CurrentThread; // rsi
  int *ThreadProperty; // rax
  PACCESS_TOKEN v17; // rax
  void *v18; // r14
  unsigned int CurrentProcessSessionId; // eax
  unsigned int ThreadSessionId; // esi
  int v21; // ebx
  unsigned int v22; // r14d
  KIRQL v23; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v24; // rcx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v25; // r8
  KIRQL v26; // al
  KIRQL v27; // r14
  _NDIS_IF_BLOCK *IfBlock; // rsi
  struct _NDIS_IF_COMPARTMENT_BLOCK *Compartment; // rcx
  char v30; // r14
  KIRQL v31; // al
  _NDIS_IF_BLOCK *v32; // rsi
  KIRQL v33; // r15
  ULONG_PTR MpRefCountTracker; // r8
  __int64 v35; // r10
  unsigned __int8 v36; // r9
  unsigned __int8 v37; // al
  _BYTE *v38; // rdx
  KIRQL v40; // dl
  char v41; // al
  char v42; // r12
  char v43; // r13
  KIRQL CurrentIrql; // al
  char v45; // r14
  int v46; // edx
  KIRQL v47; // bl
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rcx
  unsigned int ReferenceCount; // ecx
  KIRQL v50; // al
  int v51; // ebx
  unsigned __int64 *p_Lock; // rcx
  _BYTE *Pool2; // rax
  _BYTE *v54; // rcx
  _IO_STACK_LOCATION *v55; // rax
  _OID_LIST *OidList; // rax
  char v57; // al
  char v58; // dl
  char v59; // cl
  char v60; // di
  _IRP *v61; // rcx
  int v62; // edx
  unsigned int NumUserOpens; // eax
  NTSTATUS v65; // ebx
  char v66; // cl
  _IRP *v67; // rcx
  KIRQL v68; // al
  __int64 v69; // rdx
  ULONG_PTR v70; // rbx
  unsigned int v71; // edx
  int v72; // ecx
  _NDIS_MINIPORT_BLOCK *Miniport; // rax
  struct _KEVENT *IfBlockPointerRefZeroEvent; // rcx
  char v75; // r15
  void (__fastcall **BusInterface)(_QWORD); // rcx
  PVOID v77; // r14
  KIRQL v78; // al
  KIRQL v79; // al
  KIRQL v80; // dl
  char v81; // [rsp+50h] [rbp-59h]
  char v82; // [rsp+51h] [rbp-58h]
  unsigned __int8 v83; // [rsp+52h] [rbp-57h] BYREF
  char v84; // [rsp+53h] [rbp-56h]
  BOOLEAN EffectiveOnly; // [rsp+54h] [rbp-55h] BYREF
  BOOLEAN CopyOnOpen; // [rsp+55h] [rbp-54h] BYREF
  BOOLEAN v87; // [rsp+56h] [rbp-53h]
  ACCESS_MASK GrantedAccess; // [rsp+58h] [rbp-51h] BYREF
  PVOID P; // [rsp+60h] [rbp-49h]
  ACCESS_MASK AccessMask; // [rsp+68h] [rbp-41h] BYREF
  NTSTATUS AccessStatus; // [rsp+6Ch] [rbp-3Dh] BYREF
  _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+70h] [rbp-39h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+78h] [rbp-31h] BYREF
  PIRP Irp; // [rsp+80h] [rbp-29h]
  char v95[8]; // [rsp+88h] [rbp-21h]
  PVOID TokenInformation; // [rsp+90h] [rbp-19h] BYREF
  LARGE_INTEGER Timeout; // [rsp+98h] [rbp-11h] BYREF
  _IO_STACK_LOCATION *v98; // [rsp+A0h] [rbp-9h]
  _BYTE v99[24]; // [rsp+A8h] [rbp-1h] BYREF

  *(_QWORD *)v95 = a1;
  v3 = a1;
  Irp = a3;
  P = 0LL;
  v84 = 0;
  v82 = 0;
  v81 = 0;
  v6 = &WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v6,
      11,
      15,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a1,
      (char)a3);
    v3 = *(struct _DEVICE_OBJECT **)v95;
  }
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v98 = CurrentStackLocation;
  if ( !CurrentStackLocation->FileObject )
  {
    v67 = Irp;
    Irp->IoStatus.Status = -1073741823;
    IofCompleteRequest(v67, 2);
    return 3221225473LL;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(v3, &a2->Header, a3);
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
  v87 = v13;
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
  memset(v99, 0, sizeof(v99));
  ThreadProperty = (int *)PsGetThreadProperty(CurrentThread, 0x6D43644EuLL, 0);
  if ( !ThreadProperty
    || (v21 = *ThreadProperty,
        *(_DWORD *)v99 = ThreadProperty[1],
        *(_DWORD *)&v99[4] = v21,
        ObfDereferenceObject(ThreadProperty),
        (v22 = v21) == 0) )
  {
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
          goto LABEL_17;
        }
      }
      CurrentProcessSessionId = PsGetThreadSessionId(CurrentThread);
    }
    ThreadSessionId = CurrentProcessSessionId;
LABEL_17:
    if ( ThreadSessionId == -1 )
      ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
    if ( ThreadSessionId < dword_1C00F7620 )
    {
      v21 = 0;
      v68 = KeAcquireSpinLockRaiseToDpc(&qword_1C00F5D78);
      if ( ThreadSessionId < dword_1C00F7620 )
        v21 = *((_DWORD *)qword_1C00F7628 + 6 * ThreadSessionId);
      KeReleaseSpinLock(&qword_1C00F5D78, v68);
      if ( !v21 )
        v21 = 1;
    }
    else
    {
      v21 = 1;
    }
    *(_DWORD *)&v99[4] = v21;
    v22 = v21;
  }
  v23 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v24 = qword_1C00F5DA0;
  v25 = 0LL;
  if ( qword_1C00F5DA0 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
  {
    while ( *((_DWORD *)v24 + 4) != v22 )
    {
      if ( *((_DWORD *)v24 + 4) <= v22 )
      {
        v24 = *(struct _NDIS_IF_COMPARTMENT_BLOCK **)v24;
        if ( v24 != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&qword_1C00F5DA0 )
          continue;
      }
      goto LABEL_25;
    }
    v25 = v24;
  }
LABEL_25:
  *(_OWORD *)&v99[8] = *(_OWORD *)((char *)v25 + 1684);
  KeReleaseSpinLock(&ndisIfListLock, v23);
  v26 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v27 = v26;
  if ( !a2->IfBlockAvailable )
  {
    KeReleaseSpinLock(&SpinLock, v26);
    goto LABEL_130;
  }
  IfBlock = a2->IfBlock;
  NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)IfBlock->MpRefCountTracker);
  ++IfBlock->MiniportLinkReference;
  KeReleaseSpinLock(&SpinLock, v27);
  if ( !IfBlock )
  {
LABEL_130:
    v51 = -1073741772;
    goto LABEL_131;
  }
  Compartment = IfBlock->Compartment;
  if ( v21 == *((_DWORD *)Compartment + 4) )
    goto LABEL_28;
  v69 = *(_QWORD *)&v99[8] - *(_QWORD *)((char *)Compartment + 1684);
  if ( *(_QWORD *)&v99[8] == *(_QWORD *)((char *)Compartment + 1684) )
    v69 = *(_QWORD *)&v99[16] - *(_QWORD *)((char *)Compartment + 1692);
  if ( !v69 || (*((_DWORD *)Compartment + 420) & 2) == 0 && v21 == 1 )
LABEL_28:
    v30 = 1;
  else
    v30 = 0;
  v31 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v32 = a2->IfBlock;
  v33 = v31;
  MpRefCountTracker = (ULONG_PTR)v32->MpRefCountTracker;
  if ( MpRefCountTracker - 2 <= 1 )
    goto LABEL_38;
  if ( MpRefCountTracker < 2 )
    ndisBugCheckEx(0x1EuLL, 3uLL, MpRefCountTracker, 0LL);
  if ( *(_BYTE *)(MpRefCountTracker + 2) <= 0x16u )
    ndisBugCheckEx(0x1EuLL, 2uLL, MpRefCountTracker, 0x16uLL);
  if ( *(_BYTE *)(MpRefCountTracker + 1) )
  {
    if ( *(_BYTE *)(MpRefCountTracker + 1) != 1 )
      goto LABEL_38;
    v70 = MpRefCountTracker + 1416;
    v71 = *(_DWORD *)(MpRefCountTracker + 1472);
    v72 = (unsigned __int16)v71 >> 1;
    if ( v71 >> 17 < 0x3FFE && v72 == (v71 >> 17) + 1 )
    {
      ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(MpRefCountTracker + 1416));
      *(_DWORD *)(v70 + 56) &= 0x10001u;
      goto LABEL_38;
    }
    if ( v72 != 0 || (v71 & 1) != 0 )
    {
      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(MpRefCountTracker + 1416), 0);
      goto LABEL_38;
    }
    goto LABEL_98;
  }
  v35 = *(_QWORD *)(MpRefCountTracker + 8);
  if ( !v35 || (v36 = *(_BYTE *)(MpRefCountTracker + 3), v37 = 0, !v36) )
  {
LABEL_37:
    if ( _bittestandreset((signed __int32 *)(MpRefCountTracker + 16), 0x16u) )
      goto LABEL_38;
LABEL_98:
    ndisBugCheckEx(0x1EuLL, 0LL, MpRefCountTracker, 0x16uLL);
  }
  while ( 1 )
  {
    v38 = (_BYTE *)(v35 + 2LL * v37);
    if ( *v38 == 22 )
    {
      v66 = v38[1];
      if ( v66 )
        break;
    }
    if ( ++v37 >= v36 )
      goto LABEL_37;
  }
  v38[1] = v66 - 1;
LABEL_38:
  if ( v32->MiniportLinkReference-- == 1 )
  {
    Miniport = v32->Miniport;
    if ( Miniport )
    {
      IfBlockPointerRefZeroEvent = Miniport->IfBlockPointerRefZeroEvent;
      if ( IfBlockPointerRefZeroEvent )
        KeSetEvent(IfBlockPointerRefZeroEvent, 0, 0);
    }
  }
  KeReleaseSpinLock(&SpinLock, v33);
  if ( !v30 )
    goto LABEL_130;
  v83 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  v40 = v83;
  if ( v13 )
  {
    if ( a2->NumAdminOpens < 0x1000000 )
    {
      ++a2->NumAdminOpens;
      v41 = 1;
      v84 = 1;
      v42 = 0;
      goto LABEL_43;
    }
    goto LABEL_103;
  }
  NumUserOpens = a2->NumUserOpens;
  if ( NumUserOpens >= 0x1000000 )
  {
LABEL_103:
    v51 = -1073741670;
    KeReleaseSpinLock(&a2->Ref.SpinLock, v83);
LABEL_131:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    goto LABEL_58;
  }
  v42 = 1;
  a2->NumUserOpens = NumUserOpens + 1;
  v41 = 0;
  v82 = 1;
LABEL_43:
  v43 = v41;
  KeReleaseSpinLock(&a2->Ref.SpinLock, v40);
  if ( (a2->PnPFlags & 0x20100) != 0 )
  {
    v51 = -1073741823;
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v57 = 0;
    v59 = v84;
    v75 = 0;
    v58 = v82;
LABEL_119:
    v77 = P;
    if ( v59 )
    {
      v78 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumAdminOpens;
      v83 = v78;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v78);
      v57 = v81;
      v58 = v82;
    }
    if ( v58 )
    {
      v79 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
      --a2->NumUserOpens;
      v83 = v79;
      KeReleaseSpinLock(&a2->Ref.SpinLock, v79);
      v57 = v81;
    }
    if ( v75 )
    {
      ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a2, &v83);
      v80 = v83;
      --a2->UserModeOpenReferences;
      a2->MiniportThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v80);
      MmUnlockPagableImageSection(ImageSectionHandle);
      _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
      v57 = v81;
    }
    if ( v57 )
      ndisDereferenceMiniport(a2, 0x56u);
    if ( v77 )
      ExFreePoolWithTag(v77, 0);
    goto LABEL_58;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql >= 2u )
    KeBugCheckEx(0x7Cu, 0x14uLL, CurrentIrql, 0LL, 0LL);
  Timeout.QuadPart = -500000LL;
  KeWaitForSingleObject(&a2->OpenReadyEvent, Executive, 0, 0, &Timeout);
  v45 = 1;
  v81 = 1;
  v47 = KeAcquireSpinLockRaiseToDpc(&a2->Ref.SpinLock);
  if ( a2->Ref.Closing )
    goto LABEL_107;
  RefCountTracker = a2->RefCountTracker;
  if ( RefCountTracker )
    NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
  ReferenceCount = a2->Ref.ReferenceCount;
  a2->Ref.ReferenceCount = ReferenceCount + 1;
  if ( ReferenceCount == -1 )
  {
    a2->Ref.ReferenceCount = -1;
LABEL_107:
    v45 = 0;
    v81 = 0;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v46) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v46,
      20,
      12,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      (char)a2,
      a2->Ref.ReferenceCount);
  }
  KeReleaseSpinLock(&a2->Ref.SpinLock, v47);
  if ( !v45 )
  {
    v51 = -1073676282;
LABEL_110:
    MmUnlockPagableImageSection(ImageSectionHandle);
    _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
    v57 = v81;
    v75 = 0;
    v59 = v84;
    v58 = v82;
    goto LABEL_119;
  }
  v50 = KeAcquireSpinLockRaiseToDpc(&a2->Lock);
  v51 = 0;
  v83 = v50;
  a2->MiniportThread = 0LL;
  p_Lock = &a2->Lock;
  if ( a2->PnPDeviceState == NdisPnPDeviceQueryStopped )
  {
    v51 = -1073676282;
    KeReleaseSpinLock(p_Lock, v50);
    goto LABEL_110;
  }
  ++a2->UserModeOpenReferences;
  KeReleaseSpinLock(p_Lock, v50);
  Pool2 = (_BYTE *)ExAllocatePool2(64LL, 32LL, 1668236366LL);
  P = Pool2;
  v54 = Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)Pool2 = *(_QWORD *)v95;
    Pool2[24] = v87;
    v55 = v98;
    *((_QWORD *)v54 + 1) = a2;
    *((_QWORD *)v54 + 2) = 0LL;
    v55->FileObject->FsContext = v54;
    OidList = a2->OidList;
    if ( OidList )
    {
      *((_QWORD *)v54 + 2) = OidList;
    }
    else if ( Irp->RequestorMode == 1 )
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
  v81 = v45;
  v58 = v42;
  v82 = v42;
  v59 = v43;
  if ( v51 < 0 )
  {
LABEL_118:
    v75 = 1;
    goto LABEL_119;
  }
  if ( (a2->PnPFlags & 0x2000) != 0 )
  {
    BusInterface = (void (__fastcall **)(_QWORD))a2->BusInterface;
    if ( BusInterface )
    {
      BusInterface[4](BusInterface[1]);
      goto LABEL_58;
    }
    v51 = -1073741823;
    v81 = v45;
    v59 = v43;
    v82 = v42;
    goto LABEL_118;
  }
LABEL_58:
  v60 = (char)Irp;
  v61 = Irp;
  Irp->IoStatus.Status = v51;
  IofCompleteRequest(v61, 2);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v62) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v62,
      11,
      16,
      (struct _GUID *)&WPP_72d2fa87a3a93fc51dc3e318202acea4_Traceguids,
      v95[0],
      v60,
      v51);
  }
  return (unsigned int)v51;
}
