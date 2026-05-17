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

__int64 __fastcall RtlpNewSecurityObject(
        __int64 a1,
        _BYTE *a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        char a6,
        unsigned int a7,
        void *a8,
        __int64 a9)
{
  _BYTE *v9; // r14
  _BYTE *v11; // rbx
  _BYTE *v12; // rdi
  __int64 v13; // rsi
  void *ProcessHeap; // r12
  __int64 result; // rax
  int v16; // eax
  __int16 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // edx
  _BYTE *v20; // r15
  _BYTE *v21; // r11
  int v22; // ebx
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
  int v33; // ebx
  __int16 v34; // r12
  int v35; // r12d
  unsigned __int16 *v36; // r15
  __int16 v37; // dx
  int v38; // r9d
  __int64 v39; // rdx
  __int64 v40; // rcx
  int v41; // r8d
  int v42; // eax
  __int64 v43; // r9
  __int16 v44; // cx
  _BYTE *v45; // rcx
  __int64 AceByType; // rax
  __int64 v47; // r8
  HANDLE v48; // rdi
  __int64 v49; // rbx
  __int64 v50; // rcx
  __int64 v51; // r9
  int v52; // edx
  int v53; // edi
  _BYTE *v54; // rcx
  __int64 v55; // rax
  __int64 v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rax
  int v59; // eax
  unsigned __int8 v60; // cl
  _BYTE *v61; // rdi
  unsigned int v62; // r8d
  __int64 v63; // rcx
  int v64; // eax
  __int16 v65; // si
  __int64 v66; // r9
  int v67; // r12d
  void *v68; // rdi
  void *v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rax
  __int16 v72; // ax
  __int64 v73; // rdx
  __int64 v74; // rcx
  int v75; // eax
  int v76; // edx
  int v77; // r14d
  void *v78; // r13
  bool v79; // al
  unsigned __int8 *v80; // rsi
  void *v81; // rbx
  int v82; // ecx
  unsigned int v83; // r13d
  int v84; // r15d
  unsigned int v85; // esi
  int v86; // r12d
  unsigned int v87; // r14d
  __int64 Heap; // rax
  __int64 v89; // rdx
  __int16 v90; // cx
  char *v91; // rbx
  bool v92; // zf
  unsigned __int16 *v93; // rdi
  __int64 v94; // rcx
  __int64 v95; // rdi
  int v96; // eax
  char *v97; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  _BYTE *v100; // r8
  int v101; // eax
  __int16 v102; // cx
  _BYTE *v103; // rax
  __int64 v104; // rax
  _BYTE *v105; // rcx
  __int64 v106; // rax
  bool v107; // cf
  HANDLE v108; // rdx
  void *v109; // rdi
  int ServerAcl; // eax
  int valid; // [rsp+90h] [rbp-80h] BYREF
  char v112; // [rsp+94h] [rbp-7Ch] BYREF
  unsigned __int8 v113; // [rsp+95h] [rbp-7Bh]
  char v114; // [rsp+96h] [rbp-7Ah]
  char v115; // [rsp+97h] [rbp-79h]
  char v116; // [rsp+98h] [rbp-78h] BYREF
  char v117; // [rsp+99h] [rbp-77h]
  char v118[2]; // [rsp+9Ah] [rbp-76h] BYREF
  int v119; // [rsp+9Ch] [rbp-74h]
  void *v120; // [rsp+A0h] [rbp-70h]
  __int64 v121; // [rsp+A8h] [rbp-68h]
  char v122; // [rsp+B0h] [rbp-60h] BYREF
  char v123; // [rsp+B1h] [rbp-5Fh]
  char v124; // [rsp+B2h] [rbp-5Eh] BYREF
  char v125; // [rsp+B3h] [rbp-5Dh]
  char v126; // [rsp+B4h] [rbp-5Ch]
  int v127; // [rsp+B8h] [rbp-58h] BYREF
  int v128; // [rsp+BCh] [rbp-54h] BYREF
  char v129; // [rsp+C0h] [rbp-50h] BYREF
  char v130; // [rsp+C1h] [rbp-4Fh] BYREF
  __int16 v131; // [rsp+C2h] [rbp-4Eh]
  char v132; // [rsp+C4h] [rbp-4Ch]
  unsigned __int16 *v133; // [rsp+C8h] [rbp-48h] BYREF
  void *v134; // [rsp+D0h] [rbp-40h]
  int v135; // [rsp+D8h] [rbp-38h] BYREF
  void *v136; // [rsp+E0h] [rbp-30h]
  void *v137; // [rsp+E8h] [rbp-28h]
  int v138; // [rsp+F0h] [rbp-20h] BYREF
  void *v139; // [rsp+F8h] [rbp-18h]
  size_t Size; // [rsp+100h] [rbp-10h] BYREF
  void *Src; // [rsp+108h] [rbp-8h] BYREF
  __int64 v142; // [rsp+110h] [rbp+0h]
  _BYTE *v143; // [rsp+118h] [rbp+8h]
  __int64 v144; // [rsp+120h] [rbp+10h]
  HANDLE Handle; // [rsp+128h] [rbp+18h] BYREF
  __int64 v146; // [rsp+130h] [rbp+20h]
  __int64 v147; // [rsp+138h] [rbp+28h]
  int v148; // [rsp+140h] [rbp+30h]
  __int64 v149; // [rsp+148h] [rbp+38h]
  __int64 v150; // [rsp+150h] [rbp+40h] BYREF
  __int64 v151; // [rsp+158h] [rbp+48h]
  __int64 v152; // [rsp+160h] [rbp+50h] BYREF
  void *v153; // [rsp+168h] [rbp+58h] BYREF
  int v154; // [rsp+170h] [rbp+60h]
  void **v155; // [rsp+178h] [rbp+68h] BYREF
  __int64 *v156; // [rsp+180h] [rbp+70h] BYREF
  HANDLE *v157; // [rsp+188h] [rbp+78h] BYREF
  void **v158; // [rsp+190h] [rbp+80h] BYREF
  __int64 *v159; // [rsp+198h] [rbp+88h] BYREF
  __int64 *v160; // [rsp+1A0h] [rbp+90h] BYREF
  __int64 *v161; // [rsp+1A8h] [rbp+98h] BYREF
  int v162; // [rsp+1B0h] [rbp+A0h] BYREF
  _BYTE *v163; // [rsp+1B8h] [rbp+A8h] BYREF
  _BYTE *v164; // [rsp+1C0h] [rbp+B0h]
  void *v165; // [rsp+1C8h] [rbp+B8h] BYREF
  __int64 *v166; // [rsp+1D8h] [rbp+C8h]
  int v167; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v168; // [rsp+1E8h] [rbp+D8h]
  __int64 v169; // [rsp+1F0h] [rbp+E0h]
  int v170; // [rsp+1F8h] [rbp+E8h]
  __int64 v171; // [rsp+200h] [rbp+F0h]
  _DWORD *v172; // [rsp+208h] [rbp+F8h]
  _BYTE v173[40]; // [rsp+210h] [rbp+100h] BYREF
  int v174; // [rsp+238h] [rbp+128h] BYREF
  int v175; // [rsp+23Ch] [rbp+12Ch]
  __int64 v176; // [rsp+240h] [rbp+130h]
  int v177; // [rsp+248h] [rbp+138h]
  _DWORD v178[2]; // [rsp+250h] [rbp+140h] BYREF
  __int16 v179; // [rsp+258h] [rbp+148h]
  char v180[24]; // [rsp+260h] [rbp+150h] BYREF
  int v181; // [rsp+278h] [rbp+168h]
  int v182; // [rsp+27Ch] [rbp+16Ch]
  _BYTE v183[128]; // [rsp+2A0h] [rbp+190h] BYREF

  v9 = a2;
  v144 = a9;
  v152 = 0LL;
  v164 = v183;
  v11 = 0LL;
  v12 = 0LL;
  v151 = a4;
  v166 = a3;
  v13 = 0LL;
  v137 = a8;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  v120 = ProcessHeap;
  v134 = 0LL;
  v133 = 0LL;
  v150 = 0LL;
  v114 = 0;
  v126 = 0;
  v125 = 0;
  v138 = 0;
  Src = 0LL;
  v153 = 0LL;
  v115 = 0;
  v117 = 0;
  v112 = 0;
  v129 = 0;
  v130 = 0;
  v118[0] = 0;
  LOBYTE(v148) = 0;
  v124 = 0;
  v147 = 0LL;
  Handle = 0LL;
  v143 = 0LL;
  v149 = 0LL;
  v146 = 0LL;
  v121 = 0LL;
  v127 = 0;
  v142 = 0LL;
  v163 = 0LL;
  v165 = 0LL;
  v113 = 0;
  v122 = 1;
  LOBYTE(v154) = 1;
  v155 = 0LL;
  v158 = 0LL;
  v159 = 0LL;
  v156 = 0LL;
  v157 = 0LL;
  v160 = 0LL;
  v161 = 0LL;
  if ( a8 )
  {
    result = NtQueryInformationToken(a8, 10LL, v180, 56LL, &Size);
    if ( (int)result < 0 )
      return result;
    v154 = v181;
    if ( v181 == 2 && v182 < 1 )
      return 3221225637LL;
  }
  if ( v9 )
  {
    v123 = 1;
  }
  else
  {
    v123 = 0;
    RtlCreateSecurityDescriptor(v173, 1LL);
    v9 = v173;
  }
  v16 = *((unsigned __int16 *)v9 + 1);
  v131 = *((_WORD *)v9 + 1) & 0x80;
  v17 = v131;
  LOBYTE(v16) = (v16 & 0x40) != 0;
  v132 = v131 != 0;
  LODWORD(Size) = v16;
  if ( a8 || v131 )
  {
    LOBYTE(a2) = v131 != 0;
    result = RtlpGetDefaultsSubjectContext(
               (_DWORD)a8,
               (_DWORD)a2,
               (unsigned int)&v155,
               (unsigned int)&v158,
               (__int64)&v159,
               (__int64)&v160,
               (__int64)&v156,
               (__int64)&v157,
               (__int64)&v161);
    if ( (int)result < 0 )
      return result;
    v11 = *v155;
    v12 = *v158;
    v146 = *v159;
    v147 = *v156;
    Handle = *v157;
    if ( v160 )
      v143 = (_BYTE *)*v160;
    else
      v143 = 0LL;
    v17 = v131;
    if ( v161 )
      v18 = *v161;
    else
      v18 = 0LL;
    v149 = v18;
  }
  else
  {
    v18 = 0LL;
  }
  v19 = *((unsigned __int16 *)v9 + 1);
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v9 + 1) )
      goto LABEL_16;
    v20 = &v9[*((unsigned int *)v9 + 1)];
  }
  else
  {
    v20 = (_BYTE *)*((_QWORD *)v9 + 1);
  }
  v136 = v20;
  if ( v20 )
  {
    v117 = 1;
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
      v136 = v20;
      v117 = 1;
      if ( v20 )
        goto LABEL_20;
    }
