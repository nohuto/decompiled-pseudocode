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

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        __int64 a8,
        __int64 a9)
{
  _BYTE *v9; // r14
  _BYTE *v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // r12
  __int64 result; // rax
  int v15; // eax
  __int16 v16; // r8
  __int64 v17; // rax
  unsigned int v18; // edx
  _BYTE *v19; // r15
  __int64 v20; // r11
  int v21; // ebx
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
  unsigned __int16 *v35; // r15
  __int16 v36; // dx
  int v37; // r9d
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r8d
  int v41; // eax
  __int16 v42; // cx
  __int64 v43; // rcx
  unsigned __int8 *AceByType; // rax
  __int64 v45; // r8
  __int64 v46; // rdi
  unsigned __int8 *v47; // rbx
  unsigned int v48; // esi
  __int64 v49; // rcx
  int v50; // r9d
  int v51; // edx
  int v52; // edi
  __int64 v53; // rcx
  unsigned __int8 *v54; // rax
  unsigned __int8 *v55; // rcx
  unsigned __int8 *v56; // rdx
  unsigned __int8 v57; // si
  unsigned __int8 *v58; // rax
  unsigned __int8 *v59; // rdi
  unsigned int v60; // r8d
  __int64 v61; // rcx
  int v62; // eax
  __int16 v63; // si
  int v64; // r9d
  int v65; // r12d
  void *v66; // rdi
  void *v67; // rbx
  char v68; // di
  int v69; // esi
  unsigned __int8 *v70; // rax
  __int64 v71; // rax
  __int16 v72; // r8
  int v73; // edi
  __int64 v74; // rdx
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // r8
  int v78; // edx
  int v79; // r14d
  __int64 v80; // r8
  __int64 v81; // rdx
  __int64 v82; // r13
  bool v83; // al
  unsigned __int8 *v84; // rdi
  int v85; // ecx
  unsigned int v86; // r13d
  int v87; // r15d
  unsigned int v88; // ebx
  int v89; // r12d
  unsigned int v90; // r14d
  void *v91; // rdi
  __int64 Heap; // rax
  __int64 v93; // rsi
  __int16 v94; // cx
  unsigned __int16 *v95; // rdi
  bool v96; // zf
  unsigned __int16 *v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rbx
  int v100; // eax
  char *v101; // rdi
  __int64 *v102; // rsi
  __int64 *v103; // r14
  __int64 v104; // rsi
  __int64 v105; // rcx
  __int64 v106; // rax
  int v107; // esi
  unsigned __int8 *v108; // r8
  int v109; // eax
  int v110; // eax
  __int16 v111; // cx
  _BYTE *v112; // rax
  unsigned __int8 *v113; // rax
  __int64 v114; // rcx
  unsigned __int8 *v115; // rax
  __int64 v116; // rdx
  void *v117; // rsi
  int ServerAcl; // eax
  __int64 v119; // r8
  __int64 v120; // r8
  __int64 v121; // [rsp+20h] [rbp-F0h]
  int valid; // [rsp+90h] [rbp-80h] BYREF
  char v123; // [rsp+94h] [rbp-7Ch] BYREF
  char v124; // [rsp+95h] [rbp-7Bh]
  char v125; // [rsp+96h] [rbp-7Ah]
  char v126; // [rsp+97h] [rbp-79h] BYREF
  char v127; // [rsp+98h] [rbp-78h]
  char v128[3]; // [rsp+99h] [rbp-77h] BYREF
  int v129; // [rsp+9Ch] [rbp-74h]
  void *ProcessHeap; // [rsp+A0h] [rbp-70h]
  __int64 v131; // [rsp+A8h] [rbp-68h]
  char v132; // [rsp+B1h] [rbp-5Fh] BYREF
  char v133; // [rsp+B2h] [rbp-5Eh] BYREF
  char v134; // [rsp+B3h] [rbp-5Dh]
  char v135; // [rsp+B4h] [rbp-5Ch]
  char v136; // [rsp+B5h] [rbp-5Bh]
  unsigned int v137; // [rsp+B8h] [rbp-58h] BYREF
  int v138; // [rsp+BCh] [rbp-54h] BYREF
  char v139; // [rsp+C0h] [rbp-50h] BYREF
  char v140; // [rsp+C1h] [rbp-4Fh] BYREF
  bool v141; // [rsp+C2h] [rbp-4Eh]
  unsigned int v142; // [rsp+C4h] [rbp-4Ch]
  __int16 v143; // [rsp+C8h] [rbp-48h]
  unsigned __int16 *v144; // [rsp+D0h] [rbp-40h] BYREF
  void *v145; // [rsp+D8h] [rbp-38h]
  int v146; // [rsp+E0h] [rbp-30h] BYREF
  void *v147; // [rsp+E8h] [rbp-28h]
  __int64 v148; // [rsp+F0h] [rbp-20h]
  __int64 v149; // [rsp+F8h] [rbp-18h]
  void *Src; // [rsp+100h] [rbp-10h] BYREF
  int v151; // [rsp+108h] [rbp-8h] BYREF
  _DWORD Size[3]; // [rsp+10Ch] [rbp-4h] BYREF
  unsigned __int8 *v153; // [rsp+118h] [rbp+8h]
  _BYTE *v154; // [rsp+120h] [rbp+10h]
  HANDLE Handle; // [rsp+128h] [rbp+18h] BYREF
  __int64 v156; // [rsp+130h] [rbp+20h]
  int v157; // [rsp+138h] [rbp+28h]
  __int64 v158; // [rsp+140h] [rbp+30h]
  unsigned __int8 *v159; // [rsp+148h] [rbp+38h]
  unsigned __int8 *v160; // [rsp+150h] [rbp+40h] BYREF
  __int64 v161; // [rsp+158h] [rbp+48h] BYREF
  void *v162; // [rsp+160h] [rbp+50h] BYREF
  __int64 *v163; // [rsp+168h] [rbp+58h] BYREF
  __int64 *v164; // [rsp+170h] [rbp+60h] BYREF
  __int64 v165; // [rsp+178h] [rbp+68h]
  int v166; // [rsp+180h] [rbp+70h]
  __int64 v167; // [rsp+188h] [rbp+78h]
  int v168; // [rsp+190h] [rbp+80h] BYREF
  void **v169; // [rsp+198h] [rbp+88h] BYREF
  HANDLE *v170; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 *v171; // [rsp+1A8h] [rbp+98h] BYREF
  __int64 *v172; // [rsp+1B0h] [rbp+A0h] BYREF
  __int64 *v173; // [rsp+1B8h] [rbp+A8h] BYREF
  unsigned __int8 *v174; // [rsp+1C0h] [rbp+B0h] BYREF
  unsigned __int8 *v175; // [rsp+1C8h] [rbp+B8h]
  void *v176; // [rsp+1D0h] [rbp+C0h] BYREF
  __int64 *v177; // [rsp+1D8h] [rbp+C8h]
  __int64 *v178; // [rsp+1E0h] [rbp+D0h]
  __int64 *v179; // [rsp+1E8h] [rbp+D8h]
  int v180; // [rsp+1F0h] [rbp+E0h] BYREF
  __int64 v181; // [rsp+1F8h] [rbp+E8h]
  __int64 v182; // [rsp+200h] [rbp+F0h]
  int v183; // [rsp+208h] [rbp+F8h]
  __int64 v184; // [rsp+210h] [rbp+100h]
  _DWORD *v185; // [rsp+218h] [rbp+108h]
  _BYTE v186[40]; // [rsp+220h] [rbp+110h] BYREF
  int v187; // [rsp+248h] [rbp+138h] BYREF
  int v188; // [rsp+24Ch] [rbp+13Ch]
  __int64 v189; // [rsp+250h] [rbp+140h]
  int v190; // [rsp+258h] [rbp+148h]
  _DWORD v191[2]; // [rsp+260h] [rbp+150h] BYREF
  __int16 v192; // [rsp+268h] [rbp+158h]
  char v193[24]; // [rsp+270h] [rbp+160h] BYREF
  int v194; // [rsp+288h] [rbp+178h]
  int v195; // [rsp+28Ch] [rbp+17Ch]
  _BYTE v196[128]; // [rsp+2B0h] [rbp+1A0h] BYREF

  v9 = a2;
  v148 = a9;
  v175 = v196;
  v161 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v165 = a4;
  v179 = a3;
  v13 = 0LL;
  v149 = a8;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v145 = 0LL;
  v144 = 0LL;
  v160 = 0LL;
  v125 = 0;
  v135 = 0;
  v134 = 0;
  v151 = 0;
  Src = 0LL;
  v162 = 0LL;
  v124 = 0;
  v127 = 0;
  v123 = 0;
  v139 = 0;
  v140 = 0;
  v128[0] = 0;
  LOBYTE(v157) = 0;
  v133 = 0;
  Handle = 0LL;
  v167 = 0LL;
  v154 = 0LL;
  v158 = 0LL;
  v156 = 0LL;
  v131 = 0LL;
  v137 = 0;
  v159 = 0LL;
  v153 = 0LL;
  v174 = 0LL;
  v176 = 0LL;
  v132 = 1;
  LOBYTE(v166) = 1;
  v169 = 0LL;
  v172 = 0LL;
  v173 = 0LL;
  v170 = 0LL;
  v171 = 0LL;
  v163 = 0LL;
  v164 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v193, 56LL, Size);
    if ( (int)result < 0 )
      return result;
    v166 = v194;
    if ( v194 == 2 && v195 < 1 )
      return 3221225637LL;
  }
  if ( v9 )
  {
    v136 = 1;
  }
  else
  {
    v136 = 0;
    RtlCreateSecurityDescriptor((__int64)v186, 1);
    v9 = v186;
  }
  v15 = *((unsigned __int16 *)v9 + 1);
  v143 = *((_WORD *)v9 + 1) & 0x80;
  v16 = v143;
  LOBYTE(v15) = (v15 & 0x40) != 0;
  v141 = v143 != 0;
  Size[0] = v15;
  if ( a8 || v143 )
  {
    LOBYTE(a2) = v143 != 0;
    result = RtlpGetDefaultsSubjectContext(
               a8,
               (_DWORD)a2,
               (unsigned int)&v169,
               (unsigned int)&v172,
               (__int64)&v173,
               (__int64)&v163,
               (__int64)&v170,
               (__int64)&v171,
               (__int64)&v164);
    if ( (int)result < 0 )
      return result;
    v178 = v163;
    v11 = *v169;
    v12 = *v172;
    v156 = *v173;
    Handle = *v170;
    v167 = *v171;
    if ( v163 )
      v154 = (_BYTE *)*v163;
    else
      v154 = 0LL;
    v16 = v143;
    v177 = v164;
    if ( v164 )
      v17 = *v164;
    else
      v17 = 0LL;
    v158 = v17;
  }
  else
  {
    v178 = v163;
    v177 = v164;
    v17 = 0LL;
  }
  v18 = *((unsigned __int16 *)v9 + 1);
  v142 = a7;
  if ( (v18 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v9 + 1) )
      goto LABEL_16;
    v19 = &v9[*((unsigned int *)v9 + 1)];
  }
  else
  {
    v19 = (_BYTE *)*((_QWORD *)v9 + 1);
  }
  v147 = v19;
  if ( v19 )
  {
    v127 = 1;
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
      v147 = v19;
      v127 = 1;
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
    v19 = v154;
  v147 = v19;
  if ( !v19 )
  {
    v32 = -1073741700;
    goto LABEL_287;
  }
LABEL_20:
  if ( (v18 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v9 + 2) )
      goto LABEL_23;
    v20 = (__int64)&v9[*((unsigned int *)v9 + 2)];
  }
  else
  {
    v20 = *((_QWORD *)v9 + 2);
  }
  *(_QWORD *)&Size[1] = v20;
  if ( v20 )
    goto LABEL_27;
