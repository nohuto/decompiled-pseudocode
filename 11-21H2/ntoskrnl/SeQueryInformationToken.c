/*
 * XREFs of SeQueryInformationToken @ 0x14079F290
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     sub_1402EF324 @ 0x1402EF324 (sub_1402EF324.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_1406718F8 @ 0x1406718F8 (sub_1406718F8.c)
 *     sub_140678C4C @ 0x140678C4C (sub_140678C4C.c)
 *     sub_140695A40 @ 0x140695A40 (sub_140695A40.c)
 *     sub_1406998CC @ 0x1406998CC (sub_1406998CC.c)
 *     sub_1406B6830 @ 0x1406B6830 (sub_1406B6830.c)
 *     sub_1406B6958 @ 0x1406B6958 (sub_1406B6958.c)
 *     sub_1406C0B60 @ 0x1406C0B60 (sub_1406C0B60.c)
 *     sub_1406C0D00 @ 0x1406C0D00 (sub_1406C0D00.c)
 *     sub_1406C5404 @ 0x1406C5404 (sub_1406C5404.c)
 *     sub_1406C7488 @ 0x1406C7488 (sub_1406C7488.c)
 *     sub_1406C9928 @ 0x1406C9928 (sub_1406C9928.c)
 *     sub_14070AFEC @ 0x14070AFEC (sub_14070AFEC.c)
 *     sub_14070B610 @ 0x14070B610 (sub_14070B610.c)
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtDuplicateToken @ 0x1407297A0 (NtDuplicateToken.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     RtlIsSandboxedToken @ 0x14079F1E0 (RtlIsSandboxedToken.c)
 *     sub_1407CA1C0 @ 0x1407CA1C0 (sub_1407CA1C0.c)
 *     sub_1408315A4 @ 0x1408315A4 (sub_1408315A4.c)
 *     sub_140857B98 @ 0x140857B98 (sub_140857B98.c)
 *     sub_140918670 @ 0x140918670 (sub_140918670.c)
 *     sub_1409BA210 @ 0x1409BA210 (sub_1409BA210.c)
 *     sub_1409CC77C @ 0x1409CC77C (sub_1409CC77C.c)
 * Callees:
 *     sub_14022B1D0 @ 0x14022B1D0 (sub_14022B1D0.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402ECB64 @ 0x1402ECB64 (sub_1402ECB64.c)
 *     sub_1402ED7E0 @ 0x1402ED7E0 (sub_1402ED7E0.c)
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     sub_1402EF3E8 @ 0x1402EF3E8 (sub_1402EF3E8.c)
 *     RtlSubAuthorityCountSid @ 0x1402EF420 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     sub_1402FDEE8 @ 0x1402FDEE8 (sub_1402FDEE8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     sub_1406A293C @ 0x1406A293C (sub_1406A293C.c)
 *     sub_1406A2C44 @ 0x1406A2C44 (sub_1406A2C44.c)
 *     sub_1406C1884 @ 0x1406C1884 (sub_1406C1884.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 *     SeQuerySessionIdToken @ 0x14079FB80 (SeQuerySessionIdToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall SeQueryInformationToken(
        PACCESS_TOKEN Token,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID *TokenInformation)
{
  char *v3; // rdi
  int v7; // eax
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v10; // edi
  __int64 Pool2; // rax
  _QWORD *v12; // rbx
  _DWORD *v13; // rdx
  void *v14; // r9
  unsigned int v15; // ecx
  unsigned __int8 *v16; // rdx
  unsigned int v17; // eax
  bool v18; // al
  bool *v19; // r8
  struct _KTHREAD *v20; // rax
  __int64 v21; // rax
  _DWORD *v22; // r12
  struct _KTHREAD *v23; // rcx
  unsigned int v24; // r15d
  bool v25; // bl
  BOOLEAN IsElevatedRid; // al
  struct _KTHREAD *v27; // rax
  int v28; // ecx
  _DWORD *v29; // rax
  int v30; // edx
  __int64 v31; // rax
  struct _KTHREAD *v32; // rax
  __int64 v33; // rax
  int v34; // edx
  struct _KTHREAD *v35; // rax
  __int64 v36; // rbx
  unsigned int v37; // r15d
  __int64 v38; // rax
  _QWORD *v39; // rdi
  struct _KTHREAD *v40; // rax
  unsigned int v41; // r15d
  __int64 v42; // rax
  void *v43; // r8
  struct _KTHREAD *v44; // rax
  unsigned int v45; // edi
  _QWORD *v46; // rax
  _DWORD *v47; // rax
  struct _KTHREAD *v48; // rax
  unsigned int v49; // ecx
  ULONG v50; // ebx
  ULONG v51; // eax
  __int64 v52; // r8
  __int64 *v53; // rdx
  __int64 v54; // rax
  __int64 v55; // rax
  void *v56; // rdi
  struct _KTHREAD *v57; // rax
  unsigned int v58; // eax
  unsigned int v59; // ebx
  _DWORD *v60; // rax
  struct _KTHREAD *v61; // rax
  int v62; // eax
  unsigned int v63; // ecx
  int v64; // r9d
  unsigned int v65; // r12d
  __int64 *v66; // rdx
  __int64 v67; // r8
  __int64 v68; // rax
  unsigned int v69; // eax
  unsigned int v70; // r13d
  unsigned int v71; // r15d
  __int64 *v72; // rdx
  __int64 v73; // r8
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rbx
  _SID_AND_ATTRIBUTES *v77; // r9
  char *v78; // rax
  __int64 v79; // rcx
  ULONG v80; // r12d
  struct _KTHREAD *v81; // rax
  unsigned int v82; // edi
  _QWORD *v83; // rax
  struct _KTHREAD *v84; // rax
  __int64 v85; // rax
  __int64 v86; // r15
  __int64 v87; // rax
  void *v88; // rcx
  _OWORD *v89; // rax
  _DWORD *v90; // rax
  struct _KTHREAD *v91; // rax
  unsigned int v92; // ecx
  ULONG v93; // ebx
  ULONG v94; // eax
  __int64 *v95; // rdx
  __int64 v96; // r8
  __int64 v97; // rax
  __int64 v98; // rax
  struct _KTHREAD *v99; // rax
  __int64 v100; // r15
  __int128 *v101; // rax
  __int128 *v102; // r15
  unsigned int v103; // ebx
  _OWORD *v104; // rax
  void *v105; // rdi
  NTSTATUS v106; // ebx
  struct _KTHREAD *v107; // rax
  int *v108; // rax
  unsigned int v109; // ebx
  ULONG v110; // edi
  __int64 *v111; // rdx
  __int64 v112; // r8
  __int64 v113; // rax
  unsigned int v114; // ecx
  char *v115; // r15
  struct _KTHREAD *v116; // rax
  struct _KTHREAD *v117; // rax
  __int64 v118; // rax
  __int64 v119; // rbx
  unsigned int v120; // [rsp+80h] [rbp-39h] BYREF
  int v121; // [rsp+84h] [rbp-35h] BYREF
  unsigned int v122; // [rsp+88h] [rbp-31h] BYREF
  unsigned int v123; // [rsp+8Ch] [rbp-2Dh] BYREF
  unsigned int v124; // [rsp+90h] [rbp-29h] BYREF
  unsigned int v125; // [rsp+94h] [rbp-25h] BYREF
  int v126; // [rsp+98h] [rbp-21h] BYREF
  __int128 v127; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v128; // [rsp+B0h] [rbp-9h]
  __int128 v129; // [rsp+C0h] [rbp+7h] BYREF
  PSID Sid[8]; // [rsp+D0h] [rbp+17h]
  PSID RemainingSidArea; // [rsp+120h] [rbp+67h] BYREF
  int v132; // [rsp+128h] [rbp+6Fh] BYREF
  unsigned int v133; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = 0LL;
  v132 = 0;
  v126 = 0;
  v127 = 0LL;
  v128 = 0LL;
  v129 = 0LL;
  if ( TokenInformationClass == TokenVirtualizationEnabled )
  {
    v7 = *((_DWORD *)Token + 50) >> 10;
LABEL_3:
    *(_DWORD *)TokenInformation = v7 & 1;
    return 0;
  }
  switch ( TokenInformationClass )
  {
    case TokenUser:
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v10 = 4 * *(unsigned __int8 *)(**((_QWORD **)Token + 19) + 1LL) + 24;
      Pool2 = ExAllocatePool2(256LL, v10, 538994003LL);
      v12 = (_QWORD *)Pool2;
      if ( !Pool2 )
        goto LABEL_69;
      v13 = (_DWORD *)*((_QWORD *)Token + 19);
      v14 = (void *)(Pool2 + 16);
      v15 = 4 * *(unsigned __int8 *)(*(_QWORD *)v13 + 1LL) + 8;
      if ( v15 <= v10 )
      {
        *(_QWORD *)Pool2 = v14;
        *(_DWORD *)(Pool2 + 8) = v13[2];
        v16 = *(unsigned __int8 **)v13;
        v17 = 4 * v16[1] + 8;
        if ( v17 <= v15 )
          memmove(v14, v16, v17);
      }
      goto LABEL_10;
    case TokenGroups:
      v48 = KeGetCurrentThread();
      --*((_WORD *)v48 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v49 = *((_DWORD *)Token + 31);
      v50 = 16 * v49 - 8;
      v51 = v50;
      if ( v49 > 1 )
      {
        v52 = v49 - 1;
        v53 = (__int64 *)(*((_QWORD *)Token + 19) + 16LL);
        do
        {
          v54 = *v53;
          v53 += 2;
          v50 += 4 * *(unsigned __int8 *)(v54 + 1) + 8;
          v51 = v50;
          --v52;
        }
        while ( v52 );
      }
      v55 = ExAllocatePool2(256LL, v51, 538994003LL);
      v56 = (void *)v55;
      if ( !v55 )
        goto LABEL_69;
      *(_DWORD *)v55 = *((_DWORD *)Token + 31) - 1;
      RtlCopySidAndAttributesArray(
        *((_DWORD *)Token + 31) - 1,
        (PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL),
        v50,
        (PSID_AND_ATTRIBUTES)(v55 + 8),
        (PSID)(v55 + (unsigned int)(16 * *((_DWORD *)Token + 31) - 32) + 24LL),
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      result = 0;
      *TokenInformation = v56;
      return result;
    case TokenPrivileges:
      v57 = KeGetCurrentThread();
      --*((_WORD *)v57 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v58 = sub_14022B1D0((__int64)Token);
      if ( v58 <= 1 )
        v59 = 16;
      else
        v59 = 12 * v58 + 4;
      v60 = (_DWORD *)ExAllocatePool2(256LL, v59, 538994003LL);
      v12 = v60;
      if ( !v60 )
        goto LABEL_69;
      sub_1402ECB64((__int64)Token, v60);
      goto LABEL_10;
    case TokenOwner:
      v81 = KeGetCurrentThread();
      --*((_WORD *)v81 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v82 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)) + 1LL)
          + 16;
      v83 = (_QWORD *)ExAllocatePool2(256LL, v82, 538994003LL);
      v12 = v83;
      if ( !v83 )
        goto LABEL_69;
      *v83 = v83 + 1;
      RtlCopySid(v82 - 8, v83 + 1, *(PSID *)(*((_QWORD *)Token + 19) + 16LL * *((unsigned int *)Token + 36)));
      goto LABEL_10;
    case TokenPrimaryGroup:
      v44 = KeGetCurrentThread();
      --*((_WORD *)v44 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v45 = 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) + 16;
      v46 = (_QWORD *)ExAllocatePool2(256LL, v45, 538994003LL);
      v12 = v46;
      if ( !v46 )
        goto LABEL_69;
      *v46 = v46 + 1;
      RtlCopySid(v45 - 8, v46 + 1, *((PSID *)Token + 21));
      goto LABEL_10;
    case TokenDefaultDacl:
      v84 = KeGetCurrentThread();
      --*((_WORD *)v84 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v85 = *((_QWORD *)Token + 23);
      v86 = 8LL;
      if ( v85 )
        v86 = *(unsigned __int16 *)(v85 + 2) + 8LL;
      v87 = ExAllocatePool2(256LL, v86, 538994003LL);
      v12 = (_QWORD *)v87;
      if ( !v87 )
        goto LABEL_69;
      v88 = (void *)(v87 + 8);
      if ( !*((_QWORD *)Token + 23) )
        goto LABEL_140;
      *(_QWORD *)v87 = v88;
      memmove(v88, *((const void **)Token + 23), *(unsigned __int16 *)(*((_QWORD *)Token + 23) + 2LL));
      goto LABEL_10;
    case TokenSource:
      v89 = (_OWORD *)ExAllocatePool2(256LL, 16LL, 538994003LL);
      if ( !v89 )
        return -1073741670;
      *v89 = *(_OWORD *)Token;
      *TokenInformation = v89;
      return 0;
    case TokenType:
      v90 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
      if ( !v90 )
        return -1073741670;
      *v90 = *((_DWORD *)Token + 48);
      *TokenInformation = v90;
      return 0;
    case TokenImpersonationLevel:
      if ( *((_DWORD *)Token + 48) != 2 )
        return -1073741821;
      v47 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
      if ( !v47 )
        return -1073741670;
      *v47 = *((_DWORD *)Token + 49);
      *TokenInformation = v47;
      return 0;
    case TokenStatistics:
      v31 = ExAllocatePool2(256LL, 56LL, 538994003LL);
      v12 = (_QWORD *)v31;
      if ( !v31 )
        return -1073741670;
      *(_QWORD *)v31 = *((_QWORD *)Token + 2);
      *(_QWORD *)(v31 + 8) = *((_QWORD *)Token + 3);
      *(_DWORD *)(v31 + 24) = *((_DWORD *)Token + 48);
      *(_DWORD *)(v31 + 28) = *((_DWORD *)Token + 49);
      *(_QWORD *)(v31 + 16) = *((_QWORD *)Token + 5);
      v32 = KeGetCurrentThread();
      --*((_WORD *)v32 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      *((_DWORD *)v12 + 8) = *((_DWORD *)Token + 34);
      v33 = *((_QWORD *)Token + 23);
      v34 = *((_DWORD *)Token + 34) - 4 * *(unsigned __int8 *)(*((_QWORD *)Token + 21) + 1LL) - 8;
      if ( v33 )
        v34 -= *(unsigned __int16 *)(v33 + 2);
      *((_DWORD *)v12 + 9) = v34;
      *((_DWORD *)v12 + 9) = *((_DWORD *)Token + 35);
      *((_DWORD *)v12 + 10) = *((_DWORD *)Token + 31) - 1;
      *((_DWORD *)v12 + 11) = sub_14022B1D0((__int64)Token);
      v12[6] = *((_QWORD *)Token + 7);
      goto LABEL_10;
    case TokenSessionId:
      SeQuerySessionIdToken(Token, (PULONG)TokenInformation);
      return 0;
    case TokenGroupsAndPrivileges:
      v61 = KeGetCurrentThread();
      --*((_WORD *)v61 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v62 = sub_14022B1D0((__int64)Token);
      v63 = *((_DWORD *)Token + 31);
      LODWORD(RemainingSidArea) = v62;
      v64 = 12 * v62;
      v65 = 16 * v63;
      v132 = 12 * v62;
      v133 = 16 * v63;
      if ( v63 )
      {
        v66 = (__int64 *)*((_QWORD *)Token + 19);
        v67 = v63;
        do
        {
          v68 = *v66;
          v66 += 2;
          v65 += (4 * *(unsigned __int8 *)(v68 + 1) + 15) & 0xFFFFFFF8;
          --v67;
        }
        while ( v67 );
      }
      v69 = *((_DWORD *)Token + 32);
      v70 = 16 * v69;
      v71 = 16 * v69;
      if ( v69 )
      {
        v72 = (__int64 *)*((_QWORD *)Token + 20);
        v73 = v69;
        do
        {
          v74 = *v72;
          v72 += 2;
          v71 += (4 * *(unsigned __int8 *)(v74 + 1) + 15) & 0xFFFFFFF8;
          --v73;
        }
        while ( v73 );
      }
      v75 = ExAllocatePool2(256LL, v71 + v65 + v64 + 56, 538994003LL);
      v76 = v75;
      if ( v75 )
      {
        v77 = (_SID_AND_ATTRIBUTES *)(v75 + 56);
        *(_QWORD *)(v75 + 48) = *((_QWORD *)Token + 3);
        *(_DWORD *)(v75 + 4) = v65;
        *(_DWORD *)v75 = *((_DWORD *)Token + 31);
        *(_QWORD *)(v75 + 8) = v75 + 56;
        *(_DWORD *)(v75 + 20) = v71;
        *(_DWORD *)(v75 + 16) = *((_DWORD *)Token + 32);
        if ( *((_DWORD *)Token + 32) )
          v3 = (char *)v77 + ((v65 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL);
        *(_QWORD *)(v75 + 24) = v3;
        *(_DWORD *)(v75 + 36) = v132;
        *(_DWORD *)(v75 + 32) = (_DWORD)RemainingSidArea;
        v78 = (char *)v77 + v71 + v65;
        v79 = v133;
        v80 = v65 - v133;
        *(_QWORD *)(v76 + 40) = v78;
        RtlCopySidAndAttributesArray(
          *((_DWORD *)Token + 31),
          *((PSID_AND_ATTRIBUTES *)Token + 19),
          v80,
          v77,
          (char *)v77 + v79,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        if ( *(_DWORD *)(v76 + 16) )
          RtlCopySidAndAttributesArray(
            *((_DWORD *)Token + 32),
            *((PSID_AND_ATTRIBUTES *)Token + 20),
            v71 - v70,
            *(PSID_AND_ATTRIBUTES *)(v76 + 24),
            (PSID)(*(_QWORD *)(v76 + 24) + v70),
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        sub_1402ED7E0(Token, *(_QWORD *)(v76 + 40));
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        result = 0;
        *TokenInformation = (PVOID)v76;
      }
      else
      {
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return -1073741670;
      }
      return result;
    case TokenElevationType:
      v29 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
      if ( !v29 )
        return -1073741670;
      v30 = *(_DWORD *)(*((_QWORD *)Token + 27) + 32LL);
      if ( (v30 & 4) != 0 )
      {
        *v29 = 3;
        *TokenInformation = v29;
      }
      else
      {
        if ( (v30 & 2) != 0 )
          *v29 = 2;
        else
          *v29 = 1;
        *TokenInformation = v29;
      }
      return 0;
    case TokenElevation:
      v22 = (_DWORD *)ExAllocatePool2(256LL, 4LL, 538994003LL);
      if ( !v22 )
        return -1073741670;
      v23 = KeGetCurrentThread();
      --*((_WORD *)v23 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v24 = *((_DWORD *)Token + 31);
      v25 = (*((_QWORD *)Token + 8) & 0x1120160684LL) != 0;
      if ( v24 )
      {
        do
        {
          if ( v25 )
            break;
          IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)Token + 19) + 16LL * (unsigned int)v3));
          LODWORD(v3) = (_DWORD)v3 + 1;
          v25 = IsElevatedRid;
        }
        while ( (unsigned int)v3 < v24 );
      }
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *v22 = v25;
      *TokenInformation = v22;
      return 0;
    case TokenHasRestrictions:
    case TokenVirtualizationAllowed:
    case TokenUIAccess:
    case TokenIsAppContainer:
    case TokenPrivateNameSpace:
    case TokenIsSandboxed:
      switch ( TokenInformationClass )
      {
        case TokenVirtualizationAllowed:
          if ( (*((_DWORD *)Token + 50) & 0x200) == 0 )
          {
LABEL_48:
            *(_DWORD *)TokenInformation = (_DWORD)v3;
            return 0;
          }
          *(_DWORD *)TokenInformation = 1;
          break;
        case TokenUIAccess:
          v7 = *((_DWORD *)Token + 50) >> 12;
          goto LABEL_3;
        case TokenIsAppContainer:
          v7 = *((_DWORD *)Token + 50) >> 14;
          goto LABEL_3;
        case TokenHasRestrictions:
          *(_BYTE *)TokenInformation = (*((_DWORD *)Token + 50) & 0x810) != 0;
          break;
        case TokenPrivateNameSpace:
          LODWORD(v3) = (*((_DWORD *)Token + 50) & 0x10000) != 0;
          goto LABEL_48;
        default:
          v18 = sub_1402EF3E8(Token, *((_BYTE *)KeGetCurrentThread() + 562));
          *v19 = v18;
          return 0;
      }
      return 0;
    case TokenAccessInformation:
      v40 = KeGetCurrentThread();
      v125 = 0;
      v124 = 0;
      v123 = 0;
      --*((_WORD *)v40 + 242);
      v122 = 0;
      v121 = 0;
      v120 = 0;
      v133 = 0;
      LODWORD(RemainingSidArea) = 0;
      v132 = 0;
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v41 = sub_1406A2C44(
              (__int64)Token,
              0,
              0LL,
              &v126,
              (int *)&v125,
              (int *)&v124,
              (int *)&v123,
              (int *)&v122,
              (unsigned int *)&v121,
              (int *)&v120,
              (int *)&v133,
              (unsigned int *)&RemainingSidArea,
              &v132);
      v42 = ExAllocatePool2(256LL, v41, 538994003LL);
      v12 = (_QWORD *)v42;
      if ( !v42 )
        goto LABEL_69;
      sub_1406A293C(
        (__int64)Token,
        v42,
        v41,
        v126,
        v125,
        v124,
        v123,
        v122,
        v121,
        v120,
        v133,
        (int)RemainingSidArea,
        v132,
        0,
        0LL);
      goto LABEL_10;
    case TokenIntegrityLevel:
      v27 = KeGetCurrentThread();
      *(_OWORD *)Sid = 0LL;
      --*((_WORD *)v27 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      sub_1402ED98C((__int64)Token);
      v28 = *RtlSubAuthorityCountSid(Sid[0]);
      if ( (_BYTE)v28 )
        LODWORD(v3) = *RtlSubAuthoritySid(Sid[0], v28 - 1);
      *(_DWORD *)TokenInformation = (_DWORD)v3;
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      return 0;
    case TokenCapabilities:
      v91 = KeGetCurrentThread();
      --*((_WORD *)v91 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v92 = *((_DWORD *)Token + 200);
      v93 = 16 * v92 + 24;
      v94 = v93;
      if ( v92 )
      {
        v95 = (__int64 *)*((_QWORD *)Token + 99);
        v96 = v92;
        do
        {
          v97 = *v95;
          v95 += 2;
          v93 += 4 * *(unsigned __int8 *)(v97 + 1) + 8;
          v94 = v93;
          --v96;
        }
        while ( v96 );
      }
      v98 = ExAllocatePool2(256LL, v94, 538994003LL);
      v39 = (_QWORD *)v98;
      if ( !v98 )
        goto LABEL_69;
      *(_DWORD *)v98 = *((_DWORD *)Token + 200);
      RtlCopySidAndAttributesArray(
        *((_DWORD *)Token + 200),
        *((PSID_AND_ATTRIBUTES *)Token + 99),
        v93,
        (PSID_AND_ATTRIBUTES)(v98 + 8),
        (PSID)(v98 + (unsigned int)(16 * *((_DWORD *)Token + 200)) + 24LL),
        &RemainingSidArea,
        (PULONG)&RemainingSidArea);
      goto LABEL_45;
    case TokenAppContainerSid:
      v35 = KeGetCurrentThread();
      --*((_WORD *)v35 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v36 = *((_QWORD *)Token + 98);
      if ( v36 )
        v37 = 4 * *(unsigned __int8 *)(v36 + 1) + 16;
      else
        v37 = 8;
      v38 = ExAllocatePool2(256LL, v37, 538994003LL);
      v39 = (_QWORD *)v38;
      if ( !v38 )
        goto LABEL_69;
      if ( !v36 )
        goto LABEL_44;
      v43 = (void *)*((_QWORD *)Token + 98);
      goto LABEL_55;
    case TokenAppContainerNumber:
      v20 = KeGetCurrentThread();
      --*((_WORD *)v20 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v21 = *((_QWORD *)Token + 135);
      if ( v21 )
        LODWORD(v3) = *(_DWORD *)(v21 + 40);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *(_DWORD *)TokenInformation = (_DWORD)v3;
      return 0;
    case TokenUserClaimAttributes:
    case TokenDeviceClaimAttributes:
      *TokenInformation = 0LL;
      v99 = KeGetCurrentThread();
      --*((_WORD *)v99 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v100 = *((_QWORD *)Token + 137);
      if ( v100
        && ((v101 = *(__int128 **)(v100 + 576)) != 0LL || TokenInformationClass != TokenUserClaimAttributes)
        && ((v102 = *(__int128 **)(v100 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
      {
        if ( TokenInformationClass == TokenUserClaimAttributes )
          v102 = v101;
        sub_1406C1884(v102, 0LL, 0, &v132);
        v103 = v132;
      }
      else
      {
        DWORD2(v128) = 0;
        *(_QWORD *)&v128 = (char *)&v127 + 8;
        v102 = &v127;
        v103 = 16;
        *((_QWORD *)&v127 + 1) = (char *)&v127 + 8;
        *((_QWORD *)&v129 + 1) = &v129;
        *(_QWORD *)&v129 = &v129;
      }
      v104 = (_OWORD *)ExAllocatePool2(256LL, v103, 538994003LL);
      v105 = v104;
      if ( !v104 )
        goto LABEL_69;
      v106 = sub_1406C1884(v102, v104, v103, &v132);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      if ( v106 >= 0 )
        *TokenInformation = v105;
      else
        ExFreePoolWithTag(v105, 0);
      return v106;
    case TokenDeviceGroups:
      v107 = KeGetCurrentThread();
      --*((_WORD *)v107 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v108 = (int *)*((_QWORD *)Token + 137);
      if ( v108 && (v109 = *v108) != 0 )
      {
        v110 = 16 * v109 + 8;
        v111 = (__int64 *)*((_QWORD *)v108 + 1);
        v112 = v109;
        do
        {
          v113 = *v111;
          v111 += 2;
          v110 += 4 * *(unsigned __int8 *)(v113 + 1) + 8;
          v114 = v110;
          --v112;
        }
        while ( v112 );
      }
      else
      {
        v109 = 0;
        v110 = 24;
        v114 = 24;
      }
      v115 = (char *)ExAllocatePool2(256LL, v114, 538994003LL);
      if ( !v115 )
        goto LABEL_69;
      *(_OWORD *)v115 = 0LL;
      *((_QWORD *)v115 + 2) = 0LL;
      *(_DWORD *)v115 = v109;
      if ( v109 )
        RtlCopySidAndAttributesArray(
          **((_DWORD **)Token + 137),
          *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)Token + 137) + 8LL),
          v110,
          (PSID_AND_ATTRIBUTES)(v115 + 8),
          &v115[16 * v109 + 8],
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *TokenInformation = v115;
      return 0;
    case TokenProcessTrustLevel:
      v116 = KeGetCurrentThread();
      --*((_WORD *)v116 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v36 = *((_QWORD *)Token + 138);
      if ( v36 )
        v37 = 4 * *(unsigned __int8 *)(v36 + 1) + 16;
      else
        v37 = 8;
      v38 = ExAllocatePool2(256LL, v37, 538994003LL);
      v39 = (_QWORD *)v38;
      if ( !v38 )
        goto LABEL_69;
      if ( !v36 )
        goto LABEL_44;
      v43 = (void *)*((_QWORD *)Token + 138);
LABEL_55:
      v36 = v38 + 8;
      RtlCopySid(v37 - 8, (PSID)(v38 + 8), v43);
LABEL_44:
      *v39 = v36;
LABEL_45:
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *TokenInformation = v39;
      return 0;
    case TokenBnoIsolation:
      v117 = KeGetCurrentThread();
      --*((_WORD *)v117 + 242);
      ExAcquireResourceSharedLite(*((PERESOURCE *)Token + 6), 1u);
      v118 = *((_QWORD *)Token + 144);
      v119 = 16LL;
      if ( v118 )
        v119 = *(unsigned __int16 *)(v118 + 42) + 16LL;
      v87 = ExAllocatePool2(256LL, v119, 538994003LL);
      v12 = (_QWORD *)v87;
      if ( !v87 )
      {
LABEL_69:
        ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
        KeLeaveCriticalRegion();
        return -1073741670;
      }
      if ( *((_QWORD *)Token + 144) )
      {
        *(_BYTE *)(v87 + 8) = 1;
        *(_QWORD *)v87 = v87 + 16;
        memmove(
          (void *)(v87 + 16),
          *(const void **)(*((_QWORD *)Token + 144) + 48LL),
          *(unsigned __int16 *)(*((_QWORD *)Token + 144) + 42LL));
      }
      else
      {
        *(_BYTE *)(v87 + 8) = 0;
LABEL_140:
        *(_QWORD *)v87 = 0LL;
      }
LABEL_10:
      ExReleaseResourceLite(*((PERESOURCE *)Token + 6));
      KeLeaveCriticalRegion();
      *TokenInformation = v12;
      return 0;
    case TokenIsLessPrivilegedAppContainer:
      if ( (*((_DWORD *)Token + 50) & 0x4000) != 0 )
        LODWORD(v3) = !sub_1402FDEE8((__int64)Token);
      *(_DWORD *)TokenInformation = (_DWORD)v3;
      return 0;
    default:
      return -1073741821;
  }
}