LABEL_276:
    v33 = -1073741734;
LABEL_278:
    valid = v33;
LABEL_279:
    v36 = v133;
    goto LABEL_169;
  }
  v20 = v11;
  if ( v17 )
    v20 = v143;
  v136 = v20;
  if ( !v20 )
  {
    v33 = -1073741700;
    goto LABEL_278;
  }
LABEL_20:
  if ( (v19 & 0x8000u) != 0 )
  {
    if ( !*((_DWORD *)v9 + 2) )
      goto LABEL_23;
    v21 = &v9[*((unsigned int *)v9 + 2)];
  }
  else
  {
    v21 = (_BYTE *)*((_QWORD *)v9 + 2);
  }
  v139 = v21;
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
  v139 = v21;
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
  v135 = v22;
  v24 = (v19 >> 2) & 8;
  v25 = (v19 >> 1) & 0x400;
  v26 = (v19 >> 1) & 0x1000;
  v27 = (v19 & 0x10) != 0 ? 4 : 0;
  if ( (v19 & 0x10) == (_WORD)v134 )
  {
    LODWORD(v28) = 0;
  }
  else
  {
    LODWORD(v28) = 0;
    if ( (v19 & 0x8000u) == 0 )
    {
      v29 = *((_QWORD *)v9 + 3);
      goto LABEL_30;
    }
    if ( *((_DWORD *)v9 + 3) )
    {
      LODWORD(v29) = (_DWORD)v9 + *((_DWORD *)v9 + 3);
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
  v31 = v144;
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
          (__int64)v143,
          v149,
          v144,
          2,
          v151,
          a5,
          (__int64)&v133,
          (__int64)&v112,
          (__int64)&v128);
  valid = v32;
  v33 = v32;
  if ( v32 >= 0 )
  {
    v114 = 1;
    v59 = v128 & 0x1400;
    LOWORD(v35) = 2 * (v59 | (2 * (v128 & 8 | 0x2004)));
    v119 = 2 * (v59 | (2 * (v128 & 8 | 0x2004)));
    goto LABEL_39;
  }
  if ( v32 != -2147483637 )
  {
    v13 = v121;
    goto LABEL_279;
  }
  v34 = *((_WORD *)v9 + 1);
  if ( (v34 & 0x30) != 0x30 )
  {
    LOWORD(v35) = v23 != 0 ? -30720 : 0x8000;
    v119 = v23 != 0 ? 34816 : 0x8000;
LABEL_39:
    v36 = v133;
    v134 = v133;
    goto LABEL_40;
  }
  if ( (v34 & 0x10) != 0 )
  {
    if ( v34 >= 0 )
    {
      v36 = (unsigned __int16 *)*((_QWORD *)v9 + 3);
      goto LABEL_293;
    }
    if ( *((_DWORD *)v9 + 3) )
    {
      v36 = (unsigned __int16 *)&v9[*((unsigned int *)v9 + 3)];
LABEL_293:
      v134 = v36;
      goto LABEL_294;
    }
  }
  v36 = 0LL;
  v134 = 0LL;
LABEL_294:
  v133 = v36;
  v35 = (v23 != 0 ? 34816 : 0x8000) | v34 & 0x2000 | 0x10;
  v112 = 1;
  v119 = v35;
LABEL_40:
  v37 = *((_WORD *)v9 + 1);
  v38 = (v37 & 0x10) != 0 ? 4 : 0;
  if ( (v37 & 0x10) == 0 )
  {
LABEL_41:
    LODWORD(v39) = 0;
    goto LABEL_42;
  }
  if ( v37 >= 0 )
  {
    v39 = *((_QWORD *)v9 + 3);
  }
  else
  {
    if ( !*((_DWORD *)v9 + 3) )
      goto LABEL_41;
    LODWORD(v39) = (_DWORD)v9 + *((_DWORD *)v9 + 3);
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
  v41 = v38 | (*((unsigned __int16 *)v9 + 1) >> 2) & 8 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x400;
  LOBYTE(v38) = a6;
  v42 = RtlpInheritAcl(
          v40,
          v39,
          v41,
          v38,
          v23 != 0,
          v135,
          (__int64)v136,
          (__int64)v139,
          (__int64)v143,
          v149,
          v144,
          2,
          v151,
          a5,
          (__int64)&v150,
          (__int64)&v129,
          (__int64)&v127);
  valid = v42;
  v33 = v42;
  if ( v42 >= 0 )
  {
    v126 = 1;
  }
  else
  {
    if ( v42 != -2147483637 )
      goto LABEL_280;
    v44 = *((_WORD *)v9 + 1);
    if ( (v44 & 0x30) == 0x30 )
    {
      if ( (v44 & 0x10) != 0 )
      {
        if ( v44 >= 0 )
        {
          v104 = *((_QWORD *)v9 + 3);
        }
        else if ( *((_DWORD *)v9 + 3) )
        {
          v104 = (__int64)&v9[*((unsigned int *)v9 + 3)];
        }
        else
        {
          v104 = 0LL;
        }
        v150 = v104;
      }
      else
      {
        v150 = 0LL;
      }
    }
  }
  v127 = 0;
  do
  {
    if ( (v9[2] & 0x10) == 0 )
      goto LABEL_52;
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v45 = (_BYTE *)*((_QWORD *)v9 + 3);
      goto LABEL_53;
    }
    if ( *((_DWORD *)v9 + 3) )
      v45 = &v9[*((unsigned int *)v9 + 3)];
    else
LABEL_52:
      v45 = 0LL;
LABEL_53:
    AceByType = RtlFindAceByType(v45, 20LL, &v127, v43);
    v48 = Handle;
    v49 = AceByType;
    if ( AceByType && AceByType != -8 && !RtlpValidTrustSubjectContext((__int64)Handle, AceByType + 8, v47, &valid) )
    {
      v33 = -1073741790;
      goto LABEL_305;
    }
    ++v127;
  }
  while ( v49 );
  if ( (a7 & 0x800) == 0 )
    goto LABEL_56;
  v127 = 0;
  while ( 2 )
  {
    if ( (v9[2] & 0x10) == 0 )
      goto LABEL_311;
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v105 = (_BYTE *)*((_QWORD *)v9 + 3);
    }
    else
    {
      if ( *((_DWORD *)v9 + 3) )
      {
        v105 = &v9[*((unsigned int *)v9 + 3)];
        goto LABEL_313;
      }
LABEL_311:
      v105 = 0LL;
    }
LABEL_313:
    v106 = RtlFindAceByType(v105, 20LL, &v127, v43);
    ++v127;
    if ( v106 )
    {
      if ( (*(_BYTE *)(v106 + 1) & 8) == 0 )
        goto LABEL_315;
      continue;
    }
    break;
  }
  if ( v48 )
  {
LABEL_315:
    v33 = -1073741811;
    goto LABEL_305;
  }
