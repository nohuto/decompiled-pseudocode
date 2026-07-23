/*
 * XREFs of RtlpNewSecurityObject @ 0x18000F5FC
 * Callers:
 *     RtlNewSecurityObject @ 0x18000E5C0 (RtlNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18000F510 (RtlNewSecurityObjectEx.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x18008E3E0 (RtlNewSecurityObjectWithMultipleInheritance.c)
 *     RtlCreateUserSecurityObject @ 0x1800E2F00 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800E2FA0 (RtlNewInstanceSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x18000B6FC (RtlpValidTrustSubjectContext.c)
 *     RtlpValidOwnerSubjectContext @ 0x18000E418 (RtlpValidOwnerSubjectContext.c)
 *     RtlSidDominates @ 0x18000EE00 (RtlSidDominates.c)
 *     RtlAddMandatoryAce @ 0x18000EFA0 (RtlAddMandatoryAce.c)
 *     RtlpApplyAclToObject @ 0x18000F1D0 (RtlpApplyAclToObject.c)
 *     RtlpValidFilterAclSubjectContext @ 0x18000F57C (RtlpValidFilterAclSubjectContext.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x1800108D4 (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x180010E90 (RtlCreateAcl.c)
 *     RtlFindAceByType @ 0x180010EE0 (RtlFindAceByType.c)
 *     RtlpCombineAcls @ 0x180010F38 (RtlpCombineAcls.c)
 *     RtlpGetDefaultsSubjectContext @ 0x1800114D8 (RtlpGetDefaultsSubjectContext.c)
 *     RtlpOwnerAcesPresent @ 0x1800121E8 (RtlpOwnerAcesPresent.c)
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     RtlCreateSecurityDescriptor @ 0x18004D750 (RtlCreateSecurityDescriptor.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x1800A4070 (ZwAccessCheck.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A4490 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x1800A48B0 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A6820 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     memset @ 0x1800AAE00 (memset.c)
 *     RtlpCreateServerAcl @ 0x1800F31B4 (RtlpCreateServerAcl.c)
 */

