/*
 * XREFs of NtQueryInformationToken @ 0x1407B13E0
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405E5200 (RtlGetAppContainerNamedObjectPath.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 * Callees:
 *     sub_14022B1D0 @ 0x14022B1D0 (sub_14022B1D0.c)
 *     sub_14022B1FC @ 0x14022B1FC (sub_14022B1FC.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     sub_1402D6A98 @ 0x1402D6A98 (sub_1402D6A98.c)
 *     sub_1402ECB64 @ 0x1402ECB64 (sub_1402ECB64.c)
 *     sub_1402ED7E0 @ 0x1402ED7E0 (sub_1402ED7E0.c)
 *     sub_1402ED98C @ 0x1402ED98C (sub_1402ED98C.c)
 *     sub_1402EF3E8 @ 0x1402EF3E8 (sub_1402EF3E8.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_1402F8F70 @ 0x1402F8F70 (sub_1402F8F70.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     sub_140300534 @ 0x140300534 (sub_140300534.c)
 *     sub_1403005E0 @ 0x1403005E0 (sub_1403005E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     RtlCopySidAndAttributesArray @ 0x14066A420 (RtlCopySidAndAttributesArray.c)
 *     RtlCopySid @ 0x14066A4E0 (RtlCopySid.c)
 *     sub_14066B900 @ 0x14066B900 (sub_14066B900.c)
 *     sub_1406A293C @ 0x1406A293C (sub_1406A293C.c)
 *     sub_1406A2C44 @ 0x1406A2C44 (sub_1406A2C44.c)
 *     sub_1406C1884 @ 0x1406C1884 (sub_1406C1884.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     RtlIsElevatedRid @ 0x14079FAF0 (RtlIsElevatedRid.c)
 *     SeQuerySessionIdToken @ 0x14079FB80 (SeQuerySessionIdToken.c)
 *     sub_1407CDED0 @ 0x1407CDED0 (sub_1407CDED0.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationToken(
        HANDLE TokenHandle,
        TOKEN_INFORMATION_CLASS TokenInformationClass,
        PVOID TokenInformation,
        ULONG TokenInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r12
  __int64 v9; // rdi
  KPROCESSOR_MODE v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  PULONG v14; // r15
  __int64 v15; // rcx
  NTSTATUS result; // eax
  _DWORD *v17; // rcx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v19; // r13
  unsigned int v20; // r14d
  char *v21; // rbx
  const void **v22; // r12
  unsigned int v23; // ecx
  unsigned int v24; // r15d
  unsigned int v25; // eax
  struct _KTHREAD *v26; // rcx
  bool v27; // zf
  _DWORD *v28; // rbx
  struct _KTHREAD *v29; // rax
  unsigned int *v30; // rbx
  int v31; // edx
  __int64 v32; // rax
  struct _ERESOURCE *v33; // rcx
  unsigned int v34; // r13d
  struct _KTHREAD *v35; // rax
  __int64 v36; // rcx
  char *v37; // rdx
  struct _KTHREAD *v38; // rax
  unsigned int v39; // ecx
  struct _ERESOURCE *v40; // rcx
  struct _KTHREAD *v41; // rax
  __int64 v42; // rax
  unsigned int v43; // eax
  char *v44; // rcx
  struct _KTHREAD *v45; // rax
  PVOID v46; // rdi
  unsigned __int8 *Sid; // rdx
  unsigned int v48; // eax
  unsigned int v49; // r13d
  struct _KTHREAD *v50; // rax
  char v51; // r8
  PSID v52; // r9
  unsigned __int8 *v53; // rcx
  char *v54; // rdx
  _DWORD *v55; // r8
  int v56; // ecx
  struct _KTHREAD *v57; // rax
  ULONG v58; // r8d
  struct _KTHREAD *v59; // rax
  unsigned int v60; // ecx
  struct _KTHREAD *v61; // rax
  PVOID v62; // r14
  unsigned __int8 IsElevatedRid; // bl
  unsigned int v64; // r15d
  struct _KTHREAD *v65; // rax
  PVOID v66; // r14
  __int64 v67; // rax
  unsigned int v68; // ebx
  __int128 *v69; // r13
  struct _KTHREAD *v70; // rax
  _DWORD *v71; // rcx
  unsigned int v72; // ebx
  struct _ERESOURCE *v73; // rcx
  struct _KTHREAD *v74; // rax
  __int64 v75; // rax
  ULONG v76; // r11d
  ULONG v77; // r8d
  struct _KTHREAD *v78; // rax
  unsigned int v79; // eax
  unsigned int v80; // ebx
  struct _KTHREAD *v81; // rax
  int v82; // r10d
  unsigned int v83; // ecx
  unsigned int v84; // r11d
  unsigned int v85; // r8d
  __int64 v86; // rdx
  __int64 v87; // r9
  unsigned int v88; // r14d
  unsigned int v89; // r13d
  unsigned int v90; // ecx
  unsigned int v91; // ecx
  _SID_AND_ATTRIBUTES *v92; // r9
  _SID_AND_ATTRIBUTES *v93; // r15
  __int64 v94; // rdi
  struct _KTHREAD *v95; // rax
  unsigned int v96; // eax
  ULONG v97; // r8d
  __int64 v98; // rdx
  __int64 v99; // r9
  struct _KTHREAD *v100; // rax
  unsigned int v101; // ebx
  __int64 v102; // rax
  struct _KTHREAD *v103; // rax
  unsigned __int8 *v104; // rdi
  char v105; // r14
  unsigned int v106; // eax
  struct _KTHREAD *v107; // rax
  unsigned int v108; // eax
  ULONG v109; // r8d
  __int64 v110; // rdx
  __int64 v111; // r9
  int v112; // r12d
  _DWORD *v113; // r15
  NTSTATUS v114; // r13d
  struct _KTHREAD *v115; // rax
  unsigned int v116; // edx
  unsigned int v117; // r9d
  __int64 v118; // r10
  __int64 v119; // r8
  unsigned int v120; // eax
  _QWORD *v121; // rbx
  NTSTATUS v122; // r14d
  NTSTATUS v123; // ebx
  __int64 v124; // rdx
  __int64 v125; // r9
  __int64 v126; // rdx
  __int64 v127; // r9
  int v128; // r9d
  struct _KTHREAD *v129; // rax
  void *v130; // rcx
  int v131; // eax
  struct _KTHREAD *v132; // rax
  PVOID v133; // rbx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r9
  struct _KTHREAD *v137; // rax
  PVOID v138; // rbx
  __int64 v139; // rdx
  PSID SidArea; // [rsp+20h] [rbp-188h]
  __int64 v141; // [rsp+80h] [rbp-128h] BYREF
  PVOID Object; // [rsp+88h] [rbp-120h] BYREF
  PSID SourceSid; // [rsp+90h] [rbp-118h] BYREF
  PSID RemainingSidArea; // [rsp+98h] [rbp-110h] BYREF
  int v145; // [rsp+A0h] [rbp-108h] BYREF
  NTSTATUS v146; // [rsp+A4h] [rbp-104h]
  int v147; // [rsp+A8h] [rbp-100h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp-F8h] BYREF
  int v149; // [rsp+B8h] [rbp-F0h]
  ULONG SessionId; // [rsp+BCh] [rbp-ECh] BYREF
  int v151; // [rsp+C0h] [rbp-E8h] BYREF
  int v152; // [rsp+C4h] [rbp-E4h] BYREF
  unsigned int v153; // [rsp+C8h] [rbp-E0h] BYREF
  unsigned int v154; // [rsp+CCh] [rbp-DCh] BYREF
  PVOID v155; // [rsp+D0h] [rbp-D8h] BYREF
  _QWORD *v156; // [rsp+D8h] [rbp-D0h] BYREF
  unsigned int v157; // [rsp+E0h] [rbp-C8h] BYREF
  unsigned int v158; // [rsp+E4h] [rbp-C4h] BYREF
  unsigned int v159; // [rsp+E8h] [rbp-C0h]
  int v160; // [rsp+ECh] [rbp-BCh]
  __int128 v161; // [rsp+F0h] [rbp-B8h] BYREF
  __int128 v162; // [rsp+100h] [rbp-A8h]
  __int128 v163; // [rsp+110h] [rbp-98h] BYREF
  PSID_AND_ATTRIBUTES Dest; // [rsp+120h] [rbp-88h]
  char *v165; // [rsp+128h] [rbp-80h]
  _SID_AND_ATTRIBUTES Src; // [rsp+130h] [rbp-78h] BYREF
  _DWORD v167[2]; // [rsp+140h] [rbp-68h] BYREF
  __int64 v168; // [rsp+148h] [rbp-60h]
  __int64 v169; // [rsp+150h] [rbp-58h]
  int v170; // [rsp+158h] [rbp-50h]
  int v171; // [rsp+15Ch] [rbp-4Ch]
  __int128 v172; // [rsp+160h] [rbp-48h]
  __int128 v173; // [rsp+170h] [rbp-38h]

  v5 = TokenInformationLength;
  v9 = 0LL;
  Object = 0LL;
  v145 = 0;
  v158 = 0;
  v157 = 0;
  Dest = 0LL;
  v147 = 0;
  Src = 0LL;
  RemainingSidArea = 0LL;
  SessionId = 0;
  v173 = 0LL;
  v161 = 0LL;
  v162 = 0LL;
  v163 = 0LL;
  LOBYTE(v141) = 0;
  SourceSid = 0LL;
  v10 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v10 )
  {
    if ( (_DWORD)v5 )
    {
      v11 = (unsigned __int64)TokenInformation;
      if ( ((unsigned __int8)TokenInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (unsigned __int64)TokenInformation + v5 - 1;
      if ( (unsigned __int64)TokenInformation > v12 || v12 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v13 = (v12 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v11 = *(_BYTE *)v11;
        v11 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v11 != v13 );
    }
    v14 = ReturnLength;
    v15 = (__int64)ReturnLength;
    if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
      v15 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v15 = *(_DWORD *)v15;
  }
  else
  {
    v14 = ReturnLength;
  }
  if ( TokenInformationClass == TokenUser )
  {
    result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
    if ( result < 0 )
      return result;
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v19 = Object;
    ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
    v20 = 4 * *(unsigned __int8 *)(**((_QWORD **)v19 + 19) + 1LL) + 24;
    *v14 = v20;
    if ( (unsigned int)v5 >= v20 )
    {
      v21 = (char *)TokenInformation + 16;
      v22 = (const void **)*((_QWORD *)v19 + 19);
      v160 = 0;
      v165 = (char *)TokenInformation + 16;
      v159 = v20;
      while ( !(_DWORD)v9 )
      {
        v23 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
        v24 = (4 * *((unsigned __int8 *)*v22 + 1) + 11) & 0xFFFFFFFC;
        if ( v23 > v20 )
          goto LABEL_36;
        v20 -= v24;
        v159 = v20;
        *(_QWORD *)TokenInformation = v21;
        *((_DWORD *)TokenInformation + 2) = *((_DWORD *)v22 + 2);
        v25 = 4 * *((unsigned __int8 *)*v22 + 1) + 8;
        if ( v25 <= v23 )
          memmove(v21, *v22, v25);
        v21 += v24;
        v165 = v21;
        LODWORD(v9) = 1;
        v160 = 1;
      }
      RemainingSidArea = (PSID)__PAIR64__(HIDWORD(v21), v20);
LABEL_36:
      ExReleaseResourceLite(*((PERESOURCE *)v19 + 6));
      v26 = KeGetCurrentThread();
      v27 = (*((_WORD *)v26 + 242))++ == 0xFFFF;
      if ( v27 && *((struct _KTHREAD **)v26 + 19) != (struct _KTHREAD *)((char *)v26 + 152) && !*((_WORD *)v26 + 243) )
        KiCheckForKernelApcDelivery();
LABEL_38:
      v17 = Object;
      goto LABEL_39;
    }
    v40 = (struct _ERESOURCE *)*((_QWORD *)v19 + 6);
LABEL_66:
    ExReleaseResourceLite(v40);
    sub_1402F9540((__int64)KeGetCurrentThread());
    goto LABEL_67;
  }
  if ( TokenInformationClass != TokenType )
  {
    switch ( TokenInformationClass )
    {
      case TokenGroups:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v95 = KeGetCurrentThread();
          --*((_WORD *)v95 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v96 = v30[31];
          v97 = 16 * v96 - 8;
          if ( v96 > 1 )
          {
            v98 = *((_QWORD *)v30 + 19) + 16LL;
            v99 = v96 - 1;
            do
            {
              v97 += 4 * *(unsigned __int8 *)(*(_QWORD *)v98 + 1LL) + 8;
              v98 += 16LL;
              --v99;
            }
            while ( v99 );
          }
          *v14 = v97;
          if ( (unsigned int)v5 >= v97 )
          {
            *(_DWORD *)TokenInformation = v30[31] - 1;
            RtlCopySidAndAttributesArray(
              v30[31] - 1,
              (PSID_AND_ATTRIBUTES)(*((_QWORD *)v30 + 19) + 16LL),
              v97,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v30[31] - 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_52;
          }
          goto LABEL_65;
        }
        return result;
      case TokenPrivileges:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v78 = KeGetCurrentThread();
          --*((_WORD *)v78 + 242);
          v46 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v79 = sub_14022B1D0((__int64)v46);
          if ( v79 <= 1 )
            v80 = 16;
          else
            v80 = 12 * v79 + 4;
          *v14 = v80;
          if ( (unsigned int)v5 >= v80 )
          {
            sub_1402ECB64((__int64)v46, TokenInformation);
            goto LABEL_80;
          }
          goto LABEL_147;
        }
        return result;
      case TokenOwner:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v59 = KeGetCurrentThread();
          --*((_WORD *)v59 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v60 = 4 * *(unsigned __int8 *)(*(_QWORD *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]) + 1LL) + 16;
          *v14 = v60;
          if ( (unsigned int)v5 < v60 )
            goto LABEL_65;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v60 - 8, (char *)TokenInformation + 8, *(PSID *)(*((_QWORD *)v30 + 19) + 16LL * v30[36]));
          goto LABEL_52;
        }
        return result;
      case TokenPrimaryGroup:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v38 = KeGetCurrentThread();
          --*((_WORD *)v38 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v39 = 4 * *(unsigned __int8 *)(*((_QWORD *)v30 + 21) + 1LL) + 16;
          *v14 = v39;
          if ( (unsigned int)v5 < v39 )
            goto LABEL_65;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 8;
          RtlCopySid(v39 - 8, (char *)TokenInformation + 8, *((PSID *)v30 + 21));
          goto LABEL_52;
        }
        return result;
      case TokenDefaultDacl:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v145 = 8;
          v41 = KeGetCurrentThread();
          --*((_WORD *)v41 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v42 = *((_QWORD *)v30 + 23);
          if ( v42 )
            v43 = *(unsigned __int16 *)(v42 + 2) + 8;
          else
            v43 = v145;
          *v14 = v43;
          if ( (unsigned int)v5 >= v43 )
          {
            v44 = (char *)TokenInformation + 8;
            if ( *((_QWORD *)v30 + 23) )
            {
              *(_QWORD *)TokenInformation = v44;
              memmove(v44, *((const void **)v30 + 23), *(unsigned __int16 *)(*((_QWORD *)v30 + 23) + 2LL));
            }
            else
            {
              *(_QWORD *)TokenInformation = 0LL;
            }
            goto LABEL_52;
          }
          goto LABEL_65;
        }
        return result;
      case TokenSource:
        result = sub_1402F8F70(TokenHandle, 0x10u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 16;
          if ( (unsigned int)v5 < 0x10 )
            goto LABEL_67;
          v17 = Object;
          *(_OWORD *)TokenInformation = *(_OWORD *)Object;
          goto LABEL_39;
        }
        return result;
      case TokenImpersonationLevel:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v17 = Object;
          if ( *((_DWORD *)Object + 48) != 2 )
          {
            ObfDereferenceObjectWithTag(Object, 0x74726853u);
            return -1073741821;
          }
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_68;
          *(_DWORD *)TokenInformation = v17[49];
          goto LABEL_39;
        }
        return result;
      case TokenStatistics:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 56;
          if ( (unsigned int)v5 < 0x38 )
            goto LABEL_67;
          v29 = KeGetCurrentThread();
          --*((_WORD *)v29 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v149 = 0;
          *(_QWORD *)TokenInformation = *((_QWORD *)v30 + 2);
          *((_QWORD *)TokenInformation + 1) = *((_QWORD *)v30 + 3);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v30 + 5);
          *((_DWORD *)TokenInformation + 6) = v30[48];
          *((_DWORD *)TokenInformation + 7) = v30[49];
          *((_DWORD *)TokenInformation + 8) = v30[34];
          v31 = v30[34] - 4 * *(unsigned __int8 *)(*((_QWORD *)v30 + 21) + 1LL) - 8;
          v149 = v31;
          v32 = *((_QWORD *)v30 + 23);
          if ( v32 )
          {
            v31 -= *(unsigned __int16 *)(v32 + 2);
            v149 = v31;
          }
          *((_DWORD *)TokenInformation + 9) = v31;
          *((_DWORD *)TokenInformation + 10) = v30[31] - 1;
          *((_DWORD *)TokenInformation + 11) = sub_14022B1D0((__int64)v30);
          *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v30 + 7);
          goto LABEL_52;
        }
        return result;
      case TokenRestrictedSids:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v57 = KeGetCurrentThread();
          --*((_WORD *)v57 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v58 = 16 * v30[32] + 8;
          if ( v30[32] )
          {
            v124 = *((_QWORD *)v30 + 20);
            v125 = v30[32];
            do
            {
              v58 += 4 * *(unsigned __int8 *)(*(_QWORD *)v124 + 1LL) + 8;
              v124 += 16LL;
              --v125;
            }
            while ( v125 );
          }
          *v14 = v58;
          if ( (unsigned int)v5 >= v58 )
          {
            *(_DWORD *)TokenInformation = v30[32];
            RtlCopySidAndAttributesArray(
              v30[32],
              *((PSID_AND_ATTRIBUTES *)v30 + 20),
              v58,
              (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
              (char *)TokenInformation + 16 * v30[32] + 8,
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            goto LABEL_52;
          }
          goto LABEL_65;
        }
        return result;
      case TokenSessionId:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_67;
          v28 = Object;
          SeQuerySessionIdToken(Object, &SessionId);
          *(_DWORD *)TokenInformation = SessionId;
          *v14 = 4;
          v17 = v28;
          goto LABEL_39;
        }
        return result;
      case TokenGroupsAndPrivileges:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v81 = KeGetCurrentThread();
          --*((_WORD *)v81 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v147 = sub_14022B1D0((__int64)v30);
          v82 = 12 * v147;
          v83 = v30[31];
          v84 = v83;
          v85 = 16 * v83;
          if ( v83 )
          {
            v86 = *((_QWORD *)v30 + 19);
            v87 = v83;
            do
            {
              v85 += (4 * *(unsigned __int8 *)(*(_QWORD *)v86 + 1LL) + 15) & 0xFFFFFFF8;
              v86 += 16LL;
              --v87;
            }
            while ( v87 );
          }
          v88 = 16 * v30[32];
          v89 = v88;
          v90 = v88;
          if ( v30[32] )
          {
            v126 = *((_QWORD *)v30 + 20);
            v127 = v30[32];
            do
            {
              v89 += (4 * *(unsigned __int8 *)(*(_QWORD *)v126 + 1LL) + 15) & 0xFFFFFFF8;
              v90 = v89;
              v126 += 16LL;
              --v127;
            }
            while ( v127 );
          }
          v91 = v90 + v82 + v85 + 56;
          *v14 = v91;
          if ( (unsigned int)v5 >= v91 )
          {
            *((_QWORD *)TokenInformation + 6) = *((_QWORD *)v30 + 3);
            *((_DWORD *)TokenInformation + 1) = v85;
            *(_DWORD *)TokenInformation = v30[31];
            v92 = (_SID_AND_ATTRIBUTES *)((char *)TokenInformation + 56);
            *((_QWORD *)TokenInformation + 1) = (char *)TokenInformation + 56;
            *((_DWORD *)TokenInformation + 5) = v89;
            *((_DWORD *)TokenInformation + 4) = v30[32];
            if ( v30[32] )
            {
              v93 = (_SID_AND_ATTRIBUTES *)((char *)v92 + ((v85 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
              *((_QWORD *)TokenInformation + 3) = v93;
            }
            else
            {
              *((_QWORD *)TokenInformation + 3) = 0LL;
              v93 = Dest;
            }
            *((_DWORD *)TokenInformation + 9) = v82;
            *((_DWORD *)TokenInformation + 8) = v147;
            v94 = (__int64)v92 + v89 + v85;
            *((_QWORD *)TokenInformation + 5) = v94;
            RtlCopySidAndAttributesArray(
              v30[31],
              *((PSID_AND_ATTRIBUTES *)v30 + 19),
              v85 - v84 * 16,
              v92,
              &v92[v84],
              &RemainingSidArea,
              (PULONG)&RemainingSidArea);
            if ( v93 )
              RtlCopySidAndAttributesArray(
                v30[32],
                *((PSID_AND_ATTRIBUTES *)v30 + 20),
                v89 - v88,
                v93,
                &v93[v88 / 0x10],
                &RemainingSidArea,
                (PULONG)&RemainingSidArea);
            sub_1402ED7E0(v30, v94);
            goto LABEL_52;
          }
          goto LABEL_65;
        }
        return result;
      case TokenSandBoxInert:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            return -1073741789;
          v17 = Object;
          *(_DWORD *)TokenInformation = (*((_DWORD *)Object + 50) & 0x40) != 0;
          goto LABEL_39;
        }
        return result;
      case TokenAuditPolicy:
        if ( !SeSinglePrivilegeCheck(stru_140D3CA98, v10) )
          return -1073741727;
        result = sub_1402F8F70(TokenHandle, 8u, v10, v128, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 30;
          if ( (unsigned int)v5 < 0x1E )
            goto LABEL_67;
          v129 = KeGetCurrentThread();
          --*((_WORD *)v129 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          *(_OWORD *)TokenInformation = *(_OWORD *)(v30 + 22);
          *((_QWORD *)TokenInformation + 2) = *((_QWORD *)v30 + 13);
          *((_DWORD *)TokenInformation + 6) = v30[28];
          *((_WORD *)TokenInformation + 14) = *((_WORD *)v30 + 58);
          goto LABEL_52;
        }
        return result;
      case TokenOrigin:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (unsigned int)v5 < 8 )
            goto LABEL_67;
          v17 = Object;
          *(_QWORD *)TokenInformation = *((_QWORD *)Object + 28);
          goto LABEL_39;
        }
        return result;
      case TokenElevationType:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 4;
          if ( (unsigned int)v5 < 4 )
            goto LABEL_67;
          v55 = Object;
          v56 = *(_DWORD *)(*((_QWORD *)Object + 27) + 32LL);
          if ( (v56 & 4) != 0 )
          {
            *(_DWORD *)TokenInformation = 3;
          }
          else if ( (v56 & 2) != 0 )
          {
            *(_DWORD *)TokenInformation = 2;
          }
          else
          {
            *(_DWORD *)TokenInformation = 1;
          }
          v17 = v55;
          goto LABEL_39;
        }
        return result;
      case TokenLinkedToken:
        v156 = 0LL;
        Handle = 0LL;
        v155 = 0LL;
        v167[1] = 0;
        v171 = 0;
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 8;
          if ( (_DWORD)v5 != 8 )
          {
            ObfDereferenceObjectWithTag(Object, 0x74726853u);
            return -1073741820;
          }
          if ( SeSinglePrivilegeCheck(stru_140D3CA10, v10) )
            v112 = 1;
          else
            v112 = 2;
          v113 = Object;
          v114 = sub_14066B900(
                   (_DWORD *)(*((_QWORD *)Object + 27) + 16LL),
                   *(_QWORD *)(*((_QWORD *)Object + 27) + 160LL),
                   (__int64 *)&v156);
          if ( v114 >= 0 )
          {
            v167[0] = 48;
            v168 = 0LL;
            if ( v10 )
              v170 = 0;
            else
              v170 = 512;
            v169 = 0LL;
            v172 = 0LL;
            v121 = v156;
            v122 = sub_1407CDED0(v156[6], (unsigned int)v167, 0, v112, 1, 0, 0, (__int64)&v155);
            sub_1402D6A98(v121);
            if ( v122 >= 0 )
            {
              v123 = sub_140729C30((char *)v155, 0LL, 983551, 0, 0, 0LL, &Handle);
              if ( v123 >= 0 )
              {
                *(_QWORD *)TokenInformation = Handle;
                v17 = v113;
                goto LABEL_39;
              }
              v130 = v113;
              goto LABEL_241;
            }
            ObfDereferenceObjectWithTag(v113, 0x74726853u);
            return v122;
          }
          else
          {
            ObfDereferenceObjectWithTag(v113, 0x74726853u);
            return v114;
          }
        }
        return result;
      case TokenElevation:
        *v14 = 4;
        if ( (_DWORD)v5 != 4 )
          return -1073741820;
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v61 = KeGetCurrentThread();
          --*((_WORD *)v61 + 242);
          v62 = Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          IsElevatedRid = (*((_QWORD *)v62 + 8) & 0x1120160684LL) != 0;
          v64 = *((_DWORD *)v62 + 31);
          if ( v64 )
          {
            do
            {
              if ( IsElevatedRid )
                break;
              IsElevatedRid = RtlIsElevatedRid((PSID_AND_ATTRIBUTES)(*((_QWORD *)v62 + 19) + 16LL * (unsigned int)v9));
              LODWORD(v9) = v9 + 1;
            }
            while ( (unsigned int)v9 < v64 );
          }
          ExReleaseResourceLite(*((PERESOURCE *)v62 + 6));
          sub_1402F9540((__int64)KeGetCurrentThread());
          *(_DWORD *)TokenInformation = IsElevatedRid;
          goto LABEL_38;
        }
        return result;
      case TokenHasRestrictions:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          *v14 = 1;
          if ( !(_DWORD)v5 )
            goto LABEL_67;
          v17 = Object;
          *(_BYTE *)TokenInformation = (*((_DWORD *)Object + 50) & 0x810) != 0;
          goto LABEL_39;
        }
        return result;
      case TokenAccessInformation:
        LODWORD(Handle) = 0;
        LODWORD(v156) = 0;
        LODWORD(v155) = 0;
        v154 = 0;
        v153 = 0;
        v152 = 0;
        v151 = 0;
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result >= 0 )
        {
          v103 = KeGetCurrentThread();
          --*((_WORD *)v103 + 242);
          v30 = (unsigned int *)Object;
          ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
          v104 = (unsigned __int8 *)SourceSid;
          v105 = v141;
          v106 = sub_1406A2C44(
                   (__int64)v30,
                   v141,
                   (__int64)SourceSid,
                   &v147,
                   (int *)&v158,
                   (int *)&Handle,
                   (int *)&v157,
                   (int *)&v156,
                   (unsigned int *)&v155,
                   (int *)&v154,
                   (int *)&v153,
                   (unsigned int *)&v152,
                   &v151);
          *v14 = v106;
          if ( (unsigned int)v5 < v106 )
            goto LABEL_65;
          sub_1406A293C(
            (__int64)v30,
            (__int64)TokenInformation,
            v5,
            v147,
            v158,
            (unsigned int)Handle,
            v157,
            (unsigned int)v156,
            (int)v155,
            v154,
            v153,
            v152,
            v151,
            v105,
            v104);
          goto LABEL_52;
        }
        return result;
      case TokenVirtualizationAllowed:
      case TokenVirtualizationEnabled:
      case TokenUIAccess:
      case TokenIsAppContainer:
      case TokenIsRestricted:
      case TokenPrivateNameSpace:
      case TokenIsSandboxed:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_67;
        v17 = Object;
        if ( TokenInformationClass == TokenVirtualizationAllowed )
        {
          LODWORD(v9) = (*((_DWORD *)Object + 50) >> 9) & 1;
          goto LABEL_26;
        }
        if ( TokenInformationClass == TokenVirtualizationEnabled )
        {
          LODWORD(v9) = (*((_DWORD *)Object + 50) >> 10) & 1;
          goto LABEL_26;
        }
        if ( TokenInformationClass != TokenUIAccess )
        {
          switch ( TokenInformationClass )
          {
            case TokenIsRestricted:
              v131 = *((_DWORD *)Object + 50);
              if ( (v131 & 0x10) == 0 && (v131 & 8) == 0 )
                goto LABEL_26;
              break;
            case TokenPrivateNameSpace:
              if ( (*((_DWORD *)Object + 50) & 0x10000) == 0 )
                goto LABEL_26;
              break;
            case TokenIsSandboxed:
              LODWORD(v9) = sub_1402EF3E8(Object, v10);
              goto LABEL_26;
            default:
              if ( (*((_DWORD *)Object + 50) & 0x4000) == 0 )
              {
LABEL_26:
                *(_DWORD *)TokenInformation = v9;
                goto LABEL_39;
              }
              break;
          }
          LODWORD(v9) = 1;
          goto LABEL_26;
        }
        LODWORD(v9) = (*((_DWORD *)Object + 50) >> 12) & 1;
        goto LABEL_26;
      case TokenIntegrityLevel:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v45 = KeGetCurrentThread();
        --*((_WORD *)v45 + 242);
        v46 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        sub_1402ED98C((__int64)v46);
        Sid = (unsigned __int8 *)Src.Sid;
        v48 = 4 * *((unsigned __int8 *)Src.Sid + 1) + 24;
        *v14 = v48;
        if ( (unsigned int)v5 < v48 )
        {
LABEL_147:
          v40 = (struct _ERESOURCE *)*((_QWORD *)v46 + 6);
          goto LABEL_66;
        }
        RtlCopySidAndAttributesArray(
          1u,
          &Src,
          4 * Sid[1] + 8,
          (PSID_AND_ATTRIBUTES)TokenInformation,
          (char *)TokenInformation + 16,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_80:
        v33 = (struct _ERESOURCE *)*((_QWORD *)v46 + 6);
        goto LABEL_53;
      case TokenMandatoryPolicy:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_67;
        v123 = sub_14022B1FC((__int64)Object, TokenInformation);
        v146 = v123;
LABEL_241:
        ObfDereferenceObjectWithTag(v130, 0x74726853u);
        return v123;
      case TokenLogonSid:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v115 = KeGetCurrentThread();
        --*((_WORD *)v115 + 242);
        v66 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v116 = 0;
        v117 = *((_DWORD *)v66 + 31);
        if ( !v117 )
          goto LABEL_202;
        v118 = *((_QWORD *)v66 + 19);
        while ( (*(_DWORD *)(v118 + 16LL * v116 + 8) & 0xC0000000) != 0xC0000000 )
        {
          if ( ++v116 >= v117 )
            goto LABEL_202;
        }
        v9 = *(_QWORD *)(v118 + 16LL * v116);
LABEL_202:
        if ( !v9 )
        {
          ExReleaseResourceLite(*((PERESOURCE *)v66 + 6));
          sub_1402F9540((__int64)KeGetCurrentThread());
          ObfDereferenceObjectWithTag(Object, 0x74726853u);
          return -1073741275;
        }
        v119 = 16LL * v116;
        v120 = 4 * *(unsigned __int8 *)(*(_QWORD *)(v119 + *((_QWORD *)v66 + 19)) + 1LL) + 32;
        *v14 = v120;
        if ( (unsigned int)v5 < v120 )
        {
LABEL_121:
          v40 = (struct _ERESOURCE *)*((_QWORD *)v66 + 6);
          goto LABEL_66;
        }
        *(_DWORD *)TokenInformation = 1;
        RtlCopySidAndAttributesArray(
          1u,
          (PSID_AND_ATTRIBUTES)(v119 + *((_QWORD *)v66 + 19)),
          4 * *(unsigned __int8 *)(*(_QWORD *)(v119 + *((_QWORD *)v66 + 19)) + 1LL) + 8,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 24,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
LABEL_174:
        v33 = (struct _ERESOURCE *)*((_QWORD *)v66 + 6);
LABEL_53:
        ExReleaseResourceLite(v33);
        sub_1402F9540((__int64)KeGetCurrentThread());
        goto LABEL_38;
      case TokenCapabilities:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v107 = KeGetCurrentThread();
        --*((_WORD *)v107 + 242);
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v108 = v30[200];
        v109 = 16 * v108 + 8;
        if ( v108 )
        {
          v110 = *((_QWORD *)v30 + 99);
          v111 = v108;
          do
          {
            v109 += 4 * *(unsigned __int8 *)(*(_QWORD *)v110 + 1LL) + 8;
            v110 += 16LL;
            --v111;
          }
          while ( v111 );
        }
        *v14 = v109;
        if ( (unsigned int)v5 < v109 )
          goto LABEL_65;
        *(_DWORD *)TokenInformation = v30[200];
        RtlCopySidAndAttributesArray(
          v30[200],
          *((PSID_AND_ATTRIBUTES *)v30 + 99),
          v109,
          (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
          (char *)TokenInformation + 16 * v30[200] + 8,
          &RemainingSidArea,
          (PULONG)&RemainingSidArea);
        goto LABEL_52;
      case TokenAppContainerSid:
        v34 = 8;
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v35 = KeGetCurrentThread();
        --*((_WORD *)v35 + 242);
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v36 = *((_QWORD *)v30 + 98);
        if ( v36 )
          v34 = 4 * *(unsigned __int8 *)(v36 + 1) + 16;
        *v14 = v34;
        if ( (unsigned int)v5 < v34 )
          goto LABEL_65;
        v37 = (char *)TokenInformation + 8;
        if ( !v36 )
          v37 = 0LL;
        *(_QWORD *)TokenInformation = v37;
        if ( v37 )
          RtlCopySid(v34 - 8, v37, *((PSID *)v30 + 98));
        goto LABEL_52;
      case TokenAppContainerNumber:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        *v14 = 4;
        if ( (unsigned int)v5 < 4 )
          goto LABEL_67;
        v132 = KeGetCurrentThread();
        --*((_WORD *)v132 + 242);
        v133 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v134 = *((_QWORD *)v133 + 135);
        if ( v134 )
          LODWORD(v9) = *(_DWORD *)(v134 + 40);
        ExReleaseResourceLite(*((PERESOURCE *)v133 + 6));
        sub_1402F9540((__int64)KeGetCurrentThread());
        *(_DWORD *)TokenInformation = v9;
        goto LABEL_38;
      case TokenUserClaimAttributes:
      case TokenDeviceClaimAttributes:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v65 = KeGetCurrentThread();
        --*((_WORD *)v65 + 242);
        v66 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v67 = *((_QWORD *)v66 + 137);
        if ( v67
          && (*(_QWORD *)(v67 + 576) || TokenInformationClass != TokenUserClaimAttributes)
          && ((v69 = *(__int128 **)(v67 + 584)) != 0LL || TokenInformationClass != TokenDeviceClaimAttributes) )
        {
          if ( TokenInformationClass == TokenUserClaimAttributes )
            v69 = *(__int128 **)(v67 + 576);
          sub_1406C1884(v69, 0LL, 0, &v145);
          v68 = v145;
        }
        else
        {
          v68 = 16;
          *(_QWORD *)&v162 = (char *)&v161 + 8;
          *((_QWORD *)&v161 + 1) = (char *)&v161 + 8;
          DWORD2(v162) = 0;
          *((_QWORD *)&v163 + 1) = &v163;
          *(_QWORD *)&v163 = &v163;
          v69 = &v161;
        }
        *v14 = v68;
        if ( (unsigned int)v5 < v68 )
          goto LABEL_121;
        v146 = sub_1406C1884(v69, TokenInformation, v5, &v145);
        goto LABEL_132;
      case TokenDeviceGroups:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v74 = KeGetCurrentThread();
        --*((_WORD *)v74 + 242);
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v75 = *((_QWORD *)v30 + 137);
        if ( v75 && (v76 = *(_DWORD *)v75) != 0 )
        {
          v77 = 16 * v76 + 8;
        }
        else
        {
          v76 = 0;
          v77 = 24;
        }
        if ( v76 )
        {
          v135 = *(_QWORD *)(v75 + 8);
          v136 = v76;
          do
          {
            v77 += 4 * *(unsigned __int8 *)(*(_QWORD *)v135 + 1LL) + 8;
            v135 += 16LL;
            --v136;
          }
          while ( v136 );
        }
        *v14 = v77;
        if ( (unsigned int)v5 < v77 )
          goto LABEL_65;
        *(_OWORD *)TokenInformation = 0LL;
        *((_QWORD *)TokenInformation + 2) = 0LL;
        *(_DWORD *)TokenInformation = v76;
        if ( v76 )
          RtlCopySidAndAttributesArray(
            v76,
            *(PSID_AND_ATTRIBUTES *)(*((_QWORD *)v30 + 137) + 8LL),
            v77,
            (PSID_AND_ATTRIBUTES)((char *)TokenInformation + 8),
            (char *)TokenInformation + 16 * v76 + 8,
            &RemainingSidArea,
            (PULONG)&RemainingSidArea);
        goto LABEL_52;
      case TokenSecurityAttributes:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v70 = KeGetCurrentThread();
        --*((_WORD *)v70 + 242);
        v66 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v71 = (_DWORD *)*((_QWORD *)v66 + 97);
        if ( v71 )
        {
          LODWORD(SidArea) = 0;
          sub_1403005E0(v71, 0LL, 0LL, 0LL, (size_t)SidArea, &v145);
          v72 = v145;
        }
        else
        {
          v72 = 16;
        }
        *v14 = v72;
        if ( (unsigned int)v5 < v72 )
          goto LABEL_121;
        LODWORD(SidArea) = v5;
        v146 = sub_1403005E0(*((_DWORD **)v66 + 97), 0LL, 0LL, TokenInformation, (size_t)SidArea, &v145);
LABEL_132:
        v73 = (struct _ERESOURCE *)*((_QWORD *)v66 + 6);
        goto LABEL_133;
      case TokenProcessTrustLevel:
        v49 = 8;
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v50 = KeGetCurrentThread();
        --*((_WORD *)v50 + 242);
        v30 = (unsigned int *)Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v51 = v141;
        v52 = SourceSid;
        if ( (_BYTE)v141 )
          v53 = (unsigned __int8 *)SourceSid;
        else
          v53 = (unsigned __int8 *)*((_QWORD *)v30 + 138);
        if ( v53 )
          v49 = 4 * v53[1] + 16;
        *v14 = v49;
        if ( (unsigned int)v5 < v49 )
        {
LABEL_65:
          v40 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
          goto LABEL_66;
        }
        v54 = (char *)TokenInformation + 8;
        if ( !v53 )
          v54 = 0LL;
        *(_QWORD *)TokenInformation = v54;
        if ( v54 )
        {
          if ( !v51 )
            v52 = (PSID)*((_QWORD *)v30 + 138);
          RtlCopySid(v49 - 8, v54, v52);
        }
LABEL_52:
        v33 = (struct _ERESOURCE *)*((_QWORD *)v30 + 6);
        goto LABEL_53;
      case TokenSingletonAttributes:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v137 = KeGetCurrentThread();
        --*((_WORD *)v137 + 242);
        v138 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v146 = sub_140300534((__int64)v138, v139, 0LL, 0, 1, (__int64)TokenInformation, v5, (__int64)v14);
        v73 = (struct _ERESOURCE *)*((_QWORD *)v138 + 6);
LABEL_133:
        ExReleaseResourceLite(v73);
        sub_1402F9540((__int64)KeGetCurrentThread());
        ObfDereferenceObjectWithTag(Object, 0x74726853u);
        return v146;
      case TokenBnoIsolation:
        result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
        if ( result < 0 )
          return result;
        v100 = KeGetCurrentThread();
        --*((_WORD *)v100 + 242);
        v66 = Object;
        ExAcquireResourceSharedLite(*((PERESOURCE *)Object + 6), 1u);
        v101 = 16;
        v102 = *((_QWORD *)v66 + 144);
        if ( v102 )
          v101 = *(unsigned __int16 *)(v102 + 42) + 16;
        *v14 = v101;
        if ( (unsigned int)v5 < v101 )
          goto LABEL_121;
        if ( *((_QWORD *)v66 + 144) )
        {
          *((_BYTE *)TokenInformation + 8) = 1;
          *(_QWORD *)TokenInformation = (char *)TokenInformation + 16;
          memmove(
            (char *)TokenInformation + 16,
            *(const void **)(*((_QWORD *)v66 + 144) + 48LL),
            *(unsigned __int16 *)(*((_QWORD *)v66 + 144) + 42LL));
        }
        else
        {
          *((_BYTE *)TokenInformation + 8) = 0;
          *(_QWORD *)TokenInformation = 0LL;
        }
        goto LABEL_174;
      default:
        return -1073741821;
    }
  }
  result = sub_1402F8F70(TokenHandle, 8u, v10, (int)TokenHandle, &Object, &v141, &SourceSid);
  if ( result >= 0 )
  {
    *v14 = 4;
    if ( (unsigned int)v5 >= 4 )
    {
      v17 = Object;
      *(_DWORD *)TokenInformation = *((_DWORD *)Object + 48);
LABEL_39:
      ObfDereferenceObjectWithTag(v17, 0x74726853u);
      return 0;
    }
LABEL_67:
    v17 = Object;
LABEL_68:
    ObfDereferenceObjectWithTag(v17, 0x74726853u);
    return -1073741789;
  }
  return result;
}
