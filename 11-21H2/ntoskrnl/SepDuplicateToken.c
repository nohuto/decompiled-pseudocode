/*
 * XREFs of SepDuplicateToken @ 0x1407CDED0
 * Callers:
 *     SepGetAnonymousToken @ 0x14021F764 (SepGetAnonymousToken.c)
 *     SepLinkLogonSessions @ 0x14025CB88 (SepLinkLogonSessions.c)
 *     SeSubProcessToken @ 0x140671BE0 (SeSubProcessToken.c)
 *     NtImpersonateAnonymousToken @ 0x140695570 (NtImpersonateAnonymousToken.c)
 *     SepSetLogonSessionToken @ 0x1406E5F34 (SepSetLogonSessionToken.c)
 *     SeCopyClientToken @ 0x14072295C (SeCopyClientToken.c)
 *     NtOpenThreadTokenEx @ 0x140725A50 (NtOpenThreadTokenEx.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     NtCreateLowBoxToken @ 0x14078DDF0 (NtCreateLowBoxToken.c)
 *     NtQueryInformationToken @ 0x1407B13E0 (NtQueryInformationToken.c)
 *     SeDuplicateTokenAndAddOriginClaim @ 0x1409CC1BC (SeDuplicateTokenAndAddOriginClaim.c)
 *     SeGetLinkedToken @ 0x1409CC2A0 (SeGetLinkedToken.c)
 *     SeGetLogonSessionToken @ 0x1409CC3A0 (SeGetLogonSessionToken.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140204B30 (AuthzBasepDuplicateSecurityAttributes.c)
 *     SepReferenceLuidToIndexEntry @ 0x14023A798 (SepReferenceLuidToIndexEntry.c)
 *     RtlWalkFrameChain @ 0x140295F90 (RtlWalkFrameChain.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     MmGetSessionObjectById @ 0x1402DF7D8 (MmGetSessionObjectById.c)
 *     RtlSidHashInitialize @ 0x1402E1660 (RtlSidHashInitialize.c)
 *     ExInitializeResourceLite @ 0x14030F740 (ExInitializeResourceLite.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObpPushStackInfo @ 0x1405C5EC8 (ObpPushStackInfo.c)
 *     SepSetTokenPackage @ 0x14066A17C (SepSetTokenPackage.c)
 *     SepReferenceLogonSession @ 0x14066B8C8 (SepReferenceLogonSession.c)
 *     SepMakeTokenEffectiveOnly @ 0x1406B91B4 (SepMakeTokenEffectiveOnly.c)
 *     ObpFreeObjectNameBuffer @ 0x14071F0D0 (ObpFreeObjectNameBuffer.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     ObpAllocateObject @ 0x14072E5D0 (ObpAllocateObject.c)
 *     SepSetTokenCapabilities @ 0x140799BB0 (SepSetTokenCapabilities.c)
 *     SeReleaseSecurityDescriptor @ 0x1407B3DA0 (SeReleaseSecurityDescriptor.c)
 *     ObpCaptureObjectCreateInformation @ 0x1407CCD80 (ObpCaptureObjectCreateInformation.c)
 *     ObpRegisterObject @ 0x140986424 (ObpRegisterObject.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C6578 (SepModifyTokenPolicyCounter.c)
 *     SepDuplicateTokenUserAndGroups @ 0x1409CCCB0 (SepDuplicateTokenUserAndGroups.c)
 *     SepAddTokenLogonSession @ 0x1409CD320 (SepAddTokenLogonSession.c)
 *     SepDuplicateTokenClaims @ 0x1409CEB64 (SepDuplicateTokenClaims.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateToken(
        __int128 *a1,
        __int64 a2,
        char a3,
        int a4,
        unsigned int a5,
        char a6,
        char a7,
        __int64 *a8)
{
  PVOID *v9; // rbx
  _DWORD *Pool2; // rax
  _DWORD *v11; // r14
  _QWORD *v12; // rax
  struct _ERESOURCE *v13; // r12
  int v14; // esi
  int v15; // r13d
  struct _KPRCB *CurrentPrcb; // r15
  _GENERAL_LOOKASIDE *v17; // rbp
  PSLIST_ENTRY v18; // rbx
  int v19; // ebp
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  __int128 v29; // xmm0
  struct _KTHREAD *CurrentThread; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // eax
  unsigned int v35; // ebp
  __int64 v36; // xmm1_8
  __int64 v37; // rdx
  bool v38; // zf
  __int64 v39; // rcx
  int v40; // r12d
  __int64 v41; // rax
  _DWORD *v42; // rcx
  __int64 v43; // rsi
  int v44; // ecx
  _QWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned int v48; // ecx
  unsigned int v49; // ebp
  char *v50; // rax
  char *v51; // rsi
  __int64 v52; // rax
  char *v53; // rsi
  unsigned int v54; // r9d
  unsigned __int8 *v55; // rdx
  int v56; // esi
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rdx
  unsigned __int8 *v60; // rsi
  void *v61; // rbp
  unsigned int v62; // r14d
  void *v63; // rax
  unsigned int v64; // ecx
  void *v65; // rcx
  __int64 *v66; // rcx
  void *v67; // rcx
  int v68; // ecx
  _QWORD *v69; // rax
  PVOID *v70; // rcx
  struct _KPRCB *v71; // rdx
  _GENERAL_LOOKASIDE *v72; // rcx
  _SLIST_ENTRY *Next; // rcx
  struct _KPRCB *v74; // rdx
  _GENERAL_LOOKASIDE *v75; // rcx
  ULONG v76; // eax
  __int64 v77; // rdx
  _KPROCESS *Process; // rcx
  int v79; // edx
  PVOID *P; // [rsp+40h] [rbp-68h]
  POBJECT_TYPE *v81; // [rsp+48h] [rbp-60h]
  __int64 v82; // [rsp+50h] [rbp-58h] BYREF
  __int128 v83; // [rsp+58h] [rbp-50h] BYREF

  v9 = 0LL;
  P = 0LL;
  if ( a5 > 3 && a4 == 2 )
    return 3221225637LL;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, 48LL, 1950442835LL);
  v11 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  *Pool2 = 0;
  v12 = Pool2 + 2;
  v11[6] = 0;
  v12[1] = v12;
  *v12 = v12;
  *((_QWORD *)v11 + 5) = v11 + 8;
  *((_QWORD *)v11 + 4) = v11 + 8;
  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    P = (PVOID *)ExAllocatePool2(256LL, 288LL, 1950442835LL);
    v9 = P;
    if ( !P )
    {
      v70 = (PVOID *)v11;
      goto LABEL_82;
    }
  }
  v13 = (struct _ERESOURCE *)ExAllocatePool2(64LL, 104LL, 1817470291LL);
  if ( !v13 )
  {
    ExFreePoolWithTag(v11, 0);
    if ( !HIDWORD(NlsMbOemCodePageTag) )
      return 3221225626LL;
    v70 = v9;
LABEL_82:
    ExFreePoolWithTag(v70, 0);
    return 3221225626LL;
  }
  v14 = *((_DWORD *)a1 + 33) + 1168;
  if ( *((_DWORD *)a1 + 33) < 0xFFFFFB70 )
  {
    v15 = *((_DWORD *)a1 + 34);
    CurrentPrcb = KeGetCurrentPrcb();
    v82 = 0LL;
    v81 = SeTokenObjectType;
    v83 = 0LL;
    v17 = CurrentPrcb->PPLookasideList[4].P;
    ++v17->TotalAllocates;
    v18 = RtlpInterlockedPopEntrySList(&v17->ListHead);
    if ( !v18 )
    {
      ++v17->AllocateMisses;
      L = CurrentPrcb->PPLookasideList[4].L;
      ++L->TotalAllocates;
      v18 = RtlpInterlockedPopEntrySList(&L->ListHead);
      if ( !v18 )
      {
        Size = L->Size;
        AllocateEx = L->AllocateEx;
        Tag = L->Tag;
        Type = (unsigned int)L->Type;
        ++L->AllocateMisses;
        v18 = (PSLIST_ENTRY)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag);
        if ( !v18 )
        {
          v19 = -1073741670;
          goto LABEL_86;
        }
      }
    }
    LODWORD(v18->Next) = CurrentPrcb->Number;
    v19 = ObpCaptureObjectCreateInformation(a6, a6, a2, &v83, (__int64)v18, 0);
    if ( v19 < 0 )
    {
      v71 = KeGetCurrentPrcb();
      v72 = v71->PPLookasideList[4].P;
      ++v72->TotalFrees;
      if ( LOWORD(v72->ListHead.Alignment) < v72->Depth
        || (++v72->FreeMisses,
            v72 = v71->PPLookasideList[4].L,
            ++v72->TotalFrees,
            LOWORD(v72->ListHead.Alignment) < v72->Depth) )
      {
        RtlpInterlockedPushEntrySList(&v72->ListHead, v18);
      }
      else
      {
        ++v72->FreeMisses;
        ((void (__fastcall *)(PSLIST_ENTRY))v72->FreeEx)(v18);
      }
LABEL_86:
      ExFreePoolWithTag(v11, 0);
      ExFreePoolWithTag(v13, 0);
      if ( HIDWORD(NlsMbOemCodePageTag) )
        ExFreePoolWithTag(P, 0);
      return (unsigned int)v19;
    }
    v20 = (__int64)v81;
    if ( ((__int64)v18->Next & (_DWORD)v81[9]) != 0 )
    {
      v19 = -1073741811;
    }
    else
    {
      if ( ((__int64)v18->Next & 0x10) != 0 )
      {
        if ( !SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, a6) )
        {
          v19 = -1073741727;
          goto LABEL_94;
        }
        v20 = (__int64)v81;
      }
      if ( !v15 )
        v15 = *(_DWORD *)(v20 + 104);
      HIDWORD(v18[1].Next) = v15;
      *((_DWORD *)&v18[1].Next + 2) = v14;
      v19 = ObpAllocateObject((int *)v18, a6, v20, &v83, v14, &v82, 0LL);
      if ( v19 >= 0 )
      {
        v21 = v82;
        if ( ObpTraceFlags )
        {
          ObpRegisterObject(v82);
          ObpPushStackInfo(v21, 1, 1u, 0x746C6644u);
        }
        v22 = v21 + 48;
        *(_QWORD *)(v22 + 16) = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
        *(_DWORD *)(v22 + 192) = a4;
        *(_DWORD *)(v22 + 196) = a5;
        *(_BYTE *)(v22 + 204) = 0;
        *(_QWORD *)(v22 + 48) = v13;
        ExInitializeResourceLite(v13);
        *(_QWORD *)(v22 + 24) = *((_QWORD *)a1 + 3);
        v29 = *a1;
        *(_DWORD *)(v22 + 140) = 0;
        *(_OWORD *)v22 = v29;
        *(_QWORD *)(v22 + 32) = *((_QWORD *)a1 + 4);
        *(_QWORD *)(v22 + 40) = *((_QWORD *)a1 + 5);
        *(_QWORD *)(v22 + 224) = *((_QWORD *)a1 + 28);
        *(_QWORD *)(v22 + 1120) = 0LL;
        *(_QWORD *)(v22 + 1128) = 0LL;
        *(_QWORD *)(v22 + 1096) = 0LL;
        *(_QWORD *)(v22 + 1144) = P;
        *(_DWORD *)(v22 + 120) = 0;
        *(_QWORD *)(v22 + 1160) = 0LL;
        if ( HIDWORD(NlsMbOemCodePageTag) )
        {
          v76 = RtlWalkFrameChain(P + 5, 0x1Eu, 0);
          if ( KeGetCurrentIrql() < 2u )
            RtlWalkFrameChain((PVOID *)(*(_QWORD *)(v22 + 1144) + 8 * (v76 + 5LL)), 30 - v76, 1u);
        }
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceSharedLite(*((PERESOURCE *)a1 + 6), 1u);
        *(_QWORD *)(v22 + 56) = *((_QWORD *)a1 + 7);
        *(_DWORD *)(v22 + 136) = *((_DWORD *)a1 + 34);
        *(_DWORD *)(v22 + 144) = *((_DWORD *)a1 + 36);
        *(_DWORD *)(v22 + 128) = *((_DWORD *)a1 + 32);
        *(_DWORD *)(v22 + 132) = *((_DWORD *)a1 + 33);
        v34 = *((_DWORD *)a1 + 50) & 0xFFFFFBDF;
        *(_DWORD *)(v22 + 200) = v34;
        if ( (v34 & 0x400000) != 0 )
          _InterlockedIncrement(&SepLearningModeTokenCount);
        v35 = *((_DWORD *)a1 + 30);
        if ( *(_DWORD *)(v22 + 120) != v35 )
        {
          *(_DWORD *)(v22 + 120) = v35;
          if ( !SeTokenDoesNotTrackSessionObject )
          {
            v67 = *(void **)(v22 + 1160);
            if ( v67 )
              ObfDereferenceObject(v67);
            *(_QWORD *)(v22 + 1160) = MmGetSessionObjectById(v35, v31, v32, v33);
          }
        }
        *(_DWORD *)(v22 + 120) = *((_DWORD *)a1 + 30);
        *(_OWORD *)(v22 + 88) = *(__int128 *)((char *)a1 + 88);
        *(_QWORD *)(v22 + 104) = *((_QWORD *)a1 + 13);
        *(_DWORD *)(v22 + 112) = *((_DWORD *)a1 + 28);
        *(_WORD *)(v22 + 116) = *((_WORD *)a1 + 58);
        *(_BYTE *)(v22 + 118) = *((_BYTE *)a1 + 118);
        *(_DWORD *)(v22 + 208) = *((_DWORD *)a1 + 52);
        *(_DWORD *)(v22 + 212) = *((_DWORD *)a1 + 53);
        *(_OWORD *)(v22 + 64) = a1[4];
        v36 = *((_QWORD *)a1 + 10);
        *(_QWORD *)(v22 + 776) = v11;
        *(_QWORD *)(v22 + 1080) = 0LL;
        *(_QWORD *)(v22 + 1088) = 0LL;
        *(_QWORD *)(v22 + 1152) = 0LL;
        *(_QWORD *)(v22 + 792) = 0LL;
        *(_QWORD *)(v22 + 784) = 0LL;
        *(_DWORD *)(v22 + 800) = 0;
        *(_QWORD *)(v22 + 80) = v36;
        memset((void *)(v22 + 808), 0, 0x110uLL);
        v38 = *(_BYTE *)(v22 + 118) == 2;
        *(_QWORD *)(v22 + 176) = 0LL;
        *(_QWORD *)(v22 + 1104) = 0LL;
        *(_QWORD *)(v22 + 1112) = 0LL;
        *(_QWORD *)(v22 + 1136) = 0LL;
        if ( v38 )
        {
          LOBYTE(v37) = 1;
          SepModifyTokenPolicyCounter(v22 + 88, v37);
        }
        if ( (*((_DWORD *)a1 + 50) & 0x20) != 0 )
        {
          v40 = SepReferenceLogonSession((__int64)a1 + 24, v22 + 216);
          if ( v40 < 0 )
          {
            *(_DWORD *)(v22 + 200) |= 0x20u;
            *(_QWORD *)(v22 + 216) = 0LL;
            goto LABEL_110;
          }
        }
        else
        {
          v39 = *((_QWORD *)a1 + 27);
          *(_QWORD *)(v22 + 216) = v39;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v39 + 24)) <= 1 )
            __fastfail(0xEu);
          v40 = 0;
        }
        v41 = *((_QWORD *)a1 + 142);
        if ( v41 )
        {
          SepReferenceLuidToIndexEntry(*((_QWORD *)a1 + 142));
          v41 = *((_QWORD *)a1 + 142);
        }
        *(_QWORD *)(v22 + 1136) = v41;
        v42 = (_DWORD *)*((_QWORD *)a1 + 97);
        if ( *v42 )
        {
          v40 = AuthzBasepDuplicateSecurityAttributes((__int64)v42, *(_QWORD **)(v22 + 776), a7);
          if ( v40 < 0 )
            goto LABEL_110;
        }
        memmove((void *)(v22 + 1168), a1 + 73, *((unsigned int *)a1 + 33));
        v43 = v22 - (_QWORD)a1;
        if ( SepTokenSidSharingEnabled )
        {
          *(_QWORD *)(v22 + 152) = v43 + *((_QWORD *)a1 + 19);
          v40 = SepDuplicateTokenUserAndGroups(a1, v22);
          if ( v40 < 0 )
          {
            *(_QWORD *)(v22 + 152) = 0LL;
            goto LABEL_110;
          }
        }
        else
        {
          v44 = *((_DWORD *)a1 + 31);
          *(_DWORD *)(v22 + 124) = v44;
          v45 = (_QWORD *)(v43 + *((_QWORD *)a1 + 19));
          for ( *(_QWORD *)(v22 + 152) = v45; v44; --v44 )
          {
            *v45 += v43;
            v45 += 2;
          }
        }
        v46 = *((_QWORD *)a1 + 20);
        *(_QWORD *)(v22 + 160) = v46;
        if ( v46 )
        {
          v68 = *(_DWORD *)(v22 + 128);
          v69 = (_QWORD *)(v43 + v46);
          for ( *(_QWORD *)(v22 + 160) = v69; v68; --v68 )
          {
            *v69 += v43;
            v69 += 2;
          }
        }
        v47 = *((_QWORD *)a1 + 23);
        v48 = 4 * *(unsigned __int8 *)(*((_QWORD *)a1 + 21) + 1LL) + 8;
        if ( v47 )
          v48 += *(unsigned __int16 *)(v47 + 2);
        v49 = v48;
        v50 = (char *)ExAllocatePool2(256LL, v48, 1683252563LL);
        *(_QWORD *)(v22 + 176) = v50;
        v51 = v50;
        if ( !v50 )
          goto LABEL_118;
        memmove(v50, *((const void **)a1 + 22), v49);
        v52 = *((_QWORD *)a1 + 23);
        v53 = &v51[-*((_QWORD *)a1 + 22)];
        *(_QWORD *)(v22 + 184) = v52;
        if ( v52 )
          *(_QWORD *)(v22 + 184) = &v53[v52];
        *(_QWORD *)(v22 + 168) = &v53[*((_QWORD *)a1 + 21)];
        v54 = *((_DWORD *)a1 + 200);
        if ( v54 )
          v40 = SepSetTokenCapabilities(v22, *((void **)a1 + 98), *((void **)a1 + 99), v54);
        if ( v40 >= 0 )
        {
          v55 = (unsigned __int8 *)*((_QWORD *)a1 + 98);
          if ( v55 )
          {
            v56 = SepSetTokenPackage(v22, v55);
            if ( v56 < 0 )
              goto LABEL_117;
          }
          v57 = *((_QWORD *)a1 + 135);
          if ( v57 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v57 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v22 + 1080) = *((_QWORD *)a1 + 135);
          }
          v58 = *((_QWORD *)a1 + 136);
          if ( v58 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v58 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v22 + 1088) = *((_QWORD *)a1 + 136);
          }
          v59 = *((_QWORD *)a1 + 144);
          if ( v59 )
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v59 + 24)) <= 1 )
              __fastfail(0xEu);
            *(_QWORD *)(v22 + 1152) = *((_QWORD *)a1 + 144);
          }
          if ( *((_QWORD *)a1 + 137) )
          {
            v56 = SepDuplicateTokenClaims(a1, v22);
            if ( v56 < 0 )
            {
LABEL_117:
              ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
              KeLeaveCriticalRegion();
              ObfDereferenceObject((PVOID)v22);
              return (unsigned int)v56;
            }
          }
          v60 = (unsigned __int8 *)*((_QWORD *)a1 + 138);
          v61 = 0LL;
          if ( !v60 )
            goto LABEL_55;
          v62 = 4 * v60[1] + 8;
          v63 = (void *)ExAllocatePool2(256LL, v62, 1767073107LL);
          v61 = v63;
          if ( v63 )
          {
            v64 = 4 * v60[1] + 8;
            if ( v64 <= v62 )
              memmove(v63, v60, v64);
LABEL_55:
            v65 = *(void **)(v22 + 1104);
            if ( v65 )
            {
              ExFreePoolWithTag(v65, 0);
              *(_QWORD *)(v22 + 1104) = 0LL;
            }
            *(_QWORD *)(v22 + 1104) = v61;
            ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
            KeLeaveCriticalRegion();
            if ( HIDWORD(NlsMbOemCodePageTag) )
            {
              **(_QWORD **)(v22 + 1144) = KeGetCurrentThread()[1].CycleTime;
              *(_QWORD *)(*(_QWORD *)(v22 + 1144) + 8LL) = *(_QWORD *)&KeGetCurrentThread()[1].CurrentRunTime;
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 32LL) = 13;
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 280LL) = 0;
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 284LL) = 0;
              v77 = *(_QWORD *)(v22 + 1144);
              Process = KeGetCurrentThread()->ApcState.Process;
              *(_QWORD *)(v77 + 16) = *(_QWORD *)&Process[1].ActiveProcessors.Count;
              *(_DWORD *)(v77 + 24) = Process[1].ActiveProcessors.Bitmap[0];
              *(_WORD *)(v77 + 28) = WORD2(Process[1].ActiveProcessors.StaticBitmap[0]);
              *(_BYTE *)(v77 + 30) = BYTE6(Process[1].ActiveProcessors.StaticBitmap[0]);
              SepAddTokenLogonSession(v22);
            }
            if ( a3 )
              SepMakeTokenEffectiveOnly(v22);
            RtlSidHashInitialize(*(__int64 **)(v22 + 152), *(_DWORD *)(v22 + 124), (_QWORD *)(v22 + 232));
            RtlSidHashInitialize(*(__int64 **)(v22 + 160), *(_DWORD *)(v22 + 128), (_QWORD *)(v22 + 504));
            v66 = *(__int64 **)(v22 + 792);
            if ( v66 )
              RtlSidHashInitialize(v66, *(_DWORD *)(v22 + 800), (_QWORD *)(v22 + 808));
            if ( HIDWORD(NlsMbOemCodePageTag)
              && SepTokenLeakMethodWatch == 13
              && KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink == (struct _LIST_ENTRY *)SepTokenLeakProcessCid )
            {
              *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 280LL) = _InterlockedIncrement(&SepTokenLeakMethodCount);
              v79 = *(_DWORD *)(*(_QWORD *)(v22 + 1144) + 280LL);
              if ( v79 >= SepTokenLeakBreakCount )
              {
                DbgPrint("\nToken number 0x%x = 0x%p\n", v79, (const void *)v22);
                __debugbreak();
              }
            }
            *a8 = v22;
            return 0LL;
          }
LABEL_118:
          ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
          KeLeaveCriticalRegion();
          ObfDereferenceObject((PVOID)v22);
          return 3221225626LL;
        }
LABEL_110:
        ExReleaseResourceLite(*((PERESOURCE *)a1 + 6));
        KeLeaveCriticalRegion();
        ObfDereferenceObject((PVOID)v22);
        return (unsigned int)v40;
      }
    }
LABEL_94:
    if ( *((_QWORD *)&v83 + 1) )
      ObpFreeObjectNameBuffer((__int64)&v83);
    Next = v18[2].Next;
    if ( Next )
    {
      SeReleaseSecurityDescriptor(Next, (char)v18[1].Next, 1);
      v18[2].Next = 0LL;
    }
    v74 = KeGetCurrentPrcb();
    v75 = v74->PPLookasideList[4].P;
    ++v75->TotalFrees;
    if ( LOWORD(v75->ListHead.Alignment) < v75->Depth
      || (++v75->FreeMisses,
          v75 = v74->PPLookasideList[4].L,
          ++v75->TotalFrees,
          LOWORD(v75->ListHead.Alignment) < v75->Depth) )
    {
      RtlpInterlockedPushEntrySList(&v75->ListHead, v18);
    }
    else
    {
      ++v75->FreeMisses;
      ((void (__fastcall *)(PSLIST_ENTRY))v75->FreeEx)(v18);
    }
    goto LABEL_86;
  }
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v13, 0);
  if ( HIDWORD(NlsMbOemCodePageTag) )
    ExFreePoolWithTag(v9, 0);
  return 3221225621LL;
}