NTSTATUS __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        _QWORD *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        HANDLE TokenHandle,
        GENERIC_MAPPING *a9)
{
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  _DWORD *v13; // rsi
  void *ProcessHeap; // r12
  NTSTATUS result; // eax
  ULONG v16; // eax
  __int16 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  unsigned int v22; // ebx
  int v23; // edi
  int v24; // eax
  int v25; // r9d
  int v26; // r8d
  int v27; // r10d
  __int64 v28; // rcx
  __int64 v29; // rdx
  int v30; // r8d
  int v31; // r9d
  int v32; // eax
  NTSTATUS v33; // ebx
  __int16 v34; // r12
  int v35; // r12d
  ACL *v36; // r15
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int16 v43; // cx
  ACL *v44; // rcx
  char *AceByType; // rax
  __int64 v46; // r8
  HANDLE v47; // rdi
  char *v48; // rbx
  ACL *v49; // rcx
  int v50; // r9d
  unsigned int v51; // edx
  ACCESS_MASK AccessMask; // edi
  ACL *v53; // rcx
  char *v54; // rax
  char *v55; // rsi
  void *v56; // rdx
  _DWORD *v57; // rax
  ULONG v58; // eax
  char v59; // cl
  ACL *v60; // rdi
  unsigned int v61; // r8d
  __int64 v62; // rcx
  int v63; // eax
  __int16 v64; // si
  int v65; // r9d
  ACCESS_MASK v66; // r12d
  PVOID v67; // rdi
  ACL *v68; // rbx
  char *v69; // rax
  char *v70; // rax
  __int16 v71; // ax
  __int64 v72; // rdx
  __int64 v73; // rcx
  int v74; // eax
  int v75; // edx
  ULONG v76; // r14d
  HANDLE v77; // r13
  bool v78; // al
  unsigned __int8 *v79; // rsi
  PVOID v80; // rbx
  ULONG v81; // ecx
  unsigned int v82; // r13d
  int v83; // r15d
  unsigned int v84; // esi
  int v85; // r12d
  unsigned int v86; // r14d
  _DWORD *Heap; // rax
  _DWORD *v88; // rdx
  __int16 v89; // cx
  char *v90; // rbx
  bool v91; // zf
  unsigned __int16 *v92; // rdi
  __int64 v93; // rcx
  __int64 v94; // rdi
  int v95; // eax
  char *v96; // rbx
  char *v97; // rdx
  __int64 AclSize; // rcx
  ACL *v99; // r8
  int v100; // eax
  __int16 v101; // cx
  _BYTE *v102; // rax
  _BYTE *v103; // rax
  ACL *v104; // rcx
  _BYTE *v105; // rax
  bool v106; // cf
  HANDLE v107; // rdx
  void *v108; // rdi
  int ServerAcl; // eax
  NTSTATUS valid; // [rsp+90h] [rbp-80h] BYREF
  char v111; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v112; // [rsp+95h] [rbp-7Bh]
  char v113; // [rsp+96h] [rbp-7Ah]
  char v114; // [rsp+97h] [rbp-79h]
  BOOLEAN Result; // [rsp+98h] [rbp-78h] BYREF
  char v116; // [rsp+99h] [rbp-77h]
  char v117[2]; // [rsp+9Ah] [rbp-76h] BYREF
  int v118; // [rsp+9Ch] [rbp-74h]
  PVOID HeapHandle; // [rsp+A0h] [rbp-70h]
  _DWORD *v120; // [rsp+A8h] [rbp-68h]
  BOOLEAN Dominates; // [rsp+B0h] [rbp-60h] BYREF
  char v122; // [rsp+B1h] [rbp-5Fh]
  char v123; // [rsp+B2h] [rbp-5Eh] BYREF
  char v124; // [rsp+B3h] [rbp-5Dh]
  char v125; // [rsp+B4h] [rbp-5Ch]
  ULONG Index; // [rsp+B8h] [rbp-58h] BYREF
  ULONG PrivilegeSetLength; // [rsp+BCh] [rbp-54h] BYREF
  char v128; // [rsp+C0h] [rbp-50h] BYREF
  char v129; // [rsp+C1h] [rbp-4Fh] BYREF
  __int16 v130; // [rsp+C2h] [rbp-4Eh]
  char v131; // [rsp+C4h] [rbp-4Ch]
  PACL Acl; // [rsp+C8h] [rbp-48h] BYREF
  PVOID v133; // [rsp+D0h] [rbp-40h]
  NTSTATUS AccessStatus; // [rsp+D8h] [rbp-38h] BYREF
  void *v135; // [rsp+E0h] [rbp-30h]
  HANDLE ClientToken; // [rsp+E8h] [rbp-28h]
  ACCESS_MASK GrantedAccess; // [rsp+F0h] [rbp-20h] BYREF
  void *v138; // [rsp+F8h] [rbp-18h]
  ULONG ReturnLength; // [rsp+100h] [rbp-10h] BYREF
  void *Src; // [rsp+108h] [rbp-8h] BYREF
  PSID Sid; // [rsp+110h] [rbp+0h]
  _BYTE *v142; // [rsp+118h] [rbp+8h]
  PGENERIC_MAPPING GenericMapping; // [rsp+120h] [rbp+10h]
  HANDLE NewTokenHandle; // [rsp+128h] [rbp+18h] BYREF
  __int64 v145; // [rsp+130h] [rbp+20h]
  PSID Sid1; // [rsp+138h] [rbp+28h]
  int v147; // [rsp+140h] [rbp+30h]
  __int64 v148; // [rsp+148h] [rbp+38h]
  PVOID v149; // [rsp+150h] [rbp+40h] BYREF
  int v150[2]; // [rsp+158h] [rbp+48h]
  PVOID v151; // [rsp+160h] [rbp+50h] BYREF
  PVOID v152; // [rsp+168h] [rbp+58h] BYREF
  int v153; // [rsp+170h] [rbp+60h]
  PVOID BaseAddress; // [rsp+178h] [rbp+68h]
  PVOID v155; // [rsp+180h] [rbp+70h] BYREF
  PVOID v156; // [rsp+188h] [rbp+78h] BYREF
  PVOID v157; // [rsp+190h] [rbp+80h]
  PVOID v158; // [rsp+198h] [rbp+88h] BYREF
  PVOID v159; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID v160; // [rsp+1A8h] [rbp+98h] BYREF
  NTSTATUS v161; // [rsp+1B0h] [rbp+A0h] BYREF
  ACL *v162; // [rsp+1B8h] [rbp+A8h] BYREF
  ACL *v163; // [rsp+1C0h] [rbp+B0h]
  ACL *v164; // [rsp+1C8h] [rbp+B8h] BYREF
  _QWORD *v165; // [rsp+1D8h] [rbp+C8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1E0h] [rbp+D0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+210h] [rbp+100h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+238h] [rbp+128h] BYREF
  _DWORD v169[2]; // [rsp+250h] [rbp+140h] BYREF
  __int16 v170; // [rsp+258h] [rbp+148h]
  char TokenInformation[24]; // [rsp+260h] [rbp+150h] BYREF
  int v172; // [rsp+278h] [rbp+168h]
  int v173; // [rsp+27Ch] [rbp+16Ch]
  ACL v174; // [rsp+2A0h] [rbp+190h] BYREF

  GenericMapping = a9;
  v151 = 0LL;
  v163 = &v174;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v150 = a4;
  v165 = a3;
  v13 = 0LL;
  ClientToken = TokenHandle;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  v133 = 0LL;
  Acl = 0LL;
  v149 = 0LL;
  v113 = 0;
  v125 = 0;
  v124 = 0;
  GrantedAccess = 0;
  Src = 0LL;
  v152 = 0LL;
  v114 = 0;
  v116 = 0;
  v111 = 0;
  v128 = 0;
  v129 = 0;
  v117[0] = 0;
  LOBYTE(v147) = 0;
  v123 = 0;
  Sid1 = 0LL;
  NewTokenHandle = 0LL;
  v142 = 0LL;
  v148 = 0LL;
  v145 = 0LL;
  v120 = 0LL;
  Index = 0;
  Sid = 0LL;
  v162 = 0LL;
  v164 = 0LL;
  v112 = 0;
  Dominates = 1;
  LOBYTE(v153) = 1;
  BaseAddress = 0LL;
  v157 = 0LL;
  v158 = 0LL;
  v155 = 0LL;
  v156 = 0LL;
  v159 = 0LL;
  v160 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    if ( result < 0 )
      return result;
    v153 = v172;
    if ( v172 == 2 && v173 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v122 = 1;
  }
  else
  {
    v122 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v16 = *((unsigned __int16 *)a2 + 1);
  v130 = *((_WORD *)a2 + 1) & 0x80;
  v17 = v130;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v131 = v130 != 0;
  ReturnLength = v16;
  if ( TokenHandle || v130 )
  {
    result = RtlpGetDefaultsSubjectContext(
               TokenHandle,
               (ULONG)&v158,
               (__int64)&v159,
               (__int64)&v155,
               (__int64)&v156,
               (ULONG)&v160);
    if ( result < 0 )
      return result;
    v11 = *(_BYTE **)BaseAddress;
    v12 = *(_BYTE **)v157;
    v145 = *(_QWORD *)v158;
    Sid1 = *(PSID *)v155;
    NewTokenHandle = *(HANDLE *)v156;
    if ( v159 )
      v142 = *(_BYTE **)v159;
    else
      v142 = 0LL;
    v17 = v130;
    if ( v160 )
      v18 = *(_QWORD *)v160;
    else
      v18 = 0LL;
    v148 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *((unsigned __int16 *)a2 + 1);
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_16;
    v20 = &a2[*((unsigned int *)a2 + 1)];
  }
  else
  {
    v20 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  v135 = v20;
  if ( v20 )
  {
    v116 = 1;
    goto LABEL_20;
  }
LABEL_16:
  if ( (a7 & 0x20) != 0 )
  {
    if ( a1 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v20 = *(_BYTE **)(a1 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 4) )
          goto LABEL_276;
        v20 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 4));
      }
      v135 = v20;
      v116 = 1;
      if ( v20 )
        goto LABEL_20;
    }