LABEL_56:
  if ( (v9[2] & 0x10) != 0 )
  {
    if ( *((__int16 *)v9 + 1) >= 0 )
    {
      v50 = *((_QWORD *)v9 + 3);
    }
    else
    {
      if ( !*((_DWORD *)v9 + 3) )
        goto LABEL_57;
      v50 = (__int64)&v9[*((unsigned int *)v9 + 3)];
    }
  }
  else
  {
LABEL_57:
    v50 = 0LL;
  }
  valid = RtlpValidFilterAclSubjectContext(v50, (__int64)v48, v47, v43);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  v52 = (a7 >> 8) & 1 | 2;
  if ( (a7 & 0x200) == 0 )
    v52 = (a7 >> 8) & 1;
  v53 = v52 | 4;
  if ( (a7 & 0x400) == 0 )
    v53 = v52;
  if ( v53 )
  {
    v57 = 0LL;
LABEL_322:
    v56 = 0LL;
LABEL_68:
    v58 = v147;
    goto LABEL_98;
  }
  if ( (v9[2] & 0x10) == 0 )
    goto LABEL_65;
  if ( *((__int16 *)v9 + 1) >= 0 )
  {
    v54 = (_BYTE *)*((_QWORD *)v9 + 3);
  }
  else if ( *((_DWORD *)v9 + 3) )
  {
    v54 = &v9[*((unsigned int *)v9 + 3)];
  }
  else
  {
LABEL_65:
    v54 = 0LL;
  }
  v55 = RtlFindAceByType(v54, 17LL, 0LL, v51);
  v56 = v55;
  if ( !v55 )
  {
    v57 = 0LL;
    goto LABEL_68;
  }
  v60 = *(_BYTE *)(v55 + 1);
  v57 = v55 + 8;
  v53 = *(_DWORD *)(v55 + 4);
  v142 = v55 + 8;
  v113 = v60;
  if ( v60 == 8 || (v60 & 0x10) != 0 )
  {
    v57 = 0LL;
    v113 = 0;
    v142 = 0LL;
    v53 = 0;
    goto LABEL_322;
  }
  v58 = v147;
  if ( (v60 & 8) != 0 )
  {
    v107 = *(_DWORD *)(v147 + 8) < 0x2000u;
    v142 = v57;
    v113 = v60;
    if ( v107 )
    {
      v33 = -1073740730;
      goto LABEL_305;
    }
  }