LABEL_23:
  if ( (a7 & 0x40) != 0 )
  {
    if ( !a1 )
      goto LABEL_286;
    if ( *(__int16 *)(a1 + 2) >= 0 )
    {
      v20 = *(_QWORD *)(a1 + 16);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 8) )
        goto LABEL_286;
      v20 = a1 + *(unsigned int *)(a1 + 8);
    }
  }
  else
  {
    v20 = v12;
    if ( v16 )
      v20 = v17;
  }
  *(_QWORD *)&Size[1] = v20;
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
  v146 = v21;
  v23 = (v18 >> 2) & 8;
  v24 = (v18 >> 1) & 0x400;
  v25 = (v18 >> 1) & 0x1000;
  v26 = (v18 & 0x10) != 0 ? 4 : 0;
  if ( (v18 & 0x10) == (_WORD)v145 )
  {
    LODWORD(v27) = 0;
  }
  else
  {
    LODWORD(v27) = 0;
    if ( (v18 & 0x8000u) == 0 )
    {
      v28 = *((_QWORD *)v9 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)v9 + 3) )
    {
      LODWORD(v28) = (_DWORD)v9 + *((_DWORD *)v9 + 3);
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
  v30 = v148;
  LOBYTE(v30) = a6;
  v31 = RtlpInheritAcl(
          v27,
          v28,
          v26 | v23 | (unsigned int)v29,
          v30,
          v22 != 0,
          v21,
          (__int64)v19,
          v20,
          (__int64)v154,
          v158,
          v148,
          2,
          v165,
          a5,
          (__int64)&v144,
          (__int64)&v123,
          (__int64)&v138);
  valid = v31;
  v32 = v31;
  if ( v31 >= 0 )
  {
    v125 = 1;
    v110 = v138 & 0x1400;
    LOWORD(v34) = 2 * (v110 | (2 * (v138 & 8 | 0x2004)));
    v129 = 2 * (v110 | (2 * (v138 & 8 | 0x2004)));
    goto LABEL_39;
  }
  if ( v31 != -2147483637 )
  {
LABEL_288:
    v35 = v144;
    goto LABEL_152;
  }
  v33 = *((_WORD *)v9 + 1);
  if ( (v33 & 0x30) != 0x30 )
  {
    LOWORD(v34) = v22 != 0 ? -30720 : 0x8000;
    v129 = v22 != 0 ? 34816 : 0x8000;
LABEL_39:
    v35 = v144;
    v145 = v144;
    goto LABEL_40;
  }
  if ( (v33 & 0x10) != 0 )
  {
    if ( v33 >= 0 )
    {
      v35 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
      goto LABEL_299;
    }
    if ( *((_DWORD *)v9 + 3) )
    {
      v35 = (unsigned __int16 *)&v9[*((unsigned int *)v9 + 3)];
LABEL_299:
      v145 = v35;
      goto LABEL_300;
    }
  }
  v35 = 0LL;
  v145 = 0LL;
LABEL_300:
  v144 = v35;
  v34 = (v22 != 0 ? 34816 : 0x8000) | v33 & 0x2000 | 0x10;
  v123 = 1;
  v129 = v34;
LABEL_40:
  v36 = *((_WORD *)v9 + 1);
  v37 = (v36 & 0x10) != 0 ? 4 : 0;
  if ( (v36 & 0x10) == 0 )
  {
LABEL_41:
    LODWORD(v38) = 0;
    goto LABEL_42;
  }
  if ( v36 >= 0 )
  {
    v38 = *((_QWORD *)v9 + 3);
  }
  else
  {
    if ( !*((_DWORD *)v9 + 3) )
      goto LABEL_41;
    LODWORD(v38) = (_DWORD)v9 + *((_DWORD *)v9 + 3);
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
  v40 = v37 | (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400;
  LOBYTE(v37) = a6;
  v41 = RtlpInheritAcl(
          v39,
          v38,
          v40,
          v37,
          v22 != 0,
          v146,
          (__int64)v147,
          *(__int64 *)&Size[1],
          (__int64)v154,
          v158,
          v148,
          2,
          v165,
          a5,
          (__int64)&v160,
          (__int64)&v139,
          (__int64)&v137);
  valid = v41;
  v32 = v41;
  if ( v41 >= 0 )
  {
    v135 = 1;
  }
  else
  {
    if ( v41 != -2147483637 )
      goto LABEL_151;
    v42 = *((_WORD *)v9 + 1);
    if ( (v42 & 0x30) == 0x30 )
    {
      if ( (v42 & 0x10) != 0 )
      {
        if ( v42 >= 0 )
        {
          v113 = (unsigned __int8 *)*((_QWORD *)v9 + 3);
        }
        else if ( *((_DWORD *)v9 + 3) )
        {
          v113 = &v9[*((unsigned int *)v9 + 3)];
        }
        else
        {
          v113 = 0LL;
        }
        v160 = v113;
      }
      else
      {
        v160 = 0LL;
      }
    }
  }
  v137 = 0;
  do
  {
    if ( (v9[2] & 0x10) == 0 )
      goto LABEL_52;
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v43 = *((_QWORD *)v9 + 3);
      goto LABEL_53;
    }
    if ( *((_DWORD *)v9 + 3) )
      v43 = (__int64)&v9[*((unsigned int *)v9 + 3)];
    else
LABEL_52:
      v43 = 0LL;
LABEL_53:
    AceByType = RtlFindAceByType(v43, 20, &v137);
    v46 = v167;
    v47 = AceByType;
    if ( AceByType
      && AceByType != (unsigned __int8 *)-8LL
      && !(unsigned __int8)RtlpValidTrustSubjectContext(v167, AceByType + 8, v45, &valid) )
    {
      v32 = -1073741790;
      goto LABEL_150;
    }
    ++v137;
  }
  while ( v47 );
  v48 = v142;
  if ( (v142 & 0x800) == 0 )
    goto LABEL_56;
  v137 = 0;
  while ( 2 )
  {
    if ( (v9[2] & 0x10) == 0 )
      goto LABEL_315;
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v114 = *((_QWORD *)v9 + 3);
    }
    else
    {
      if ( *((_DWORD *)v9 + 3) )
      {
        v114 = (__int64)&v9[*((unsigned int *)v9 + 3)];
        goto LABEL_317;
      }
LABEL_315:
      v114 = 0LL;
    }
LABEL_317:
    v115 = RtlFindAceByType(v114, 20, &v137);
    ++v137;
    if ( v115 )
    {
      if ( (v115[1] & 8) == 0 )
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
  if ( (v9[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v49 = *((_QWORD *)v9 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v9 + 3) )
        goto LABEL_57;
      v49 = (__int64)&v9[*((unsigned int *)v9 + 3)];
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
  v52 = v51 | 4;
  if ( (v48 & 0x400) == 0 )
    v52 = v51;
  if ( v52 )
  {
    v55 = 0LL;
    goto LABEL_67;
  }
  if ( (v9[2] & 0x10) == 0 )
    goto LABEL_65;
  if ( *((__int16 *)v9 + 1) >= 0 )
  {
    v53 = *((_QWORD *)v9 + 3);
  }
  else if ( *((_DWORD *)v9 + 3) )
  {
    v53 = (__int64)&v9[*((unsigned int *)v9 + 3)];
  }
  else
  {
LABEL_65:
    v53 = 0LL;
  }
  v54 = RtlFindAceByType(v53, 17, 0LL);
  v159 = v54;
  v55 = v54;
  if ( !v54 )
  {
LABEL_67:
    v56 = 0LL;
    goto LABEL_68;
  }
  v57 = v54[1];
  v56 = v54 + 8;
  v52 = *((_DWORD *)v54 + 1);
  v153 = v54 + 8;
  if ( v57 == 8 || (v57 & 0x10) != 0 )
  {
    v55 = 0LL;
    v56 = 0LL;
    v159 = 0LL;
    v52 = 0;
    v153 = 0LL;
LABEL_68:
    v57 = 0;
LABEL_72:
    v58 = (unsigned __int8 *)Handle;
  }
  else
  {
    v159 = v54;
    v55 = v54;
    if ( (v57 & 8) == 0 )
      goto LABEL_72;
    v159 = v54;
    v58 = (unsigned __int8 *)Handle;
    v153 = v56;
    if ( *((_DWORD *)Handle + 2) < 0x2000u )
    {
      v32 = -1073740730;
      goto LABEL_150;
    }
  }
  if ( v52 )
    goto LABEL_206;
  if ( v58 && *((_DWORD *)v58 + 2) < 0x2000u )
  {
    v52 = 1;
LABEL_206:
    if ( v55 )
      goto LABEL_76;
    if ( v149 )
    {
      v56 = v58;
      v153 = v58;
      v57 = 0;
      goto LABEL_76;
    }
    goto LABEL_326;
  }
LABEL_76:
  if ( !v56 )
  {
    v59 = 0LL;
    v175 = 0LL;
    goto LABEL_78;
  }
  valid = RtlCreateAcl(v196, 128LL, 2LL);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  valid = RtlAddMandatoryAce((unsigned int)v196, 2, v57, (_DWORD)v153, 17, v52);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  v55 = v159;
  v59 = v196;
LABEL_78:
  if ( (v142 & 0x700) != 0 )
  {
    v60 = 4;
  }
  else if ( !v55 && v59 )
  {
    v60 = 0;
  }
  else
  {
    v60 = (*((_WORD *)v9 + 1) & 0x2800 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x18u) >> 1;
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
          (__int64)v147,
          *(__int64 *)&Size[1],
          (__int64)v154,
          v158,
          v148,
          3,
          v165,
          a5,
          (__int64)&v174,
          (__int64)&v140,
          (__int64)&v138);
  valid = v62;
  v32 = v62;
  if ( v62 != -2147483637 )
  {
    if ( v62 >= 0 )
    {
      v59 = v174;
      v63 = v138;
      goto LABEL_89;
    }
    goto LABEL_151;
  }
  v63 = 0;
  v138 = 0;
LABEL_89:
  v32 = RtlpCombineAcls((unsigned __int8 *)v35, v59, v160, v160, v160, v160, (__int64 *)&v176, &v151);
  valid = v32;
  v65 = ((v34 & 0x2000) << 17) | v151;
  if ( !v59 || v59 == v175 )
  {
    v66 = ProcessHeap;
  }
  else
  {
    v108 = v59;
    v66 = ProcessHeap;
    RtlFreeHeap(ProcessHeap, 0LL, v108);
  }
  if ( v32 < 0 )
    goto LABEL_151;
  v67 = v176;
  if ( v176 )
  {
    if ( v125 && v35 )
      RtlFreeHeap(v66, 0LL, v35);
    v145 = v67;
    v144 = (unsigned __int16 *)v67;
    v35 = (unsigned __int16 *)v67;
    v134 = 1;
    v129 |= 2 * (v63 & 0x1400 | (2 * (v63 & 8 | 4)));
  }
  v68 = v142;
  v69 = v142 & 8;
  if ( (v142 & 8) == 0 )
  {
    v70 = RtlFindAceByType((__int64)v35, v69 + 17, 0LL);
    v71 = (__int64)(v70 ? v70 + 8 : v153);
    if ( v71 )
    {
      if ( v149 )
      {
        valid = RtlSidDominates(Handle, v71, &v132);
        v32 = valid;
        if ( valid >= 0 )
        {
          v109 = (unsigned __int8)v157;
          if ( !v132 )
            v109 = 1;
          v157 = v109;
          goto LABEL_97;
        }
        goto LABEL_151;
      }
      goto LABEL_326;
    }
  }
LABEL_97:
  v72 = *((_WORD *)v9 + 1);
  v73 = v68 & 1;
  if ( (v72 & 4) == 0 )
  {
LABEL_100:
    LODWORD(v74) = 0;
    goto LABEL_101;
  }
  if ( v72 < 0 )
  {
    if ( *((_DWORD *)v9 + 4) )
    {
      LODWORD(v74) = (_DWORD)v9 + *((_DWORD *)v9 + 4);
      goto LABEL_101;
    }
    goto LABEL_100;
  }
  v74 = *((_QWORD *)v9 + 4);
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
          v146,
          (__int64)v147,
          *(__int64 *)&Size[1],
          (__int64)v154,
          v158,
          v148,
          1,
          v165,
          a5,
          (__int64)&Src,
          (__int64)v128,
          (__int64)&v138);
  valid = v76;
  v32 = v76;
  if ( v76 >= 0 )
  {
    v78 = 1;
    v124 = 1;
    v79 = v138 & 0x1408 | 4 | v129;
    goto LABEL_108;
  }
  if ( v76 != -2147483637 )
    goto LABEL_151;
  if ( v73 )
    v129 |= 0x400u;
  v111 = *((_WORD *)v9 + 1);
  if ( (v111 & 0xC) == 0xC )
  {
    if ( (v111 & 4) != 0 )
    {
      if ( v111 >= 0 )
      {
        v112 = (_BYTE *)*((_QWORD *)v9 + 4);
LABEL_270:
        v78 = 1;
        v79 = v111 & 0x1000 | 4 | v129;
        v128[0] = 1;
        goto LABEL_232;
      }
      if ( *((_DWORD *)v9 + 4) )
      {
        v112 = &v9[*((unsigned int *)v9 + 4)];
        goto LABEL_270;
      }
    }
    v112 = 0LL;
    goto LABEL_270;
  }
  v112 = (_BYTE *)v156;
  v78 = 1;
  v79 = v129;
  if ( v156 )
  {
    v79 = v129 | 4;
LABEL_232:
    Src = v112;
LABEL_108:
    v129 = v79;
  }
  if ( (v142 & 0x1000) != 0 || !v136 )
    goto LABEL_119;
  if ( !v149 || !a1 )
  {
    v82 = v149;
    goto LABEL_120;
  }
  v151 = 0;
  v146 = 0;
  valid = RtlpNewSecurityObject(a1, 0, (unsigned int)&v161, v165, a5, a6, v142 | 1, v149, v148);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  if ( (*(_BYTE *)(v161 + 2) & 4) == 0 )
    goto LABEL_333;
  if ( *(__int16 *)(v161 + 2) >= 0 )
  {
    v81 = *(_QWORD *)(v161 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v161 + 16) )
    {
      v81 = v161 + *(unsigned int *)(v161 + 16);
      goto LABEL_118;
    }
LABEL_333:
    v81 = 0LL;
  }
LABEL_118:
  if ( !RtlpOwnerAcesPresent(0x10u, v81, v80) )
  {
LABEL_119:
    v82 = v149;
    goto LABEL_120;
  }
  v82 = v149;
  Handle = 0LL;
  v138 = 20;
  if ( (_BYTE)v166 != 1 )
  {
LABEL_338:
    v116 = v82;
    goto LABEL_339;
  }
  v192 = 1;
  v191[1] = 2;
  v185 = v191;
  v191[0] = 12;
  LODWORD(v121) = 2;
  v180 = 48;
  v181 = 0LL;
  v183 = 0;
  v182 = 0LL;
  v184 = 0LL;
  valid = NtDuplicateToken(v149, 8LL, &v180, 0LL, v121, &Handle);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  v116 = (__int64)Handle;
  if ( !Handle )
    goto LABEL_338;
LABEL_339:
  valid = ZwAccessCheck(v161, v116, 0x40000LL, v148, &v187, &v138, &v151, &v146);
  v32 = valid;
  if ( Handle )
    NtClose(Handle);
  if ( v32 < 0 )
    goto LABEL_151;
  v32 = v146;
  valid = v146;
  if ( v146 < 0 )
    goto LABEL_151;
LABEL_120:
  if ( v73 && !Src )
  {
    v79 |= 0x1000u;
    v129 = v79;
  }
  v83 = !v65 || (v65 & 0x1B0) != v65;
  if ( !v123 || v69 || !v83 )
    goto LABEL_126;
  if ( !v82 )
    goto LABEL_326;
  v156 = 8LL;
  v189 = 8LL;
  v187 = 1;
  v188 = 1;
  v190 = 0;
  valid = ZwPrivilegeCheck(v82, &v187, &v126);
  v32 = valid;
  if ( valid < 0 )
    goto LABEL_151;
  if ( !v126 )
  {
LABEL_344:
    v32 = -1073741727;
    goto LABEL_150;
  }
LABEL_126:
  if ( !(_BYTE)v157 || v69 )
  {
LABEL_127:
    if ( !v127 || (v142 & 0x10) != 0 )
    {
      v84 = (unsigned __int8 *)v147;
LABEL_129:
      if ( v143 && v128[0] )
      {
        v117 = Src;
        LOBYTE(v78) = Size[0];
        ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v78, (_DWORD)v154, (unsigned int)&v162, (__int64)&v133);
        valid = ServerAcl;
        v32 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_151;
        if ( v124 && v117 )
          RtlFreeHeap(ProcessHeap, 0LL, v117);
        Src = v162;
        v162 = 0LL;
      }
      v85 = 4 * v84[1] + 8;
      Size[0] = v85;
      if ( *(_QWORD *)&Size[1] )
        v86 = 4 * *(unsigned __int8 *)(*(_QWORD *)&Size[1] + 1LL) + 8;
      else
        v86 = 0;
      v87 = v79 & 0x10;
      if ( (v79 & 0x10) != 0 && v145 )
        v88 = (*((unsigned __int16 *)v145 + 1) + 3) & 0xFFFFFFFC;
      else
        v88 = 0;
      v89 = v79 & 4;
      if ( (v79 & 4) != 0 && Src )
        v90 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      else
        v90 = 0;
      v91 = ProcessHeap;
      Heap = RtlAllocateHeap(ProcessHeap, (unsigned int)(NtdllBaseTag + 1310720), v88 + v90 + v86 + v85 + 20);
      v131 = Heap;
      v93 = Heap;
      if ( Heap )
      {
        v94 = v129;
        v95 = (unsigned __int16 *)(Heap + 20);
        *(_OWORD *)Heap = 0LL;
        *(_DWORD *)(Heap + 16) = 0;
        *(_WORD *)(Heap + 2) |= v94;
        v96 = v87 == 0;
        *(_BYTE *)Heap = 1;
        v35 = (unsigned __int16 *)v145;
        if ( !v96 && v145 )
        {
          v104 = Heap + 20;
          if ( (v142 & 0x4000) != 0 )
          {
            v119 = v148;
            if ( v125 )
              v119 = 0LL;
            RtlpNormalizeAcl(v95, v145, v119);
            if ( v95[2] )
            {
              v88 = v95[1];
            }
            else
            {
              v104 = 0LL;
              v88 = 0;
            }
          }
          else
          {
            memmove(v95, v145, *((unsigned __int16 *)v145 + 1));
            if ( !v125 )
              RtlpApplyAclToObject(v95, v148);
            v105 = v35[1];
            if ( v88 > (unsigned int)v105 )
              memset_thunk_772440563353939046((char *)v95 + v105, 0, v88 - (unsigned int)v105);
          }
          if ( v104 )
          {
            v95 = (unsigned __int16 *)((char *)v95 + v88);
            v106 = v131;
            v107 = v104 - v131;
          }
          else
          {
            v106 = v131;
            v107 = 0;
          }
          *(_DWORD *)(v106 + 12) = v107;
          v93 = v131;
        }
        if ( v89 )
        {
          v97 = (unsigned __int16 *)Src;
          if ( Src )
          {
            if ( (v142 & 0x4000) != 0 )
            {
              v120 = v148;
              if ( v124 )
                v120 = 0LL;
              RtlpNormalizeAcl(v95, Src, v120);
              v90 = v95[1];
            }
            else
            {
              memmove(v95, Src, *((unsigned __int16 *)Src + 1));
              if ( !v124 )
                RtlpApplyAclToObject(v95, v148);
              v98 = v97[1];
              if ( v90 > (unsigned int)v98 )
                memset_thunk_772440563353939046((char *)v95 + v98, 0, v90 - (unsigned int)v98);
            }
            v93 = v131;
            *(_DWORD *)(v131 + 16) = (_DWORD)v95 - v131;
            v95 = (unsigned __int16 *)((char *)v95 + v90);
          }
          else
          {
            v93 = v131;
            *(_DWORD *)(v131 + 16) = 0;
          }
        }
        v99 = Size[0];
        memmove(v95, v147, Size[0]);
        v100 = (_DWORD)v95 - v93;
        v101 = (char *)v95 + v99;
        *(_DWORD *)(v93 + 4) = v100;
        if ( *(_QWORD *)&Size[1] )
        {
          memmove(v101, *(const void **)&Size[1], v86);
          *(_DWORD *)(v93 + 8) = (_DWORD)v101 - v93;
        }
        v32 = 0;
LABEL_150:
        valid = v32;
        goto LABEL_151;
      }
      v35 = (unsigned __int16 *)v145;
      v32 = -1073741801;
      v13 = 0LL;
      valid = -1073741801;
      goto LABEL_153;
    }
    if ( v82 )
    {
      v84 = (unsigned __int8 *)v147;
      LOBYTE(v77) = v141;
      if ( !(unsigned __int8)RtlpValidOwnerSubjectContext(v82, v147, v77, &v168) )
      {
        v32 = v168;
        goto LABEL_150;
      }
      goto LABEL_129;
    }
LABEL_326:
    v32 = -1073741700;
    goto LABEL_150;
  }
  if ( !v82 )
    goto LABEL_326;
  v156 = 32LL;
  v189 = 32LL;
  v187 = 1;
  v188 = 1;
  v190 = 0;
  valid = ZwPrivilegeCheck(v82, &v187, &v126);
  v32 = valid;
  if ( valid >= 0 )
  {
    if ( !v126 )
      goto LABEL_344;
    goto LABEL_127;
  }
LABEL_151:
  v13 = v131;
LABEL_152:
  v91 = ProcessHeap;
LABEL_153:
  if ( v161 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v161);
    v35 = v144;
    v103 = v163;
    v102 = v164;
    v32 = valid;
  }
  else
  {
    v102 = v177;
    v103 = v178;
  }
  if ( v133 && v162 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v162);
    v35 = v144;
    v103 = v163;
    v102 = v164;
    v32 = valid;
  }
  RtlFreeHeap(v91, 0LL, v169);
  RtlFreeHeap(v91, 0LL, v170);
  RtlFreeHeap(v91, 0LL, v171);
  RtlFreeHeap(v91, 0LL, v172);
  RtlFreeHeap(v91, 0LL, v173);
  if ( v103 )
    RtlFreeHeap(v91, 0LL, v103);
  if ( v102 )
    RtlFreeHeap(v91, 0LL, v102);
  if ( (v134 || v125) && v35 )
    RtlFreeHeap(v91, 0LL, v35);
  if ( v135 && v160 )
    RtlFreeHeap(v91, 0LL, v160);
  if ( v124 )
  {
    if ( Src )
      RtlFreeHeap(v91, 0LL, Src);
  }
  *v179 = v13;
  return (unsigned int)v32;
}