LABEL_276:
    v33 = -1073741734;
LABEL_278:
    valid = v33;
LABEL_279:
    v36 = Acl;
    goto LABEL_169;
  }
  v20 = v11;
  if ( v17 )
    v20 = v142;
  v135 = v20;
  if ( !v20 )
  {
    v33 = -1073741700;
    goto LABEL_278;
  }
LABEL_20:
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_23;
    v21 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v21 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  v138 = v21;
  if ( v21 )
    goto LABEL_27;
LABEL_23:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !a1 )
      goto LABEL_277;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v21 = *(_BYTE **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_277;
      v21 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 8));
    }
  }
  else
  {
    v21 = v12;
    if ( v17 )
      v21 = (_BYTE *)v18;
  }
  v138 = v21;
  if ( !v21 )
  {
LABEL_277:
    v33 = -1073741733;
    goto LABEL_278;
  }
LABEL_27:
  v22 = a7 >> 2;
  LOBYTE(v22) = (a7 & 4) != 0;
  v23 = a7 & 2;
  AccessStatus = v22;
  v24 = (v19 >> 2) & 8;
  v25 = (v19 >> 1) & 0x400;
  v26 = (v19 >> 1) & 0x1000;
  v27 = (v19 & 0x10) != 0 ? 4 : 0;
  if ( (v19 & 0x10) == (_WORD)v133 )
  {
    LODWORD(v28) = 0;
  }
  else
  {
    LODWORD(v28) = 0;
    if ( (v19 & 0x8000u) == 0 )
    {
      v29 = *((_QWORD *)a2 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      LODWORD(v29) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
      goto LABEL_30;
    }
  }
  LODWORD(v29) = 0;
LABEL_30:
  if ( a1 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v28 = *(_QWORD *)(a1 + 24);
    }
    else if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v28) = a1 + *(_DWORD *)(a1 + 12);
    }
  }
  v30 = v25 | v26;
  v31 = (int)GenericMapping;
  LOBYTE(v31) = a6;
  v32 = RtlpInheritAcl(
          v28,
          v29,
          v27 | v24 | (unsigned int)v30,
          v31,
          v23 != 0,
          v22,
          (__int64)v20,
          (__int64)v21,
          (__int64)v142,
          v148,
          (__int64)GenericMapping,
          2,
          *(__int64 *)v150,
          a5,
          (__int64)&Acl,
          (__int64)&v111,
          (__int64)&PrivilegeSetLength);
  valid = v32;
  v33 = v32;
  if ( v32 >= 0 )
  {
    v113 = 1;
    v58 = PrivilegeSetLength & 0x1400;
    LOWORD(v35) = 2 * (v58 | (2 * (PrivilegeSetLength & 8 | 0x2004)));
    v118 = 2 * (v58 | (2 * (PrivilegeSetLength & 8 | 0x2004)));
    goto LABEL_39;
  }
  if ( v32 != -2147483637 )
  {
    v13 = v120;
    goto LABEL_279;
  }
  v34 = *((_WORD *)a2 + 1);
  if ( (v34 & 0x30) != 0x30 )
  {
    LOWORD(v35) = v23 != 0 ? -30720 : 0x8000;
    v118 = v23 != 0 ? 34816 : 0x8000;
LABEL_39:
    v36 = Acl;
    v133 = Acl;
    goto LABEL_40;
  }
  if ( (v34 & 0x10) != 0 )
  {
    if ( v34 >= 0 )
    {
      v36 = (ACL *)*((_QWORD *)a2 + 3);
      goto LABEL_293;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      v36 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
LABEL_293:
      v133 = v36;
      goto LABEL_294;
    }
  }
  v36 = 0LL;
  v133 = 0LL;