LABEL_98:
  if ( v53 )
  {
LABEL_220:
    if ( v56 )
      goto LABEL_101;
    if ( v137 )
    {
      v57 = v58;
      v142 = v58;
      v113 = 0;
      goto LABEL_101;
    }
    goto LABEL_323;
  }
  if ( v58 && *(_DWORD *)(v58 + 8) < 0x2000u )
  {
    v53 = 1;
    goto LABEL_220;
  }
LABEL_101:
  if ( !v57 )
  {
    v61 = 0LL;
    v164 = 0LL;
    goto LABEL_103;
  }
  valid = RtlCreateAcl(v183, 128LL, 2LL);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  valid = RtlAddMandatoryAce((__int64)v183, 2u, v113, v142, 17, v53);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  v61 = v183;
LABEL_103:
  if ( (a7 & 0x700) != 0 )
  {
    v62 = 4;
  }
  else if ( !v56 && v61 )
  {
    v62 = 0;
  }
  else
  {
    v62 = (*((_WORD *)v9 + 1) & 0x2800 | (*((unsigned __int16 *)v9 + 1) >> 1) & 0x18u) >> 1;
  }
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
    goto LABEL_223;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v63 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 12) )
    {
      LODWORD(v63) = a1 + *(_DWORD *)(a1 + 12);
      goto LABEL_112;
    }
