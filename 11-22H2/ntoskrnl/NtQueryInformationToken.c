/*
 * XREFs of NtQueryInformationToken @ 0x140730A90
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405A9F00 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlpGetTokenNamedObjectPath @ 0x1409BCC7C (RtlpGetTokenNamedObjectPath.c)
 * Callees:
 *     SepConvertTokenPrivileges @ 0x14022698C (SepConvertTokenPrivileges.c)
 *     SepConvertTokenPrivilegesToLuidAndAttributes @ 0x1402269B0 (SepConvertTokenPrivilegesToLuidAndAttributes.c)
 *     SepCopyTokenIntegrity @ 0x140226B60 (SepCopyTokenIntegrity.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14022C948 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x14022CB90 (AuthzBasepQuerySecurityAttributesToken.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5D0 (ObfDereferenceObjectWithTag.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     SepIsSandboxedToken @ 0x1402979C4 (SepIsSandboxedToken.c)
 *     SepReferenceTokenByHandle @ 0x1402B0290 (SepReferenceTokenByHandle.c)
 *     SepSidInTokenSidHash @ 0x1402B6650 (SepSidInTokenSidHash.c)
 *     SepDeReferenceLogonSessionDirect @ 0x1403704D0 (SepDeReferenceLogonSessionDirect.c)
 *     SeQueryMandatoryPolicyToken @ 0x1403706A4 (SeQueryMandatoryPolicyToken.c)
 *     SepTokenPrivilegeCount @ 0x1403706C0 (SepTokenPrivilegeCount.c)
 *     Feature_2140978491__private_IsEnabledDeviceUsage @ 0x140411744 (Feature_2140978491__private_IsEnabledDeviceUsage.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     NtClose @ 0x1406E4570 (NtClose.c)
 *     RtlCopySidAndAttributesArray @ 0x140714F60 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x140715020 (RtlCopySid.c)
 *     RtlIsElevatedRid @ 0x14071A040 (RtlIsElevatedRid.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     SeSinglePrivilegeCheck @ 0x140738000 (SeSinglePrivilegeCheck.c)
 *     SepReferenceLogonSessionSilo @ 0x1407C38DC (SepReferenceLogonSessionSilo.c)
 *     AuthzBasepQueryClaimAttributesToken @ 0x1407CC404 (AuthzBasepQueryClaimAttributesToken.c)
 *     SepCopyTokenAccessInformation @ 0x1407F4034 (SepCopyTokenAccessInformation.c)
 *     SepGetTokenAccessInformationBufferSize @ 0x1407F4514 (SepGetTokenAccessInformationBufferSize.c)
 *     ExRaiseAccessViolation @ 0x1408742B0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00C10 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  ULONG v5; // r13d
  __int64 v8; // rdi
  KPROCESSOR_MODE PreviousMode; // r15
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  PULONG v13; // r14
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PVOID v16; // r12
  unsigned int v17; // r15d
  struct _ERESOURCE *v18; // rcx
  _DWORD *v19; // rcx
  char *v20; // rbx
  const void **v21; // r13
  unsigned int v22; // ecx
  unsigned int v23; // r14d
  unsigned int v24; // eax
  struct _ERESOURCE *v25; // rcx
  struct _KTHREAD *v26; // rax
  unsigned int *v27; // rbx
  unsigned int v28; // ecx
  ULONG v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r9
  struct _KTHREAD *v32; // rax
  unsigned int v33; // ecx
  ULONG v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // r9
  struct _KTHREAD *v37; // rax
  PVOID v38; // rdi
  unsigned int v39; // eax
  unsigned int v40; // ebx
  struct _KTHREAD *v41; // rax
  unsigned int v42; // ecx
  struct _KTHREAD *v43; // rax
  unsigned int v44; // ecx
  struct _KTHREAD *v45; // rax
  __int64 v46; // rax
  unsigned int v47; // eax
  char *v48; // rcx
  int v49; // edx
  struct _KTHREAD *v50; // rax
  int v51; // edx
  __int64 v52; // rax
  struct _KTHREAD *v53; // rax
  PVOID v54; // rbx
  int v55; // edi
  struct _KTHREAD *v56; // rax
  int v57; // r11d
  unsigned int v58; // ecx
  unsigned int v59; // r10d
  unsigned int v60; // r8d
  __int64 v61; // rdx
  __int64 v62; // r9
  unsigned int v63; // ecx
  unsigned int v64; // r12d
  unsigned int v65; // r15d
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // r9
  unsigned int v69; // ecx
  _SID_AND_ATTRIBUTES *v70; // r9
  _SID_AND_ATTRIBUTES *v71; // rdi
  __int64 v72; // r14
  struct _KTHREAD *v73; // rax
  PSID v74; // rdi
  char v75; // r15
  ULONG TokenAccessInformationBufferSize; // eax
  __int64 v77; // r9
  struct _KTHREAD *v78; // rax
  int v79; // ebx
  PVOID v80; // r14
  NTSTATUS v81; // r12d
  int v82; // eax
  int v83; // r9d
  _QWORD *v84; // rbx
  NTSTATUS v85; // r15d
  NTSTATUS inserted; // ebx
  struct _KTHREAD *v87; // rax
  PVOID v88; // r14
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v90; // r15d
  int v91; // edi
  struct _KTHREAD *v92; // rax
  PVOID v93; // rbx
  __int64 v94; // rax
  unsigned int v95; // ebx
  struct _KTHREAD *v96; // rax
  __int64 v97; // rcx
  char *v98; // rdx
  struct _KTHREAD *v99; // rax
  unsigned int v100; // ecx
  ULONG v101; // r8d
  __int64 v102; // rdx
  __int64 v103; // r9
  struct _KTHREAD *v104; // rax
  unsigned __int8 *Sid; // rdx
  unsigned int v106; // eax
  NTSTATUS MandatoryPolicyToken; // ebx
  PVOID v108; // rcx
  struct _KTHREAD *v109; // rax
  unsigned int v110; // ecx
  unsigned int v111; // r8d
  __int64 v112; // r9
  unsigned int v113; // eax
  struct _KTHREAD *v114; // rax
  __int64 v115; // r15
  __int128 *v116; // rcx
  __int128 *v117; // r15
  unsigned int v118; // ebx
  struct _ERESOURCE *v119; // rcx
  struct _KTHREAD *v120; // rax
  __int64 v121; // rdx
  ULONG v122; // r11d
  ULONG v123; // r8d
  __int64 v124; // rdx
  __int64 v125; // r9
  struct _KTHREAD *v126; // rax
  _QWORD *v127; // r15
  _DWORD *v128; // rcx
  unsigned int v129; // ebx
  unsigned int v130; // ebx
  struct _KTHREAD *v131; // rax
  char v132; // r9
  PSID v133; // r8
  unsigned __int8 *v134; // rcx
  char *v135; // rdx
  struct _KTHREAD *v136; // rax
  PVOID v137; // rbx
  __int64 v138; // rdx
  struct _KTHREAD *v139; // rax
  unsigned int v140; // ebx
  __int64 v141; // rax
  __int64 v142; // rdx
  size_t v143; // r8
  const void *v144; // rdx
  PSID SidArea; // [rsp+20h] [rbp-188h]
  __int64 v146; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  PSID DestinationSid; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v150; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS SecurityAttributesToken; // [rsp+A4h] [rbp-104h]
  int v152; // [rsp+A8h] [rbp-100h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-F8h] BYREF
  int v154; // [rsp+B8h] [rbp-F0h]
  int v155; // [rsp+BCh] [rbp-ECh] BYREF
  int v156; // [rsp+C0h] [rbp-E8h] BYREF
  int v157; // [rsp+C4h] [rbp-E4h] BYREF
  int v158; // [rsp+C8h] [rbp-E0h] BYREF
  PVOID v159; // [rsp+D0h] [rbp-D8h] BYREF
  int v160[2]; // [rsp+D8h] [rbp-D0h] BYREF
  int v161; // [rsp+E0h] [rbp-C8h] BYREF
  int v162; // [rsp+E4h] [rbp-C4h] BYREF
  unsigned int v163; // [rsp+E8h] [rbp-C0h]
  int v164; // [rsp+ECh] [rbp-BCh]
  __int128 v165; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v166; // [rsp+100h] [rbp-A8h]
  __int128 v167; // [rsp+110h] [rbp-98h] BYREF
  char *v168; // [rsp+120h] [rbp-88h]
  _SID_AND_ATTRIBUTES *v169; // [rsp+128h] [rbp-80h]
  _SID_AND_ATTRIBUTES Src; // [rsp+130h] [rbp-78h] BYREF
  _DWORD v171[2]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v172; // [rsp+148h] [rbp-60h]
  __int64 v173; // [rsp+150h] [rbp-58h]
  int v174; // [rsp+158h] [rbp-50h]
  int v175; // [rsp+15Ch] [rbp-4Ch]
  __int128 v176; // [rsp+160h] [rbp-48h]
  __int128 v177; // [rsp+170h] [rbp-38h]

  v5 = TokenInformationLength;
  v8 = 0LL;
  Object = 0LL;
  v150 = 0;
  v162 = 0;
  v161 = 0;
  v169 = 0LL;
  v152 = 0;
  Src = 0LL;
  RemainingSidArea = 0LL;
  v177 = 0LL;
  v165 = 0LL;
  v166 = 0LL;
  v167 = 0LL;
  LOBYTE(v146) = 0;
  DestinationSid = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( TokenInformationLength )
    {
      v10 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = (unsigned __int64)TokenInformation + TokenInformationLength - 1;
      if ( v10 > v11 || (*(_QWORD *)&TokenInformationLength = 0x7FFFFFFF0000LL, v11 >= 0x7FFFFFFF0000LL) )
        ExRaiseAccessViolation();
      v12 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v10 = *(_BYTE *)v10;
        v10 = (v10 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v10 != v12 );
    }
    else
    {
      *(_QWORD *)&TokenInformationLength = 0x7FFFFFFF0000LL;
    }
    v13 = ReturnLength;
    if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
      *(_QWORD *)&TokenInformationLength = ReturnLength;
    **(_DWORD **)&TokenInformationLength = **(_DWORD **)&TokenInformationLength;
  }
  else
  {
    v13 = ReturnLength;
  }
  switch ( TokenInformationClass )
  {
    case TokenUser:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v16 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v17 = 4 * *(unsigned __int8 *)(**((_QWORD **)v16 + 19) + 1LL) + 24;
      *v13 = v17;
      if ( v5 < v17 )
        goto LABEL_17;
      v20 = (char *)TokenInformation + 16;
      v21 = (const void **)*((_QWORD *)v16 + 19);
      v164 = 0;
      v168 = (char *)TokenInformation + 16;
      v163 = v17;
      while ( !(_DWORD)v8 )
      {
        v22 = 4 * *((unsigned __int8 *)*v21 + 1) + 8;
        v23 = (4 * *((unsigned __int8 *)*v21 + 1) + 11) & 0xFFFFFFFC;
        if ( v22 > v17 )
          goto LABEL_29;
        v17 -= v23;
        v163 = v17;
        *(_QWORD *)TokenInformation = v20;
        *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v21 + 2);
        v24 = 4 * *((unsigned __int8 *)*v21 + 1) + 8;
        if ( v24 <= v22 )
          memmove(v20, *v21, v24);
        v20 += v23;
        v168 = v20;
        LODWORD(v8) = 1;
        v164 = 1;
      }
      RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v20), v17);
LABEL_29:
      v25 = (struct _ERESOURCE *)*((_QWORD *)v16 + 6);
      goto LABEL_30;
    case TokenGroups:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v26 = KeGetCurrentThread();
      --v26->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v28 = v27[31];
      v29 = 16 * v28 - 8;
      if ( v28 > 1 )
      {
        v30 = *((_QWORD *)v27 + 19) + 16LL;
        v31 = v28 - 1;
        do
        {
          v29 += 4 * *(unsigned __int8 *)(*(_QWORD *)v30 + 1LL) + 8;
          v30 += 16LL;
          --v31;
        }
        while ( v31 );
      }
      *v13 = v29;
      if ( v5 < v29 )
        goto LABEL_38;
      *(_DWORD *)TokenInformation = v27[31] - 1;
      RtlCopySidAndAttributesArray(
        v27[31] - 1,
        (PSID_AND_ATTRIBUTES)(*((_QWORD *)v27 + 19) + 16LL),
        v29,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 16 * v27[31] - 8,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_40;
    case TokenPrivileges:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v37 = KeGetCurrentThread();
      --v37->KernelApcDisable;
      v38 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v39 = SepTokenPrivilegeCount((__int64)v38);
      if ( v39 <= 1 )
        v40 = 16;
      else
        v40 = 12 * v39 + 4;
      *v13 = v40;
      if ( v5 < v40 )
        goto LABEL_52;
      SepConvertTokenPrivileges((__int64)v38, TokenInformation);
      goto LABEL_54;
    case TokenOwner:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v41 = KeGetCurrentThread();
      --v41->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v42 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v27 + 19) + 16LL * v27[36]) + 1LL) + 16;
      *v13 = v42;
      if ( v5 < v42 )
        goto LABEL_38;
      *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
      RtlCopySid(v42 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v27 + 19) + 16LL * v27[36]));
      goto LABEL_40;
    case TokenPrimaryGroup:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v43 = KeGetCurrentThread();
      --v43->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v44 = 4 * *(unsigned __int8 *)(*((_QWORD *)v27 + 21) + 1LL) + 16;
      *v13 = v44;
      if ( v5 < v44 )
        goto LABEL_38;
      *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
      RtlCopySid(v44 - 8, (char *)TokenInformation + 8, *((PSID *)v27 + 21));
      goto LABEL_40;
    case TokenDefaultDacl:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v150 = 8;
      v45 = KeGetCurrentThread();
      --v45->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v46 = *((_QWORD *)v27 + 23);
      if ( v46 )
        v47 = *(unsigned __int16 *)(v46 + 2) + 8;
      else
        v47 = v150;
      *v13 = v47;
      if ( v5 < v47 )
        goto LABEL_38;
      v48 = (char *)TokenInformation + 8;
      if ( *((_QWORD *)v27 + 23) )
      {
        *(_QWORD *)TokenInformation = v48;
        memmove(v48, *((const void **)v27 + 23), *(unsigned __int16 *)(*((_QWORD *)v27 + 23) + 2LL));
      }
      else
      {
        *(_QWORD *)TokenInformation = 0LL;
      }
      goto LABEL_40;
    case TokenSource:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 0x10u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 16;
      if ( v5 < 0x10 )
        goto LABEL_19;
      v19 = Object;
      *(_OWORD *)TokenInformation = *(_OWORD *)Object;
      goto LABEL_32;
    case TokenType:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_19;
      v19 = Object;
      *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
      goto LABEL_32;
    case TokenImpersonationLevel:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v19 = Object;
      if ( *((_DWORD *)Object + 48) != 2 )
      {
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741821;
      }
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_20;
      *(_DWORD *)TokenInformation = v19[49];
      goto LABEL_32;
    case TokenStatistics:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 56;
      if ( v5 < 0x38 )
        goto LABEL_19;
      v50 = KeGetCurrentThread();
      --v50->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v154 = 0;
      *(_QWORD *)TokenInformation = *((_QWORD *)v27 + 2);
      *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v27 + 3);
      *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v27 + 5);
      *((_DWORD *)TokenInformation + 6) = v27[48];
      *((_DWORD *)TokenInformation + 7) = v27[49];
      *((_DWORD *)TokenInformation + 8) = v27[34];
      v51 = v27[34] - 4 * *(unsigned __int8 *)(*((_QWORD *)v27 + 21) + 1LL) - 8;
      v154 = v51;
      v52 = *((_QWORD *)v27 + 23);
      if ( v52 )
      {
        v51 -= *(unsigned __int16 *)(v52 + 2);
        v154 = v51;
      }
      *((_DWORD *)TokenInformation + 9) = v51;
      *((_DWORD *)TokenInformation + 10) = v27[31] - 1;
      *((_DWORD *)TokenInformation + 11) = SepTokenPrivilegeCount((__int64)v27);
      *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v27 + 7);
      goto LABEL_40;
    case TokenRestrictedSids:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v32 = KeGetCurrentThread();
      --v32->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v33 = v27[32];
      v34 = 16 * v33 + 8;
      if ( v33 )
      {
        v35 = *((_QWORD *)v27 + 20);
        v36 = v33;
        do
        {
          v34 += 4 * *(unsigned __int8 *)(*(_QWORD *)v35 + 1LL) + 8;
          v35 += 16LL;
          --v36;
        }
        while ( v36 );
      }
      *v13 = v34;
      if ( v5 < v34 )
        goto LABEL_38;
      *(_DWORD *)TokenInformation = v27[32];
      RtlCopySidAndAttributesArray(
        v27[32],
        *((PSID_AND_ATTRIBUTES *)v27 + 20),
        v34,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 16 * v27[32] + 8,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_40;
    case TokenSessionId:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_19;
      v53 = KeGetCurrentThread();
      --v53->KernelApcDisable;
      v54 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v55 = *((_DWORD *)v54 + 30);
      ExReleaseResourceLite(*((PERESOURCE *)v54 + 6));
      KeLeaveCriticalRegion();
      *(_DWORD *)TokenInformation = v55;
      *v13 = 4;
      goto LABEL_93;
    case TokenGroupsAndPrivileges:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v56 = KeGetCurrentThread();
      --v56->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v152 = SepTokenPrivilegeCount((__int64)v27);
      v57 = 12 * v152;
      v58 = v27[31];
      v59 = v58;
      v60 = 16 * v58;
      if ( v58 )
      {
        v61 = *((_QWORD *)v27 + 19);
        v62 = v58;
        do
        {
          v60 += (4 * *(unsigned __int8 *)(*(_QWORD *)v61 + 1LL) + 15) & 0xFFFFFFF8;
          v61 += 16LL;
          --v62;
        }
        while ( v62 );
      }
      v63 = v27[32];
      v64 = v63;
      v65 = 16 * v63;
      v66 = 16 * v63;
      if ( v63 )
      {
        v67 = *((_QWORD *)v27 + 20);
        v68 = v63;
        do
        {
          v65 += (4 * *(unsigned __int8 *)(*(_QWORD *)v67 + 1LL) + 15) & 0xFFFFFFF8;
          v66 = v65;
          v67 += 16LL;
          --v68;
        }
        while ( v68 );
      }
      v69 = v57 + v66 + v60 + 56;
      *v13 = v69;
      if ( v5 < v69 )
        goto LABEL_38;
      *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v27 + 3);
      *((_DWORD *)TokenInformation + 1) = v60;
      *(_DWORD *)TokenInformation = v27[31];
      v70 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
      *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
      *((_DWORD *)TokenInformation + 5) = v65;
      *((_DWORD *)TokenInformation + 4) = v27[32];
      if ( v27[32] )
      {
        v71 = (_SID_AND_ATTRIBUTES *)((char *)v70 + ((v60 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
        *((_QWORD *)TokenInformation + 3) = v71;
      }
      else
      {
        *((_QWORD *)TokenInformation + 3) = 0LL;
        v71 = v169;
      }
      *((_DWORD *)TokenInformation + 9) = v57;
      *((_DWORD *)TokenInformation + 8) = v152;
      v72 = (__int64)v70 + v65 + v60;
      *((_QWORD *)TokenInformation + 5) = v72;
      RtlCopySidAndAttributesArray(
        v27[31],
        *((PSID_AND_ATTRIBUTES *)v27 + 19),
        v60 - v59 * 16,
        v70,
        &v70[v59],
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      if ( v71 )
        RtlCopySidAndAttributesArray(
          v27[32],
          *((PSID_AND_ATTRIBUTES *)v27 + 20),
          v65 - v64 * 16,
          v71,
          &v71[v64],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      SepConvertTokenPrivilegesToLuidAndAttributes(v27, v72);
      goto LABEL_40;
    case TokenSandBoxInert:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        return -1073741789;
      v19 = Object;
      *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) >> 6) & 1;
      goto LABEL_32;
    case TokenAuditPolicy:
      if ( !SeSinglePrivilegeCheck(SeSecurityPrivilege, PreviousMode) )
        return -1073741727;
      result = SepReferenceTokenByHandle(TokenHandle, 8u, PreviousMode, v77, &Object, &v146, &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 31;
      if ( v5 < 0x1F )
        goto LABEL_19;
      v78 = KeGetCurrentThread();
      --v78->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      *(_OWORD *)TokenInformation = *(_OWORD *)(v27 + 22);
      *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v27 + 13);
      *((_DWORD *)TokenInformation + 6) = v27[28];
      *((_WORD *)TokenInformation + 14) = *((_WORD *)v27 + 58);
      *((_BYTE *)TokenInformation + 30) = *((_BYTE *)v27 + 118);
      goto LABEL_40;
    case TokenOrigin:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 8;
      if ( v5 < 8 )
        goto LABEL_19;
      v19 = Object;
      *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
      goto LABEL_32;
    case TokenElevationType:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_19;
      v19 = Object;
      v49 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
      if ( (v49 & 4) != 0 )
      {
        *(_DWORD *)TokenInformation = 3;
      }
      else
      {
        LOBYTE(v8) = (v49 & 2) != 0;
        *(_DWORD *)TokenInformation = v8 + 1;
      }
      goto LABEL_32;
    case TokenLinkedToken:
      *(_QWORD *)v160 = 0LL;
      Handle = 0LL;
      v159 = 0LL;
      v171[1] = 0;
      v175 = 0;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 8;
      if ( v5 == 8 )
      {
        v79 = -(SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) != 0);
        v80 = Object;
        v81 = SepReferenceLogonSessionSilo(
                *((_QWORD *)Object + 27) + 16LL,
                *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                v160);
        if ( v81 >= 0 )
        {
          v171[0] = 48;
          v172 = 0LL;
          v82 = 0;
          if ( !PreviousMode )
            v82 = 512;
          v174 = v82;
          v173 = 0LL;
          v176 = 0LL;
          v83 = v79 + 2;
          v84 = *(_QWORD **)v160;
          v85 = SepDuplicateToken(
                  *(__int128 **)(*(_QWORD *)v160 + 48LL),
                  (__int64)v171,
                  0,
                  v83,
                  1u,
                  0,
                  0,
                  (__int64 *)&v159);
          SepDeReferenceLogonSessionDirect(v84);
          if ( v85 >= 0 )
          {
            inserted = ObInsertObjectEx(v159, 0LL, 0, 0LL, (__int64)&Handle);
            if ( inserted >= 0 )
            {
              *(_QWORD *)TokenInformation = Handle;
              ObfDereferenceObjectWithTag(v80, 0x74726853u);
              return 0;
            }
            else
            {
              ObfDereferenceObjectWithTag(v80, 0x74726853u);
              return inserted;
            }
          }
          else
          {
            ObfDereferenceObjectWithTag(v80, 0x74726853u);
            return v85;
          }
        }
        else
        {
          ObfDereferenceObjectWithTag(v80, 0x74726853u);
          return v81;
        }
      }
      else
      {
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return -1073741820;
      }
    case TokenElevation:
      *v13 = 4;
      if ( v5 != 4 )
        return -1073741820;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v87 = KeGetCurrentThread();
      --v87->KernelApcDisable;
      v88 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      IsElevatedRid = (*((_QWORD *)v88 + 8) & 0x1120160684LL) != 0;
      v90 = *((_DWORD *)v88 + 31);
      if ( v90 )
      {
        do
        {
          if ( IsElevatedRid )
            break;
          IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v88 + 19) + 16LL * (unsigned int)v8));
          LODWORD(v8) = v8 + 1;
        }
        while ( (unsigned int)v8 < v90 );
      }
      ExReleaseResourceLite(*((PERESOURCE *)v88 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *(_DWORD *)TokenInformation = IsElevatedRid;
      goto LABEL_31;
    case TokenHasRestrictions:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 1;
      if ( !v5 )
        goto LABEL_19;
      v19 = Object;
      *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
      goto LABEL_32;
    case TokenAccessInformation:
      LODWORD(Handle) = 0;
      v160[0] = 0;
      LODWORD(v159) = 0;
      v158 = 0;
      v157 = 0;
      v156 = 0;
      v155 = 0;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v73 = KeGetCurrentThread();
      --v73->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v74 = DestinationSid;
      v75 = v146;
      TokenAccessInformationBufferSize = SepGetTokenAccessInformationBufferSize(
                                           (_DWORD)v27,
                                           (unsigned __int8)v146,
                                           (_DWORD)DestinationSid,
                                           (unsigned int)&v152,
                                           (__int64)&v162,
                                           (__int64)&Handle,
                                           (__int64)&v161,
                                           (__int64)v160,
                                           (__int64)&v159,
                                           (__int64)&v158,
                                           (__int64)&v157,
                                           (__int64)&v156,
                                           (__int64)&v155);
      *v13 = TokenAccessInformationBufferSize;
      if ( v5 < TokenAccessInformationBufferSize )
        goto LABEL_38;
      SepCopyTokenAccessInformation(
        (int)v27,
        (int)TokenInformation,
        v5,
        v152,
        v162,
        (int)Handle,
        v161,
        v160[0],
        (int)v159,
        v158,
        v157,
        v156,
        v155,
        v75,
        v74);
      goto LABEL_40;
    case TokenVirtualizationAllowed:
    case TokenVirtualizationEnabled:
    case TokenUIAccess:
    case TokenIsAppContainer:
    case TokenIsRestricted:
    case TokenPrivateNameSpace:
    case TokenIsSandboxed:
    case TokenIsAppSilo:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_19;
      v54 = Object;
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationAllowed:
          v91 = *((_DWORD *)Object + 50) >> 9;
          break;
        case TokenVirtualizationEnabled:
          v91 = *((_DWORD *)Object + 50) >> 10;
          break;
        case TokenUIAccess:
          v91 = *((_DWORD *)Object + 50) >> 12;
          break;
        case TokenIsRestricted:
          LOBYTE(v8) = (*((_DWORD *)Object + 50) & 0x18) != 0;
          goto LABEL_162;
        case TokenPrivateNameSpace:
          LOWORD(v91) = *((_WORD *)Object + 101);
          break;
        case TokenIsSandboxed:
          LODWORD(v8) = SepIsSandboxedToken(Object, PreviousMode);
          goto LABEL_162;
        case TokenIsAppSilo:
          LODWORD(v8) = (unsigned __int8)SepSidInTokenSidHash(
                                           (_DWORD *)Object + 202,
                                           0LL,
                                           (unsigned __int8 *)SeAppSiloSid,
                                           0,
                                           1,
                                           0);
          goto LABEL_162;
        default:
          v91 = *((_DWORD *)Object + 50) >> 14;
          break;
      }
      LODWORD(v8) = v91 & 1;
LABEL_162:
      *(_DWORD *)TokenInformation = v8;
LABEL_93:
      ObfDereferenceObjectWithTag(v54, 0x74726853u);
      return 0;
    case TokenIntegrityLevel:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v104 = KeGetCurrentThread();
      --v104->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      SepCopyTokenIntegrity((__int64)v27, (__int64)&Src);
      Sid = (unsigned __int8 *)Src.Sid;
      v106 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
      *v13 = v106;
      if ( v5 < v106 )
        goto LABEL_38;
      RtlCopySidAndAttributesArray(
        1u,
        &Src,
        4 * Sid[1] + 8,
        (PSID_AND_ATTRIBUTES)TokenInformation,
        (char *)TokenInformation + 16,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_40;
    case TokenMandatoryPolicy:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_19;
      MandatoryPolicyToken = SeQueryMandatoryPolicyToken((__int64)Object, TokenInformation);
      SecurityAttributesToken = MandatoryPolicyToken;
      ObfDereferenceObjectWithTag(v108, 0x74726853u);
      return MandatoryPolicyToken;
    case TokenLogonSid:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v109 = KeGetCurrentThread();
      --v109->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v110 = 0;
      v111 = v27[31];
      if ( !v111 )
        goto LABEL_196;
      v112 = *((_QWORD *)v27 + 19);
      break;
    case TokenCapabilities:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v99 = KeGetCurrentThread();
      --v99->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v100 = v27[200];
      v101 = 16 * v100 + 8;
      if ( v100 )
      {
        v102 = *((_QWORD *)v27 + 99);
        v103 = v100;
        do
        {
          v101 += 4 * *(unsigned __int8 *)(*(_QWORD *)v102 + 1LL) + 8;
          v102 += 16LL;
          --v103;
        }
        while ( v103 );
      }
      *v13 = v101;
      if ( v5 < v101 )
        goto LABEL_38;
      *(_DWORD *)TokenInformation = v27[200];
      RtlCopySidAndAttributesArray(
        v27[200],
        *((PSID_AND_ATTRIBUTES *)v27 + 99),
        v101,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 16 * v27[200] + 8,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_40;
    case TokenAppContainerSid:
      v95 = 8;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v96 = KeGetCurrentThread();
      --v96->KernelApcDisable;
      v38 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v97 = *((_QWORD *)v38 + 98);
      if ( v97 )
        v95 = 4 * *(unsigned __int8 *)(v97 + 1) + 16;
      *v13 = v95;
      if ( v5 < v95 )
        goto LABEL_52;
      v98 = (char *)TokenInformation + 8;
      if ( !v97 )
        v98 = 0LL;
      *(_QWORD *)TokenInformation = v98;
      if ( v98 )
        RtlCopySid(v95 - 8, v98, *((PSID *)v38 + 98));
      goto LABEL_54;
    case TokenAppContainerNumber:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      *v13 = 4;
      if ( v5 < 4 )
        goto LABEL_19;
      v92 = KeGetCurrentThread();
      --v92->KernelApcDisable;
      v93 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v94 = *((_QWORD *)v93 + 135);
      if ( v94 )
        LODWORD(v8) = *(_DWORD *)(v94 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)v93 + 6));
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      *(_DWORD *)TokenInformation = v8;
      goto LABEL_31;
    case TokenUserClaimAttributes:
    case TokenDeviceClaimAttributes:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v114 = KeGetCurrentThread();
      --v114->KernelApcDisable;
      v16 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v115 = *((_QWORD *)v16 + 137);
      if ( v115
        && ((v116 = *(__int128 **)(v115 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
        && ((v117 = *(__int128 **)(v115 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v117 = v116;
        AuthzBasepQueryClaimAttributesToken(v117, 0LL, 0LL, &v150);
        v118 = v150;
      }
      else
      {
        v118 = 16;
        *(_QWORD *)&v166 = (char *)&v165 + 8;
        *((_QWORD *)&v165 + 1) = (char *)&v165 + 8;
        DWORD2(v166) = 0;
        *((_QWORD *)&v167 + 1) = &v167;
        *(_QWORD *)&v167 = &v167;
        v117 = &v165;
      }
      *v13 = v118;
      if ( v5 < v118 )
      {
LABEL_17:
        v18 = (struct _ERESOURCE *)*((_QWORD *)v16 + 6);
        goto LABEL_18;
      }
      SecurityAttributesToken = AuthzBasepQueryClaimAttributesToken(v117, TokenInformation, v5, &v150);
      v119 = (struct _ERESOURCE *)*((_QWORD *)v16 + 6);
LABEL_212:
      ExReleaseResourceLite(v119);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ObfDereferenceObjectWithTag(Object, 0x74726853u);
      return SecurityAttributesToken;
    case TokenDeviceGroups:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v120 = KeGetCurrentThread();
      --v120->KernelApcDisable;
      v27 = (unsigned int *)Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v121 = *((_QWORD *)v27 + 137);
      if ( v121 && (v122 = *(_DWORD *)v121) != 0 )
      {
        v123 = 16 * v122 + 8;
      }
      else
      {
        v122 = 0;
        v123 = 24;
      }
      if ( v122 )
      {
        v124 = *(_QWORD *)(v121 + 8);
        v125 = v122;
        do
        {
          v123 += 4 * *(unsigned __int8 *)(*(_QWORD *)v124 + 1LL) + 8;
          v124 += 16LL;
          --v125;
        }
        while ( v125 );
      }
      *v13 = v123;
      if ( v5 < v123 )
        goto LABEL_38;
      *(_OWORD *)TokenInformation = 0LL;
      *((_QWORD *)TokenInformation + 2) = 0LL;
      *(_DWORD *)TokenInformation = v122;
      if ( v122 )
        RtlCopySidAndAttributesArray(
          v122,
          *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v27 + 137) + 8LL),
          v123,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v122 + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      goto LABEL_40;
    case TokenSecurityAttributes:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v126 = KeGetCurrentThread();
      --v126->KernelApcDisable;
      v127 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v128 = (_DWORD *)v127[97];
      if ( v128 )
      {
        LODWORD(SidArea) = 0;
        AuthzBasepQuerySecurityAttributesToken(v128, 0LL, 0LL, 0LL, (size_t)SidArea, &v150);
        v129 = v150;
      }
      else
      {
        v129 = 16;
      }
      *v13 = v129;
      if ( v5 < v129 )
        goto LABEL_230;
      LODWORD(SidArea) = v5;
      SecurityAttributesToken = AuthzBasepQuerySecurityAttributesToken(
                                  (_DWORD *)v127[97],
                                  0LL,
                                  0LL,
                                  TokenInformation,
                                  (size_t)SidArea,
                                  &v150);
      v119 = (struct _ERESOURCE *)v127[6];
      goto LABEL_212;
    case TokenProcessTrustLevel:
      v130 = 8;
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v131 = KeGetCurrentThread();
      --v131->KernelApcDisable;
      v38 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v132 = v146;
      v133 = DestinationSid;
      v134 = (unsigned __int8 *)DestinationSid;
      if ( !(_BYTE)v146 )
        v134 = (unsigned __int8 *)*((_QWORD *)v38 + 138);
      if ( v134 )
        v130 = 4 * v134[1] + 16;
      *v13 = v130;
      if ( v5 < v130 )
      {
LABEL_52:
        v18 = (struct _ERESOURCE *)*((_QWORD *)v38 + 6);
        goto LABEL_18;
      }
      v135 = (char *)TokenInformation + 8;
      if ( !v134 )
        v135 = 0LL;
      *(_QWORD *)TokenInformation = v135;
      if ( v135 )
      {
        if ( !v132 )
          v133 = (PSID)*((_QWORD *)v38 + 138);
        RtlCopySid(v130 - 8, v135, v133);
      }
LABEL_54:
      v25 = (struct _ERESOURCE *)*((_QWORD *)v38 + 6);
      goto LABEL_30;
    case TokenSingletonAttributes:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v136 = KeGetCurrentThread();
      --v136->KernelApcDisable;
      v137 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      SecurityAttributesToken = SepInternalQuerySecurityAttributesTokenEx(
                                  (__int64)v137,
                                  v138,
                                  0LL,
                                  0,
                                  1,
                                  (__int64)TokenInformation,
                                  v5,
                                  (__int64)v13);
      v119 = (struct _ERESOURCE *)*((_QWORD *)v137 + 6);
      goto LABEL_212;
    case TokenBnoIsolation:
      result = SepReferenceTokenByHandle(
                 TokenHandle,
                 8u,
                 PreviousMode,
                 *(__int64 *)&TokenInformationLength,
                 &Object,
                 &v146,
                 &DestinationSid);
      if ( result < 0 )
        return result;
      v139 = KeGetCurrentThread();
      --v139->KernelApcDisable;
      v127 = Object;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
      v140 = 16;
      v141 = v127[144];
      if ( v141 )
        v140 = *(unsigned __int16 *)(v141 + 42) + 16;
      *v13 = v140;
      if ( v5 < v140 )
      {
LABEL_230:
        v18 = (struct _ERESOURCE *)v127[6];
        goto LABEL_18;
      }
      if ( v127[144] )
      {
        *((_BYTE *)TokenInformation + 8) = 1;
        *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
        LOBYTE(v8) = (unsigned int)Feature_2140978491__private_IsEnabledDeviceUsage() != 0;
        v142 = v127[144];
        v143 = *(unsigned __int16 *)(v142 + 42);
        v144 = *(const void **)(v142 + 48);
        if ( (_DWORD)v8 )
          memmove((char *)TokenInformation + 16, v144, v143);
        else
          memmove(*(void **)TokenInformation, v144, v143);
      }
      else
      {
        *((_BYTE *)TokenInformation + 8) = 0;
        *(_QWORD *)TokenInformation = 0LL;
      }
      v25 = (struct _ERESOURCE *)v127[6];
      goto LABEL_30;
    default:
      return -1073741821;
  }
  while ( (*(_DWORD *)(v112 + 16LL * v110 + 8) & 0xC0000000) != 0xC0000000 )
  {
    if ( ++v110 >= v111 )
      goto LABEL_196;
  }
  v8 = *(_QWORD *)(v112 + 16LL * v110);
LABEL_196:
  if ( v8 )
  {
    v113 = 4 * *(unsigned __int8 *)(*(_QWORD *)(16LL * v110 + *((_QWORD *)v27 + 19)) + 1LL) + 32;
    *v13 = v113;
    if ( v5 < v113 )
    {
LABEL_38:
      v18 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
LABEL_18:
      ExReleaseResourceLite(v18);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_19:
      v19 = Object;
LABEL_20:
      ObfDereferenceObjectWithTag(v19, 0x74726853u);
      return -1073741789;
    }
    else
    {
      *(_DWORD *)TokenInformation = 1;
      RtlCopySidAndAttributesArray(
        1u,
        (PSID_AND_ATTRIBUTES)(*((_QWORD *)v27 + 19) + 16LL * v110),
        4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v27 + 19) + 16LL * v110) + 1LL) + 8,
        (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
        (char *)TokenInformation + 24,
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
LABEL_40:
      v25 = (struct _ERESOURCE *)*((_QWORD *)v27 + 6);
LABEL_30:
      ExReleaseResourceLite(v25);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
LABEL_31:
      v19 = Object;
LABEL_32:
      ObfDereferenceObjectWithTag(v19, 0x74726853u);
      return 0;
    }
  }
  else
  {
    ExReleaseResourceLite(*((PERESOURCE *)v27 + 6));
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(Object, 0x74726853u);
    return -1073741275;
  }
}