LABEL_294:
  Acl = v36;
  v35 = (v23 != 0 ? 34816 : 0x8000) | v34 & 0x2000 | 0x10;
  v111 = 1;
  v118 = v35;
LABEL_40:
  v37 = *((_WORD *)a2 + 1);
  v38 = (v37 & 0x10) != 0 ? 4 : 0;
  if ( (v37 & 0x10) == 0 )
  {
LABEL_41:
    LODWORD(v39) = 0;
    goto LABEL_42;
  }
  if ( v37 >= 0 )
  {
    v39 = *((_QWORD *)a2 + 3);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 3) )
      goto LABEL_41;
    LODWORD(v39) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
  }
LABEL_42:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_77;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v40 = *(_QWORD *)(a1 + 24);
    goto LABEL_47;
  }
  if ( *(_DWORD *)(a1 + 12) )
    LODWORD(v40) = a1 + *(_DWORD *)(a1 + 12);
  else
LABEL_77:
    LODWORD(v40) = 0;
LABEL_47:
  v41 = v38 | (*((unsigned __int16 *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400;
  LOBYTE(v38) = a6;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          v23 != 0,
          AccessStatus,
          (__int64)v135,
          (__int64)v138,
          (__int64)v142,
          v148,
          (__int64)GenericMapping,
          2,
          *(__int64 *)v150,
          a5,
          (__int64)&v149,
          (__int64)&v128,
          (__int64)&Index);
  valid = v42;
  v33 = v42;
  if ( v42 >= 0 )
  {
    v125 = 1;
  }
  else
  {
    if ( v42 != -2147483637 )
      goto LABEL_280;
    v43 = *((_WORD *)a2 + 1);
    if ( (v43 & 0x30) == 0x30 )
    {
      if ( (v43 & 0x10) != 0 )
      {
        if ( v43 >= 0 )
        {
          v103 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v103 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v103 = 0LL;
        }
        v149 = v103;
      }
      else
      {
        v149 = 0LL;
      }
    }
  }
  Index = 0;
  do
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_52;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v44 = (ACL *)*((_QWORD *)a2 + 3);
      goto LABEL_53;
    }
    if ( *((_DWORD *)a2 + 3) )
      v44 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    else
LABEL_52:
      v44 = 0LL;
LABEL_53:
    AceByType = (char *)RtlFindAceByType(v44, 0x14u, &Index);
    v47 = NewTokenHandle;
    v48 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !RtlpValidTrustSubjectContext(NewTokenHandle, AceByType + 8, v46, &valid) )
    {
      v33 = -1073741790;
      goto LABEL_305;
    }
    ++Index;
  }
  while ( v48 );
  if ( (a7 & 0x800) == 0 )
    goto LABEL_56;
  Index = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_311;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v104 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v104 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_313;
      }