LABEL_223:
    LODWORD(v63) = 0;
  }
LABEL_112:
  LOBYTE(v51) = a6;
  v64 = RtlpInheritAcl(
          v63,
          (_DWORD)v61,
          v62,
          v51,
          1,
          0,
          (__int64)v136,
          (__int64)v139,
          (__int64)v143,
          v149,
          v144,
          3,
          v151,
          a5,
          (__int64)&v163,
          (__int64)&v130,
          (__int64)&v128);
  valid = v64;
  v33 = v64;
  if ( v64 != -2147483637 )
  {
    if ( v64 >= 0 )
    {
      v61 = v163;
      v65 = v128;
      goto LABEL_114;
    }
    goto LABEL_280;
  }
  v65 = 0;
  v128 = 0;
LABEL_114:
  v33 = RtlpCombineAcls((_DWORD)v36, (_DWORD)v61, v150, v150, v150, v150, (__int64)&v165, (__int64)&v138);
  valid = v33;
  v67 = ((v35 & 0x2000) << 17) | v138;
  if ( !v61 || v61 == v164 )
  {
    v68 = v120;
  }
  else
  {
    v100 = v61;
    v68 = v120;
    RtlFreeHeap(v120, 0LL, v100);
  }
  if ( v33 < 0 )
    goto LABEL_280;
  v69 = v165;
  if ( v165 )
  {
    if ( v114 && v36 )
      RtlFreeHeap(v68, 0LL, v36);
    v134 = v69;
    v133 = (unsigned __int16 *)v69;
    v36 = (unsigned __int16 *)v69;
    v125 = 1;
    v119 |= 2 * (v65 & 0x1400 | (2 * (v65 & 8 | 4)));
  }
  if ( (a7 & 8) == 0 )
  {
    v70 = RtlFindAceByType(v36, (a7 & 8) + 17, 0LL, v66);
    v71 = v70 ? v70 + 8 : v142;
    if ( v71 )
    {
      if ( v137 )
      {
        valid = RtlSidDominates(v147, v71, &v122);
        v33 = valid;
        if ( valid >= 0 )
        {
          v101 = (unsigned __int8)v148;
          if ( !v122 )
            v101 = 1;
          v148 = v101;
          goto LABEL_122;
        }
        goto LABEL_280;
      }
      goto LABEL_323;
    }
  }
