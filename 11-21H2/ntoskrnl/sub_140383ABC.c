/*
 * XREFs of sub_140383ABC @ 0x140383ABC
 * Callers:
 *     SeAccessCheckEx @ 0x140383A90 (SeAccessCheckEx.c)
 *     SeSrpAccessCheck @ 0x1405F4100 (SeSrpAccessCheck.c)
 * Callees:
 *     sub_140218B60 @ 0x140218B60 (sub_140218B60.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14022A380 @ 0x14022A380 (sub_14022A380.c)
 *     sub_14022D300 @ 0x14022D300 (sub_14022D300.c)
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_1402402D0 @ 0x1402402D0 (sub_1402402D0.c)
 *     sub_14024429C @ 0x14024429C (sub_14024429C.c)
 *     sub_14024F43C @ 0x14024F43C (sub_14024F43C.c)
 *     sub_1402A45A8 @ 0x1402A45A8 (sub_1402A45A8.c)
 *     sub_1402A45CC @ 0x1402A45CC (sub_1402A45CC.c)
 *     sub_1402A4660 @ 0x1402A4660 (sub_1402A4660.c)
 *     sub_1402F9614 @ 0x1402F9614 (sub_1402F9614.c)
 *     sub_1402FB7E0 @ 0x1402FB7E0 (sub_1402FB7E0.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_140374F38 @ 0x140374F38 (sub_140374F38.c)
 *     sub_1403841DC @ 0x1403841DC (sub_1403841DC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405F412C @ 0x1405F412C (sub_1405F412C.c)
 *     sub_1405F4288 @ 0x1405F4288 (sub_1405F4288.c)
 *     sub_1405F4304 @ 0x1405F4304 (sub_1405F4304.c)
 *     sub_1405F5D18 @ 0x1405F5D18 (sub_1405F5D18.c)
 *     sub_14064A73C @ 0x14064A73C (sub_14064A73C.c)
 *     SeLockSubjectContext @ 0x140722AE0 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x140723F40 (SeUnlockSubjectContext.c)
 *     sub_140724320 @ 0x140724320 (sub_140724320.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140383ABC(
        PSECURITY_SUBJECT_CONTEXT SubjectContext,
        char a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        char a6,
        char a7)
{
  _DWORD *v11; // rcx
  _DWORD *v12; // rdx
  _DWORD *v13; // rax
  _QWORD *v14; // rax
  char v15; // r13
  __int64 v16; // r9
  int v17; // esi
  __int64 v18; // rcx
  char v19; // dl
  __int64 v20; // rdx
  int v21; // eax
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // r10
  int *v25; // rdx
  int v26; // ebx
  int *v27; // rax
  _DWORD *ClientToken; // rdi
  __int64 v29; // rcx
  int v30; // eax
  int *v31; // rdx
  int v32; // ebx
  __int64 v33; // rdx
  int v34; // eax
  char v35; // bl
  char v36; // cl
  int v37; // eax
  _DWORD *v38; // r8
  char v39; // al
  char v40; // al
  int v41; // ebx
  char v42; // cl
  unsigned int v43; // edx
  char v44; // r8
  __int64 v45; // rcx
  PACCESS_TOKEN v46; // r9
  PACCESS_TOKEN v47; // r8
  char v48; // al
  __int64 v49; // rdx
  char *v50; // r8
  __int64 v51; // r9
  __int64 v52; // rsi
  int v53; // ebx
  int *v54; // r8
  _DWORD *v55; // rcx
  int v56; // edx
  char v57; // bl
  int *v58; // rdx
  _DWORD *v59; // r9
  int v60; // ecx
  int v61; // r8d
  int v62; // ecx
  __int64 v64; // rcx
  __int16 v65; // ax
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // al
  int v69; // edx
  int v70; // esi
  int v71; // eax
  int *v72; // rcx
  int v73; // ecx
  _QWORD *v74; // rax
  bool v75; // zf
  char *PrimaryToken; // r13
  int v77; // esi
  __int64 v78; // rdi
  ULONGLONG v79; // rax
  int v80; // ebx
  int v81; // edx
  int v82; // ecx
  __int64 v83; // rax
  int v84; // ecx
  __int64 v85; // rcx
  __int16 v86; // dx
  __int64 v87; // rax
  ACL *v88; // rax
  void *v89; // rax
  int v90; // eax
  __int64 v91; // rdx
  bool v92; // sf
  int *v93; // rcx
  int *v94; // rbx
  int v95; // r9d
  int v96; // r10d
  unsigned int **v97; // rcx
  unsigned int *v98; // rcx
  unsigned int v99; // eax
  _DWORD *v100; // rcx
  char v101; // al
  __int64 v102; // r11
  char v103; // dl
  int *Pool2; // rax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  __int64 v108; // rcx
  unsigned int v109; // eax
  unsigned int v110; // ecx
  __int64 v111; // rcx
  PVOID v112; // r8
  int v113; // eax
  int v114; // ecx
  _QWORD *v115; // rax
  void *v116; // r9
  __int64 v117; // rdx
  __int64 v118; // r10
  int v119; // eax
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  int v123; // ecx
  int v124; // esi
  _QWORD *v125; // rax
  void *v126; // r9
  __int64 v127; // rdx
  __int64 v128; // r8
  __int64 v129; // r10
  int v130; // eax
  __int64 v131; // r8
  __int64 v132; // r9
  int v133; // ecx
  int v134; // esi
  PACCESS_TOKEN v135; // r9
  PACCESS_TOKEN v136; // r8
  char v137; // al
  int v138; // r8d
  int v139; // ecx
  int v140; // esi
  int v141; // esi
  int v142; // eax
  __int64 v143; // rdx
  __int64 v144; // r9
  int v145; // ecx
  int v146; // eax
  PACCESS_TOKEN v147; // r9
  PACCESS_TOKEN v148; // r8
  __int64 v149; // rcx
  int v150; // edx
  int v151; // eax
  __int64 v152; // rcx
  int v153; // esi
  int v154; // ecx
  unsigned int v155; // edx
  int *v156; // rdi
  int v157; // eax
  int v158; // r8d
  int v159; // esi
  int v160; // esi
  int v161; // ecx
  int v162; // esi
  int v163; // eax
  bool v164; // cl
  __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // rcx
  _DWORD *v168; // rax
  _DWORD *v169; // rax
  int v170; // eax
  int v171; // eax
  int v172; // edi
  __int64 v173; // rbx
  char v174; // si
  ULONGLONG v175; // rax
  __int64 v176; // rcx
  char v177; // [rsp+20h] [rbp-110h]
  char v178; // [rsp+28h] [rbp-108h]
  __int64 v179; // [rsp+38h] [rbp-F8h]
  __int64 v180; // [rsp+38h] [rbp-F8h]
  __int64 v181; // [rsp+38h] [rbp-F8h]
  int v182; // [rsp+40h] [rbp-F0h]
  __int64 v183; // [rsp+50h] [rbp-E0h]
  __int64 v184; // [rsp+58h] [rbp-D8h]
  __int64 v185; // [rsp+60h] [rbp-D0h]
  __int64 v186; // [rsp+68h] [rbp-C8h]
  int v187; // [rsp+70h] [rbp-C0h]
  char v188; // [rsp+78h] [rbp-B8h]
  char v189; // [rsp+B0h] [rbp-80h]
  bool v191; // [rsp+B2h] [rbp-7Eh] BYREF
  char v192; // [rsp+B3h] [rbp-7Dh]
  char v193; // [rsp+B4h] [rbp-7Ch]
  char v194; // [rsp+B5h] [rbp-7Bh]
  char v195; // [rsp+B6h] [rbp-7Ah]
  char v196; // [rsp+B7h] [rbp-79h]
  char v197; // [rsp+B8h] [rbp-78h]
  int v198; // [rsp+BCh] [rbp-74h]
  char v199[4]; // [rsp+C0h] [rbp-70h] BYREF
  int v200; // [rsp+C4h] [rbp-6Ch]
  int v201; // [rsp+C8h] [rbp-68h]
  PVOID P; // [rsp+D0h] [rbp-60h] BYREF
  int v203; // [rsp+D8h] [rbp-58h]
  int v204; // [rsp+DCh] [rbp-54h]
  int v205; // [rsp+E0h] [rbp-50h] BYREF
  int v206; // [rsp+E4h] [rbp-4Ch]
  __int64 v207; // [rsp+E8h] [rbp-48h]
  __int64 v208; // [rsp+F0h] [rbp-40h]
  int v209; // [rsp+F8h] [rbp-38h] BYREF
  int v210; // [rsp+FCh] [rbp-34h]
  int v211; // [rsp+100h] [rbp-30h] BYREF
  int v212; // [rsp+104h] [rbp-2Ch]
  int v213; // [rsp+108h] [rbp-28h] BYREF
  __int64 v214; // [rsp+110h] [rbp-20h]
  int v215; // [rsp+118h] [rbp-18h] BYREF
  int v216; // [rsp+120h] [rbp-10h] BYREF
  PVOID Object; // [rsp+128h] [rbp-8h]
  int v218; // [rsp+130h] [rbp+0h] BYREF
  __int128 v219; // [rsp+138h] [rbp+8h] BYREF
  __int64 v220; // [rsp+148h] [rbp+18h]
  _OWORD SecurityDescriptor[2]; // [rsp+150h] [rbp+20h] BYREF
  __int64 v222; // [rsp+170h] [rbp+40h]
  _OWORD v223[2]; // [rsp+178h] [rbp+48h] BYREF
  __int64 v224; // [rsp+198h] [rbp+68h]
  int v225; // [rsp+1A0h] [rbp+70h] BYREF
  __int128 v226; // [rsp+1A4h] [rbp+74h]
  __int64 v227; // [rsp+1B4h] [rbp+84h]
  __int128 v228; // [rsp+1C0h] [rbp+90h] BYREF
  __int128 v229; // [rsp+1D0h] [rbp+A0h]
  __int128 v230; // [rsp+1E0h] [rbp+B0h]
  _BYTE v231[128]; // [rsp+1F0h] [rbp+C0h] BYREF
  _BYTE v232[128]; // [rsp+270h] [rbp+140h] BYREF
  _BYTE v233[128]; // [rsp+2F0h] [rbp+1C0h] BYREF

  v191 = 0;
  v199[0] = 0;
  v227 = 0LL;
  v214 = 0LL;
  v213 = 0;
  v218 = 0;
  v208 = 0LL;
  v189 = 0;
  P = 0LL;
  v209 = 0;
  v219 = 0LL;
  v222 = 0LL;
  v226 = 0LL;
  v224 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  memset(v223, 0, sizeof(v223));
  memset(v231, 0, sizeof(v231));
  memset(v232, 0, sizeof(v232));
  memset(v233, 0, sizeof(v233));
  v194 = 0;
  v196 = 0;
  v211 = -1;
  v216 = -1;
  if ( !a4 )
    return 0;
  if ( *(_DWORD *)a4 != 40 )
    return 0;
  v11 = *(_DWORD **)(a4 + 16);
  if ( !v11 )
    return 0;
  if ( !SubjectContext
    || !a3
    || *(_DWORD *)a3 != 56
    || (v12 = *(_DWORD **)(a4 + 8)) == 0LL
    || (v13 = *(_DWORD **)(a3 + 8)) != 0LL && (*v13 != 16 || (v13[1] & 0xFFFFFFF8) != 0)
    || a5 && *a5 != 96 )
  {
    *v11 = -1073741811;
    return 0;
  }
  *v12 = 0;
  **(_DWORD **)(a4 + 16) = -1073741790;
  v14 = *(_QWORD **)(a4 + 32);
  v205 = 0;
  v215 = -1073741790;
  if ( v14 )
    *v14 = 0LL;
  v15 = 1;
  v16 = *(_QWORD *)(a4 + 24);
  v212 = *(_DWORD *)(a3 + 16) & ~*(_DWORD *)(a3 + 20) & 0xFDFFFFFF;
  v17 = v212;
  sub_14022D300(v212, 0, 0, v16, 1);
  if ( a6 == v19 )
  {
    v71 = *(_DWORD *)(a3 + 16);
    v72 = *(int **)(a4 + 8);
    if ( (v71 & 0x2000000) != 0 )
    {
      *v72 = *(_DWORD *)(*(_QWORD *)(a3 + 32) + 12LL);
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 16) & 0xFDFFFFFF;
      **(_DWORD **)(a4 + 8) |= *(_DWORD *)(a3 + 20);
    }
    else
    {
      *v72 = *(_DWORD *)(a3 + 20) | v71;
    }
    **(_DWORD **)(a4 + 16) = 0;
    return v15;
  }
  v20 = *(_QWORD *)(a3 + 8);
  if ( !v20 || !*(_QWORD *)(v20 + 8) )
  {
    **(_DWORD **)(a4 + 16) = -1073741790;
    return 0;
  }
  if ( SubjectContext->ClientToken && SubjectContext->ImpersonationLevel < SecurityImpersonation )
  {
    **(_DWORD **)(a4 + 16) = -1073741659;
    return 0;
  }
  if ( !*(_DWORD *)(a3 + 16) )
  {
    v73 = *(_DWORD *)(a3 + 20);
    if ( !v73 )
    {
      **(_DWORD **)(a4 + 16) = -1073741790;
      return 0;
    }
    **(_DWORD **)(a4 + 8) = v73;
    **(_DWORD **)(a4 + 16) = 0;
    v74 = *(_QWORD **)(a4 + 32);
    if ( v74 )
      *v74 = 0LL;
    return v15;
  }
  v21 = *(_DWORD *)(a4 + 4);
  if ( v21 != 1 && v21 != *(_DWORD *)(a3 + 40) )
  {
    **(_DWORD **)(a4 + 16) = -1073741811;
    return 0;
  }
  if ( !a2 )
  {
    SeLockSubjectContext(SubjectContext);
    v20 = *(_QWORD *)(a3 + 8);
  }
  v22 = sub_1402F9614(v18, *(_QWORD *)(v20 + 8), SubjectContext, 0LL, 0LL, 0, &v211);
  v24 = 0LL;
  **(_DWORD **)(a4 + 16) = v22;
  v25 = *(int **)(a4 + 16);
  if ( *v25 < 0 )
  {
    v75 = a2 == 0;
    goto LABEL_117;
  }
  v26 = v211;
  *v25 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v211 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
  v27 = *(int **)(a4 + 16);
  ClientToken = SubjectContext->ClientToken;
  Object = SubjectContext->ClientToken;
  if ( *v27 < 0 )
  {
    PrimaryToken = (char *)ClientToken;
    if ( !ClientToken )
      PrimaryToken = (char *)SubjectContext->PrimaryToken;
    v77 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
    v78 = *(_QWORD *)(a3 + 8);
    v79 = sub_140232910((__int64 *)SubjectContext);
    sub_14024429C(PrimaryToken, 0LL, 0LL, v79, *(_QWORD *)(v78 + 8), v77, 0);
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    v177 = 0;
    v80 = v212 & ~v26;
    v81 = 9437184;
    goto LABEL_105;
  }
  if ( !ClientToken )
  {
    ClientToken = SubjectContext->PrimaryToken;
    Object = ClientToken;
  }
  v29 = *(_QWORD *)(a3 + 8);
  if ( (*(_DWORD *)(v29 + 4) & 4) == 0 )
  {
    v30 = sub_1402FBC90(*(_QWORD *)(v29 + 8), (__int64 *)&P, ClientToken, 0, &v216);
    v24 = 0LL;
    **(_DWORD **)(a4 + 16) = v30;
    v31 = *(int **)(a4 + 16);
    if ( *v31 < 0 )
      goto LABEL_116;
    v32 = v216;
    *v31 = (*(_DWORD *)(a3 + 16) & 0xFDFFFFFF) != (v216 & *(_DWORD *)(a3 + 16) & 0xFDFFFFFF) ? 0xC0000022 : 0;
    if ( **(int **)(a4 + 16) < 0 )
    {
      sub_14024429C(
        (char *)ClientToken,
        0LL,
        0LL,
        0LL,
        *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL),
        *(_BYTE *)(a3 + 16) | *(_BYTE *)(a3 + 20),
        0);
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v80 = v17 & v32;
      v177 = 0;
      v81 = 10485760;
LABEL_105:
      v82 = v80;
      goto LABEL_107;
    }
  }
  v33 = *(_QWORD *)(a3 + 8);
  v34 = *(_DWORD *)(v33 + 4);
  v35 = v34 & 1;
  v195 = v34 & 1;
  if ( (v34 & 2) != 0 )
  {
    LOBYTE(v23) = 1;
    if ( (ClientToken[50] & 0x2000) != 0 )
    {
      v36 = 1;
      goto LABEL_34;
    }
  }
  else
  {
    LOBYTE(v23) = 0;
  }
  v36 = 0;
LABEL_34:
  v197 = v36;
  if ( !byte_140C0C570 && (ClientToken[50] & 0x20) == 0 )
  {
    v83 = *((_QWORD *)ClientToken + 27);
    if ( v83 )
    {
      if ( (*(_DWORD *)(v83 + 32) & 0x20) != 0 )
      {
        **(_DWORD **)(a4 + 8) = 0;
        **(_DWORD **)(a4 + 16) = -1073741790;
        goto LABEL_116;
      }
    }
  }
  LOBYTE(v206) = 0;
  if ( !v36 )
  {
    **(_DWORD **)(a4 + 16) = sub_1402FB7E0(
                               *(int **)(a3 + 32),
                               *(_QWORD *)(v33 + 8),
                               v23,
                               (__int64)ClientToken,
                               0,
                               (__int64)&v219);
    if ( **(int **)(a4 + 16) >= 0 )
    {
      v37 = sub_1402A45A8(&v219, *(_DWORD *)(a3 + 16));
      *v38 = v37;
      if ( **(_DWORD **)(a4 + 16) >= (int)v24 )
      {
        if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 && (ClientToken[50] & 0x4000) != 0 )
        {
          v84 = (unsigned __int8)v206;
          if ( HIDWORD(v219) <= 0x2000 )
            v84 = 1;
          v206 = v84;
        }
        goto LABEL_40;
      }
      if ( (ClientToken[50] & 0x4000) != 0 && HIDWORD(v219) <= 0x2000 )
      {
        LOBYTE(v206) = 1;
        goto LABEL_40;
      }
      if ( a2 == (_BYTE)v24 )
      {
        SeUnlockSubjectContext(SubjectContext);
        LOBYTE(v24) = 0;
      }
      v81 = 3145728;
      v177 = v24;
      v82 = v17 & ~(_DWORD)v219;
LABEL_107:
      sub_14022D300(v82, v81, 0, *(_QWORD *)(a4 + 24), v177);
      return 0;
    }
LABEL_116:
    v75 = a2 == 0;
LABEL_117:
    if ( v75 )
      SeUnlockSubjectContext(SubjectContext);
    return 0;
  }
LABEL_40:
  if ( !byte_140C1B311 )
    goto LABEL_41;
  v85 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
  v86 = *(_WORD *)(v85 + 2);
  if ( (v86 & 0x10) == 0 || KeGetCurrentIrql() >= 2u )
    goto LABEL_41;
  if ( v86 >= 0 )
  {
    v88 = *(ACL **)(v85 + 24);
  }
  else
  {
    v87 = *(unsigned int *)(v85 + 12);
    if ( !(_DWORD)v87 )
    {
      v214 = v24;
LABEL_41:
      v39 = 0;
      goto LABEL_42;
    }
    v88 = (ACL *)(v85 + v87);
  }
  v214 = (__int64)v88;
  if ( !v88 )
    goto LABEL_41;
  v89 = (void *)sub_1405F4288(v88);
  v24 = 0LL;
  if ( v89 )
  {
    v90 = sub_1405F5D18(v89);
    v91 = v208;
    v24 = 0LL;
    v92 = v90 < 0;
    v39 = 1;
    v189 = 1;
    if ( v92 )
      v91 = qword_140D3B0F8;
    v208 = v91;
  }
  else
  {
    v39 = 0;
  }
LABEL_42:
  if ( v35 )
  {
    v41 = *(_DWORD *)(a3 + 16);
    if ( (v41 & 0x2060000) == 0 && !v39 )
    {
      v44 = v24;
      v192 = v24;
      v43 = v41;
      goto LABEL_45;
    }
  }
  v40 = sub_1402A45CC((__int64)ClientToken);
  v41 = *(_DWORD *)(a3 + 16);
  v24 = 0LL;
  v193 = v40;
  v42 = v40;
  v192 = v40;
  v43 = v41;
  v44 = v40;
  if ( !v40 )
    goto LABEL_44;
  v192 = v40;
  if ( (v41 & 0x2060000) == 0 )
    goto LABEL_44;
  if ( !v195 )
  {
    v64 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 8LL);
    v65 = *(_WORD *)(v64 + 2);
    if ( (v65 & 4) == 0 )
      goto LABEL_143;
    if ( v65 >= 0 )
    {
      v67 = *(_QWORD *)(v64 + 32);
      goto LABEL_77;
    }
    v66 = *(unsigned int *)(v64 + 16);
    if ( (_DWORD)v66 )
      v67 = v64 + v66;
    else
LABEL_143:
      v67 = 0LL;
LABEL_77:
    v68 = sub_14022A380(0, v67);
    v24 = 0LL;
    if ( !v68 )
    {
      v42 = v193;
      goto LABEL_79;
    }
    v44 = v193;
    v43 = v41;
    v192 = v193;
LABEL_44:
    v39 = v189;
    goto LABEL_45;
  }
LABEL_79:
  v69 = *(_DWORD *)(a3 + 20);
  v192 = v42;
  if ( (v41 & 0x2000000) != 0 )
  {
    v70 = 393216;
    *(_DWORD *)(a3 + 20) = v69 | 0x60000;
    v41 = 393216;
  }
  else
  {
    v41 &= 0x60000u;
    *(_DWORD *)(a3 + 20) = v69 | v41;
    v70 = v17 & 0x60000;
  }
  sub_14022D300(v70, 0x400000, 0, *(_QWORD *)(a4 + 24), 0);
  v24 = 0LL;
  v39 = v189;
  v43 = *(_DWORD *)(a3 + 16) & 0xFFF9FFFF;
  *(_DWORD *)(a3 + 16) = v43;
  if ( v189 )
    v44 = v192;
  else
    v192 = 0;
LABEL_45:
  if ( !v43 && !v39 && ((ClientToken[50] & 0x2000) != 0 || !v41) )
  {
    if ( a2 == (_BYTE)v24 )
    {
      SeUnlockSubjectContext(SubjectContext);
      LODWORD(v24) = 0;
    }
    **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 20);
    **(_DWORD **)(a4 + 16) = v24;
    return v15;
  }
  v45 = *(_QWORD *)(a3 + 8);
  v46 = SubjectContext->ClientToken;
  v188 = v44;
  v47 = SubjectContext->PrimaryToken;
  v186 = *(_QWORD *)(a4 + 24);
  v185 = *(_QWORD *)(a4 + 16);
  v184 = *(_QWORD *)(a4 + 32);
  v183 = *(_QWORD *)(a4 + 8);
  v182 = *(_DWORD *)(a3 + 20);
  v179 = *(_QWORD *)(a3 + 32);
  v226 = 0LL;
  v227 = v24;
  v225 = v41;
  v48 = sub_1403841DC(
          *(_QWORD *)(v45 + 8),
          0,
          (_DWORD)v47,
          (_DWORD)v46,
          v43,
          v24,
          v24,
          v179,
          v182,
          a6,
          v183,
          v184,
          v185,
          v186,
          (_BYTE)v24,
          v188,
          a7,
          (__int64)&v225,
          (__int64)&P,
          (__int64)&v191);
  v52 = v208;
  v195 = v48;
  if ( !byte_140C1B311 || (v212 = **(_DWORD **)(a4 + 16), v212 < 0) || !v189 )
  {
LABEL_47:
    if ( v197 || (v49 = *(unsigned int *)(a3 + 16), (v49 & 0x2000000) == 0) )
    {
      if ( (_BYTE)v206 && !*(_WORD *)((char *)&v227 + 1) )
      {
        if ( (ClientToken[50] & 0x400000) == 0 || DWORD2(v226) )
        {
          **(_DWORD **)(a4 + 16) = -1073741790;
          **(_DWORD **)(a4 + 8) = 0;
          v169 = *(_DWORD **)(a4 + 8);
          v191 = 0;
          sub_14022D300(~*v169, 3145728, 0, *(_QWORD *)(a4 + 24), 0);
        }
        else
        {
          v168 = *(_DWORD **)(a4 + 16);
          BYTE3(v227) = 1;
          *v168 = 0;
          **(_DWORD **)(a4 + 8) = *(_DWORD *)(a3 + 16);
          v191 = 1;
        }
      }
    }
    else
    {
      v50 = *(char **)(a4 + 8);
      v53 = *(_DWORD *)v50;
      if ( !(_BYTE)v206 || !*(_WORD *)((char *)&v227 + 1) && (ClientToken[50] & 0x400000) == 0 )
      {
        sub_1402402D0((__int64)&v219, v49, v50, *(char **)(a4 + 16), &v191, 0);
        sub_14022D300(v53 & ~**(_DWORD **)(a4 + 8), 3145728, 0, *(_QWORD *)(a4 + 24), 0);
      }
    }
    if ( (*(_DWORD *)(a3 + 16) & 0x2000000) != 0 )
    {
      v54 = *(int **)(a4 + 8);
      v55 = *(_DWORD **)(a4 + 16);
      v56 = *v54;
      if ( v211 == -1 || (v170 = v211 & v56, (v211 & v56) == v56) )
      {
        v57 = 0;
      }
      else
      {
        *v54 = v170;
        v57 = 1;
        if ( v170 )
        {
          *v55 = 0;
          v191 = 1;
        }
        else
        {
          *v55 = -1073741790;
          v191 = 0;
        }
      }
      sub_14022D300(v56 & ~**(_DWORD **)(a4 + 8), 9437184, 0, *(_QWORD *)(a4 + 24), 0);
      v58 = *(int **)(a4 + 8);
      v59 = *(_DWORD **)(a4 + 16);
      v60 = *(_DWORD *)(a3 + 16);
      v61 = *v58;
      v196 = 0;
      if ( v216 != -1 )
      {
        v171 = v216 & v61;
        if ( (v216 & v61) != v61 )
        {
          v196 = 1;
          *v58 = v171;
          if ( (v60 & 0x2000000) != 0 )
          {
            *v59 = v171 == 0 ? 0xC0000022 : 0;
            v191 = v171 != 0;
          }
          else
          {
            *v59 = -1073741790;
            v191 = *v58 != 0;
          }
        }
      }
      sub_14022D300(v61 & ~**(_DWORD **)(a4 + 8), 10485760, 0, *(_QWORD *)(a4 + 24), 0);
    }
    else
    {
      v57 = v194;
    }
    if ( ClientToken )
    {
      if ( v57
        || v196
        || (v62 = DWORD2(v226)) == 0 && (ClientToken[50] & 0x4000) != 0 && (**(int **)(a4 + 16) < 0 || BYTE3(v227)) )
      {
        v172 = *(_DWORD *)(a3 + 16) | *(_DWORD *)(a3 + 20);
        v173 = *(_QWORD *)(a3 + 8);
        v174 = **(_DWORD **)(a4 + 16) >= 0;
        v175 = sub_140232910((__int64 *)SubjectContext);
        v178 = v172;
        ClientToken = Object;
        sub_14024429C((char *)Object, 0LL, 0LL, v175, *(_QWORD *)(v173 + 8), v178, v174);
        v62 = DWORD2(v226);
      }
      if ( **(int **)(a4 + 16) < 0
        && !v62
        && (ClientToken[50] & 0x4000) != 0
        && sub_14024F43C((__int64)&v225, *(_DWORD *)(a3 + 16)) )
      {
        sub_140374F38();
      }
    }
    if ( v189 )
    {
      v176 = *(_QWORD *)(v208 + 32);
      if ( v176 )
        sub_1405F4304(v176, v49, v50, v51);
    }
    if ( !a2 )
      SeUnlockSubjectContext(SubjectContext);
    sub_1402A4660(P);
    if ( !v191 || !v195 )
      return 0;
    return v15;
  }
  v93 = *(int **)(a4 + 8);
  v94 = 0LL;
  LOBYTE(v203) = 0;
  v95 = 0;
  v204 = 0;
  v96 = *v93;
  v97 = *(unsigned int ***)(a4 + 32);
  v210 = v96;
  v198 = v96;
  if ( v97 )
  {
    v98 = *v97;
    if ( v98 )
    {
      v99 = *v98;
      if ( *v98 )
      {
        v100 = v98 + 3;
        v50 = (char *)v99;
        do
        {
          if ( (int)v100[1] < 0 )
          {
            v49 = (unsigned int)*(v100 - 1);
            if ( *(_QWORD *)(v100 - 1) == stru_140D3CA98 )
            {
              v95 |= 0x1000000u;
            }
            else if ( *(_QWORD *)(v100 - 1) == qword_140D3CAC0 || *(_QWORD *)(v100 - 1) == qword_140D3CAA0 )
            {
              v95 |= 0x80000u;
            }
          }
          v100 += 3;
          --v50;
        }
        while ( v50 );
        v204 = v95;
      }
    }
  }
  v200 = v96;
  LOBYTE(v50) = 1;
  LOBYTE(v49) = 1;
  v101 = sub_140724320(129LL, v49, v50, SubjectContext);
  v102 = 0LL;
  v193 = v101;
  v103 = v101;
  if ( v101 )
  {
    Pool2 = (int *)ExAllocatePool2(64LL, 8LL * *(unsigned int *)(v52 + 60), 1095984467LL);
    v94 = Pool2;
    if ( !Pool2 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v108 = *(_QWORD *)(v52 + 32);
      if ( v108 )
        sub_1405F4304(v108, v105, v106, v107);
      **(_DWORD **)(a4 + 8) = 0;
      **(_DWORD **)(a4 + 16) = -1073741801;
      sub_1402A4660(P);
      return 0;
    }
    memset(Pool2, 0, 8LL * *(unsigned int *)(v52 + 60));
    v103 = v193;
    v102 = 0LL;
  }
  v109 = *(_DWORD *)(v52 + 60);
  v110 = 0;
  v201 = 0;
  LODWORD(v207) = v109;
  if ( !v109 )
  {
LABEL_218:
    if ( v103 )
    {
      if ( v198 != v210 )
      {
        v153 = v198 & (v210 ^ v198);
        v154 = v210 & (v210 ^ v198);
        v203 = v153;
        v200 = v154;
        v155 = 0;
        v198 = 0;
        if ( v109 )
        {
          v156 = v94;
          do
          {
            if ( !v153 && !v154 )
              break;
            if ( *((_BYTE *)v156 + 4) )
            {
              v157 = *v156;
              v158 = v155 << 24;
              v159 = v154 ^ *v156;
              v201 = *v156;
              v160 = v154 & v159;
              if ( v160 )
              {
                sub_14022D300(v160, 0x80000000, v158, (__int64)v232, 0);
                v157 = v201;
                v154 = v200;
              }
              v161 = ~v160 & v154;
              v162 = v203;
              v163 = v203 & v157;
              v200 = v161;
              v201 = v163;
              if ( v163 )
              {
                sub_14022D300(v163, 0x80000000, v158, (__int64)v232, 0);
                v163 = v201;
              }
              v153 = ~v163 & v162;
              v203 = v153;
              sub_14064A73C(v231, v232, 4278190080LL);
              v154 = v200;
              v155 = v198;
              v109 = v207;
            }
            ++v155;
            v156 += 2;
            v198 = v155;
          }
          while ( v155 < v109 );
          ClientToken = Object;
        }
      }
    }
    if ( v94 )
      ExFreePoolWithTag(v94, 0);
    **(_DWORD **)(a4 + 16) = v212;
    **(_DWORD **)(a4 + 8) &= v210;
    v164 = v191;
    if ( **(int **)(a4 + 16) < 0 )
      v164 = 0;
    v191 = v164;
    sub_14064A73C(*(_QWORD *)(a4 + 24), v231, 0LL);
    sub_14064A73C(*(_QWORD *)(a4 + 24), v231, 4278190080LL);
    goto LABEL_47;
  }
  while ( 1 )
  {
    v228 = 0LL;
    v220 = v110;
    v229 = 0LL;
    v230 = 0LL;
    v111 = *(_QWORD *)(v52 + 8LL * v110 + 64);
    v207 = v111;
    if ( !*(_QWORD *)(v111 + 24) )
      goto LABEL_194;
    v112 = P;
    if ( !P )
    {
      v113 = sub_140218B60(v214, (__int64 *)&P);
      v102 = 0LL;
      v112 = P;
      v114 = (unsigned __int8)v203;
      if ( v113 < 0 )
        v114 = 1;
      v203 = v114;
      v111 = v207;
    }
    v115 = (_QWORD *)*((_QWORD *)ClientToken + 137);
    if ( v115 )
    {
      v116 = (void *)v115[72];
      v117 = v115[74];
      v118 = v115[73];
      v102 = v115[75];
    }
    else
    {
      v116 = 0LL;
      v117 = 0LL;
      v118 = 0LL;
    }
    v119 = sub_140219130(
             ClientToken,
             *((void **)ClientToken + 97),
             v112,
             v116,
             v117,
             v118,
             v102,
             *(_DWORD **)(v111 + 24),
             *(_DWORD *)(v111 + 16),
             1,
             0,
             &v209);
    v123 = v209;
    v124 = v119;
    if ( v209 == 1 )
      goto LABEL_194;
    v102 = 0LL;
    if ( v119 < 0 )
      goto LABEL_237;
    if ( (ClientToken[50] & 0x10) != 0 )
      break;
LABEL_192:
    if ( !(_BYTE)v203 && v123 != 1 )
      goto LABEL_216;
LABEL_194:
    v124 = sub_1405F412C(SecurityDescriptor);
    if ( v124 < 0 )
    {
      if ( !a2 )
        SeUnlockSubjectContext(SubjectContext);
      v167 = *(_QWORD *)(v208 + 32);
      if ( v167 )
        sub_1405F4304(v167, 0LL, v131, v132);
      **(_DWORD **)(a4 + 8) = 0;
      goto LABEL_248;
    }
    v133 = *(_DWORD *)(a3 + 16);
    if ( (*(_DWORD *)(v207 + 48) & 1) != 0 )
    {
      if ( (v133 & 0x2000000) == 0 )
        v133 |= *(_DWORD *)(a3 + 20);
      v134 = 0;
    }
    else
    {
      v134 = *(_DWORD *)(a3 + 20);
    }
    v135 = SubjectContext->ClientToken;
    v136 = SubjectContext->PrimaryToken;
    LOBYTE(v187) = 0;
    v180 = *(_QWORD *)(a3 + 32);
    v228 = 0LL;
    v229 = 0LL;
    v230 = 0LL;
    v137 = sub_1403841DC(
             (unsigned int)SecurityDescriptor,
             0,
             (_DWORD)v136,
             (_DWORD)v135,
             v133 | 0x2000000u,
             (__int64)&v228,
             1,
             v180,
             v134,
             a6,
             (__int64)&v205,
             0LL,
             (__int64)&v215,
             (__int64)v233,
             v187,
             v192,
             a7,
             (__int64)&v225,
             (__int64)&P,
             (__int64)&v191);
    v138 = v204;
    v102 = 0LL;
    v195 = v137;
    v139 = v205 & (v134 | **(_DWORD **)(a4 + 8));
    v140 = v204 | HIDWORD(v229);
    v205 = v139;
    if ( v192 )
      v140 |= v139 & 0x60000;
    v141 = ~(_DWORD)v230 & v140;
    v142 = v215;
    v210 &= v139;
    if ( !v210 )
      v142 = -1073741790;
    v212 = v142;
    if ( (v200 & (v200 ^ v141)) != 0 )
    {
      sub_14022D300(v200 & (v200 ^ v141), 327680, v201, (__int64)v231, 0);
      v200 &= v141;
      v138 = v204;
      v102 = 0LL;
    }
    v103 = v193;
    if ( v193 )
    {
      if ( *(_QWORD *)(v207 + 40) )
      {
        v124 = sub_1405F412C(v223);
        if ( v124 < 0 )
        {
          if ( !a2 )
            SeUnlockSubjectContext(SubjectContext);
          v166 = *(_QWORD *)(v208 + 32);
          if ( v166 )
            sub_1405F4304(v166, v143, 0LL, v144);
          **(_DWORD **)(a4 + 8) = 0;
          goto LABEL_248;
        }
        v145 = *(_DWORD *)(a3 + 16);
        if ( (*(_DWORD *)(v207 + 48) & 0x100) != 0 )
        {
          if ( (v145 & 0x2000000) == 0 )
            v145 |= *(_DWORD *)(a3 + 20);
          v146 = 0;
        }
        else
        {
          v146 = *(_DWORD *)(a3 + 20);
        }
        v147 = SubjectContext->ClientToken;
        LOBYTE(v187) = 0;
        v181 = *(_QWORD *)(a3 + 32);
        v148 = SubjectContext->PrimaryToken;
        v228 = 0LL;
        v229 = 0LL;
        v230 = 0LL;
        sub_1403841DC(
          (unsigned int)v223,
          0,
          (_DWORD)v148,
          (_DWORD)v147,
          v145,
          0LL,
          0,
          v181,
          v146,
          a6,
          (__int64)&v213,
          0LL,
          (__int64)&v218,
          (__int64)v233,
          v187,
          v192,
          a7,
          (__int64)&v225,
          (__int64)&P,
          (__int64)v199);
        v149 = v220;
        v150 = v198;
        v151 = v204;
        LOBYTE(v94[2 * v220 + 1]) = 1;
        v94[2 * v149] = v213 | v151;
        v198 = v213 & v150;
        v102 = 0LL;
      }
      else
      {
        v152 = v220;
        LOBYTE(v94[2 * v220 + 1]) = 1;
        v94[2 * v152] = v205 | v138;
        v198 &= v205;
      }
LABEL_216:
      v103 = v193;
    }
    v52 = v208;
    v110 = v201 + 1;
    v201 = v110;
    v109 = *(_DWORD *)(v208 + 60);
    LODWORD(v207) = v109;
    if ( v110 >= v109 )
      goto LABEL_218;
  }
  v125 = (_QWORD *)*((_QWORD *)ClientToken + 137);
  if ( v125 )
  {
    v126 = (void *)v125[72];
    v127 = v125[74];
    v128 = v125[73];
    v129 = v125[75];
  }
  else
  {
    v126 = 0LL;
    v127 = 0LL;
    v128 = 0LL;
    v129 = 0LL;
  }
  v130 = sub_140219130(
           ClientToken,
           *((void **)ClientToken + 97),
           P,
           v126,
           v127,
           v128,
           v129,
           *(_DWORD **)(v207 + 24),
           *(_DWORD *)(v207 + 16),
           1,
           1,
           &v209);
  v102 = 0LL;
  v124 = v130;
  if ( v130 >= 0 )
  {
    v123 = v209;
    goto LABEL_192;
  }
LABEL_237:
  if ( !a2 )
    SeUnlockSubjectContext(SubjectContext);
  v165 = *(_QWORD *)(v208 + 32);
  if ( v165 )
    sub_1405F4304(v165, v120, v121, v122);
  **(_DWORD **)(a4 + 8) = 0;
LABEL_248:
  **(_DWORD **)(a4 + 16) = v124;
  sub_1402A4660(P);
  if ( v94 )
    ExFreePoolWithTag(v94, 0);
  return 0;
}