LABEL_311:
      v104 = 0LL;
    }
LABEL_313:
    v105 = RtlFindAceByType(v104, 0x14u, &Index);
    ++Index;
    if ( v105 )
    {
      if ( (v105[1] & 8) == 0 )
        goto LABEL_315;
      continue;
    }
    break;
  }
  if ( v47 )
  {
LABEL_315:
    v33 = -1073741811;
    goto LABEL_305;
  }
LABEL_56:
  if ( (a2[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v49 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( !*((_DWORD *)a2 + 3) )
        goto LABEL_57;
      v49 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    }
  }
  else
  {
LABEL_57:
    v49 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v49, v47);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  v51 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v51 = (a7 >> 8) & 1;
  AccessMask = v51 | 4;
  if ( (a7 & 0x400) == 0 )
    AccessMask = v51;
  if ( AccessMask )
  {
    v56 = 0LL;
LABEL_322:
    v55 = 0LL;
LABEL_68:
    v57 = Sid1;
    goto LABEL_98;
  }
  if ( (a2[2] & 0x10) == 0 )
    goto LABEL_65;
  if ( *((__int16 *)a2 + 1) >= 0 )
  {
    v53 = (ACL *)*((_QWORD *)a2 + 3);
  }
  else if ( *((_DWORD *)a2 + 3) )
  {
    v53 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
  }
  else
  {
LABEL_65:
    v53 = 0LL;
  }
  v54 = (char *)RtlFindAceByType(v53, 0x11u, 0LL);
  v55 = v54;
  if ( !v54 )
  {
    v56 = 0LL;
    goto LABEL_68;
  }
  v59 = v54[1];
  v56 = v54 + 8;
  AccessMask = *((_DWORD *)v54 + 1);
  Sid = v54 + 8;
  v112 = v59;
  if ( v59 == 8 || (v59 & 0x10) != 0 )
  {
    v56 = 0LL;
    v112 = 0;
    Sid = 0LL;
    AccessMask = 0;
    goto LABEL_322;
  }
  v57 = Sid1;
  if ( (v59 & 8) != 0 )
  {
    v106 = *((_DWORD *)Sid1 + 2) < 0x2000u;
    Sid = v56;
    v112 = v59;
    if ( v106 )
    {
      v33 = -1073740730;
      goto LABEL_305;
    }
  }
LABEL_98:
  if ( AccessMask )
  {
LABEL_220:
    if ( v55 )
      goto LABEL_101;
    if ( ClientToken )
    {
      v56 = v57;
      Sid = v57;
      v112 = 0;
      goto LABEL_101;
    }
    goto LABEL_323;
  }
  if ( v57 && v57[2] < 0x2000u )
  {
    AccessMask = 1;
    goto LABEL_220;
  }
LABEL_101:
  if ( !v56 )
  {
    v60 = 0LL;
    v163 = 0LL;
    goto LABEL_103;
  }
  valid = RtlCreateAcl(&v174, 0x80u, 2u);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  valid = RtlAddMandatoryAce(&v174, 2u, v112, Sid, 0x11u, AccessMask);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  v60 = &v174;
LABEL_103:
  if ( (a7 & 0x700) != 0 )
  {
    v61 = 4;
  }
  else if ( !v55 && v60 )
  {
    v61 = 0;
  }
  else
  {
    v61 = (*((_WORD *)a2 + 1) & 0x2800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_223;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v62 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v62) = a1 + *(_DWORD *)(a1 + 12);
      goto LABEL_112;
    }
LABEL_223:
    LODWORD(v62) = 0;
  }
