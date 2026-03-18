/*
 * XREFs of CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0
 * Callers:
 *     NtEnumerateValueKey @ 0x1406A1370 (NtEnumerateValueKey.c)
 *     NtQueryMultipleValueKey @ 0x140713980 (NtQueryMultipleValueKey.c)
 *     NtQueryKey @ 0x1407333B0 (NtQueryKey.c)
 *     NtEnumerateKey @ 0x1407C1130 (NtEnumerateKey.c)
 *     NtQueryValueKey @ 0x1407C9930 (NtQueryValueKey.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AC800 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     SepDeleteAccessState @ 0x1403478A0 (SepDeleteAccessState.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140347920 (PsReferencePrimaryTokenWithTag.c)
 *     ObpTraceObjectDereferenceIfActive @ 0x140347B50 (ObpTraceObjectDereferenceIfActive.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFreeExtraParameter @ 0x1406D17F4 (CmpFreeExtraParameter.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     SeQueryInformationToken @ 0x14079F290 (SeQueryInformationToken.c)
 *     CmpIsKcbInsideVirtualizedHive @ 0x1407CA920 (CmpIsKcbInsideVirtualizedHive.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmVirtualKCBToRealPath @ 0x140916454 (CmVirtualKCBToRealPath.c)
 *     CmpReparseToVirtualPath @ 0x140917400 (CmpReparseToVirtualPath.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x1409C6B8C (SeCreateAccessStateFromSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByName @ 0x140AB4008 (CmObReferenceObjectByName.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockKcbShared @ 0x140AB42D0 (CmpLockKcbShared.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140AB43C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtualForEnum(PVOID *a1, char a2, int a3, PVOID *a4)
{
  _QWORD *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // r12
  __int64 v10; // r14
  struct _KTHREAD *CurrentThread; // rdi
  __int64 Process; // r13
  _QWORD *v13; // rbx
  struct _KTHREAD *v14; // r15
  unsigned __int64 v15; // rax
  _QWORD *v16; // rsi
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  int AccessStateFromSubjectContext; // edi
  char v23; // al
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r13d
  PVOID *v29; // r14
  int v30; // edx
  int v31; // r9d
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  PVOID *v44; // rcx
  _KPROCESS *v45; // rdx
  signed __int64 v46; // rax
  PVOID v47; // r8
  signed __int64 v48; // rtt
  wchar_t *Buffer; // rcx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  _QWORD *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  char v58; // [rsp+48h] [rbp-C0h]
  char v60; // [rsp+4Ah] [rbp-BEh]
  char v61; // [rsp+4Bh] [rbp-BDh]
  PVOID Object; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD *v63; // [rsp+58h] [rbp-B0h] BYREF
  PVOID v64[2]; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+70h] [rbp-98h]
  PVOID TokenInformation; // [rsp+78h] [rbp-90h] BYREF
  int v67; // [rsp+80h] [rbp-88h]
  PVOID *v68; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  PVOID *v70; // [rsp+A0h] [rbp-68h]
  _DWORD v71[2]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v72; // [rsp+B0h] [rbp-58h]
  UNICODE_STRING *p_DestinationString; // [rsp+B8h] [rbp-50h]
  int v74; // [rsp+C0h] [rbp-48h]
  int v75; // [rsp+C4h] [rbp-44h]
  __int128 v76; // [rsp+C8h] [rbp-40h]
  __int128 v77; // [rsp+E0h] [rbp-28h]
  __int128 v78; // [rsp+F0h] [rbp-18h]
  _OWORD v79[19]; // [rsp+108h] [rbp+0h] BYREF
  _OWORD v80[3]; // [rsp+238h] [rbp+130h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v81[5]; // [rsp+268h] [rbp+160h] BYREF
  _BYTE v82[224]; // [rsp+308h] [rbp+200h] BYREF

  v67 = a3;
  v70 = a1;
  v68 = a4;
  DestinationString = 0LL;
  memset(v81, 0, sizeof(v81));
  memset(v82, 0, sizeof(v82));
  v61 = 0;
  v71[1] = 0;
  v75 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  TokenInformation = *a1;
  v6 = TokenInformation;
  Object = 0LL;
  memset(v80, 0, sizeof(v80));
  memset(v79, 0, 0x128uLL);
  LODWORD(v79[6]) = -1;
  *a4 = 0LL;
  *((_QWORD *)&v79[9] + 1) = &v79[9];
  v9 = 0;
  *(_OWORD *)((char *)&v79[13] + 8) = 0LL;
  v58 = 0;
  *(_QWORD *)&v79[9] = &v79[9];
  *(_OWORD *)((char *)&v79[14] + 8) = 0LL;
  v60 = 0;
  *(_OWORD *)((char *)&v79[15] + 8) = 0LL;
  *(_OWORD *)((char *)&v79[16] + 8) = 0LL;
  *(_OWORD *)((char *)&v79[17] + 8) = 0LL;
  v10 = v6[1];
  *(_OWORD *)v64 = 0LL;
  if ( *(_WORD *)(v10 + 66) || (v6[6] & 0x10) != 0 || !CmpVEEnabled )
    goto LABEL_83;
  v7 = *(unsigned int *)(v10 + 184);
  if ( (v7 & 0x2000000) == 0 && (unsigned __int8)CmpIsKcbInsideVirtualizedHive(v10) )
  {
    v9 = 1;
    goto LABEL_9;
  }
  if ( (v7 & 0x1000000) == 0 )
  {
LABEL_83:
    AccessStateFromSubjectContext = 0;
    goto LABEL_84;
  }
  v58 = 1;
LABEL_9:
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  v65 = *(_QWORD *)(Process + 1088);
  if ( CurrentThread )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
    {
      v14 = KeGetCurrentThread();
      --v14->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&CurrentThread[1].WaitBlockList, 0LL);
      if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 8) != 0 )
      {
        v13 = (_QWORD *)(*(_QWORD *)((char *)&CurrentThread[1].116 + 4) & 0xFFFFFFFFFFFFFFF8uLL);
        ObfReferenceObjectWithTag(v13, 0x75536553u);
        LODWORD(v64[0]) = *((_DWORD *)&CurrentThread[1].0 + 1) & 3;
      }
      else
      {
        v13 = 0LL;
      }
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CurrentThread[1].WaitBlockList, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&CurrentThread[1].WaitBlockList);
      KeAbPostRelease((ULONG_PTR)&CurrentThread[1].WaitBlockList);
      KeLeaveCriticalRegionThread((__int64)v14);
      v6 = TokenInformation;
    }
    else
    {
      v13 = 0LL;
    }
  }
  else
  {
    v13 = 0LL;
  }
  v63 = v13;
  v15 = PsReferencePrimaryTokenWithTag(Process, 0x75536553u);
  v16 = (_QWORD *)v15;
  v64[1] = (PVOID)v15;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v15 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v15 + 1144) + 284LL));
      v16 = v64[1];
      if ( v64[1] == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v13 = v63;
    }
    if ( v13 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v13[143] + 284LL));
      v13 = v63;
      if ( v63 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
      v16 = v64[1];
    }
  }
  v77 = 0LL;
  v78 = 0LL;
  if ( !CmpVEEnabled )
    goto LABEL_61;
  v17 = v79[1];
  if ( (v79[1] & 1) == 0 )
  {
    if ( a2 )
    {
      LODWORD(TokenInformation) = 0;
      if ( !v13 )
      {
        SeQueryInformationToken(v16, TokenVirtualizationEnabled, &TokenInformation);
        if ( (_DWORD)TokenInformation )
        {
          LODWORD(v79[1]) |= 5u;
          goto LABEL_36;
        }
        v17 = v79[1];
      }
      LODWORD(v79[1]) = v17 | 3;
    }
LABEL_61:
    AccessStateFromSubjectContext = 0;
    goto LABEL_62;
  }
  if ( (v79[1] & 2) != 0 )
    goto LABEL_61;
LABEL_36:
  if ( v9 && (*(_DWORD *)(v10 + 184) & 0x800000) == 0 )
    goto LABEL_61;
  CmpAttachToRegistryProcess(v80);
  v61 = 1;
  CmpLockRegistry(v19, v18, v20);
  CmpLockKcbShared(v10);
  if ( v9 )
  {
    AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v6, 0LL);
    if ( AccessStateFromSubjectContext < 0 )
    {
LABEL_51:
      CmpUnlockKcb(v10);
      CmpUnlockRegistry(v37, v36, v38, v39);
      goto LABEL_62;
    }
    v23 = CmpReparseToVirtualPath(v10, v21, &v63, &DestinationString);
    v16 = v64[1];
    v13 = v63;
    if ( v23 )
      goto LABEL_41;
LABEL_50:
    AccessStateFromSubjectContext = 0;
    goto LABEL_51;
  }
  if ( (int)CmVirtualKCBToRealPath(v10, &DestinationString) < 0 )
    goto LABEL_50;
LABEL_41:
  CmpUnlockKcb(v10);
  CmpUnlockRegistry(v25, v24, v26, v27);
  v28 = v67;
  v29 = v70;
  v30 = 8;
  LODWORD(v79[0]) = 8;
  if ( !v67 )
    v30 = 4104;
  *((_QWORD *)&v79[4] + 1) = *((_QWORD *)*v70 + 7);
  LODWORD(v79[0]) = v30;
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    (unsigned int)&v63,
                                    (unsigned int)v81,
                                    (unsigned int)v82,
                                    v67,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext < 0 )
  {
LABEL_62:
    if ( Object )
      ObfDereferenceObject(Object);
    if ( !v60 )
      goto LABEL_66;
    goto LABEL_65;
  }
  v60 = 1;
  v72 = 0LL;
  v32 = 1600;
  v71[0] = 48;
  if ( a2 != 1 )
    v32 = 576;
  v74 = v32;
  p_DestinationString = &DestinationString;
  v76 = 0LL;
  AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                    (unsigned int)v71,
                                    (unsigned int)v81,
                                    v28,
                                    v31,
                                    0,
                                    (__int64)v79,
                                    (__int64)&Object);
  if ( AccessStateFromSubjectContext < 0 )
  {
    if ( v58 )
      AccessStateFromSubjectContext = 0;
    goto LABEL_62;
  }
  CmpLockRegistry(v34, v33, v35);
  v43 = *((_QWORD *)Object + 1);
  if ( *(_WORD *)(v43 + 66) )
  {
    if ( v58 )
      AccessStateFromSubjectContext = 0;
    CmpUnlockRegistry(v43, v40, v41, v42);
    goto LABEL_62;
  }
  CmpUnlockRegistry(v43, v40, v41, v42);
  v44 = v68;
  if ( v9 )
  {
    *v68 = Object;
    Object = 0LL;
    AccessStateFromSubjectContext = 0;
  }
  else
  {
    *v29 = Object;
    Object = 0LL;
    AccessStateFromSubjectContext = 0;
    *v44 = v6;
  }
LABEL_65:
  SepDeleteAccessState((__int64)v81);
  SeReleaseSubjectContext(&v81[1]);
LABEL_66:
  if ( v61 )
    CmpDetachFromRegistryProcess(v80);
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    if ( v16 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v16[143] + 284LL));
      if ( v64[1] == (PVOID)SepTokenLeakToken )
        __debugbreak();
      v13 = v63;
    }
    if ( v13 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v13[143] + 284LL));
      if ( v63 == (_QWORD *)SepTokenLeakToken )
        __debugbreak();
    }
  }
  v45 = KeGetCurrentThread()->ApcState.Process;
  _m_prefetchw(&v45[1].Affinity.StaticBitmap[5]);
  v46 = v45[1].Affinity.StaticBitmap[5];
  v47 = v64[1];
  if ( (v46 ^ (unsigned __int64)v64[1]) >= 0xF )
  {
LABEL_79:
    ObfDereferenceObjectWithTag(v47, 0x75536553u);
  }
  else
  {
    while ( 1 )
    {
      v48 = v46;
      v46 = _InterlockedCompareExchange64((volatile signed __int64 *)&v45[1].Affinity.StaticBitmap[5], v46 + 1, v46);
      if ( v48 == v46 )
        break;
      v47 = v64[1];
      if ( (v46 ^ (unsigned __int64)v64[1]) >= 0xF )
        goto LABEL_79;
    }
    ObpTraceObjectDereferenceIfActive(LODWORD(v64[1]) - 48);
  }
  if ( v63 )
    ObfDereferenceObjectWithTag(v63, 0x75536553u);
LABEL_84:
  Buffer = DestinationString.Buffer;
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( *((_QWORD *)&v79[5] + 1) )
  {
    CmpLockRegistry(Buffer, v7, v8);
    CmpDereferenceKeyControlBlock(*((ULONG_PTR *)&v79[5] + 1));
    CmpUnlockRegistry(v51, v50, v52, v53);
  }
  v54 = *(_QWORD **)&v79[9];
  v55 = **(_QWORD **)&v79[9];
  if ( *(_OWORD **)(*(_QWORD *)&v79[9] + 8LL) != &v79[9] || *(_QWORD *)(v55 + 8) != *(_QWORD *)&v79[9] )
    goto LABEL_95;
  *(_QWORD *)&v79[9] = **(_QWORD **)&v79[9];
  *(_QWORD *)(v55 + 8) = &v79[9];
  if ( v54 != (_QWORD *)&v79[9] )
  {
    while ( 1 )
    {
      CmpFreeExtraParameter(v54);
      v54 = *(_QWORD **)&v79[9];
      v56 = **(_QWORD **)&v79[9];
      if ( *(_OWORD **)(*(_QWORD *)&v79[9] + 8LL) != &v79[9] || *(_QWORD *)(v56 + 8) != *(_QWORD *)&v79[9] )
        break;
      *(_QWORD *)&v79[9] = **(_QWORD **)&v79[9];
      *(_QWORD *)(v56 + 8) = &v79[9];
      if ( v54 == (_QWORD *)&v79[9] )
        return (unsigned int)AccessStateFromSubjectContext;
    }
LABEL_95:
    __fastfail(3u);
  }
  return (unsigned int)AccessStateFromSubjectContext;
}