LABEL_122:
  v72 = *((_WORD *)v9 + 1);
  if ( (v72 & 4) == 0 )
    goto LABEL_126;
  if ( v72 >= 0 )
  {
    v73 = *((_QWORD *)v9 + 4);
    goto LABEL_127;
  }
  if ( *((_DWORD *)v9 + 4) )
    LODWORD(v73) = (_DWORD)v9 + *((_DWORD *)v9 + 4);
  else
LABEL_126:
    LODWORD(v73) = 0;
LABEL_127:
  if ( !a1 || (*(_BYTE *)(a1 + 2) & 4) == 0 )
    goto LABEL_251;
  if ( *(__int16 *)(a1 + 2) >= 0 )
  {
    v74 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( *(_DWORD *)(a1 + 16) )
    {
      LODWORD(v74) = a1 + *(_DWORD *)(a1 + 16);
      goto LABEL_132;
    }
LABEL_251:
    LODWORD(v74) = 0;
  }
LABEL_132:
  LOBYTE(v66) = a6;
  v75 = RtlpInheritAcl(
          v74,
          v73,
          v72 & 0x140C,
          v66,
          a7 & 1,
          v135,
          (__int64)v136,
          (__int64)v139,
          (__int64)v143,
          v149,
          v144,
          1,
          v151,
          a5,
          (__int64)&Src,
          (__int64)v118,
          (__int64)&v128);
  valid = v75;
  v33 = v75;
  if ( v75 >= 0 )
  {
    v76 = 1;
    v115 = 1;
    v77 = v128 & 0x1408 | 4 | v119;
    goto LABEL_134;
  }
  if ( v75 != -2147483637 )
    goto LABEL_280;
  if ( (a7 & 1) != 0 )
    v119 |= 0x400u;
  v102 = *((_WORD *)v9 + 1);
  if ( (v102 & 0xC) == 0xC )
  {
    if ( (v102 & 4) != 0 )
    {
      if ( v102 >= 0 )
      {
        v103 = (_BYTE *)*((_QWORD *)v9 + 4);
LABEL_266:
        v76 = 1;
        v77 = v102 & 0x1000 | 4 | v119;
        v118[0] = 1;
        goto LABEL_249;
      }
      if ( *((_DWORD *)v9 + 4) )
      {
        v103 = &v9[*((unsigned int *)v9 + 4)];
        goto LABEL_266;
      }
    }
    v103 = 0LL;
    goto LABEL_266;
  }
  v103 = (_BYTE *)v146;
  v76 = 1;
  v77 = v119;
  if ( v146 )
  {
    v77 = v119 | 4;
LABEL_249:
    Src = v103;
LABEL_134:
    v119 = v77;
  }
  if ( (a7 & 0x1000) != 0 || !v123 )
  {
LABEL_137:
    v78 = v137;
    goto LABEL_138;
  }
  if ( !v137 || !a1 )
  {
    v78 = v137;
    goto LABEL_138;
  }
  v138 = 0;
  v135 = 0;
  valid = RtlpNewSecurityObject(a1, 0, (unsigned int)&v152, v151, a5, a6, a7 | 1, (__int64)v137, v144);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  if ( (*(_BYTE *)(v152 + 2) & 4) == 0 )
    goto LABEL_330;
  if ( *(__int16 *)(v152 + 2) >= 0 )
  {
    v98 = *(_QWORD *)(v152 + 32);
  }
  else
  {
    if ( *(_DWORD *)(v152 + 16) )
    {
      v98 = v152 + *(unsigned int *)(v152 + 16);
      goto LABEL_193;
    }
LABEL_330:
    v98 = 0LL;
  }
