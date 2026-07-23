/*
 * XREFs of ObOpenObjectByNameEx @ 0x1406ED010
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405589A0 (IoRevokeHandlesForProcess.c)
 *     ObOpenObjectByName @ 0x14068C9D0 (ObOpenObjectByName.c)
 *     CmCreateKey @ 0x140692410 (CmCreateKey.c)
 *     CmOpenKey @ 0x1406E2A90 (CmOpenKey.c)
 *     IopCreateFile @ 0x14073C880 (IopCreateFile.c)
 *     NtQueryAttributesFile @ 0x14073E400 (NtQueryAttributesFile.c)
 *     NtQueryFullAttributesFile @ 0x1407AAA40 (NtQueryFullAttributesFile.c)
 *     NtOpenSymbolicLinkObject @ 0x1407AACD0 (NtOpenSymbolicLinkObject.c)
 *     IoQueryInformationByName @ 0x1407BF160 (IoQueryInformationByName.c)
 *     NtDeleteFile @ 0x140874570 (NtDeleteFile.c)
 *     IopFastQueryNetworkAttributes @ 0x140947B28 (IopFastQueryNetworkAttributes.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x140230E80 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231550 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SeClearLearningModeObjectInformation @ 0x1402322E0 (SeClearLearningModeObjectInformation.c)
 *     SepDeleteAccessState @ 0x140232340 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140232A90 (PsReferencePrimaryTokenWithTag.c)
 *     SepCreateAccessStateFromSubjectContext @ 0x140232C10 (SepCreateAccessStateFromSubjectContext.c)
 *     ObfReferenceObject @ 0x140233D10 (ObfReferenceObject.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1402A8F70 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1402B6B50 (ObfReferenceObjectWithTag.c)
 *     ExfReleasePushLockShared @ 0x1402BDAF0 (ExfReleasePushLockShared.c)
 *     PsDereferenceSiloContext @ 0x14036A410 (PsDereferenceSiloContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429240 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x140429280 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     ObpPushStackInfo @ 0x1405830C8 (ObpPushStackInfo.c)
 *     SeSetLearningModeObjectInformation @ 0x1405B893C (SeSetLearningModeObjectInformation.c)
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x1406ED750 (ObpLookupObjectName.c)
 *     ObpCaptureObjectCreateInformation @ 0x1406EEF40 (ObpCaptureObjectCreateInformation.c)
 *     SeReleaseSecurityDescriptor @ 0x1407375C0 (SeReleaseSecurityDescriptor.c)
 *     ObpDeleteNameCheck @ 0x140740330 (ObpDeleteNameCheck.c)
 *     RtlValidSecurityDescriptor @ 0x1407B4FF0 (RtlValidSecurityDescriptor.c)
 *     SeObjectCreateSaclAccessBits @ 0x1407D4F98 (SeObjectCreateSaclAccessBits.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ObOpenObjectByNameEx(
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        _QWORD *a8)
{
  int v8; // r15d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rdi
  PSLIST_ENTRY v14; // rbx
  int Information; // edi
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r15
  _QWORD *v18; // rdi
  ULONG_PTR v19; // rax
  signed __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  _SLIST_ENTRY *Next; // rcx
  _BYTE *v24; // rdi
  PVOID *p_Next; // rdi
  int v26; // r15d
  PVOID v27; // rcx
  char *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rcx
  struct _KPRCB *v31; // r8
  _SLIST_ENTRY *v32; // rdx
  _GENERAL_LOOKASIDE *v33; // rcx
  int v34; // edi
  char *v35; // rdi
  _KPROCESS *v36; // rdx
  signed __int64 v37; // rax
  signed __int64 v38; // rtt
  void *v39; // rcx
  _SLIST_ENTRY *v40; // rcx
  _SLIST_ENTRY *v41; // r8
  struct _KPRCB *v42; // rdx
  _GENERAL_LOOKASIDE *v43; // rcx
  struct _KPRCB *v44; // rdx
  _GENERAL_LOOKASIDE *v45; // rcx
  char *v47; // r15
  _GENERAL_LOOKASIDE *L; // rdi
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int64 v53; // rax
  struct _KPRCB *v54; // rax
  _GENERAL_LOOKASIDE *v55; // r8
  __int64 v56; // rdi
  __int64 v57; // rax
  PVOID Object; // [rsp+78h] [rbp-79h] BYREF
  __int64 v59; // [rsp+80h] [rbp-71h] BYREF
  char *v60; // [rsp+88h] [rbp-69h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-61h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+98h] [rbp-59h] BYREF
  _QWORD *v63; // [rsp+A8h] [rbp-49h] BYREF
  __int128 v64; // [rsp+B0h] [rbp-41h]
  __int64 v65; // [rsp+C0h] [rbp-31h]
  struct _KTHREAD *v66; // [rsp+C8h] [rbp-29h]
  __int128 v67; // [rsp+D0h] [rbp-21h] BYREF
  __int128 v68; // [rsp+E0h] [rbp-11h]
  __int128 v69; // [rsp+F0h] [rbp-1h]
  __int64 v70; // [rsp+100h] [rbp+Fh]
  __int64 v71; // [rsp+138h] [rbp+47h] BYREF

  v8 = a1;
  v70 = 0LL;
  Object = 0LL;
  LODWORD(v71) = 0;
  v59 = 0LL;
  *a8 = 0LL;
  v60 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  CurrentPrcb = KeGetCurrentPrcb();
  P = CurrentPrcb->PPLookasideList[8].P;
  ++P->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( v14 )
    goto LABEL_4;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[8].L;
  ++L->TotalAllocates;
  v14 = RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( v14
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (v14 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_4:
    LODWORD(v14->Next) = CurrentPrcb->Number;
  }
  if ( !v14 )
    return 3221225626LL;
  Information = ObpCaptureObjectCreateInformation(a3, a3, v8, (unsigned int)ListEntry, (__int64)&v14[10], 1);
  if ( Information < 0 )
  {
    v54 = KeGetCurrentPrcb();
    v55 = v54->PPLookasideList[8].P;
    ++v55->TotalFrees;
    if ( LOWORD(v55->ListHead.Alignment) < v55->Depth
      || (++v55->FreeMisses,
          v55 = v54->PPLookasideList[8].L,
          ++v55->TotalFrees,
          LOWORD(v55->ListHead.Alignment) < v55->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v55->ListHead, v14);
    }
    else
    {
      ++v55->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v55->FreeEx)(v14);
    }
    return (unsigned int)Information;
  }
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    v64 = 0LL;
    Process = (__int64)CurrentThread->ApcState.Process;
    v65 = *(_QWORD *)(Process + 1088);
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v66 = KeGetCurrentThread();
      BugCheckParameter2 = (ULONG_PTR)&CurrentThread[1].WaitBlockList;
      --v66->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v18 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v18, 0x75536553u);
        LODWORD(v64) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v18 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
      KeAbPostRelease(BugCheckParameter2);
      KeLeaveCriticalRegionThread((__int64)v66);
    }
    else
    {
      v18 = 0LL;
    }
    v63 = v18;
    v19 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
    *((_QWORD *)&v64 + 1) = v19;
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      if ( v19 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v19 + 1144) + 284LL));
        if ( *((_QWORD *)&v64 + 1) == SepTokenLeakToken )
          __debugbreak();
        v18 = v63;
      }
      if ( v18 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v18[143] + 284LL));
        if ( v63 == (_QWORD *)SepTokenLeakToken )
          __debugbreak();
      }
    }
    v22 = SepCreateAccessStateFromSubjectContext(&v63, v14, &v14[14].Next, a5, (_DWORD *)(a2 + 76));
    if ( v22 < 0 )
      goto LABEL_35;
    a4 = (__int64)v14;
  }
  Next = v14[12].Next;
  if ( Next )
    *(_QWORD *)(a4 + 64) = Next;
  v24 = *(_BYTE **)(a4 + 64);
  if ( !v24 )
    goto LABEL_16;
  if ( RtlValidSecurityDescriptor(*(PSECURITY_DESCRIPTOR *)(a4 + 64)) )
  {
    if ( (v24[2] & 0x10) != 0 && (*(_DWORD *)(a4 + 20) & 0x1000000) == 0 )
      *(_DWORD *)(a4 + 16) |= SeObjectCreateSaclAccessBits(v24);
LABEL_16:
    p_Next = (PVOID *)&v14[28].Next;
    v26 = 0;
    v22 = ObpLookupObjectName(
            *((_QWORD *)&v14[10].Next + 1),
            a3,
            a6,
            *((_QWORD *)&v14[12].Next + 1),
            0LL,
            a7,
            a4,
            (__int64)&v14[28],
            (__int64)&v71,
            (__int64)&Object);
    if ( v22 >= 0 )
    {
      if ( *p_Next )
      {
        v47 = (char *)Object - 48;
        v60 = (char *)Object - 48;
        ObfReferenceObject(Object);
        _InterlockedIncrement((volatile signed __int32 *)&v47[-ObpInfoMaskToOffset[v47[26] & 3] + 24]);
        v26 = 0;
      }
      if ( *p_Next )
      {
        ExReleasePushLockEx((__int64 *)*p_Next + 37, 0LL);
        if ( BYTE6(v14[29].Next) )
        {
          ObDereferenceObjectDeferDeleteWithTag(*p_Next, 0x554C624Fu);
          BYTE6(v14[29].Next) = 0;
        }
        *p_Next = 0LL;
        BYTE5(v14[29].Next) = 0;
        KeLeaveCriticalRegion();
      }
      v27 = Object;
      v28 = (char *)Object - 48;
      if ( (*((char *)Object - 21) & 1) != 0 )
      {
        v29 = *((_QWORD *)v28 + 4);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v29 + 32);
          if ( v30 )
          {
            LOBYTE(v20) = 1;
            SeReleaseSecurityDescriptor(v30, *(unsigned __int8 *)(v29 + 16), v20, v21);
            *(_QWORD *)(*((_QWORD *)v28 + 4) + 32LL) = 0LL;
          }
          v31 = KeGetCurrentPrcb();
          v32 = (_SLIST_ENTRY *)*((_QWORD *)v28 + 4);
          v33 = v31->PPLookasideList[4].P;
          ++v33->TotalFrees;
          if ( LOWORD(v33->ListHead.Alignment) < v33->Depth
            || (++v33->FreeMisses,
                v33 = v31->PPLookasideList[4].L,
                ++v33->TotalFrees,
                LOWORD(v33->ListHead.Alignment) < v33->Depth) )
          {
            RtlpInterlockedPushEntrySList(&v33->ListHead, v32);
          }
          else
          {
            ++v33->FreeMisses;
            ((void (__fastcall *)(_SLIST_ENTRY *))v33->FreeEx)(v32);
          }
          *((_QWORD *)v28 + 4) = 0LL;
          v27 = Object;
        }
      }
      else
      {
        v26 = 1;
      }
      if ( (*(_DWORD *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v28[24] ^ (unsigned __int64)BYTE1(v28)]
                      + 72) & (__int64)v14[10].Next) != 0 )
      {
        PsDereferenceSiloContext(v27);
        v22 = -1073741811;
      }
      else
      {
        if ( SepLearningModeTokenCount )
        {
          *((_QWORD *)&v68 + 1) = ListEntry;
          *(_QWORD *)&v68 = a2 + 16;
          *(_QWORD *)&v69 = *((_QWORD *)&v14[10].Next + 1);
          SeSetLearningModeObjectInformation((__int64)&v67);
          v27 = Object;
        }
        if ( ObpTraceFlags )
        {
          v56 = (__int64)v27 - 48;
          ObpPushStackInfo((__int64)v27 - 48, 0, 1u, 0x746C6644u);
          ObpPushStackInfo(v56, 1, 1u, 0x6E48624Fu);
          v27 = Object;
        }
        v34 = ObpCreateHandle(v26, (char *)v27, 0, a4, 0, (int)v14[10].Next, a3, 0LL, v71, 0LL, &v59);
        if ( v34 < 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x6E48624Fu);
          v22 = v34;
        }
        else
        {
          *a8 = v59;
        }
      }
      v35 = v60;
      if ( v60 )
      {
        if ( _InterlockedExchangeAdd(
               (volatile signed __int32 *)&v60[-ObpInfoMaskToOffset[v60[26] & 3] + 24],
               0xFFFFFFFF) == 1 )
          ObpDeleteNameCheck(v35);
        ObfDereferenceObject(v35 + 48);
      }
    }
    goto LABEL_35;
  }
  v22 = -1073741703;
LABEL_35:
  if ( (PSLIST_ENTRY)a4 == v14 )
  {
    SepDeleteAccessState(a4);
    if ( HIDWORD(NlsMbOemCodePageTag) )
    {
      v57 = *(_QWORD *)(a4 + 48);
      if ( v57 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v57 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 48) == SepTokenLeakToken )
          __debugbreak();
      }
      v53 = *(_QWORD *)(a4 + 32);
      if ( v53 )
      {
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v53 + 1144) + 284LL));
        if ( *(_QWORD *)(a4 + 32) == SepTokenLeakToken )
          __debugbreak();
      }
    }
    v20 = *(_QWORD *)(a4 + 48);
    v36 = KeGetCurrentThread()->ApcState.Process;
    _m_prefetchw(&v36[1].Affinity.StaticBitmap[5]);
    v37 = v36[1].Affinity.StaticBitmap[5];
    if ( (v20 ^ (unsigned __int64)v37) >= 0xF )
    {
LABEL_80:
      ObfDereferenceObjectWithTag((PVOID)v20, 0x75536553u);
    }
    else
    {
      while ( 1 )
      {
        v38 = v37;
        v37 = _InterlockedCompareExchange64((volatile signed __int64 *)&v36[1].Affinity.StaticBitmap[5], v37 + 1, v37);
        if ( v38 == v37 )
          break;
        if ( (v20 ^ (unsigned __int64)v37) >= 0xF )
          goto LABEL_80;
      }
      if ( ObpTraceFlags )
        ObpPushStackInfo(v20 - 48, 0, 1u, 0x75536553u);
    }
    v39 = *(void **)(a4 + 32);
    *(_QWORD *)(a4 + 48) = 0LL;
    if ( v39 )
      ObfDereferenceObjectWithTag(v39, 0x75536553u);
    *(_QWORD *)(a4 + 32) = 0LL;
  }
  v40 = v14[12].Next;
  if ( v40 )
  {
    LOBYTE(v20) = 1;
    SeReleaseSecurityDescriptor(v40, LOBYTE(v14[11].Next), v20, v21);
    v14[12].Next = 0LL;
  }
  v41 = ListEntry[1];
  if ( ListEntry[1] )
  {
    if ( WORD1(ListEntry[0]) == 248 )
    {
      v42 = KeGetCurrentPrcb();
      v43 = v42->PPLookasideList[5].P;
      ++v43->TotalFrees;
      if ( LOWORD(v43->ListHead.Alignment) < v43->Depth
        || (++v43->FreeMisses,
            v43 = v42->PPLookasideList[5].L,
            ++v43->TotalFrees,
            LOWORD(v43->ListHead.Alignment) < v43->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v43->ListHead, v41);
      }
      else
      {
        ++v43->FreeMisses;
        ((void (__fastcall *)(_SLIST_ENTRY *))v43->FreeEx)(v41);
      }
    }
    else
    {
      ExFreePoolWithTag(ListEntry[1], 0);
    }
  }
  SeClearLearningModeObjectInformation();
  v44 = KeGetCurrentPrcb();
  v45 = v44->PPLookasideList[8].P;
  ++v45->TotalFrees;
  if ( LOWORD(v45->ListHead.Alignment) < v45->Depth
    || (++v45->FreeMisses,
        v45 = v44->PPLookasideList[8].L,
        ++v45->TotalFrees,
        LOWORD(v45->ListHead.Alignment) < v45->Depth) )
  {
    RtlpInterlockedPushEntrySList(&v45->ListHead, v14);
  }
  else
  {
    ++v45->FreeMisses;
    ((void (__fastcall *)(PSLIST_ENTRY))v45->FreeEx)(v14);
  }
  return (unsigned int)v22;
}
