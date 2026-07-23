/*
 * XREFs of ObInsertObjectEx @ 0x140735ED0
 * Callers:
 *     NtCreateJobObject @ 0x1406885D0 (NtCreateJobObject.c)
 *     NtCreateIoCompletion @ 0x1406B26D0 (NtCreateIoCompletion.c)
 *     SeSubProcessToken @ 0x1406B71F8 (SeSubProcessToken.c)
 *     MmCreateSpecialImageSection @ 0x1406B9664 (MmCreateSpecialImageSection.c)
 *     PspInsertProcess @ 0x1406B9FA4 (PspInsertProcess.c)
 *     EtwpAddUmRegEntry @ 0x1406BFA94 (EtwpAddUmRegEntry.c)
 *     WmipCreateGuidObject @ 0x1406C50E0 (WmipCreateGuidObject.c)
 *     AlpcpAcceptConnectPort @ 0x1407169EC (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1407177B4 (AlpcpCreateClientPort.c)
 *     SepCreateClientSecurityEx @ 0x14071D960 (SepCreateClientSecurityEx.c)
 *     SeCopyClientToken @ 0x14071DD30 (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x14071DF70 (NtOpenThreadTokenEx.c)
 *     MiCreateSectionCommon @ 0x140722780 (MiCreateSectionCommon.c)
 *     NtQueryInformationToken @ 0x140730A90 (NtQueryInformationToken.c)
 *     NtCreateSemaphore @ 0x1407336E0 (NtCreateSemaphore.c)
 *     NtDuplicateToken @ 0x1407358C0 (NtDuplicateToken.c)
 *     PspInsertThread @ 0x14073F3AC (PspInsertThread.c)
 *     NtCreateEvent @ 0x14075D290 (NtCreateEvent.c)
 *     ObInsertObject @ 0x14076BAA0 (ObInsertObject.c)
 *     NtCreateWorkerFactory @ 0x1407860A0 (NtCreateWorkerFactory.c)
 *     NtCreateTimer2 @ 0x140786690 (NtCreateTimer2.c)
 *     MiSessionObjectCreate @ 0x1407AA29C (MiSessionObjectCreate.c)
 *     NtCreateMutant @ 0x1407B3DC0 (NtCreateMutant.c)
 *     NtCreateWaitCompletionPacket @ 0x1407BAD10 (NtCreateWaitCompletionPacket.c)
 *     NtCreateTimer @ 0x1407C6B20 (NtCreateTimer.c)
 *     NtCreatePrivateNamespace @ 0x1407C8E30 (NtCreatePrivateNamespace.c)
 *     AlpcpCreateConnectionPort @ 0x1407CC8A8 (AlpcpCreateConnectionPort.c)
 *     NtCreateRegistryTransaction @ 0x1407D22C0 (NtCreateRegistryTransaction.c)
 *     NtAllocateReserveObject @ 0x1407D7E40 (NtAllocateReserveObject.c)
 *     ExCreateCallback @ 0x1407DC8B0 (ExCreateCallback.c)
 *     SeGetLogonSessionToken @ 0x1407DF880 (SeGetLogonSessionToken.c)
 *     ObpCreateDirectoryObject @ 0x1407F1B90 (ObpCreateDirectoryObject.c)
 *     NtFilterToken @ 0x1407F1DD0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 *     ObCreateSymbolicLink @ 0x1407F38E8 (ObCreateSymbolicLink.c)
 *     EtwpRealtimeConnect @ 0x1407F5B64 (EtwpRealtimeConnect.c)
 *     PspCreateActivityReference @ 0x1408013B4 (PspCreateActivityReference.c)
 *     SeFilterToken @ 0x14080D380 (SeFilterToken.c)
 *     SepInitializationPhase1 @ 0x140823D08 (SepInitializationPhase1.c)
 *     HalpDmaAllocateChildAdapterV2 @ 0x1408298B0 (HalpDmaAllocateChildAdapterV2.c)
 *     HalpDmaAllocateChildAdapterV3 @ 0x14082A5E0 (HalpDmaAllocateChildAdapterV3.c)
 *     NtCreateKeyedEvent @ 0x14084EA50 (NtCreateKeyedEvent.c)
 *     PsCreateCpuPartition @ 0x140858214 (PsCreateCpuPartition.c)
 *     NtCreateDebugObject @ 0x140938560 (NtCreateDebugObject.c)
 *     IoCreateController @ 0x140947240 (IoCreateController.c)
 *     NtCreateIoRing @ 0x14094A160 (NtCreateIoRing.c)
 *     NtCreateProcessStateChange @ 0x1409B01B0 (NtCreateProcessStateChange.c)
 *     NtCreateThreadStateChange @ 0x1409B03C0 (NtCreateThreadStateChange.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x1409C9410 (SepCopyAnonymousTokenAndSetSilo.c)
 *     EtwpRegisterPrivateSession @ 0x1409EC90C (EtwpRegisterPrivateSession.c)
 *     EtwpSetCoverageSamplerInformation @ 0x1409F3C8C (EtwpSetCoverageSamplerInformation.c)
 *     ExpProfileCreate @ 0x140A03D28 (ExpProfileCreate.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231190 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140232250 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140232B20 (SepCreateAccessStateFromSubjectContext.c)
 *     SeAssignSecurityEx2 @ 0x1402B34B0 (SeAssignSecurityEx2.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x1402B3540 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6890 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BD830 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x140428830 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     memset @ 0x140435400 (memset.c)
 *     ObpPushStackInfo @ 0x140582C68 (ObpPushStackInfo.c)
 *     ObpAdjustCreatorAccessState @ 0x1406C2BB0 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1406E45C0 (ObpCreateHandle.c)
 *     SeReleaseSecurityDescriptor @ 0x1407378D0 (SeReleaseSecurityDescriptor.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     ObpChargeQuotaForObject @ 0x14075C554 (ObpChargeQuotaForObject.c)
 *     RtlValidSecurityDescriptor @ 0x1407B52C0 (RtlValidSecurityDescriptor.c)
 *     SeDeassignSecurity @ 0x1407BF990 (SeDeassignSecurity.c)
 *     SeObjectCreateSaclAccessBits @ 0x1407D5248 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObInsertObjectEx(
        char *Object,
        PACCESS_STATE AccessState,
        int a3,
        int a4,
        char a5,
        PVOID *a6,
        _QWORD *a7)
{
  __int64 v9; // rsi
  char *v10; // r14
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  char *v13; // rdx
  unsigned __int64 v14; // rcx
  POBJECT_TYPE v15; // rbx
  char PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rcx
  _QWORD *v18; // rax
  ULONG_PTR v19; // rax
  _BYTE *v20; // r13
  char *v21; // rax
  PSECURITY_DESCRIPTOR v22; // rdx
  int v23; // r13d
  PVOID v24; // r12
  void *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  PVOID v28; // rcx
  int v29; // r12d
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  struct _KPRCB *v33; // rdx
  _GENERAL_LOOKASIDE *L; // rcx
  signed __int64 v35; // r8
  _KPROCESS *v36; // rdx
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  PACCESS_TOKEN v39; // rcx
  int v41; // ecx
  unsigned int Handle; // ebx
  __int64 v43; // rcx
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE *P; // rcx
  PVOID v46; // r15
  struct _KTHREAD *v47; // rax
  char *v48; // rcx
  char *v49; // rax
  ULONG_PTR v50; // rcx
  _QWORD *ClientToken; // rax
  _QWORD *v52; // rax
  SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // rbx
  _QWORD *PrimaryToken; // rax
  int v55; // [rsp+40h] [rbp-C0h]
  PVOID *v56; // [rsp+48h] [rbp-B8h]
  char v57; // [rsp+60h] [rbp-A0h]
  int v58; // [rsp+64h] [rbp-9Ch] BYREF
  PVOID v59; // [rsp+68h] [rbp-98h]
  PVOID Objecta; // [rsp+70h] [rbp-90h]
  int v61; // [rsp+78h] [rbp-88h]
  char *v62; // [rsp+80h] [rbp-80h]
  ULONG Index[2]; // [rsp+88h] [rbp-78h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+90h] [rbp-70h] BYREF
  struct _KTHREAD *v65; // [rsp+98h] [rbp-68h]
  _KPROCESS *Process; // [rsp+A0h] [rbp-60h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp-58h]
  PVOID *v68; // [rsp+B0h] [rbp-50h]
  _QWORD *v69; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v70; // [rsp+C0h] [rbp-40h]
  struct _LIST_ENTRY *Flink; // [rsp+D0h] [rbp-30h]
  struct _KTHREAD *v72; // [rsp+D8h] [rbp-28h]
  _QWORD v73[20]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v74[28]; // [rsp+180h] [rbp+80h] BYREF

  v58 = a3;
  Objecta = Object;
  v68 = a6;
  v61 = a4;
  memset(v74, 0, sizeof(v74));
  memset(v73, 0, sizeof(v73));
  v9 = *((_QWORD *)Object - 2);
  v10 = Object - 48;
  v11 = 0LL;
  v12 = 0x140000000uLL;
  v13 = 0LL;
  v14 = (unsigned __int8)*(Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8);
  v62 = 0LL;
  v15 = (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v14];
  if ( (*(Object - 22) & 2) != 0 )
  {
    v48 = (char *)ObpInfoMaskToOffset[*(Object - 22) & 3];
    v49 = (char *)(v10 - v48);
    if ( v10 != v48 )
    {
      v13 = v49 + 8;
      v62 = v49 + 8;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v57 = PreviousMode;
  if ( (v15->TypeInfo.ObjectTypeFlags & 8) == 0 && !v13 && !*(_QWORD *)(v9 + 32) )
  {
    *((_QWORD *)v10 + 4) = 0LL;
    if ( a7 )
    {
      v41 = v61 + 1;
      v56 = v68;
      *a7 = 0LL;
      Handle = ObpCreateHandle(0, Object, v58, 0LL, v41, *(_DWORD *)v9, PreviousMode, 0LL, 0, v56, a7);
    }
    else
    {
      Handle = 0;
    }
    v43 = *(_QWORD *)(v9 + 32);
    if ( v43 )
    {
      LOBYTE(v11) = 1;
      SeReleaseSecurityDescriptor(v43, *(unsigned __int8 *)(v9 + 16), v11, v12);
      *(_QWORD *)(v9 + 32) = 0LL;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    P = CurrentPrcb->PPLookasideList[4].P;
    ++P->TotalFrees;
    if ( LOWORD(P->ListHead.Alignment) < P->Depth
      || (++P->FreeMisses,
          P = CurrentPrcb->PPLookasideList[4].L,
          ++P->TotalFrees,
          LOWORD(P->ListHead.Alignment) < P->Depth) )
    {
      RtlpInterlockedPushEntrySList(&P->ListHead, (PSLIST_ENTRY)v9);
      ObfDereferenceObject(Object);
      return Handle;
    }
    else
    {
      ++P->FreeMisses;
      ((void (__fastcall *)(__int64))P->FreeEx)(v9);
      ObfDereferenceObject(Object);
      return Handle;
    }
  }
  if ( !AccessState )
  {
    CurrentThread = KeGetCurrentThread();
    AccessState = (PACCESS_STATE)v73;
    v65 = CurrentThread;
    v70 = 0LL;
    Process = CurrentThread->ApcState.Process;
    Flink = Process[1].Header.WaitListHead.Flink;
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v72 = KeGetCurrentThread();
      --v72->KernelApcDisable;
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&v65[1].SwapListEntry + 1) & 8) != 0 )
      {
        v59 = (PVOID)(*(_QWORD *)((char *)&v65[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v59, 0x75536553u);
        LODWORD(v70) = *((_DWORD *)&v65[1].0 + 1) & 3;
      }
      else
      {
        v59 = 0LL;
      }
      v50 = BugCheckParameter2;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      {
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
        v50 = BugCheckParameter2;
      }
      KeAbPostRelease(v50);
      KeLeaveCriticalRegionThread((__int64)v72);
      v18 = v59;
    }
    else
    {
      v18 = 0LL;
      v59 = 0LL;
    }
    v69 = v18;
    v19 = PsReferencePrimaryTokenWithTag((__int64)Process, 0x75536553u);
    *((_QWORD *)&v70 + 1) = v19;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 1144) + 284LL));
        if ( *((_QWORD *)&v70 + 1) == SepTokenLeakToken )
          __debugbreak();
        v52 = v69;
      }
      else
      {
        v52 = v59;
      }
      if ( v52 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v52[143] + 284LL));
        if ( v69 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    LODWORD(v59) = SepCreateAccessStateFromSubjectContext(
                     &v69,
                     v73,
                     v74,
                     v58,
                     &v15->TypeInfo.GenericMapping.GenericRead);
    if ( (int)v59 < 0 )
    {
      ObfDereferenceObject(Object);
      return (unsigned int)v59;
    }
  }
  v20 = *(_BYTE **)(v9 + 32);
  AccessState->SecurityDescriptor = v20;
  if ( v20 )
  {
    if ( !RtlValidSecurityDescriptor(v20) )
    {
      ObfDereferenceObject(Objecta);
      if ( AccessState == (PACCESS_STATE)v73 )
      {
        SepDeleteAccessState((__int64)AccessState);
        SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
      }
      return 3221225593LL;
    }
    if ( (v20[2] & 0x10) != 0 && (AccessState->PreviouslyGrantedAccess & 0x1000000) == 0 )
      AccessState->RemainingDesiredAccess |= SeObjectCreateSaclAccessBits(v20);
  }
  v21 = v62;
  if ( !v62 && ((v15->TypeInfo.ObjectTypeFlags & 8) != 0 || *(_QWORD *)(v9 + 32)) )
  {
    v22 = AccessState->SecurityDescriptor;
    Index[1] = 0;
    v58 = 0;
    SecurityDescriptor = 0LL;
    Index[0] = 8;
    v23 = SeComputeAutoInheritByObjectTypeEx((__int64)v15, (__int64)v22, 0LL, &v58, Index);
    if ( v23 < 0 )
    {
      v24 = Objecta;
    }
    else
    {
      v58 |= 16 * (a5 & 1);
      v23 = SeAssignSecurityEx2(
              0,
              (int)AccessState->SecurityDescriptor,
              (int)&SecurityDescriptor,
              0LL,
              v15 == ObpDirectoryObjectType,
              v58,
              Index,
              (__int64)&AccessState->SubjectSecurityContext,
              (__int64)&v15->TypeInfo.GenericMapping);
      if ( v23 < 0 )
      {
        p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
        v24 = Objecta;
        goto LABEL_92;
      }
      v24 = Objecta;
      LOBYTE(v55) = KeGetCurrentThread()->PreviousMode;
      v23 = v15->TypeInfo.SecurityProcedure(
              Objecta,
              AssignSecurityDescriptor,
              0LL,
              SecurityDescriptor,
              0LL,
              0LL,
              PagedPool,
              &v15->TypeInfo.GenericMapping,
              v55);
      if ( v23 >= 0 )
      {
        v25 = *(void **)(v9 + 32);
        if ( *(_BYTE *)(v9 + 16) <= 1u && v25 )
          ExFreePoolWithTag(v25, 0);
        PreviousMode = v57;
        v21 = v62;
        *(_QWORD *)(v9 + 32) = 0LL;
        AccessState->SecurityDescriptor = 0LL;
        goto LABEL_19;
      }
      SeDeassignSecurity(&SecurityDescriptor);
    }
    p_SubjectSecurityContext = &AccessState->SubjectSecurityContext;
LABEL_92:
    ObfDereferenceObject(v24);
    if ( AccessState == (PACCESS_STATE)v73 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(p_SubjectSecurityContext);
    }
    return (unsigned int)v23;
  }
LABEL_19:
  *((_QWORD *)v10 + 4) = 0LL;
  if ( a7 )
  {
    *a7 = 0LL;
    if ( v21 )
      v26 = v9;
    else
      v26 = 0LL;
    v27 = ObpCreateHandle(
            0,
            (char *)Objecta,
            0,
            (__int64)AccessState,
            v61 + 1,
            *(_DWORD *)v9,
            PreviousMode,
            v26,
            0,
            v68,
            a7);
    v28 = Objecta;
    v29 = v27;
    goto LABEL_23;
  }
  if ( AccessState == (PACCESS_STATE)v73 )
  {
    v46 = Objecta;
    goto LABEL_52;
  }
  if ( (*(_DWORD *)v9 & 0x400) != 0 )
    PreviousMode = 1;
  v46 = Objecta;
  v29 = ObpAdjustCreatorAccessState(AccessState, PreviousMode, v15, (__int64)Objecta);
  if ( v29 >= 0 )
  {
LABEL_52:
    v47 = KeGetCurrentThread();
    --v47->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(v10 + 16), 0LL);
    v29 = ObpChargeQuotaForObject(v10, KeGetCurrentThread()->ApcState.Process, 0LL);
    ExReleasePushLockEx((__int64 *)v10 + 2, 0LL);
    KeLeaveCriticalRegion();
    if ( v29 >= 0 )
      goto LABEL_24;
  }
  v28 = v46;
LABEL_23:
  ObfDereferenceObject(v28);
LABEL_24:
  v32 = *(_QWORD *)(v9 + 32);
  if ( v32 )
  {
    LOBYTE(v30) = 1;
    SeReleaseSecurityDescriptor(v32, *(unsigned __int8 *)(v9 + 16), v30, v31);
    *(_QWORD *)(v9 + 32) = 0LL;
  }
  v33 = KeGetCurrentPrcb();
  L = v33->PPLookasideList[4].P;
  ++L->TotalFrees;
  if ( LOWORD(L->ListHead.Alignment) < L->Depth
    || (++L->FreeMisses, L = v33->PPLookasideList[4].L, ++L->TotalFrees, LOWORD(L->ListHead.Alignment) < L->Depth) )
  {
    RtlpInterlockedPushEntrySList(&L->ListHead, (PSLIST_ENTRY)v9);
  }
  else
  {
    ++L->FreeMisses;
    ((void (__fastcall *)(__int64))L->FreeEx)(v9);
  }
  if ( AccessState == (PACCESS_STATE)v73 )
  {
    SepDeleteAccessState((__int64)AccessState);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      PrimaryToken = AccessState->SubjectSecurityContext.PrimaryToken;
      if ( PrimaryToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
      ClientToken = AccessState->SubjectSecurityContext.ClientToken;
      if ( ClientToken )
      {
        _InterlockedDecrement((volatile signed __int32 *)(ClientToken[143] + 284LL));
        if ( AccessState->SubjectSecurityContext.ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v35 = (signed __int64)AccessState->SubjectSecurityContext.PrimaryToken;
    v36 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v36[1].Affinity.StaticBitmap[5]);
    v37 = v36[1].Affinity.StaticBitmap[5];
    if ( (v35 ^ (unsigned __int64)v37) >= 0xF )
    {
LABEL_69:
      ObfDereferenceObjectWithTag((PVOID)v35, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)&v36[1].Affinity.StaticBitmap[5], v37 + 1, v37);
        if ( v38 == v37 )
          break;
        if ( (v35 ^ (unsigned __int64)v37) >= 0xF )
          goto LABEL_69;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v35 - 48, 0, 1u, 0x75536553u);
    }
    v39 = AccessState->SubjectSecurityContext.ClientToken;
    AccessState->SubjectSecurityContext.PrimaryToken = 0LL;
    if ( v39 )
      ObfDereferenceObjectWithTag(v39, 0x75536553u);
    AccessState->SubjectSecurityContext.ClientToken = 0LL;
  }
  return (unsigned int)v29;
}
