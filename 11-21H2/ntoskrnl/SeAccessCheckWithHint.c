/*
 * XREFs of SeAccessCheckWithHint @ 0x1402F9CF0
 * Callers:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     sub_140244198 @ 0x140244198 (sub_140244198.c)
 *     sub_140258040 @ 0x140258040 (sub_140258040.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     SeAccessCheckFromStateEx @ 0x1402E13F0 (SeAccessCheckFromStateEx.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_1406CC960 @ 0x1406CC960 (sub_1406CC960.c)
 *     sub_1406D75F4 @ 0x1406D75F4 (sub_1406D75F4.c)
 *     sub_1407F4160 @ 0x1407F4160 (sub_1407F4160.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 *     sub_14024F43C @ 0x14024F43C (sub_14024F43C.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     sub_1402A4660 @ 0x1402A4660 (sub_1402A4660.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402FA820 @ 0x1402FA820 (sub_1402FA820.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FD65C @ 0x1402FD65C (sub_1402FD65C.c)
 *     sub_140374F38 @ 0x140374F38 (sub_140374F38.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     sub_1405F412C @ 0x1405F412C (sub_1405F412C.c)
 *     sub_1405F4288 @ 0x1405F4288 (sub_1405F4288.c)
 *     sub_1405F4304 @ 0x1405F4304 (sub_1405F4304.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

bool __fastcall SeAccessCheckWithHint(
        __int64 a1,
        char a2,
        struct _SECURITY_SUBJECT_CONTEXT *a3,
        char a4,
        unsigned int a5,
        int a6,
        _QWORD *a7,
        __int64 a8,
        char a9,
        unsigned int *a10,
        int *a11)
{
  unsigned int v13; // r13d
  __int64 v14; // rsi
  unsigned int v15; // r8d
  __int16 v16; // r10
  unsigned int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // ebx
  unsigned int v22; // edi
  _DWORD *PrimaryToken; // r15
  int v24; // eax
  char v25; // cl
  int v26; // eax
  char v27; // cl
  __int64 v28; // rax
  unsigned __int8 *v29; // rdi
  unsigned int *v30; // rsi
  int v31; // eax
  unsigned __int8 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // r10d
  unsigned __int64 v35; // r12
  int v36; // eax
  __int64 v37; // rcx
  int v38; // edx
  __int64 v39; // r14
  char v40; // si
  int v41; // ecx
  __int16 v42; // ax
  __int64 v43; // rax
  __int64 v44; // rcx
  _WORD *SeOwnerRightsSid; // r14
  char *v46; // rdi
  unsigned int v47; // r12d
  unsigned __int8 v48; // cl
  char *v49; // rcx
  unsigned __int64 v50; // rax
  int v51; // edx
  char v52; // al
  int v53; // edi
  __int64 v54; // r12
  __int64 v55; // rdx
  char v56; // di
  __int64 v57; // r9
  __int64 v58; // r14
  int *v59; // rsi
  _DWORD *v60; // r8
  char v61; // al
  PVOID v62; // rbx
  bool result; // al
  unsigned int v64; // eax
  unsigned int v65; // r12d
  char v66; // si
  char v67; // bl
  ULONGLONG v68; // rax
  int v69; // ebx
  __int64 v70; // rdi
  __int64 v71; // rsi
  int v72; // eax
  int v73; // ecx
  bool v74; // zf
  char *ClientToken; // rbx
  char v76; // r13
  ULONGLONG v77; // rax
  struct _SECURITY_SUBJECT_CONTEXT *v78; // rcx
  __int64 v79; // rax
  __int16 v80; // cx
  __int64 v81; // rax
  ACL *v82; // rax
  void *v83; // rax
  int v84; // eax
  __int64 v85; // rdx
  __int64 v86; // rcx
  unsigned int v87; // eax
  int v88; // r12d
  void *v89; // r10
  int v90; // ecx
  __int64 v91; // rax
  __int64 v92; // r14
  PVOID v93; // r8
  int v94; // eax
  int v95; // edx
  _QWORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rdx
  __int64 v99; // r9
  int v100; // eax
  int v101; // ecx
  int v102; // r14d
  _QWORD *v103; // rax
  __int64 v104; // rdx
  __int64 v105; // r8
  __int64 v106; // r9
  void *v107; // r10
  int v108; // edi
  int v109; // eax
  int v110; // ecx
  char v111; // al
  int v112; // ecx
  __int64 v113; // rcx
  char v114; // [rsp+A0h] [rbp-80h] BYREF
  char v115; // [rsp+A1h] [rbp-7Fh]
  char v116; // [rsp+A2h] [rbp-7Eh] BYREF
  char v117; // [rsp+A3h] [rbp-7Dh]
  unsigned __int8 v118; // [rsp+A4h] [rbp-7Ch] BYREF
  char v119; // [rsp+A5h] [rbp-7Bh]
  bool v120; // [rsp+A6h] [rbp-7Ah]
  int v121; // [rsp+A8h] [rbp-78h]
  char v122; // [rsp+ACh] [rbp-74h]
  int v123; // [rsp+B0h] [rbp-70h]
  int v124; // [rsp+B4h] [rbp-6Ch]
  PSECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+B8h] [rbp-68h]
  _DWORD *v126; // [rsp+C0h] [rbp-60h]
  unsigned int v127; // [rsp+C8h] [rbp-58h]
  __int64 v128; // [rsp+D0h] [rbp-50h]
  int *v129; // [rsp+D8h] [rbp-48h]
  PVOID P; // [rsp+E0h] [rbp-40h] BYREF
  int v131; // [rsp+E8h] [rbp-38h] BYREF
  __int64 v132; // [rsp+F0h] [rbp-30h]
  int v133; // [rsp+F8h] [rbp-28h] BYREF
  __int64 v134; // [rsp+100h] [rbp-20h]
  int v135; // [rsp+108h] [rbp-18h] BYREF
  ACL *v136; // [rsp+110h] [rbp-10h]
  __int128 v137; // [rsp+118h] [rbp-8h] BYREF
  int v138; // [rsp+128h] [rbp+8h]
  __int64 v139; // [rsp+130h] [rbp+10h]
  int v140; // [rsp+138h] [rbp+18h] BYREF
  __int64 v141; // [rsp+140h] [rbp+20h]
  __int64 v142; // [rsp+148h] [rbp+28h]
  _QWORD *v143; // [rsp+150h] [rbp+30h]
  _OWORD SecurityDescriptor[2]; // [rsp+158h] [rbp+38h] BYREF
  __int64 v145; // [rsp+178h] [rbp+58h]
  _OWORD v146[2]; // [rsp+180h] [rbp+60h] BYREF

  v13 = a5;
  v14 = a1;
  SubjectContext = a3;
  v15 = (unsigned int)a10;
  v134 = a1;
  v115 = a4;
  v121 = a6;
  *a10 = 0;
  *a11 = -1073741790;
  v129 = a11;
  v126 = a10;
  v143 = a7;
  v139 = a8;
  v114 = 0;
  v136 = 0LL;
  v145 = 0LL;
  v132 = 0LL;
  v117 = 0;
  v123 = 0;
  P = 0LL;
  v131 = 0;
  v133 = 0;
  v135 = -1073741790;
  v140 = -1;
  v137 = 0LL;
  memset(v146, 0, 28);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v120 = (a2 & 8) != 0;
  if ( a7 )
    *a7 = 0LL;
  if ( !a9 )
  {
    if ( (a5 & 0x2000000) != 0 )
      v64 = a6 | a5 & 0xFDFFFFFF | *(_DWORD *)(a8 + 12);
    else
      v64 = a6 | a5;
    *a10 = v64;
    result = 1;
    *a11 = 0;
    return result;
  }
  if ( !a1 )
    goto LABEL_302;
  if ( a3->ClientToken && a3->ImpersonationLevel < SecurityImpersonation )
  {
    *a11 = -1073741659;
    return 0;
  }
  if ( !a5 )
  {
    if ( a6 )
    {
      *a10 = a6;
      *a11 = 0;
      if ( a7 )
        *a7 = 0LL;
      return 1;
    }
LABEL_302:
    *a11 = -1073741790;
    return 0;
  }
  if ( !a4 )
    SeLockSubjectContext(a3);
  v16 = *(_WORD *)(v14 + 2);
  v17 = 0;
  v118 = 0;
  v116 = 0;
  while ( 1 )
  {
    if ( (v16 & 0x10) == 0 )
      goto LABEL_21;
    if ( v16 >= 0 )
    {
      v19 = *(_QWORD *)(v14 + 24);
    }
    else
    {
      v18 = *(unsigned int *)(v14 + 12);
      if ( !(_DWORD)v18 )
        goto LABEL_21;
      v19 = v14 + v18;
    }
    if ( !v19 )
      goto LABEL_21;
    v20 = v19 + 8;
    v15 = 0;
    if ( !*(_WORD *)(v19 + 4) )
      goto LABEL_21;
    while ( v15 < v17 || *(_BYTE *)v20 != 20 )
    {
      ++v15;
      v20 += *(unsigned __int16 *)(v20 + 2);
      if ( v15 >= *(unsigned __int16 *)(v19 + 4) )
        goto LABEL_21;
    }
    if ( (*(_BYTE *)(v20 + 1) & 8) == 0 )
      break;
    v17 = v15 + 1;
    if ( !v20 )
      goto LABEL_21;
  }
  if ( !v20 )
    goto LABEL_21;
  v69 = *(_DWORD *)(v20 + 4);
  v70 = v20 + 8;
  if ( v20 == -8 )
    goto LABEL_21;
  if ( !a3->ClientToken )
    goto LABEL_162;
  v71 = *((_QWORD *)a3->ClientToken + 138);
  v72 = sub_1402F8A20(*((_QWORD *)a3->PrimaryToken + 138), v71, &v116);
  if ( v72 < 0 )
  {
LABEL_194:
    v74 = v115 == 0;
    *a11 = v72;
    if ( !v74 )
      return 0;
LABEL_189:
    v78 = a3;
LABEL_193:
    SeUnlockSubjectContext(v78);
    return 0;
  }
  if ( !v116 )
LABEL_162:
    v71 = *((_QWORD *)a3->PrimaryToken + 138);
  v72 = sub_1402F8A20(v71, v70, &v118);
  if ( v72 < 0 )
    goto LABEL_194;
  v14 = v134;
  if ( v118 )
  {
LABEL_21:
    v21 = -1;
    goto LABEL_22;
  }
  v21 = v69 | 0x1000000;
LABEL_22:
  v22 = a5 & 0xFDFFFFFF;
  if ( (v21 & a5 & 0xFDFFFFFF) != (a5 & 0xFDFFFFFF) )
  {
    v74 = !v120;
    *a11 = -1073741790;
    if ( v74 )
    {
      ClientToken = (char *)a3->ClientToken;
      if ( !a3->ClientToken )
        ClientToken = (char *)a3->PrimaryToken;
      v76 = v121 | a5;
      v77 = sub_140232910((__int64 *)a3);
      sub_14024429C(ClientToken, 0LL, 0LL, v77, v14, v76, 0);
    }
    if ( v115 )
      return 0;
    goto LABEL_189;
  }
  *a11 = 0;
  PrimaryToken = a3->ClientToken;
  if ( !PrimaryToken )
    PrimaryToken = SubjectContext->PrimaryToken;
  if ( (a2 & 4) == 0 )
  {
    v24 = sub_1402FBC90(v14, (unsigned int)&P, (_DWORD)PrimaryToken, 0, (__int64)&v140);
    *a11 = v24;
    if ( v24 >= 0 )
    {
      if ( (v140 & v22) == v22 )
      {
        *a11 = 0;
        goto LABEL_29;
      }
      v74 = !v120;
      *a11 = -1073741790;
      if ( v74 )
        sub_14024429C((char *)PrimaryToken, 0LL, 0LL, 0LL, v14, v121 | a5, 0);
    }
LABEL_151:
    if ( v115 )
      return 0;
    v78 = SubjectContext;
    goto LABEL_193;
  }
LABEL_29:
  if ( (a2 & 2) != 0 )
  {
    LOBYTE(v15) = 1;
    if ( (PrimaryToken[50] & 0x2000) != 0 )
    {
      v25 = 1;
      goto LABEL_32;
    }
  }
  else
  {
    LOBYTE(v15) = 0;
  }
  v25 = 0;
LABEL_32:
  v122 = v25;
  v116 = 0;
  if ( !byte_140C0C570 && (PrimaryToken[50] & 0x20) == 0 )
  {
    v79 = *((_QWORD *)PrimaryToken + 27);
    if ( v79 )
    {
      if ( (*(_DWORD *)(v79 + 32) & 0x20) != 0 )
      {
        v74 = v115 == 0;
        *v126 = 0;
        *a11 = -1073741790;
        if ( !v74 )
          return 0;
        v78 = SubjectContext;
        goto LABEL_193;
      }
    }
  }
  if ( !v25 )
  {
    v26 = sub_1402FB7E0(v139, v14, v15, (_DWORD)PrimaryToken, 0, (__int64)&v137);
    *a11 = v26;
    if ( v26 >= 0 )
    {
      if ( !DWORD2(v137) || (v22 & (unsigned int)v137) == v22 )
      {
        *a11 = 0;
        if ( (a5 & 0x2000000) != 0 && (PrimaryToken[50] & 0x4000) != 0 && HIDWORD(v137) <= 0x2000 )
          v116 = 1;
        goto LABEL_38;
      }
      *a11 = -1073741790;
      if ( (PrimaryToken[50] & 0x4000) != 0 && HIDWORD(v137) <= 0x2000 )
      {
        v116 = 1;
        goto LABEL_38;
      }
    }
    goto LABEL_151;
  }
LABEL_38:
  if ( !byte_140C1B311 )
    goto LABEL_39;
  v80 = *(_WORD *)(v14 + 2);
  if ( (v80 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_39;
  if ( v80 >= 0 )
  {
    v82 = *(ACL **)(v14 + 24);
  }
  else
  {
    v81 = *(unsigned int *)(v14 + 12);
    if ( !(_DWORD)v81 )
    {
      v136 = 0LL;
      goto LABEL_39;
    }
    v82 = (ACL *)(v14 + v81);
  }
  v136 = v82;
  if ( v82 )
  {
    v83 = (void *)sub_1405F4288(v82);
    if ( v83 )
    {
      v84 = sub_1405F5D18(v83);
      v85 = v132;
      v27 = 1;
      if ( v84 < 0 )
        v85 = qword_140D3B0F8;
      v132 = v85;
      v117 = 1;
    }
    else
    {
      v27 = 0;
    }
    goto LABEL_40;
  }
LABEL_39:
  v27 = 0;
LABEL_40:
  if ( (a2 & 1) != 0 )
  {
    v119 = 1;
    if ( (a5 & 0x2060000) == 0 && !v27 )
      goto LABEL_110;
  }
  else
  {
    v119 = 0;
  }
  if ( *(__int16 *)(v14 + 2) >= 0 )
  {
    v29 = *(unsigned __int8 **)(v14 + 8);
  }
  else
  {
    v28 = *(unsigned int *)(v14 + 4);
    if ( (_DWORD)v28 )
      v29 = (unsigned __int8 *)(v14 + v28);
    else
      v29 = 0LL;
  }
  v30 = PrimaryToken + 58;
  if ( PrimaryToken == (_DWORD *)-232LL || !v29 )
    goto LABEL_110;
  v31 = v29[1];
  v32 = 0;
  v33 = *(unsigned __int16 *)v29;
  v142 = v33;
  v118 = 0;
  v34 = 4 * v31 + 8;
  v127 = v34;
  v35 = *(_QWORD *)&v30[2 * (v29[4 * ((unsigned __int64)(unsigned int)v33 >> 8) + 4] & 0xF) + 4] & *(_QWORD *)&v30[2 * ((unsigned __int64)v29[4 * ((unsigned __int64)(unsigned int)v33 >> 8) + 4] >> 4) + 36];
  if ( !v35 )
    goto LABEL_109;
  do
  {
    LOBYTE(v36) = v35;
    v124 = (unsigned __int8)v35;
    if ( !(_BYTE)v35 )
      goto LABEL_124;
    v37 = *((_QWORD *)PrimaryToken + 30);
    v38 = v32;
    v141 = v37;
    LODWORD(v128) = v32;
    do
    {
      v138 = *((unsigned __int8 *)qword_140016050 + (unsigned __int8)v36);
      v39 = v37 + 16LL * (unsigned int)(v38 + v138);
      if ( **(_WORD **)v39 == (_WORD)v33 )
      {
        if ( !memcmp(v29, *(const void **)v39, v34) )
        {
LABEL_52:
          if ( (v39 != *((_QWORD *)PrimaryToken + 30) || (*(_DWORD *)(v39 + 8) & 0x10) != 0)
            && (*(_DWORD *)(v39 + 8) & 4) == 0 )
          {
            goto LABEL_110;
          }
          if ( PrimaryToken[32] )
          {
            v40 = sub_1402FD65C((PSID_AND_ATTRIBUTES_HASH)(PrimaryToken + 126), 1, 0);
            v41 = a5 & 0x2060000;
            if ( !v40 )
              goto LABEL_126;
          }
          else
          {
            v40 = 1;
            v41 = a5 & 0x2060000;
          }
          if ( v41 )
          {
            if ( !v119 )
            {
              v42 = *(_WORD *)(v134 + 2);
              if ( (v42 & 4) != 0 )
              {
                if ( v42 >= 0 )
                {
                  v44 = *(_QWORD *)(v134 + 32);
                  goto LABEL_65;
                }
                v43 = *(unsigned int *)(v134 + 16);
                if ( (_DWORD)v43 )
                {
                  v44 = v134 + v43;
LABEL_65:
                  SeOwnerRightsSid = SeExports->SeOwnerRightsSid;
                  if ( v44 )
                  {
                    v46 = (char *)(v44 + 8);
                    v47 = 0;
                    LODWORD(v128) = *(unsigned __int16 *)(v44 + 4);
                    if ( (_DWORD)v128 )
                    {
                      while ( 1 )
                      {
                        if ( (v46[1] & 8) != 0 )
                          goto LABEL_76;
                        v48 = *v46;
                        if ( (unsigned __int8)(*v46 - 5) <= 3u || (unsigned __int8)(v48 - 11) <= 1u )
                        {
LABEL_227:
                          v49 = &v46[16 * (*((_DWORD *)v46 + 2) & 1) + ((8LL * (*((_DWORD *)v46 + 2) & 2)) | 0xC)];
                          goto LABEL_74;
                        }
                        if ( v48 >= 0xFu )
                          break;
                        if ( v48 == 4 )
                        {
                          v49 = v46 + 12;
                          goto LABEL_74;
                        }
                        if ( v48 > 0xAu )
                          goto LABEL_224;
LABEL_73:
                        v49 = v46 + 8;
LABEL_74:
                        if ( v49 )
                        {
                          v50 = *(unsigned __int16 *)v49;
                          if ( (_WORD)v50 == *SeOwnerRightsSid && !memcmp(v49, SeOwnerRightsSid, 4 * (v50 >> 8) + 8) )
                            goto LABEL_111;
                        }
LABEL_76:
                        ++v47;
                        v46 += *((unsigned __int16 *)v46 + 1);
                        if ( v47 >= (unsigned int)v128 )
                          goto LABEL_77;
                      }
                      if ( v48 <= 0x10u )
                        goto LABEL_227;
LABEL_224:
                      if ( (unsigned __int8)(v48 - 13) > 1u )
                        goto LABEL_76;
                      goto LABEL_73;
                    }
                  }
                }
              }
            }
LABEL_77:
            v51 = 393216;
            if ( (a5 & 0x2000000) == 0 )
              v51 = a5 & 0x60000;
            v52 = v117;
            v121 |= v51;
            v13 = a5 & 0xFFF9FFFF;
            v53 = v121;
            if ( !v117 )
              v40 = 0;
LABEL_81:
            if ( !v13 && !v52 && ((PrimaryToken[50] & 0x2000) != 0 || !v51) )
            {
              if ( !v115 )
                SeUnlockSubjectContext(SubjectContext);
              *v126 = v53;
              *v129 = 0;
              return 1;
            }
            goto LABEL_82;
          }
LABEL_126:
          v53 = v121;
          v52 = v117;
          v51 = v123;
          goto LABEL_81;
        }
        v37 = v141;
        LOWORD(v33) = v142;
        v34 = v127;
      }
      v36 = (unsigned __int8)v124 ^ (1 << v138);
      v38 = v128;
      v124 = v36;
    }
    while ( (_BYTE)v36 );
    v32 = v118;
LABEL_124:
    v32 += 8;
    v35 >>= 8;
    v118 = v32;
  }
  while ( v35 );
LABEL_109:
  v65 = *v30;
  if ( *v30 > 0x40 )
  {
    v86 = *((_QWORD *)PrimaryToken + 30);
    v87 = 64;
    v124 = 64;
    v141 = v86;
    do
    {
      v39 = v86 + 16LL * v87;
      if ( **(_WORD **)v39 == (_WORD)v33 )
      {
        if ( !memcmp(v29, *(const void **)v39, v34) )
          goto LABEL_52;
        LOWORD(v33) = v142;
        v87 = v124;
        v86 = v141;
        v34 = v127;
      }
      v124 = ++v87;
    }
    while ( v87 < v65 );
  }
LABEL_110:
  v40 = 0;
LABEL_111:
  v51 = v123;
LABEL_82:
  v54 = v134;
  LODWORD(v146[0]) = v51;
  memset((char *)v146 + 4, 0, 24);
  v56 = sub_1402FA820(
          v134,
          0,
          SubjectContext->PrimaryToken,
          SubjectContext->ClientToken,
          v13,
          0LL,
          0,
          v139,
          v121,
          a9,
          (__int64)v126,
          (__int64)v143,
          (__int64)v129,
          0,
          v40,
          (__int64)v146,
          (__int64)&P,
          (__int64)&v114,
          0LL);
  v58 = v132;
  v128 = v132;
  if ( !byte_140C1B311 )
  {
    v59 = v129;
LABEL_84:
    v60 = v126;
    goto LABEL_85;
  }
  v88 = *v129;
  if ( *v129 < 0 )
  {
    v54 = v134;
    v59 = v129;
    goto LABEL_84;
  }
  v60 = v126;
  v89 = 0LL;
  if ( !v117 )
  {
    v54 = v134;
    v59 = v129;
    goto LABEL_85;
  }
  v90 = *v126;
  v91 = 0LL;
  v127 = 0;
  v119 = 0;
  v123 = v90;
  LOBYTE(v124) = 0;
  if ( !*(_DWORD *)(v132 + 60) )
    goto LABEL_277;
  while ( 2 )
  {
    v92 = *(_QWORD *)(v58 + 8 * v91 + 64);
    v132 = v92;
    if ( *(_QWORD *)(v92 + 24) )
    {
      v93 = P;
      if ( !P )
      {
        v94 = sub_140218B60((__int64)v136, (__int64 *)&P);
        v93 = P;
        v95 = (unsigned __int8)v124;
        if ( v94 < 0 )
          v95 = 1;
        v89 = 0LL;
        v124 = v95;
      }
      v96 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
      if ( v96 )
      {
        v97 = v96[75];
        v98 = v96[73];
        v99 = v96[74];
        v89 = (void *)v96[72];
      }
      else
      {
        v97 = 0LL;
        v98 = 0LL;
        v99 = 0LL;
      }
      v100 = sub_140219130(
               PrimaryToken,
               *((void **)PrimaryToken + 97),
               v93,
               v89,
               v99,
               v98,
               v97,
               *(_DWORD **)(v92 + 24),
               *(_DWORD *)(v92 + 16),
               1,
               0,
               &v131);
      v101 = v131;
      v102 = v100;
      if ( v131 != 1 )
      {
        if ( v100 < 0 )
        {
          if ( !v115 )
            SeUnlockSubjectContext(SubjectContext);
          if ( !*(_QWORD *)(v128 + 32) )
            goto LABEL_272;
          goto LABEL_271;
        }
        if ( (PrimaryToken[50] & 0x10) != 0 )
        {
          v103 = (_QWORD *)*((_QWORD *)PrimaryToken + 137);
          if ( v103 )
          {
            v104 = v103[75];
            v105 = v103[73];
            v106 = v103[74];
            v107 = (void *)v103[72];
          }
          else
          {
            v104 = 0LL;
            v105 = 0LL;
            v106 = 0LL;
            v107 = 0LL;
          }
          v102 = sub_140219130(
                   PrimaryToken,
                   *((void **)PrimaryToken + 97),
                   P,
                   v107,
                   v106,
                   v105,
                   v104,
                   *(_DWORD **)(v132 + 24),
                   *(_DWORD *)(v132 + 16),
                   1,
                   1,
                   &v131);
          if ( v102 >= 0 )
          {
            v101 = v131;
            goto LABEL_247;
          }
          if ( !v115 )
            SeUnlockSubjectContext(SubjectContext);
          if ( !*(_QWORD *)(v128 + 32) )
          {
LABEL_272:
            *v126 = 0;
            *v129 = v102;
LABEL_273:
            sub_1402A4660(P);
            return 0;
          }
LABEL_271:
          ((void (*)(void))sub_1405F4304)();
          goto LABEL_272;
        }
LABEL_247:
        if ( !(_BYTE)v124 && v101 != 1 )
        {
          v90 = v123;
          goto LABEL_262;
        }
      }
      v92 = v132;
    }
    v108 = sub_1405F412C(SecurityDescriptor);
    if ( v108 < 0 )
    {
      if ( !v115 )
        SeUnlockSubjectContext(SubjectContext);
      if ( *(_QWORD *)(v128 + 32) )
        ((void (*)(void))sub_1405F4304)();
      *v126 = 0;
      *v129 = v108;
      goto LABEL_273;
    }
    v109 = v13;
    if ( (*(_DWORD *)(v92 + 48) & 1) != 0 )
    {
      v109 = v121 | v13;
      if ( (v13 & 0x2000000) != 0 )
        v109 = v13;
      v110 = 0;
    }
    else
    {
      v110 = v121;
    }
    v56 = sub_1402FA820(
            (unsigned int)SecurityDescriptor,
            0,
            SubjectContext->PrimaryToken,
            SubjectContext->ClientToken,
            v109,
            0LL,
            0,
            v139,
            v110,
            a9,
            (__int64)&v133,
            0LL,
            (__int64)&v135,
            0,
            v40,
            (__int64)v146,
            (__int64)&P,
            (__int64)&v114,
            0LL);
    if ( v119 )
      v90 = v133 & v123;
    else
      v90 = v133;
    v123 = v90;
    if ( v90 )
    {
      v88 = v135;
      v119 = 1;
      if ( v135 < 0 )
        goto LABEL_275;
LABEL_262:
      v89 = 0LL;
      v58 = v128;
      v91 = v127 + 1;
      v127 = v91;
      if ( (unsigned int)v91 >= *(_DWORD *)(v128 + 60) )
        goto LABEL_276;
      continue;
    }
    break;
  }
  v88 = -1073741790;
LABEL_275:
  v58 = v128;
LABEL_276:
  v60 = v126;
LABEL_277:
  v59 = v129;
  v111 = v114;
  *v129 = v88;
  *v60 &= v90;
  v54 = v134;
  if ( *v59 < 0 )
    v111 = 0;
  v114 = v111;
LABEL_85:
  if ( !v122 && (v13 & 0x2000000) != 0 )
  {
    if ( (!v116 || !*(_WORD *)((char *)&v146[1] + 5) && (PrimaryToken[50] & 0x400000) == 0)
      && DWORD2(v137)
      && (!BYTE4(v137) || !BYTE5(v137) || !BYTE6(v137)) )
    {
      v73 = *v60 & v137;
      if ( v73 != *v60 )
      {
        *v60 = v73;
        if ( v73 )
        {
          *v59 = 0;
          v114 = 1;
        }
        else
        {
          *v59 = -1073741790;
          v114 = 0;
        }
      }
    }
  }
  else
  {
    if ( v116 && !*(_WORD *)((char *)&v146[1] + 5) )
    {
      if ( (PrimaryToken[50] & 0x400000) == 0 || HIDWORD(v146[0]) )
      {
        *v59 = -1073741790;
        *v60 = 0;
        v114 = 0;
      }
      else
      {
        *v59 = 0;
        *v60 = v121 | v13;
        BYTE7(v146[1]) = 1;
        v114 = 1;
      }
    }
    if ( (v13 & 0x2000000) == 0 )
    {
      v61 = 0;
      LOBYTE(v57) = 0;
      goto LABEL_90;
    }
  }
  v61 = 0;
  v116 = 0;
  if ( v21 != -1 )
  {
    v112 = v21 & *v60;
    if ( v112 == *v60 )
    {
      v61 = 0;
    }
    else
    {
      v61 = 1;
      v116 = 1;
      *v60 = v112;
      if ( v112 )
      {
        *v59 = 0;
        v114 = 1;
      }
      else
      {
        *v59 = -1073741790;
        v114 = 0;
      }
    }
  }
  LOBYTE(v57) = 0;
  if ( v140 != -1 )
  {
    v55 = (unsigned int)v140 & *v60;
    if ( (_DWORD)v55 == *v60 )
    {
      v61 = v116;
    }
    else
    {
      *v60 = v55;
      LOBYTE(v57) = 1;
      v61 = v116;
      if ( (_DWORD)v55 )
      {
        *v59 = 0;
        v114 = 1;
      }
      else
      {
        *v59 = -1073741790;
        v114 = 0;
      }
    }
  }
LABEL_90:
  if ( PrimaryToken )
  {
    if ( (v61 || (_BYTE)v57 || !HIDWORD(v146[0]) && (PrimaryToken[50] & 0x4000) != 0 && (*v59 < 0 || BYTE7(v146[1])))
      && !v120 )
    {
      v66 = *v59 >= 0;
      v67 = v121 | v13;
      v68 = sub_140232910((__int64 *)SubjectContext);
      sub_14024429C((char *)PrimaryToken, 0LL, 0LL, v68, v54, v67, v66);
      v59 = v129;
    }
    if ( *v59 < 0 && !HIDWORD(v146[0]) && (PrimaryToken[50] & 0x4000) != 0 && sub_14024F43C((__int64)v146, v13) )
      sub_140374F38();
  }
  if ( v117 )
  {
    v113 = *(_QWORD *)(v58 + 32);
    if ( v113 )
      sub_1405F4304(v113, v55, v60, v57);
  }
  if ( !v115 )
    SeUnlockSubjectContext(SubjectContext);
  v62 = P;
  if ( P )
  {
    sub_14028AB90(P);
    ExFreePoolWithTag(v62, 0);
  }
  return v56 && v114;
}
