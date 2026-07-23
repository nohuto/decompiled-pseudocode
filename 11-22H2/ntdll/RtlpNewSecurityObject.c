/*
 * XREFs of RtlpNewSecurityObject @ 0x180016E10
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlNewSecurityObjectEx @ 0x18007DB20 (RtlNewSecurityObjectEx.c)
 *     RtlNewSecurityObject @ 0x1800862A0 (RtlNewSecurityObject.c)
 *     RtlCreateUserSecurityObject @ 0x1800E1B70 (RtlCreateUserSecurityObject.c)
 *     RtlNewInstanceSecurityObject @ 0x1800E1C10 (RtlNewInstanceSecurityObject.c)
 *     RtlNewSecurityObjectWithMultipleInheritance @ 0x1800E1E90 (RtlNewSecurityObjectWithMultipleInheritance.c)
 * Callees:
 *     RtlpOwnerAcesPresent @ 0x18001070C (RtlpOwnerAcesPresent.c)
 *     RtlpCombineAcls @ 0x18001307C (RtlpCombineAcls.c)
 *     RtlpValidFilterAclSubjectContext @ 0x1800136C4 (RtlpValidFilterAclSubjectContext.c)
 *     RtlCreateSecurityDescriptor @ 0x180014840 (RtlCreateSecurityDescriptor.c)
 *     RtlFindAceByType @ 0x180015720 (RtlFindAceByType.c)
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpInheritAcl @ 0x18001812C (RtlpInheritAcl.c)
 *     RtlCreateAcl @ 0x1800186F0 (RtlCreateAcl.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     RtlpValidTrustSubjectContext @ 0x180068748 (RtlpValidTrustSubjectContext.c)
 *     RtlpGetDefaultsSubjectContext @ 0x180068BDC (RtlpGetDefaultsSubjectContext.c)
 *     RtlAddMandatoryAce @ 0x180069090 (RtlAddMandatoryAce.c)
 *     RtlpApplyAclToObject @ 0x18007A4D8 (RtlpApplyAclToObject.c)
 *     RtlSidDominates @ 0x18007FE80 (RtlSidDominates.c)
 *     RtlpValidOwnerSubjectContext @ 0x180084CDC (RtlpValidOwnerSubjectContext.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwAccessCheck @ 0x18009EDF0 (ZwAccessCheck.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     NtDuplicateToken @ 0x18009F630 (NtDuplicateToken.c)
 *     ZwPrivilegeCheck @ 0x1800A15E0 (ZwPrivilegeCheck.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     RtlpCreateServerAcl @ 0x1800F2C28 (RtlpCreateServerAcl.c)
 *     RtlpNormalizeAcl @ 0x1800F31C0 (RtlpNormalizeAcl.c)
 *     memset$thunk$772440563353939046 @ 0x180130010 (memset$thunk$772440563353939046.c)
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
  char *v13; // r12
  NTSTATUS result; // eax
  ULONG v15; // eax
  __int16 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  _BYTE *v19; // r15
  _BYTE *v20; // r11
  unsigned int v21; // ebx
  int v22; // edi
  int v23; // eax
  int v24; // r9d
  int v25; // r8d
  int v26; // r10d
  __int64 v27; // rcx
  __int64 v28; // rdx
  int v29; // r8d
  int v30; // r9d
  int v31; // eax
  int v32; // ebx
  __int16 v33; // r12
  int v34; // r12d
  ACL *v35; // r15
  __int16 v36; // dx
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // eax
  __int16 v42; // cx
  ACL *v43; // rcx
  char *AceByType; // rax
  __int64 v45; // r8
  __int64 v46; // rdi
  char *v47; // rbx
  unsigned int v48; // esi
  ACL *v49; // rcx
  int v50; // r9d
  int v51; // edx
  ACCESS_MASK AccessMask; // edi
  ACL *v53; // rcx
  char *v54; // rax
  char *v55; // rcx
  void *v56; // rdx
  unsigned __int8 v57; // si
  _DWORD *v58; // rax
  ACL *v59; // rdi
  unsigned int v60; // r8d
  __int64 v61; // rcx
  int v62; // eax
  __int16 v63; // si
  int v64; // r9d
  ACCESS_MASK v65; // r12d
  PVOID v66; // rdi
  ACL *v67; // rbx
  char v68; // di
  int v69; // esi
  char *v70; // rax
  char *v71; // rax
  __int16 v72; // r8
  int v73; // edi
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // r8
  int v78; // edx
  ULONG v79; // r14d
  char *v80; // rdx
  HANDLE v81; // r13
  bool v82; // al
  unsigned __int8 *v83; // rdi
  ULONG v84; // ecx
  unsigned int v85; // r13d
  int v86; // r15d
  unsigned int v87; // ebx
  int v88; // r12d
  unsigned int v89; // r14d
  PVOID v90; // rdi
  char *Heap; // rax
  char *v92; // rsi
  __int16 v93; // cx
  unsigned __int16 *v94; // rdi
  bool v95; // zf
  unsigned __int16 *v96; // rsi
  __int64 v97; // rcx
  __int64 v98; // rbx
  int v99; // eax
  char *v100; // rdi
  PVOID v101; // rsi
  void *v102; // r14
  char *v103; // rsi
  __int64 AclSize; // rcx
  char *v105; // rax
  int v106; // esi
  ACL *v107; // r8
  int v108; // eax
  ULONG v109; // eax
  __int16 v110; // cx
  _BYTE *v111; // rax
  _BYTE *v112; // rax
  ACL *v113; // rcx
  _BYTE *v114; // rax
  PSID v115; // rdx
  void *v116; // rsi
  int ServerAcl; // eax
  PGENERIC_MAPPING v118; // r8
  PGENERIC_MAPPING v119; // r8
  int valid; // [rsp+90h] [rbp-80h] BYREF
  char v121; // [rsp+94h] [rbp-7Ch] BYREF
  char v122; // [rsp+95h] [rbp-7Bh]
  char v123; // [rsp+96h] [rbp-7Ah]
  BOOLEAN Result; // [rsp+97h] [rbp-79h] BYREF
  char v125; // [rsp+98h] [rbp-78h]
  char v126[3]; // [rsp+99h] [rbp-77h] BYREF
  int v127; // [rsp+9Ch] [rbp-74h]
  PVOID HeapHandle; // [rsp+A0h] [rbp-70h]
  char *v129; // [rsp+A8h] [rbp-68h]
  BOOLEAN Dominates; // [rsp+B1h] [rbp-5Fh] BYREF
  char v131; // [rsp+B2h] [rbp-5Eh] BYREF
  char v132; // [rsp+B3h] [rbp-5Dh]
  char v133; // [rsp+B4h] [rbp-5Ch]
  char v134; // [rsp+B5h] [rbp-5Bh]
  ULONG Index; // [rsp+B8h] [rbp-58h] BYREF
  ULONG PrivilegeSetLength; // [rsp+BCh] [rbp-54h] BYREF
  char v137; // [rsp+C0h] [rbp-50h] BYREF
  char v138; // [rsp+C1h] [rbp-4Fh] BYREF
  bool v139; // [rsp+C2h] [rbp-4Eh]
  unsigned int v140; // [rsp+C4h] [rbp-4Ch]
  __int16 v141; // [rsp+C8h] [rbp-48h]
  PACL Acl; // [rsp+D0h] [rbp-40h] BYREF
  void *v143; // [rsp+D8h] [rbp-38h]
  NTSTATUS AccessStatus; // [rsp+E0h] [rbp-30h] BYREF
  void *v145; // [rsp+E8h] [rbp-28h]
  PGENERIC_MAPPING GenericMapping; // [rsp+F0h] [rbp-20h]
  HANDLE ClientToken; // [rsp+F8h] [rbp-18h]
  void *Src; // [rsp+100h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+108h] [rbp-8h] BYREF
  ULONG ReturnLength; // [rsp+10Ch] [rbp-4h] BYREF
  void *v151; // [rsp+110h] [rbp+0h]
  PSID Sid; // [rsp+118h] [rbp+8h]
  _BYTE *v153; // [rsp+120h] [rbp+10h]
  PSID Sid1; // [rsp+128h] [rbp+18h] BYREF
  __int64 v155; // [rsp+130h] [rbp+20h]
  int v156; // [rsp+138h] [rbp+28h]
  __int64 v157; // [rsp+140h] [rbp+30h]
  char *v158; // [rsp+148h] [rbp+38h]
  PVOID v159; // [rsp+150h] [rbp+40h] BYREF
  PVOID v160; // [rsp+158h] [rbp+48h] BYREF
  PVOID v161; // [rsp+160h] [rbp+50h] BYREF
  __int64 v162; // [rsp+168h] [rbp+58h] BYREF
  ULONG v163[2]; // [rsp+170h] [rbp+60h] BYREF
  int v164[2]; // [rsp+178h] [rbp+68h]
  int v165; // [rsp+180h] [rbp+70h]
  __int64 v166; // [rsp+188h] [rbp+78h]
  int v167; // [rsp+190h] [rbp+80h] BYREF
  PVOID BaseAddress; // [rsp+198h] [rbp+88h]
  PVOID v169; // [rsp+1A0h] [rbp+90h] BYREF
  PVOID v170; // [rsp+1A8h] [rbp+98h] BYREF
  PVOID v171; // [rsp+1B0h] [rbp+A0h]
  PVOID v172; // [rsp+1B8h] [rbp+A8h] BYREF
  ACL *v173; // [rsp+1C0h] [rbp+B0h] BYREF
  ACL *v174; // [rsp+1C8h] [rbp+B8h]
  ACL *v175; // [rsp+1D0h] [rbp+C0h] BYREF
  PVOID v176; // [rsp+1D8h] [rbp+C8h]
  PVOID v177; // [rsp+1E0h] [rbp+D0h]
  _QWORD *v178; // [rsp+1E8h] [rbp+D8h]
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+1F0h] [rbp+E0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+220h] [rbp+110h] BYREF
  _PRIVILEGE_SET RequiredPrivileges; // [rsp+248h] [rbp+138h] BYREF
  _DWORD v182[2]; // [rsp+260h] [rbp+150h] BYREF
  __int16 v183; // [rsp+268h] [rbp+158h]
  char TokenInformation[24]; // [rsp+270h] [rbp+160h] BYREF
  int v185; // [rsp+288h] [rbp+178h]
  int v186; // [rsp+28Ch] [rbp+17Ch]
  ACL v187; // [rsp+2B0h] [rbp+1A0h] BYREF

  GenericMapping = a9;
  v174 = &v187;
  v160 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  *(_QWORD *)v164 = a4;
  v178 = a3;
  v13 = 0LL;
  ClientToken = TokenHandle;
  HeapHandle = NtCurrentPeb()->ProcessHeap;
  v143 = 0LL;
  Acl = 0LL;
  v159 = 0LL;
  v123 = 0;
  v133 = 0;
  v132 = 0;
  GrantedAccess = 0;
  Src = 0LL;
  v161 = 0LL;
  v122 = 0;
  v125 = 0;
  v121 = 0;
  v137 = 0;
  v138 = 0;
  v126[0] = 0;
  LOBYTE(v156) = 0;
  v131 = 0;
  Sid1 = 0LL;
  v166 = 0LL;
  v153 = 0LL;
  v157 = 0LL;
  v155 = 0LL;
  v129 = 0LL;
  Index = 0;
  v158 = 0LL;
  Sid = 0LL;
  v173 = 0LL;
  v175 = 0LL;
  Dominates = 1;
  LOBYTE(v165) = 1;
  BaseAddress = 0LL;
  v171 = 0LL;
  v172 = 0LL;
  v169 = 0LL;
  v170 = 0LL;
  v162 = 0LL;
  *(_QWORD *)v163 = 0LL;
  if ( TokenHandle )
  {
    result = NtQueryInformationToken(TokenHandle, 0xAu, TokenInformation, 0x38u, &ReturnLength);
    if ( result < 0 )
      return result;
    v165 = v185;
    if ( v185 == 2 && v186 < 1 )
      return -1073741659;
  }
  if ( a2 )
  {
    v134 = 1;
  }
  else
  {
    v134 = 0;
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    a2 = SecurityDescriptor;
  }
  v15 = *((unsigned __int16 *)a2 + 1);
  v141 = *((_WORD *)a2 + 1) & 0x80;
  v16 = v141;
  LOBYTE(v15) = (v15 & 0x40) != 0;
  v139 = v141 != 0;
  ReturnLength = v15;
  if ( TokenHandle || v141 )
  {
    result = RtlpGetDefaultsSubjectContext(
               TokenHandle,
               (ULONG)&v172,
               (__int64)&v162,
               (__int64)&v169,
               (__int64)&v170,
               (ULONG)v163);
    if ( result < 0 )
      return result;
    v177 = (PVOID)v162;
    v11 = *(_BYTE **)BaseAddress;
    v12 = *(_BYTE **)v171;
    v155 = *(_QWORD *)v172;
    Sid1 = *(PSID *)v169;
    v166 = *(_QWORD *)v170;
    if ( v162 )
      v153 = *(_BYTE **)v162;
    else
      v153 = 0LL;
    v16 = v141;
    v176 = *(PVOID *)v163;
    if ( *(_QWORD *)v163 )
      v17 = **(_QWORD **)v163;
    else
      v17 = 0LL;
    v157 = v17;
  }
  else
  {
    v177 = (PVOID)v162;
    v176 = *(PVOID *)v163;
    v17 = 0LL;
  }
  v18 = *((unsigned __int16 *)a2 + 1);
  v140 = a7;
  if ( (v18 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)a2 + 1) )
      goto LABEL_16;
    v19 = &a2[*((unsigned int *)a2 + 1)];
  }
  else
  {
    v19 = (_BYTE *)*((_QWORD *)a2 + 1);
  }
  v145 = v19;
  if ( v19 )
  {
    v125 = 1;
    goto LABEL_20;
  }
LABEL_16:
  if ( (a7 & 0x20) != 0 )
  {
    if ( a1 )
    {
      if ( *(__int16 *)(a1 + 2) >= 0 )
      {
        v19 = *(_BYTE **)(a1 + 8);
      }
      else
      {
        if ( !*(_DWORD *)(a1 + 4) )
          goto LABEL_285;
        v19 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 4));
      }
      v145 = v19;
      v125 = 1;
      if ( v19 )
        goto LABEL_20;
    }
LABEL_285:
    v32 = -1073741734;
LABEL_287:
    valid = v32;
    goto LABEL_288;
  }
  v19 = v11;
  if ( v16 )
    v19 = v153;
  v145 = v19;
  if ( !v19 )
  {
    v32 = -1073741700;
    goto LABEL_287;
  }
LABEL_20:
  if ( (v18 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)a2 + 2) )
      goto LABEL_23;
    v20 = &a2[*((unsigned int *)a2 + 2)];
  }
  else
  {
    v20 = (_BYTE *)*((_QWORD *)a2 + 2);
  }
  v151 = v20;
  if ( v20 )
    goto LABEL_27;
LABEL_23:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !a1 )
      goto LABEL_286;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v20 = *(_BYTE **)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_286;
      v20 = (_BYTE *)(a1 + *(unsigned int *)(a1 + 8));
    }
  }
  else
  {
    v20 = v12;
    if ( v16 )
      v20 = (_BYTE *)v17;
  }
  v151 = v20;
  if ( !v20 )
  {
LABEL_286:
    v32 = -1073741733;
    goto LABEL_287;
  }
LABEL_27:
  v21 = a7 >> 2;
  LOBYTE(v21) = (a7 & 4) != 0;
  v22 = a7 & 2;
  AccessStatus = v21;
  v23 = (v18 >> 2) & 8;
  v24 = (v18 >> 1) & 0x400;
  v25 = (v18 >> 1) & 0x1000;
  v26 = (v18 & 0x10) != 0 ? 4 : 0;
  if ( (v18 & 0x10) == (_WORD)v143 )
  {
    LODWORD(v27) = 0;
  }
  else
  {
    LODWORD(v27) = 0;
    if ( (v18 & 0x8000u) == 0 )
    {
      v28 = *((_QWORD *)a2 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      LODWORD(v28) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
      goto LABEL_30;
    }
  }
  LODWORD(v28) = 0;
LABEL_30:
  if ( a1 && (*(_BYTE *)(a1 + 2) & 0x10) != 0 )
  {
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v27 = *(_QWORD *)(a1 + 24);
    }
    else if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v27) = a1 + *(_DWORD *)(a1 + 12);
    }
  }
  v29 = v24 | v25;
  v30 = (int)GenericMapping;
  LOBYTE(v30) = a6;
  v31 = RtlpInheritAcl(
          v27,
          v28,
          v26 | v23 | (unsigned int)v29,
          v30,
          v22 != 0,
          v21,
          (__int64)v19,
          (__int64)v20,
          (__int64)v153,
          v157,
          (__int64)GenericMapping,
          2,
          *(__int64 *)v164,
          a5,
          (__int64)&Acl,
          (__int64)&v121,
          (__int64)&PrivilegeSetLength);
  valid = v31;
  v32 = v31;
  if ( v31 >= 0 )
  {
    v123 = 1;
    v109 = PrivilegeSetLength & 0x1400;
    LOWORD(v34) = 2 * (v109 | (2 * (PrivilegeSetLength & 8 | 0x2004)));
    v127 = 2 * (v109 | (2 * (PrivilegeSetLength & 8 | 0x2004)));
    goto LABEL_39;
  }
  if ( v31 != -2147483637 )
  {
LABEL_288:
    v35 = Acl;
    goto LABEL_152;
  }
  v33 = *((_WORD *)a2 + 1);
  if ( (v33 & 0x30) != 0x30 )
  {
    LOWORD(v34) = v22 != 0 ? -30720 : 0x8000;
    v127 = v22 != 0 ? 34816 : 0x8000;
LABEL_39:
    v35 = Acl;
    v143 = Acl;
    goto LABEL_40;
  }
  if ( (v33 & 0x10) != 0 )
  {
    if ( v33 >= 0 )
    {
      v35 = (ACL *)*((_QWORD *)a2 + 3);
      goto LABEL_299;
    }
    if ( *((_DWORD *)a2 + 3) )
    {
      v35 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
LABEL_299:
      v143 = v35;
      goto LABEL_300;
    }
  }
  v35 = 0LL;
  v143 = 0LL;
LABEL_300:
  Acl = v35;
  v34 = (v22 != 0 ? 34816 : 0x8000) | v33 & 0x2000 | 0x10;
  v121 = 1;
  v127 = v34;
LABEL_40:
  v36 = *((_WORD *)a2 + 1);
  v37 = (v36 & 0x10) != 0 ? 4 : 0;
  if ( (v36 & 0x10) == 0 )
  {
LABEL_41:
    LODWORD(v38) = 0;
    goto LABEL_42;
  }
  if ( v36 >= 0 )
  {
    v38 = *((_QWORD *)a2 + 3);
  }
  else
  {
    if ( !*((_DWORD *)a2 + 3) )
      goto LABEL_41;
    LODWORD(v38) = (_DWORD)a2 + *((_DWORD *)a2 + 3);
  }
LABEL_42:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_210;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v39 = *(_QWORD *)(a1 + 24);
    goto LABEL_47;
  }
  if ( *(_DWORD *)(a1 + 12) )
    LODWORD(v39) = a1 + *(_DWORD *)(a1 + 12);
  else
LABEL_210:
    LODWORD(v39) = 0;
LABEL_47:
  v40 = v37 | (*((unsigned __int16 *)a2 + 1) >> 2) & 8 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x400;
  LOBYTE(v37) = a6;
  v41 = RtlpInheritAcl(
          v39,
          v38,
          v40,
          v37,
          v22 != 0,
          AccessStatus,
          (__int64)v145,
          (__int64)v151,
          (__int64)v153,
          v157,
          (__int64)GenericMapping,
          2,
          *(__int64 *)v164,
          a5,
          (__int64)&v159,
          (__int64)&v137,
          (__int64)&Index);
  valid = v41;
  v32 = v41;
  if ( v41 >= 0 )
  {
    v133 = 1;
  }
  else
  {
    if ( v41 != -2147483637 )
      goto LABEL_151;
    v42 = *((_WORD *)a2 + 1);
    if ( (v42 & 0x30) == 0x30 )
    {
      if ( (v42 & 0x10) != 0 )
      {
        if ( v42 >= 0 )
        {
          v112 = (_BYTE *)*((_QWORD *)a2 + 3);
        }
        else if ( *((_DWORD *)a2 + 3) )
        {
          v112 = &a2[*((unsigned int *)a2 + 3)];
        }
        else
        {
          v112 = 0LL;
        }
        v159 = v112;
      }
      else
      {
        v159 = 0LL;
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
      v43 = (ACL *)*((_QWORD *)a2 + 3);
      goto LABEL_53;
    }
    if ( *((_DWORD *)a2 + 3) )
      v43 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
    else
LABEL_52:
      v43 = 0LL;
LABEL_53:
    AceByType = (char *)RtlFindAceByType(v43, 0x14u, &Index);
    v46 = v166;
    v47 = AceByType;
    if ( AceByType
      && AceByType != (char *)-8LL
      && !(unsigned __int8)RtlpValidTrustSubjectContext(v166, AceByType + 8, v45, &valid) )
    {
      v32 = -1073741790;
      goto LABEL_150;
    }
    ++Index;
  }
  while ( v47 );
  v48 = v140;
  if ( (v140 & 0x800) == 0 )
    goto LABEL_56;
  Index = 0;
  while ( 2 )
  {
    if ( (a2[2] & 0x10) == 0 )
      goto LABEL_315;
    if ( *((__int16 *)a2 + 1) >= 0 )
    {
      v113 = (ACL *)*((_QWORD *)a2 + 3);
    }
    else
    {
      if ( *((_DWORD *)a2 + 3) )
      {
        v113 = (ACL *)&a2[*((unsigned int *)a2 + 3)];
        goto LABEL_317;
      }
LABEL_315:
      v113 = 0LL;
    }
LABEL_317:
    v114 = RtlFindAceByType(v113, 0x14u, &Index);
    ++Index;
    if ( v114 )
    {
      if ( (v114[1] & 8) == 0 )
        goto LABEL_319;
      continue;
    }
    break;
  }
  if ( v46 )
  {
LABEL_319:
    v32 = -1073741811;
    goto LABEL_150;
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
  valid = RtlpValidFilterAclSubjectContext(v49, v46);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  v51 = (v48 >> 8) & 1 | 2;
  if ( (v48 & 0x200) == 0 )
    v51 = (v48 >> 8) & 1;
  AccessMask = v51 | 4;
  if ( (v48 & 0x400) == 0 )
    AccessMask = v51;
  if ( AccessMask )
  {
    v55 = 0LL;
    goto LABEL_67;
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
  v158 = v54;
  v55 = v54;
  if ( !v54 )
  {
LABEL_67:
    v56 = 0LL;
    goto LABEL_68;
  }
  v57 = v54[1];
  v56 = v54 + 8;
  AccessMask = *((_DWORD *)v54 + 1);
  Sid = v54 + 8;
  if ( v57 == 8 || (v57 & 0x10) != 0 )
  {
    v55 = 0LL;
    v56 = 0LL;
    v158 = 0LL;
    AccessMask = 0;
    Sid = 0LL;
LABEL_68:
    v57 = 0;
LABEL_72:
    v58 = Sid1;
  }
  else
  {
    v158 = v54;
    v55 = v54;
    if ( (v57 & 8) == 0 )
      goto LABEL_72;
    v158 = v54;
    v58 = Sid1;
    Sid = v56;
    if ( *((_DWORD *)Sid1 + 2) < 0x2000u )
    {
      v32 = -1073740730;
      goto LABEL_150;
    }
  }
  if ( AccessMask )
    goto LABEL_206;
  if ( v58 && v58[2] < 0x2000u )
  {
    AccessMask = 1;
LABEL_206:
    if ( v55 )
      goto LABEL_76;
    if ( ClientToken )
    {
      v56 = v58;
      Sid = v58;
      v57 = 0;
      goto LABEL_76;
    }
    goto LABEL_326;
  }
LABEL_76:
  if ( !v56 )
  {
    v59 = 0LL;
    v174 = 0LL;
    goto LABEL_78;
  }
  valid = RtlCreateAcl(&v187, 0x80u, 2u);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  valid = RtlAddMandatoryAce(&v187, 2u, v57, Sid, 0x11u, AccessMask);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  v55 = v158;
  v59 = &v187;
LABEL_78:
  if ( (v140 & 0x700) != 0 )
  {
    v60 = 4;
  }
  else if ( !v55 && v59 )
  {
    v60 = 0;
  }
  else
  {
    v60 = (*((_WORD *)a2 + 1) & 0x2800 | (*((unsigned __int16 *)a2 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_211;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v61 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v61) = a1 + *(_DWORD *)(a1 + 12);
      goto LABEL_87;
    }
LABEL_211:
    LODWORD(v61) = 0;
  }
LABEL_87:
  LOBYTE(v50) = a6;
  v62 = RtlpInheritAcl(
          v61,
          (_DWORD)v59,
          v60,
          v50,
          1,
          0,
          (__int64)v145,
          (__int64)v151,
          (__int64)v153,
          v157,
          (__int64)GenericMapping,
          3,
          *(__int64 *)v164,
          a5,
          (__int64)&v173,
          (__int64)&v138,
          (__int64)&PrivilegeSetLength);
  valid = v62;
  v32 = v62;
  if ( v62 != -2147483637 )
  {
    if ( v62 >= 0 )
    {
      v59 = v173;
      v63 = PrivilegeSetLength;
      goto LABEL_89;
    }
    goto LABEL_151;
  }
  v63 = 0;
  PrivilegeSetLength = 0;
LABEL_89:
  v32 = RtlpCombineAcls(
          (unsigned __int8 *)v35,
          (unsigned __int8 *)v59,
          (unsigned __int8 *)v159,
          (unsigned __int8 *)v159,
          (unsigned __int8 *)v159,
          (unsigned __int8 *)v159,
          &v175,
          &GrantedAccess);
  valid = v32;
  v65 = ((v34 & 0x2000) << 17) | GrantedAccess;
  if ( !v59 || v59 == v174 )
  {
    v66 = HeapHandle;
  }
  else
  {
    v107 = v59;
    v66 = HeapHandle;
    RtlFreeHeap(HeapHandle, 0, v107);
  }
  if ( v32 < 0 )
    goto LABEL_151;
  v67 = v175;
  if ( v175 )
  {
    if ( v123 && v35 )
      RtlFreeHeap(v66, 0, v35);
    v143 = v67;
    Acl = v67;
    v35 = v67;
    v132 = 1;
    v127 |= 2 * (v63 & 0x1400 | (2 * (v63 & 8 | 4)));
  }
  v68 = v140;
  v69 = v140 & 8;
  if ( (v140 & 8) == 0 )
  {
    v70 = (char *)RtlFindAceByType(v35, (unsigned __int8)v69 + 17, 0LL);
    v71 = v70 ? v70 + 8 : (char *)Sid;
    if ( v71 )
    {
      if ( ClientToken )
      {
        valid = RtlSidDominates(Sid1, v71, &Dominates);
        v32 = valid;
        if ( valid >= 0 )
        {
          v108 = (unsigned __int8)v156;
          if ( !Dominates )
            v108 = 1;
          v156 = v108;
          goto LABEL_97;
        }
        goto LABEL_151;
      }
      goto LABEL_326;
    }
  }
LABEL_97:
  v72 = *((_WORD *)a2 + 1);
  v73 = v68 & 1;
  if ( (v72 & 4) == 0 )
  {
LABEL_100:
    LODWORD(v74) = 0;
    goto LABEL_101;
  }
  if ( v72 < 0 )
  {
    if ( *((_DWORD *)a2 + 4) )
    {
      LODWORD(v74) = (_DWORD)a2 + *((_DWORD *)a2 + 4);
      goto LABEL_101;
    }
    goto LABEL_100;
  }
  v74 = *((_QWORD *)a2 + 4);
LABEL_101:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_256;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v75 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      LODWORD(v75) = a1 + *(_DWORD *)(a1 + 16);
      goto LABEL_106;
    }
LABEL_256:
    LODWORD(v75) = 0;
  }
LABEL_106:
  LOBYTE(v64) = a6;
  v76 = RtlpInheritAcl(
          v75,
          v74,
          v72 & 0x140C,
          v64,
          v73,
          AccessStatus,
          (__int64)v145,
          (__int64)v151,
          (__int64)v153,
          v157,
          (__int64)GenericMapping,
          1,
          *(__int64 *)v164,
          a5,
          (__int64)&Src,
          (__int64)v126,
          (__int64)&PrivilegeSetLength);
  valid = v76;
  v32 = v76;
  if ( v76 >= 0 )
  {
    v78 = 1;
    v122 = 1;
    v79 = PrivilegeSetLength & 0x1408 | 4 | v127;
    goto LABEL_108;
  }
  if ( v76 != -2147483637 )
    goto LABEL_151;
  if ( v73 )
    v127 |= 0x400u;
  v110 = *((_WORD *)a2 + 1);
  if ( (v110 & 0xC) == 0xC )
  {
    if ( (v110 & 4) != 0 )
    {
      if ( v110 >= 0 )
      {
        v111 = (_BYTE *)*((_QWORD *)a2 + 4);
LABEL_270:
        v78 = 1;
        v79 = v110 & 0x1000 | 4 | v127;
        v126[0] = 1;
        goto LABEL_232;
      }
      if ( *((_DWORD *)a2 + 4) )
      {
        v111 = &a2[*((unsigned int *)a2 + 4)];
        goto LABEL_270;
      }
    }
    v111 = 0LL;
    goto LABEL_270;
  }
  v111 = (_BYTE *)v155;
  v78 = 1;
  v79 = v127;
  if ( v155 )
  {
    v79 = v127 | 4;
LABEL_232:
    Src = v111;
LABEL_108:
    v127 = v79;
  }
  if ( (v140 & 0x1000) != 0 || !v134 )
    goto LABEL_119;
  if ( !ClientToken || !a1 )
  {
    v81 = ClientToken;
    goto LABEL_120;
  }
  GrantedAccess = 0;
  AccessStatus = 0;
  valid = RtlpNewSecurityObject(a1, 0, (int)&v160, v164[0], a5, a6, v140 | 1, ClientToken, (__int64)GenericMapping);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  if ( (*((_BYTE *)v160 + 2) & 4) == 0 )
    goto LABEL_333;
  if ( *((__int16 *)v160 + 1) >= 0 )
  {
    v80 = (char *)*((_QWORD *)v160 + 4);
  }
  else
  {
    if ( *((_DWORD *)v160 + 4) )
    {
      v80 = (char *)v160 + *((unsigned int *)v160 + 4);
      goto LABEL_118;
    }
LABEL_333:
    v80 = 0LL;
  }
LABEL_118:
  if ( !RtlpOwnerAcesPresent(0x10u, (__int64)v80) )
  {
LABEL_119:
    v81 = ClientToken;
    goto LABEL_120;
  }
  v81 = ClientToken;
  Sid1 = 0LL;
  PrivilegeSetLength = 20;
  if ( (_BYTE)v165 != 1 )
  {
LABEL_338:
    v115 = v81;
    goto LABEL_339;
  }
  v183 = 1;
  v182[1] = 2;
  ObjectAttributes.SecurityQualityOfService = v182;
  v182[0] = 12;
  ObjectAttributes.Length = 48;
  memset(&ObjectAttributes.RootDirectory, 0, 20);
  ObjectAttributes.SecurityDescriptor = 0LL;
  valid = NtDuplicateToken(ClientToken, 8u, &ObjectAttributes, 0, TokenImpersonation, &Sid1);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  v115 = Sid1;
  if ( !Sid1 )
    goto LABEL_338;
LABEL_339:
  valid = ZwAccessCheck(
            v160,
            v115,
            0x40000u,
            GenericMapping,
            &RequiredPrivileges,
            &PrivilegeSetLength,
            &GrantedAccess,
            &AccessStatus);
  v32 = valid;
  if ( Sid1 )
    NtClose(Sid1);
  if ( v32 < 0 )
    goto LABEL_151;
  v32 = AccessStatus;
  valid = AccessStatus;
  if ( AccessStatus < 0 )
    goto LABEL_151;
LABEL_120:
  if ( v73 && !Src )
  {
    v79 |= 0x1000u;
    v127 = v79;
  }
  v82 = !v65 || (v65 & 0x1B0) != v65;
  if ( !v121 || v69 || !v82 )
    goto LABEL_126;
  if ( !v81 )
    goto LABEL_326;
  v155 = 8LL;
  RequiredPrivileges.Privilege[0].Luid = (_LUID)8LL;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  valid = ZwPrivilegeCheck(v81, &RequiredPrivileges, &Result);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  if ( !Result )
  {
LABEL_344:
    v32 = -1073741727;
    goto LABEL_150;
  }
LABEL_126:
  if ( !(_BYTE)v156 || v69 )
  {
LABEL_127:
    if ( !v125 || (v140 & 0x10) != 0 )
    {
      v83 = (unsigned __int8 *)v145;
LABEL_129:
      if ( v141 && v126[0] )
      {
        v116 = Src;
        LOBYTE(v78) = ReturnLength;
        ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v78, (_DWORD)v153, (unsigned int)&v161, (__int64)&v131);
        valid = ServerAcl;
        v32 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_151;
        if ( v122 && v116 )
          RtlFreeHeap(HeapHandle, 0, v116);
        Src = v161;
        v161 = 0LL;
      }
      v84 = 4 * v83[1] + 8;
      ReturnLength = v84;
      if ( v151 )
        v85 = 4 * *((unsigned __int8 *)v151 + 1) + 8;
      else
        v85 = 0;
      v86 = v79 & 0x10;
      if ( (v79 & 0x10) != 0 && v143 )
        v87 = (*((unsigned __int16 *)v143 + 1) + 3) & 0xFFFFFFFC;
      else
        v87 = 0;
      v88 = v79 & 4;
      if ( (v79 & 4) != 0 && Src )
        v89 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      else
        v89 = 0;
      v90 = HeapHandle;
      Heap = (char *)RtlAllocateHeap(HeapHandle, NtdllBaseTag + 1310720, v87 + v89 + v85 + v84 + 20);
      v129 = Heap;
      v92 = Heap;
      if ( Heap )
      {
        v93 = v127;
        v94 = (unsigned __int16 *)(Heap + 20);
        *(_OWORD *)Heap = 0LL;
        *((_DWORD *)Heap + 4) = 0;
        *((_WORD *)Heap + 1) |= v93;
        v95 = v86 == 0;
        *Heap = 1;
        v35 = (ACL *)v143;
        if ( !v95 && v143 )
        {
          v103 = Heap + 20;
          if ( (v140 & 0x4000) != 0 )
          {
            v118 = GenericMapping;
            if ( v123 )
              v118 = 0LL;
            RtlpNormalizeAcl(v94, v143, v118);
            if ( v94[2] )
            {
              v87 = v94[1];
            }
            else
            {
              v103 = 0LL;
              v87 = 0;
            }
          }
          else
          {
            memmove(v94, v143, *((unsigned __int16 *)v143 + 1));
            if ( !v123 )
              RtlpApplyAclToObject(v94, GenericMapping);
            AclSize = v35->AclSize;
            if ( v87 > (unsigned int)AclSize )
              memset_thunk_772440563353939046((char *)v94 + AclSize, 0, v87 - (unsigned int)AclSize);
          }
          if ( v103 )
          {
            v94 = (unsigned __int16 *)((char *)v94 + v87);
            v105 = v129;
            v106 = (_DWORD)v103 - (_DWORD)v129;
          }
          else
          {
            v105 = v129;
            v106 = 0;
          }
          *((_DWORD *)v105 + 3) = v106;
          v92 = v129;
        }
        if ( v88 )
        {
          v96 = (unsigned __int16 *)Src;
          if ( Src )
          {
            if ( (v140 & 0x4000) != 0 )
            {
              v119 = GenericMapping;
              if ( v122 )
                v119 = 0LL;
              RtlpNormalizeAcl(v94, Src, v119);
              v89 = v94[1];
            }
            else
            {
              memmove(v94, Src, *((unsigned __int16 *)Src + 1));
              if ( !v122 )
                RtlpApplyAclToObject(v94, GenericMapping);
              v97 = v96[1];
              if ( v89 > (unsigned int)v97 )
                memset_thunk_772440563353939046((char *)v94 + v97, 0, v89 - (unsigned int)v97);
            }
            v92 = v129;
            *((_DWORD *)v129 + 4) = (_DWORD)v94 - (_DWORD)v129;
            v94 = (unsigned __int16 *)((char *)v94 + v89);
          }
          else
          {
            v92 = v129;
            *((_DWORD *)v129 + 4) = 0;
          }
        }
        v98 = ReturnLength;
        memmove(v94, v145, ReturnLength);
        v99 = (_DWORD)v94 - (_DWORD)v92;
        v100 = (char *)v94 + v98;
        *((_DWORD *)v92 + 1) = v99;
        if ( v151 )
        {
          memmove(v100, v151, v85);
          *((_DWORD *)v92 + 2) = (_DWORD)v100 - (_DWORD)v92;
        }
        v32 = 0;
LABEL_150:
        valid = v32;
        goto LABEL_151;
      }
      v35 = (ACL *)v143;
      v32 = -1073741801;
      v13 = 0LL;
      valid = -1073741801;
      goto LABEL_153;
    }
    if ( v81 )
    {
      v83 = (unsigned __int8 *)v145;
      LOBYTE(v77) = v139;
      if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v81, v145, v77, &v167) )
      {
        v32 = v167;
        goto LABEL_150;
      }
      goto LABEL_129;
    }
LABEL_326:
    v32 = -1073741700;
    goto LABEL_150;
  }
  if ( !v81 )
    goto LABEL_326;
  v155 = 32LL;
  RequiredPrivileges.Privilege[0].Luid = (_LUID)32LL;
  RequiredPrivileges.PrivilegeCount = 1;
  RequiredPrivileges.Control = 1;
  RequiredPrivileges.Privilege[0].Attributes = 0;
  valid = ZwPrivilegeCheck(v81, &RequiredPrivileges, &Result);
  v32 = valid;
  if ( valid >= 0 )
  {
    if ( !Result )
      goto LABEL_344;
    goto LABEL_127;
  }
LABEL_151:
  v13 = v129;
LABEL_152:
  v90 = HeapHandle;
LABEL_153:
  if ( v160 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v160);
    v35 = Acl;
    v102 = (void *)v162;
    v101 = *(PVOID *)v163;
    v32 = valid;
  }
  else
  {
    v101 = v176;
    v102 = v177;
  }
  if ( v131 && v161 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v161);
    v35 = Acl;
    v102 = (void *)v162;
    v101 = *(PVOID *)v163;
    v32 = valid;
  }
  RtlFreeHeap(v90, 0, BaseAddress);
  RtlFreeHeap(v90, 0, v169);
  RtlFreeHeap(v90, 0, v170);
  RtlFreeHeap(v90, 0, v171);
  RtlFreeHeap(v90, 0, v172);
  if ( v102 )
    RtlFreeHeap(v90, 0, v102);
  if ( v101 )
    RtlFreeHeap(v90, 0, v101);
  if ( (v132 || v123) && v35 )
    RtlFreeHeap(v90, 0, v35);
  if ( v133 && v159 )
    RtlFreeHeap(v90, 0, v159);
  if ( v122 )
  {
    if ( Src )
      RtlFreeHeap(v90, 0, Src);
  }
  *v178 = v13;
  return v32;
}