LABEL_112:
  LOBYTE(v50) = a6;
  v63 = RtlpInheritAcl(
          v62,
          (_DWORD)v60,
          v61,
          v50,
          1,
          0,
          (__int64)v135,
          (__int64)v138,
          (__int64)v142,
          v148,
          (__int64)GenericMapping,
          3,
          *(__int64 *)v150,
          a5,
          (__int64)&v162,
          (__int64)&v129,
          (__int64)&PrivilegeSetLength);
  valid = v63;
  v33 = v63;
  if ( v63 != -2147483637 )
  {
    if ( v63 >= 0 )
    {
      v60 = v162;
      v64 = PrivilegeSetLength;
      goto LABEL_114;
    }
    goto LABEL_280;
  }
  v64 = 0;
  PrivilegeSetLength = 0;
LABEL_114:
  v33 = RtlpCombineAcls(
          (_DWORD)v36,
          (_DWORD)v60,
          (_DWORD)v149,
          (_DWORD)v149,
          (__int64)v149,
          (__int64)v149,
          (__int64)&v164,
          (__int64)&GrantedAccess);
  valid = v33;
  v66 = ((v35 & 0x2000) << 17) | GrantedAccess;
  if ( !v60 || v60 == v163 )
  {
    v67 = HeapHandle;
  }
  else
  {
    v99 = v60;
    v67 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v99);
  }
  if ( v33 < 0 )
    goto LABEL_280;
  v68 = v164;
  if ( v164 )
  {
    if ( v113 && v36 )
      RtlFreeHeap(v67, 0, v36);
    v133 = v68;
    Acl = v68;
    v36 = v68;
    v124 = 1;
    v118 |= 2 * (v64 & 0x1400 | (2 * (v64 & 8 | 4)));
  }
  if ( (a7 & 8) == 0 )
  {
    v69 = (char *)RtlFindAceByType(v36, 0x11u, 0LL);
    v70 = v69 ? v69 + 8 : (char *)Sid;
    if ( v70 )
    {
      if ( ClientToken )
      {
        valid = RtlSidDominates(Sid1, v70, &Dominates);
        v33 = valid;
        if ( valid >= 0 )
        {
          v100 = (unsigned __int8)v147;
          if ( !Dominates )
            v100 = 1;
          v147 = v100;
          goto LABEL_122;
        }
        goto LABEL_280;
      }
      goto LABEL_323;
    }
  }
LABEL_122:
  v71 = *((_WORD *)a2 + 1);
  if ( (v71 & 4) == 0 )
    goto LABEL_126;
  if ( v71 >= 0 )
  {
    v72 = *((_QWORD *)a2 + 4);
    goto LABEL_127;
  }
  if ( *((_DWORD *)a2 + 4) )
    LODWORD(v72) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
  else
LABEL_126:
    LODWORD(v72) = 0;
LABEL_127:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_251;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v73 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      LODWORD(v73) = a1 + *(_DWORD *)(a1 + 16);
      goto LABEL_132;
    }
LABEL_251:
    LODWORD(v73) = 0;
  }