LABEL_193:
  if ( !(unsigned __int8)RtlpOwnerAcesPresent(16LL, v98) )
    goto LABEL_137;
  v78 = v137;
  Handle = 0LL;
  v128 = 20;
  if ( (_BYTE)v154 != 1 )
  {
LABEL_335:
    v108 = v78;
    goto LABEL_336;
  }
  v179 = 1;
  v178[1] = 2;
  v172 = v178;
  v178[0] = 12;
  v167 = 48;
  v168 = 0LL;
  v170 = 0;
  v169 = 0LL;
  v171 = 0LL;
  valid = NtDuplicateToken(v137, 8LL, &v167, 0LL, 2, &Handle);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  v108 = Handle;
  if ( !Handle )
    goto LABEL_335;
LABEL_336:
  valid = ZwAccessCheck(v152, v108, 0x40000LL, v144, &v174, &v128, &v138, &v135);
  v33 = valid;
  if ( Handle )
    NtClose(Handle);
  if ( v33 < 0 )
    goto LABEL_280;
  v33 = v135;
  valid = v135;
  if ( v135 < 0 )
    goto LABEL_280;
LABEL_138:
  if ( (a7 & 1) != 0 && !Src )
  {
    v77 |= 0x1000u;
    v119 = v77;
  }
  v79 = !v67 || (v67 & 0x1B0) != v67;
  if ( !v112 || (a7 & 8) != 0 || !v79 )
    goto LABEL_342;
  if ( !v78 )
    goto LABEL_323;
  v146 = 8LL;
  v176 = 8LL;
  v174 = 1;
  v175 = 1;
  v177 = 0;
  valid = ZwPrivilegeCheck(v78, &v174, &v116);
  v33 = valid;
  if ( valid < 0 )
    goto LABEL_280;
  if ( v116 )
  {
LABEL_342:
    if ( (_BYTE)v148 && (a7 & 8) == 0 )
    {
      if ( !v78 )
        goto LABEL_323;
      v146 = 32LL;
      v176 = 32LL;
      v174 = 1;
      v175 = 1;
      v177 = 0;
      valid = ZwPrivilegeCheck(v78, &v174, &v116);
      v33 = valid;
      if ( valid < 0 )
        goto LABEL_280;
      if ( !v116 )
        goto LABEL_341;
    }
    if ( !v117 || (a7 & 0x10) != 0 )
    {
      v80 = (unsigned __int8 *)v136;
      goto LABEL_147;
    }
    if ( v78 )
    {
      v80 = (unsigned __int8 *)v136;
      if ( !RtlpValidOwnerSubjectContext(v78, (__int64)v136, v132, &v162) )
      {
        v33 = v162;
        goto LABEL_305;
      }
LABEL_147:
      if ( v131 && v118[0] )
      {
        v109 = Src;
        LOBYTE(v76) = Size;
        ServerAcl = RtlpCreateServerAcl((_DWORD)Src, v76, (_DWORD)v143, (unsigned int)&v153, (__int64)&v124);
        valid = ServerAcl;
        v33 = ServerAcl;
        if ( ServerAcl < 0 )
          goto LABEL_280;
        v81 = v120;
        if ( v115 && v109 )
          RtlFreeHeap(v120, 0LL, v109);
        Src = v153;
        v153 = 0LL;
      }
      else
      {
        v81 = v120;
      }
      v82 = 4 * v80[1] + 8;
      LODWORD(Size) = v82;
      if ( v139 )
        v83 = 4 * *((unsigned __int8 *)v139 + 1) + 8;
      else
        v83 = 0;
      v84 = v77 & 0x10;
      if ( (v77 & 0x10) != 0 && v134 )
        v85 = (*((unsigned __int16 *)v134 + 1) + 3) & 0xFFFFFFFC;
      else
        v85 = 0;
      v86 = v77 & 4;
      if ( (v77 & 4) != 0 && Src )
        v87 = (*((unsigned __int16 *)Src + 1) + 3) & 0xFFFFFFFC;
      else
        v87 = 0;
      Heap = RtlAllocateHeap(v81, (unsigned int)(NtdllBaseTag + 1310720), v85 + v87 + v83 + v82 + 20);
      v121 = Heap;
      v89 = Heap;
      if ( !Heap )
      {
        v36 = (unsigned __int16 *)v134;
        v33 = -1073741801;
        goto LABEL_305;
      }
      v90 = v119;
      v91 = (char *)(Heap + 20);
      *(_OWORD *)Heap = 0LL;
      *(_DWORD *)(Heap + 16) = 0;
      *(_WORD *)(Heap + 2) |= v90;
      v92 = v84 == 0;
      *(_BYTE *)Heap = 1;
      v36 = (unsigned __int16 *)v134;
      if ( !v92 && v134 )
      {
        memmove(v91, v134, *((unsigned __int16 *)v134 + 1));
        if ( !v114 )
          RtlpApplyAclToObject((__int64)v91, v144);
        v89 = v121;
        *(_DWORD *)(v121 + 12) = (_DWORD)v91 - v121;
        v99 = v36[1];
        if ( v85 > (unsigned int)v99 )
        {
          memset(&v91[v99], 0, v85 - (unsigned int)v99);
          v89 = v121;
        }
        v91 += v85;
      }
      if ( v86 )
      {
        v93 = (unsigned __int16 *)Src;
        if ( Src )
        {
          memmove(v91, Src, *((unsigned __int16 *)Src + 1));
          if ( !v115 )
            RtlpApplyAclToObject((__int64)v91, v144);
          v13 = v121;
          *(_DWORD *)(v121 + 16) = (_DWORD)v91 - v121;
          v94 = v93[1];
          if ( v87 > (unsigned int)v94 )
            memset(&v91[v94], 0, v87 - (unsigned int)v94);
          v91 += v87;
          goto LABEL_165;
        }
        *(_DWORD *)(v89 + 16) = 0;
      }
      v13 = v121;
LABEL_165:
      v95 = (unsigned int)Size;
      memmove(v91, v136, (unsigned int)Size);
      v96 = (_DWORD)v91 - v13;
      v97 = &v91[v95];
      *(_DWORD *)(v13 + 4) = v96;
      if ( v139 )
      {
        memmove(v97, v139, v83);
        *(_DWORD *)(v13 + 8) = (_DWORD)v97 - v13;
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
  v13 = v121;
LABEL_168:
  ProcessHeap = v120;
LABEL_169:
  if ( v152 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v152);
    v36 = v133;
    v33 = valid;
  }
  if ( v124 && v153 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v153);
    v36 = v133;
    v33 = valid;
  }
  RtlFreeHeap(ProcessHeap, 0LL, v155);
  RtlFreeHeap(ProcessHeap, 0LL, v156);
  RtlFreeHeap(ProcessHeap, 0LL, v157);
  RtlFreeHeap(ProcessHeap, 0LL, v158);
  RtlFreeHeap(ProcessHeap, 0LL, v159);
  if ( v160 )
    RtlFreeHeap(ProcessHeap, 0LL, v160);
  if ( v161 )
    RtlFreeHeap(ProcessHeap, 0LL, v161);
  if ( (v125 || v114) && v36 )
    RtlFreeHeap(ProcessHeap, 0LL, v36);
  if ( v126 && v150 )
    RtlFreeHeap(ProcessHeap, 0LL, v150);
  if ( v115 )
  {
    if ( Src )
      RtlFreeHeap(ProcessHeap, 0LL, Src);
  }
  *v166 = v13;
  return (unsigned int)v33;
}