LABEL_132:
  LOBYTE(v65) = a6;
  v74 = RtlpInheritAcl(
          v73,
          v72,
          v71 & 0x140C,
          v65,
          a7 & 1,
          AccessStatus,
          (__int64)v135,
          (__int64)v138,
          (__int64)v142,
          v148,
          (__int64)GenericMapping,
          1,
          *(__int64 *)v150,
          a5,
          (__int64)&Src,
          (__int64)v117,
          (__int64)&PrivilegeSetLength);
  valid = v74;
  v33 = v74;
  if ( v74 >= 0 )
  {
    v75 = 1;
    v114 = 1;
    v76 = PrivilegeSetLength & 0x1408 | 4 | v118;
    goto LABEL_134;
  }
  if ( v74 != -2147483637 )
    goto LABEL_280;
  if ( (a7 & 1) != 0 )
    v118 |= 0x400u;
  v101 = *((_WORD *)a2 + 1);
  if ( (v101 & 0xC) == 0xC )
  {
    if ( (v101 & 4) != 0 )
    {
      if ( v101 >= 0 )
      {
        v102 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_266:
        v75 = 1;
        v76 = v101 & 0x1000 | 4 | v118;
        v117[0] = 1;
        goto LABEL_249;
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v102 = &a2[*((unsigned int *)a2 + 4)];
        goto LABEL_266;
      }
    }
    v102 = 0LL;
    goto LABEL_266;
  }
  v102 = (_BYTE *)v145;
  v75 = 1;
  v76 = v118;
  if ( v145 )
  {
    v76 = v118 | 4;
LABEL_249:
    Src = v102;
LABEL_134:
    v118 = v76;
  }
  if ( (a7 & 0x1000) != 0 || !v122 )
  {
LABEL_137:
    v77 = ClientToken;
    goto LABEL_138;
  }
  if ( !ClientToken || !a1 )
  {
    v77 = ClientToken;
    goto LABEL_138;
  }
  GrantedAccess = 0;
  AccessStatus = 0;
  valid = RtlpNewSecurityObject(a1, 0, (int)&v151, v150[0], a5, a6, a7 | 1, ClientToken, (__int64)GenericMapping);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  if ( (*((_BYTE *)v151 + 2) & 4) == 0 )
    goto LABEL_330;
  if ( *((__int16 *)v151 + 1) >= 0 )
  {
    v97 = (char *)*((_QWORD *)v151 + 4);
  }
  else
  {
    if ( *((_DWORD *)v151 + 4) )
    {
      v97 = (char *)v151 + *((unsigned int *)v151 + 4);
      goto LABEL_193;
    }
LABEL_330:
    v97 = 0LL;
  }
LABEL_193:
  if ( !(unsigned __int8)RtlpOwnerAcesPresent(16LL, v97) )
    goto LABEL_137;
  v77 = ClientToken;
  NewTokenHandle = 0LL;
  PrivilegeSetLength = 20;
  if ( (_BYTE)v153 != 1 )
  {
LABEL_335:
    v107 = v77;
    goto LABEL_336;
  }
  v170 = 1;
  v169[1] = 2;
  ObjectAttributes.SecurityQualityOfService = v169;
  v169[0] = 12;
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ObjectAttributes.SecurityDescriptor = 0LL;
  valid = NtDuplicateToken(ClientToken, 8u, &ObjectAttributes, 0, TokenImpersonation, &NewTokenHandle);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  v107 = NewTokenHandle;
  if ( !NewTokenHandle )
    goto LABEL_335;
LABEL_336:
  valid = ZwAccessCheck(
            v151,
            v107,
            0x40000u,
            GenericMapping,
            &RequiredPrivileges,
            &PrivilegeSetLength,
            &GrantedAccess,
            &AccessStatus);
  v33 = valid;
  if ( NewTokenHandle )
    NtClose(NewTokenHandle);
  if ( v33 < 0 )
    goto LABEL_280;
  v33 = AccessStatus;
  valid = AccessStatus;
  if ( AccessStatus < 0 )
    goto LABEL_280;
LABEL_138:
  if ( (a7 & 1) != 0 && !Src )
  {
    v76 |= 0x1000u;
    v118 = v76;
  }
  v78 = !v66 || (v66 & 0x1B0) != v66;
  if ( !v111 || (a7 & 8) != 0 || !v78 )
    goto LABEL_342;
  if ( !v77 )
    goto LABEL_323;
  v145 = 8LL;
  RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  valid = ZwPrivilegeCheck(v77, &RequiredPrivileges, &Result);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  if ( Result )
  {
LABEL_342:
    if ( (_BYTE)v147 && (a7 & 8) == 0 )
    {
      if ( !v77 )
        goto LABEL_323;
      v145 = 32LL;
      RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
      RequiredPrivileges.PrivilegeCount = 1;
      RequiredPrivileges.Control = 1;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      valid = ZwPrivilegeCheck(v77, &RequiredPrivileges, &Result);
      v33 = valid;
      if ( valid < 0 )
        goto LABEL_280;
      if ( !Result )
        goto LABEL_341;
    }
    if ( !v116 || (a7 & 0x10) != 0 )
    {
      v79 = (unsigned __int8 *)v135;
      goto LABEL_147;
    }
    if ( v77 )
    {
      v79 = (unsigned __int8 *)v135;
      if ( !RtlpValidOwnerSubjectContext(v77, v135, v131, &v161) )
      {
        v33 = v161;
        goto LABEL_305;
      }
LABEL_147:
      if ( v130 && v117[0] )
      {
        v108 = Src;
        LOBYTE(v75) = ReturnLength;
        ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v75, (_DWORD)v142, (unsigned int)&v152, (__int64)&v123);
        valid = ServerAcl;
        v33 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_280;
        v80 = HeapHandle;
        if ( v114 && v108 )
          RtlFreeHeap(HeapHandle, 0, v108);
        Src = v152;
        v152 = 0LL;
      }
      else
      {
        v80 = HeapHandle;
      }
      v81 = 4 * v79[1] + 8;
      ReturnLength = v81;
      if ( v138 )
        v82 = 4 * *((unsigned __int8 *)v138 + 1) + 8;
      else
        v82 = 0;
      v83 = v76 & 0x10;
      if ( (v76 & 0x10) != 0 && v133 )
        v84 = (*((unsigned __int16 *)v133 + 1) + 3) & 0xFFFFFFFC;
      else
        v84 = 0;
      v85 = v76 & 4;
      if ( (v76 & 4) != 0 && Src )
        v86 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      else
        v86 = 0;
      Heap = RtlAllocateHeap(v80, NtdllBaseTag + 1310720, v84 + v86 + v82 + v81 + 20);
      v120 = Heap;
      v88 = Heap;
      if ( !Heap )
      {
        v36 = (ACL *)v133;
        v33 = -1073741801;
        goto LABEL_305;
      }
      v89 = v118;
      v90 = (char *)(Heap + 5);
      *(_OWORD *)Heap = 0LL;
      Heap[4] = 0;
      *((_WORD *)Heap + 1) |= v89;
      v91 = v83 == 0;
      *(_BYTE *)Heap = 1;
      v36 = (ACL *)v133;
      if ( !v91 && v133 )
      {
        memmove(v90, v133, *((unsigned __int16 *)v133 + 1));
        if ( !v113 )
          RtlpApplyAclToObject((__int64)v90, GenericMapping);
        v88 = v120;
        v120[3] = (_DWORD)v90 - (_DWORD)v120;
        AclSize = v36->AclSize;
        if ( v84 > (unsigned int)AclSize )
        {
          memset(&v90[AclSize], 0, v84 - (unsigned int)AclSize);
          v88 = v120;
        }
        v90 += v84;
      }
      if ( v85 )
      {
        v92 = (unsigned __int16 *)Src;
        if ( Src )
        {
          memmove(v90, Src, *((unsigned __int16 *)Src + 1));
          if ( !v114 )
            RtlpApplyAclToObject((__int64)v90, GenericMapping);
          v13 = v120;
          v120[4] = (_DWORD)v90 - (_DWORD)v120;
          v93 = v92[1];
          if ( v86 > (unsigned int)v93 )
            memset(&v90[v93], 0, v86 - (unsigned int)v93);
          v90 += v86;
          goto LABEL_165;
        }
        v88[4] = 0;
      }
      v13 = v120;
LABEL_165:
      v94 = ReturnLength;
      memmove(v90, v135, ReturnLength);
      v95 = (_DWORD)v90 - (_DWORD)v13;
      v96 = &v90[v94];
      v13[1] = v95;
      if ( v138 )
      {
        memmove(v96, v138, v82);
        v13[2] = (_DWORD)v96 - (_DWORD)v13;
      }
      v33 = 0;
      valid = 0;
      goto LABEL_168;
    }
LABEL_323:
    v33 = -1073741700;
    goto LABEL_305;
  }
LABEL_341:
  v33 = -1073741727;
LABEL_305:
  valid = v33;
LABEL_280:
  v13 = v120;
LABEL_168:
  ProcessHeap = HeapHandle;
LABEL_169:
  if ( v151 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v151);
    v36 = Acl;
    v33 = valid;
  }
  if ( v123 && v152 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v152);
    v36 = Acl;
    v33 = valid;
  }
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  RtlFreeHeap(ProcessHeap, 0, v155);
  RtlFreeHeap(ProcessHeap, 0, v156);
  RtlFreeHeap(ProcessHeap, 0, v157);
  RtlFreeHeap(ProcessHeap, 0, v158);
  if ( v159 )
    RtlFreeHeap(ProcessHeap, 0, v159);
  if ( v160 )
    RtlFreeHeap(ProcessHeap, 0, v160);
  if ( (v124 || v113) && v36 )
    RtlFreeHeap(ProcessHeap, 0, v36);
  if ( v125 && v149 )
    RtlFreeHeap(ProcessHeap, 0, v149);
  if ( v114 )
  {
    if ( Src )
      RtlFreeHeap(ProcessHeap, 0, Src);
  }
  *v165 = v13;
  return v33;
}
