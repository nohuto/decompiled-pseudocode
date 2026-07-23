/*
 * XREFs of sub_1407D0090 @ 0x1407D0090
 * Callers:
 *     Callout @ 0x1406CADF0 (Callout.c)
 * Callees:
 *     RtlLengthSid @ 0x1402A4730 (RtlLengthSid.c)
 *     sub_1402E1260 @ 0x1402E1260 (sub_1402E1260.c)
 *     SeAccessCheck @ 0x1402F9C80 (SeAccessCheck.c)
 *     sub_140354360 @ 0x140354360 (sub_140354360.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memcmp @ 0x1403E1D90 (memcmp.c)
 *     ZwQuerySystemInformation @ 0x14041BE20 (ZwQuerySystemInformation.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140648860 @ 0x140648860 (sub_140648860.c)
 *     sub_140648D4C @ 0x140648D4C (sub_140648D4C.c)
 *     sub_14065EA54 @ 0x14065EA54 (sub_14065EA54.c)
 *     sub_14065EE94 @ 0x14065EE94 (sub_14065EE94.c)
 *     sub_1406605B8 @ 0x1406605B8 (sub_1406605B8.c)
 *     sub_1406CD46C @ 0x1406CD46C (sub_1406CD46C.c)
 *     sub_1406D9B20 @ 0x1406D9B20 (sub_1406D9B20.c)
 *     sub_1406E0690 @ 0x1406E0690 (sub_1406E0690.c)
 *     sub_1406E17A8 @ 0x1406E17A8 (sub_1406E17A8.c)
 *     sub_1406E825C @ 0x1406E825C (sub_1406E825C.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     sub_1407D2C60 @ 0x1407D2C60 (sub_1407D2C60.c)
 *     sub_1407D45CC @ 0x1407D45CC (sub_1407D45CC.c)
 *     sub_1407F7874 @ 0x1407F7874 (sub_1407F7874.c)
 *     sub_140A0AD40 @ 0x140A0AD40 (sub_140A0AD40.c)
 *     sub_140A0B0F0 @ 0x140A0B0F0 (sub_140A0B0F0.c)
 *     sub_140A0B4C4 @ 0x140A0B4C4 (sub_140A0B4C4.c)
 *     sub_140A0B85C @ 0x140A0B85C (sub_140A0B85C.c)
 *     sub_140A0BA74 @ 0x140A0BA74 (sub_140A0BA74.c)
 *     sub_140A0BC8C @ 0x140A0BC8C (sub_140A0BC8C.c)
 *     sub_140A0C1F4 @ 0x140A0C1F4 (sub_140A0C1F4.c)
 *     sub_140A0C7AC @ 0x140A0C7AC (sub_140A0C7AC.c)
 *     sub_140A0CB34 @ 0x140A0CB34 (sub_140A0CB34.c)
 *     sub_140A0D214 @ 0x140A0D214 (sub_140A0D214.c)
 *     sub_140A0D5E8 @ 0x140A0D5E8 (sub_140A0D5E8.c)
 *     sub_140A0D838 @ 0x140A0D838 (sub_140A0D838.c)
 *     sub_140A0DD98 @ 0x140A0DD98 (sub_140A0DD98.c)
 *     sub_140A0E160 @ 0x140A0E160 (sub_140A0E160.c)
 *     sub_140A0E378 @ 0x140A0E378 (sub_140A0E378.c)
 *     sub_140A0E590 @ 0x140A0E590 (sub_140A0E590.c)
 *     sub_140A0E96C @ 0x140A0E96C (sub_140A0E96C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1407D0090(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4, unsigned int *a5)
{
  _QWORD *v5; // r12
  char *v6; // r14
  int Acl; // ebx
  size_t v8; // rsi
  char *v9; // r13
  unsigned int *v10; // r9
  size_t v11; // rbx
  unsigned int *v12; // rcx
  unsigned int v13; // r9d
  unsigned int *v14; // r10
  unsigned int v15; // r8d
  size_t v16; // r15
  unsigned int v17; // ecx
  unsigned int *Pool2; // rax
  unsigned int *v19; // rdi
  size_t v20; // r12
  void *v21; // rax
  void *v22; // rax
  void *v23; // rbx
  void *v24; // rax
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  PVOID v28; // r15
  unsigned __int8 *v29; // r15
  unsigned __int64 v30; // rax
  __int64 *v31; // rbx
  unsigned int v32; // ecx
  unsigned int v33; // edx
  __int64 v34; // rbx
  char v35; // si
  unsigned __int8 v36; // di
  char *v37; // rax
  int v38; // r9d
  unsigned __int8 *v39; // r10
  unsigned int v40; // esi
  int v41; // r13d
  int v42; // r15d
  int v43; // r11d
  unsigned int v44; // ebx
  unsigned int v45; // r8d
  char v46; // dl
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // r14
  _BYTE *v50; // rbx
  _BYTE *v51; // rax
  int v52; // eax
  int v53; // eax
  unsigned int v54; // esi
  unsigned int v55; // r15d
  unsigned int v56; // edx
  unsigned int v57; // r8d
  unsigned int v58; // eax
  unsigned int v59; // ecx
  _BYTE *v60; // r10
  char *v61; // r11
  char v62; // r9
  unsigned int v63; // r15d
  char *v64; // rcx
  unsigned __int8 *v65; // r8
  unsigned int v66; // edi
  unsigned int v67; // r13d
  _BYTE *v68; // r11
  const void **v69; // rcx
  int v70; // edx
  int v71; // eax
  int v72; // esi
  int v73; // edx
  int v74; // r8d
  unsigned int v75; // r15d
  int v76; // esi
  int v77; // r15d
  int v78; // esi
  int v79; // r15d
  int v80; // esi
  int v81; // r15d
  __int64 v82; // r14
  int v83; // esi
  __int64 v84; // rdx
  int v85; // r15d
  unsigned int v86; // esi
  const void **v87; // rbx
  unsigned int v88; // r15d
  _BYTE *v89; // rax
  int v90; // esi
  int v91; // eax
  int v92; // eax
  _BYTE *v93; // r11
  int v94; // esi
  int v95; // r15d
  int v96; // esi
  int v97; // r15d
  int v98; // esi
  int v99; // r15d
  int v100; // esi
  int v101; // r15d
  bool v102; // zf
  unsigned __int64 v103; // rax
  size_t v104; // rsi
  char *v105; // rdi
  unsigned __int64 v106; // rdx
  size_t v107; // r10
  void *v108; // rax
  unsigned int v109; // ebx
  char *v110; // rcx
  unsigned int v111; // eax
  char *v112; // r8
  int v113; // r8d
  unsigned int *v114; // rax
  unsigned int *v115; // rax
  int v116; // edx
  __int64 v117; // r8
  unsigned int *v118; // rcx
  unsigned int v119; // ecx
  unsigned int *v120; // rdx
  size_t v121; // rax
  unsigned int *v122; // rax
  unsigned int i; // edx
  __int64 v124; // r8
  unsigned int *v125; // rcx
  size_t v126; // rbx
  const void *v127; // rdi
  __int64 v128; // rcx
  unsigned __int64 v129; // rsi
  __int64 v130; // r8
  const void *v131; // r14
  size_t v132; // rax
  void *v133; // rax
  void *v134; // rax
  void *v135; // rcx
  void *v136; // rcx
  void *v137; // rcx
  int v138; // eax
  __int64 v139; // rdi
  ULONG v140; // ebx
  ULONG v141; // ebx
  ULONG v142; // ebx
  ACL *v143; // rax
  ACL *v144; // r14
  BOOLEAN v145; // di
  const void *v146; // rbx
  _DWORD *v147; // rdi
  _QWORD **v148; // r14
  int v149; // eax
  __int64 v150; // rdi
  ULONG v151; // ebx
  ULONG v152; // ebx
  ULONG v153; // ebx
  ACL *v154; // rax
  ACL *v155; // r14
  BOOLEAN v156; // di
  __int64 v157; // rdx
  int v158; // r8d
  int v159; // edi
  const void *v160; // rbx
  _DWORD *v161; // r14
  const void *v162; // rbx
  _QWORD **v163; // rdi
  int updated; // eax
  int v165; // eax
  int v166; // edi
  const void *v167; // rbx
  __int64 v168; // r8
  _DWORD *v169; // r14
  const void *v170; // rbx
  _QWORD **v171; // rdi
  PVOID v172; // rcx
  unsigned int v173; // r10d
  int v174; // r9d
  int v175; // r9d
  unsigned int v176; // r11d
  size_t *v177; // rax
  PVOID v178; // rcx
  unsigned int v179; // r10d
  int v180; // r9d
  size_t v181; // rdi
  unsigned int *v182; // rsi
  void *v183; // rax
  PVOID v184; // rcx
  unsigned int v185; // r10d
  int v186; // r9d
  size_t v187; // rdi
  _QWORD *v188; // rbx
  void *v189; // rax
  int v190; // edi
  unsigned __int64 v191; // r9
  int v192; // edi
  _DWORD *v193; // r9
  int *v194; // rax
  int v195; // r11d
  int *v196; // r9
  int v197; // edx
  unsigned __int64 v198; // r9
  int v199; // r10d
  unsigned int v200; // r11d
  _DWORD *v201; // r9
  size_t *v202; // rax
  size_t v203; // rcx
  int v204; // eax
  int *v205; // r9
  int v206; // edx
  unsigned __int64 v207; // r9
  int v208; // r10d
  _DWORD *v209; // r9
  _DWORD *v210; // rax
  unsigned __int64 v211; // r9
  _DWORD *v212; // r9
  _DWORD *v213; // rax
  unsigned __int64 v214; // rsi
  __int64 v215; // rdx
  _DWORD *v216; // rdi
  void *v217; // rcx
  void *v218; // rcx
  _DWORD *v219; // r9
  __int64 *v220; // rdi
  int v221; // eax
  char *v222; // r8
  int v223; // edx
  __int64 v224; // rdi
  unsigned __int8 v225; // bl
  unsigned __int64 v226; // rax
  __int64 v227; // rax
  unsigned int v228; // r11d
  unsigned int v229; // esi
  unsigned __int8 *v230; // r9
  int v231; // r10d
  int v232; // edx
  char v233; // bl
  int v234; // eax
  unsigned __int64 v235; // rcx
  unsigned __int8 *v236; // r15
  char *v237; // rdi
  __int64 v238; // rbx
  int v239; // eax
  int v240; // eax
  unsigned int v241; // r13d
  unsigned int v242; // eax
  unsigned int v243; // r8d
  unsigned int v244; // ecx
  unsigned int v245; // edx
  _BYTE *v246; // r9
  _BYTE *v247; // r11
  char v248; // r10
  unsigned __int64 v249; // r8
  unsigned __int8 *v250; // r12
  char *v251; // r8
  int v252; // ecx
  __int64 v253; // rbx
  int v254; // eax
  char *v255; // rdi
  int v256; // edx
  _BYTE *v257; // r15
  int v258; // edx
  int v259; // esi
  unsigned __int64 v260; // rcx
  int v261; // edx
  unsigned int v262; // r13d
  int v263; // eax
  int v264; // eax
  int v265; // edi
  unsigned int v266; // esi
  int v267; // r13d
  int v268; // esi
  int v269; // r13d
  int v270; // esi
  int v271; // r13d
  int v272; // esi
  unsigned int v273; // r13d
  int v274; // esi
  int v275; // r13d
  _BYTE *v276; // r8
  unsigned int v277; // r11d
  int v278; // r10d
  int v279; // esi
  int v280; // eax
  int v281; // esi
  int v282; // esi
  int v283; // r13d
  int v284; // r13d
  int v285; // esi
  int v286; // r13d
  int v287; // esi
  int v288; // r13d
  PVOID v289; // r13
  unsigned int v290; // r15d
  void *v291; // rax
  void *v292; // rdi
  PVOID v293; // rdi
  const void **v294; // rsi
  PVOID v295; // r14
  int v296; // edx
  int v297; // ecx
  int v298; // edi
  int v299; // eax
  _DWORD *v300; // r15
  int v301; // eax
  const void **v302; // r14
  unsigned int v303; // eax
  _DWORD *v304; // r13
  PVOID v305; // rcx
  PVOID v306; // rcx
  unsigned int v307; // eax
  void *v308; // rcx
  void *v309; // rcx
  void *v310; // rcx
  void *v311; // rcx
  void *v312; // rcx
  void *v313; // rcx
  ACCESS_MASK PreviouslyGrantedAccess[2]; // [rsp+28h] [rbp-E0h]
  PPRIVILEGE_SET *Privileges; // [rsp+30h] [rbp-D8h]
  unsigned int GenericMapping; // [rsp+38h] [rbp-D0h]
  unsigned int v318; // [rsp+58h] [rbp-B0h] BYREF
  unsigned int v319; // [rsp+5Ch] [rbp-ACh] BYREF
  __int64 v320; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v321[4]; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int8 v322; // [rsp+88h] [rbp-80h]
  PVOID v323; // [rsp+90h] [rbp-78h]
  PVOID v324[2]; // [rsp+98h] [rbp-70h] BYREF
  PVOID v325; // [rsp+A8h] [rbp-60h] BYREF
  unsigned __int64 v326; // [rsp+B0h] [rbp-58h] BYREF
  void *v327; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD **v328; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v329; // [rsp+C8h] [rbp-40h]
  _QWORD *v330; // [rsp+D0h] [rbp-38h]
  unsigned int v331; // [rsp+D8h] [rbp-30h] BYREF
  const void **v332; // [rsp+E0h] [rbp-28h]
  __int64 v333; // [rsp+E8h] [rbp-20h]
  size_t Size; // [rsp+F0h] [rbp-18h]
  _DWORD *v335; // [rsp+F8h] [rbp-10h] BYREF
  PVOID P; // [rsp+100h] [rbp-8h]
  _BYTE *v337; // [rsp+108h] [rbp+0h]
  PVOID v338; // [rsp+110h] [rbp+8h]
  void *Src; // [rsp+118h] [rbp+10h]
  _BYTE *v340; // [rsp+120h] [rbp+18h]
  int *v341; // [rsp+128h] [rbp+20h] BYREF
  NTSTATUS v342; // [rsp+130h] [rbp+28h] BYREF
  const void **v343; // [rsp+138h] [rbp+30h]
  NTSTATUS AccessStatus; // [rsp+140h] [rbp+38h] BYREF
  int v345; // [rsp+144h] [rbp+3Ch] BYREF
  ULONG v346; // [rsp+148h] [rbp+40h] BYREF
  ULONG v347; // [rsp+14Ch] [rbp+44h] BYREF
  ACCESS_MASK v348; // [rsp+150h] [rbp+48h] BYREF
  ULONG ReturnLength; // [rsp+154h] [rbp+4Ch] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+158h] [rbp+50h] BYREF
  __int64 SystemInformation; // [rsp+160h] [rbp+58h] BYREF
  __int64 v352; // [rsp+168h] [rbp+60h] BYREF
  __int64 v353; // [rsp+170h] [rbp+68h] BYREF
  _QWORD *v354; // [rsp+180h] [rbp+78h]
  unsigned int *v355; // [rsp+188h] [rbp+80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+198h] [rbp+90h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v358[2]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v359; // [rsp+1F8h] [rbp+F0h]
  _OWORD SecurityDescriptor[2]; // [rsp+200h] [rbp+F8h] BYREF
  __int64 v361; // [rsp+220h] [rbp+118h]
  __int64 v362; // [rsp+240h] [rbp+138h] BYREF
  __int64 v363; // [rsp+248h] [rbp+140h]

  v5 = 0LL;
  v6 = 0LL;
  v354 = a4;
  v318 = a3;
  v355 = a5;
  v323 = 0LL;
  v325 = 0LL;
  memset(&v321[1], 0, 24);
  *(_OWORD *)v324 = 0LL;
  if ( a2 < 4 )
  {
    Acl = -1073741762;
LABEL_540:
    v28 = 0LL;
    goto LABEL_541;
  }
  v8 = *a1;
  v9 = (char *)(a1 + 1);
  if ( a1 + 1 < a1 )
    goto LABEL_539;
  if ( a2 - 4 < (unsigned int)v8 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v10 = (unsigned int *)&v9[v8];
  if ( &v9[v8] < v9 )
  {
    v28 = 0LL;
    goto LABEL_538;
  }
  if ( (unsigned int)v8 >= 0xFFFFFFFC )
    goto LABEL_539;
  if ( a2 - ((_DWORD)v8 + 4) < 4 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v11 = *v10;
  v12 = v10 + 1;
  if ( v10 + 1 < v10 )
    goto LABEL_539;
  v13 = v8 + 8;
  if ( (int)v8 + 8 < (unsigned int)(v8 + 4) )
    goto LABEL_539;
  if ( a2 - v13 < (unsigned int)v11 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v14 = (unsigned int *)((char *)v12 + v11);
  if ( (unsigned int *)((char *)v12 + v11) < v12 )
    goto LABEL_539;
  v15 = v11 + v13;
  if ( (unsigned int)v11 + v13 < v13 )
    goto LABEL_539;
  if ( a2 - v15 < 4 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  v16 = *v14;
  Src = v14 + 1;
  if ( v14 + 1 < v14 )
    goto LABEL_539;
  v17 = v15 + 4;
  if ( v15 + 4 < v15 )
    goto LABEL_539;
  if ( a2 - v17 < (unsigned int)v16 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  if ( (unsigned int)v16 + v17 < v17 )
  {
LABEL_539:
    Acl = -1073741675;
    goto LABEL_540;
  }
  if ( a2 != (_DWORD)v16 + v17 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  if ( (unsigned int)(v8 + v16 + v11) + 12LL != a2 )
  {
    Acl = -1073741762;
    goto LABEL_540;
  }
  Pool2 = (unsigned int *)ExAllocatePool2(256LL, 48LL, 542329939LL);
  v19 = Pool2;
  if ( !Pool2 )
  {
    Acl = -1073741801;
    goto LABEL_540;
  }
  *(_OWORD *)Pool2 = 0LL;
  *((_OWORD *)Pool2 + 1) = 0LL;
  *((_OWORD *)Pool2 + 2) = 0LL;
  if ( v9 )
  {
    *Pool2 = v8;
    if ( !(_DWORD)v8 )
    {
      Acl = -1073741762;
LABEL_46:
      v25 = (void *)*((_QWORD *)v19 + 1);
      if ( v25 )
      {
        ExFreePoolWithTag(v25, 0);
        *((_QWORD *)v19 + 1) = 0LL;
      }
      v26 = (void *)*((_QWORD *)v19 + 3);
      if ( v26 )
      {
        ExFreePoolWithTag(v26, 0);
        *((_QWORD *)v19 + 3) = 0LL;
      }
      v27 = (void *)*((_QWORD *)v19 + 5);
      if ( v27 )
      {
        ExFreePoolWithTag(v27, 0);
        *((_QWORD *)v19 + 5) = 0LL;
      }
      ExFreePoolWithTag(v19, 0);
      v5 = 0LL;
      v28 = 0LL;
      goto LABEL_541;
    }
    v20 = v8;
    v21 = (void *)ExAllocatePool2(256LL, v8, 542329939LL);
    if ( !v21 )
      goto LABEL_45;
    *((_QWORD *)v19 + 1) = v21;
    memmove(v21, v9, v8);
  }
  else
  {
    v20 = v8;
  }
  if ( &v9[v20 + 4] )
  {
    v19[4] = v11;
    if ( !(_DWORD)v11 )
    {
      Acl = -1073741762;
      goto LABEL_46;
    }
    v22 = (void *)ExAllocatePool2(256LL, v11, 542329939LL);
    if ( v22 )
    {
      *((_QWORD *)v19 + 3) = v22;
      memmove(v22, &v9[v20 + 4], v11);
      goto LABEL_41;
    }
LABEL_45:
    Acl = -1073741801;
    goto LABEL_46;
  }
  v19[4] = 0;
  *((_QWORD *)v19 + 3) = 0LL;
LABEL_41:
  v23 = Src;
  if ( Src )
  {
    v19[8] = v16;
    if ( !(_DWORD)v16 )
    {
      Acl = -1073741762;
      goto LABEL_46;
    }
    v24 = (void *)ExAllocatePool2(256LL, v16, 542329939LL);
    if ( !v24 )
      goto LABEL_45;
    *((_QWORD *)v19 + 5) = v24;
    memmove(v24, v23, v16);
  }
  else
  {
    v19[8] = 0;
    *((_QWORD *)v19 + 5) = 0LL;
  }
  v5 = v19;
  v330 = v19;
  v29 = (unsigned __int8 *)*((_QWORD *)v19 + 1);
  Size = (size_t)v29;
  if ( !v29 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v30 = *v19;
  if ( !(_DWORD)v30 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v31 = (__int64 *)*((_QWORD *)v19 + 5);
  v328 = (_QWORD **)(v19 + 10);
  if ( !v31 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v321[0] = (unsigned __int64)(v19 + 8);
  v32 = v19[8];
  if ( !v32 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v332 = (const void **)(v19 + 6);
  v337 = (_BYTE *)*((_QWORD *)v19 + 3);
  if ( !v337 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  v326 = (unsigned __int64)(v19 + 4);
  v33 = v19[4];
  if ( !v33 )
  {
    Acl = -1073741811;
    v28 = 0LL;
    goto LABEL_541;
  }
  if ( v32 != 8
    || v33 != 160
    || v30 <= 8
    || (v34 = *v31,
        v35 = v30 - 8,
        Src = (void *)(v30 - 8),
        v36 = 0,
        v37 = (char *)ExAllocatePool2(256LL, v30 - 8, 542329939LL),
        (P = v37) == 0LL) )
  {
LABEL_113:
    v28 = v323;
    Acl = -1073741823;
    goto LABEL_541;
  }
  v362 = v34;
  v38 = v35 & 7;
  v327 = v29;
  v343 = (const void **)(v35 & 7);
  v39 = v29;
  v338 = v37;
  if ( (v35 & 7) != 0 )
  {
    v40 = 0;
    LODWORD(v320) = 0;
    v41 = -1;
    v319 = 0;
    v42 = -1;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    if ( v38 )
    {
      v46 = 56;
      v330 = v5;
      do
      {
        v47 = *v39++;
        if ( v45 >= 4 )
          v43 |= v47 << v46;
        else
          v44 |= v47 << (v46 - 32);
        ++v45;
        v46 -= 8;
      }
      while ( (int)v45 < v38 );
      v319 = v44;
      LODWORD(v320) = v43;
      v327 = v39;
    }
    v48 = 16LL;
    v49 = 30LL;
    v329 = 16LL;
    v50 = v337 + 126;
    v51 = v337 + 158;
    v333 = (__int64)(v337 + 158);
    do
    {
      if ( v51[1] < 0x1Fu )
      {
        GenericMapping = v40;
        Privileges = (PPRIVILEGE_SET *)&v362;
        *(_QWORD *)PreviouslyGrantedAccess = (unsigned __int8)v50[1];
        v52 = sub_14042A5E0(v49 + 1, (unsigned __int8)*(v50 - 2));
        v48 = v329;
        v42 ^= v52;
        v51 = (_BYTE *)v333;
      }
      if ( *v51 < 0x1Fu )
      {
        GenericMapping = v42;
        Privileges = (PPRIVILEGE_SET *)&v362;
        *(_QWORD *)PreviouslyGrantedAccess = (unsigned __int8)*(v50 - 3);
        v53 = sub_14042A5E0(v49, (unsigned __int8)*(v50 - 6));
        v48 = v329;
        v40 ^= v53;
        v51 = (_BYTE *)v333;
      }
      v51 -= 2;
      v49 -= 2LL;
      v50 -= 8;
      v333 = (__int64)v51;
      v329 = --v48;
    }
    while ( v48 );
    v54 = v319 ^ v40;
    v55 = v320 ^ v42;
    v56 = 0;
    v57 = (unsigned int)v343;
    v6 = 0LL;
    v58 = v54;
    v59 = v55;
    v36 = 0;
    if ( (_DWORD)v343 )
    {
      v60 = v338;
      do
      {
        v61 = v60 + 1;
        if ( v56 >= 4 )
        {
          v59 = __ROL4__(v59, 8);
          v62 = v59;
        }
        else
        {
          v58 = __ROL4__(v58, 8);
          v62 = v58;
        }
        ++v56;
        *v60++ = v62;
      }
      while ( (int)v56 < (int)v57 );
      v37 = v61;
    }
    else
    {
      v37 = (char *)v338;
    }
    LODWORD(v34) = v362;
    v39 = (unsigned __int8 *)v327;
    if ( v57 <= 4 )
    {
      v63 = 0;
      if ( v57 < 4 )
        v54 = v54 >> (8 * (4 - v57)) << (8 * (4 - v57));
    }
    else
    {
      v63 = v55 >> (8 * (8 - v57)) << (8 * (8 - v57));
    }
  }
  else
  {
    v319 = 0;
    v41 = -1;
    v330 = v5;
    LODWORD(v320) = -1;
    v63 = 0;
    v54 = 0;
  }
  v64 = (char *)Src;
  v338 = (PVOID)((unsigned __int64)Src >> 3);
  if ( (unsigned __int64)Src >> 3 )
  {
    v65 = v39 + 2;
    v66 = v320;
    v67 = v319;
    v68 = v337 + 158;
    v69 = (const void **)(v337 + 126);
    v340 = v337 + 158;
    v337 = v37 + 7;
    v343 = v69;
    while ( 1 )
    {
      v70 = v65[2] << 8;
      v71 = v65[3];
      v72 = (v65[1] | ((*v65 | ((*(v65 - 1) | (*(v65 - 2) << 8)) << 8)) << 8)) ^ v54;
      LODWORD(v320) = v65[1] | ((*v65 | ((*(v65 - 1) | (*(v65 - 2) << 8)) << 8)) << 8);
      v73 = v65[5] | ((v65[4] | ((v71 | v70) << 8)) << 8);
      v327 = v65 + 8;
      v319 = v73;
      v74 = (unsigned __int16)v34;
      v75 = v72 ^ v34 ^ HIDWORD(v362) ^ v73 ^ v63;
      v76 = (v75 >> 8) ^ (WORD2(v362) * (v75 ^ WORD1(v362))) ^ v72;
      v77 = (WORD1(v362) * __ROR4__(HIDWORD(v362) - v76, 11) - __ROR4__(v76, 12)) ^ v75;
      v78 = ((unsigned __int16)v34 * __ROL4__(v77 ^ HIDWORD(v362), 8) - __ROL4__(v77, 2)) ^ v76;
      v79 = __ROR4__(v78, 9) ^ (HIWORD(v362) * __ROR4__(v78 - v34, 4)) ^ v77;
      v80 = (__ROR4__(v79, 4) + WORD2(v362) * __ROR4__(v34 - v79, 10)) ^ v78;
      v81 = (WORD1(v362) * __ROL4__(HIWORD(v362) ^ v80, 4) - __ROR4__(v80, 16)) ^ v79;
      v82 = 30LL;
      v83 = ((unsigned __int16)v34 * (WORD1(v362) ^ v81) - __ROR4__(v81, 7)) ^ v80;
      v84 = 16LL;
      v85 = (v83 - v34 - HIWORD(v362)) ^ v81;
      v333 = 16LL;
      v86 = __ROR4__(v85, 11) ^ (WORD2(v362) * __ROR4__(v34 - v85, 9)) ^ v83;
      v87 = v343;
      v88 = (WORD1(v362) * (v86 - WORD2(v362)) - (v86 >> 13)) ^ v85;
      v89 = v68;
      v329 = (unsigned __int64)v68;
      v90 = (v88 >> 15) ^ (v74 * __ROL4__(v88 - WORD2(v362), 3)) ^ v86;
      do
      {
        if ( v89[1] < 0x1Fu )
        {
          GenericMapping = v90;
          Privileges = (PPRIVILEGE_SET *)&v362;
          *(_QWORD *)PreviouslyGrantedAccess = *((unsigned __int8 *)v87 + 1);
          v91 = sub_14042A5E0(v82 + 1, *((unsigned __int8 *)v87 - 2));
          v84 = v333;
          v88 ^= v91;
          v89 = (_BYTE *)v329;
        }
        if ( *v89 < 0x1Fu )
        {
          GenericMapping = v88;
          Privileges = (PPRIVILEGE_SET *)&v362;
          *(_QWORD *)PreviouslyGrantedAccess = *((unsigned __int8 *)v87 - 3);
          v92 = sub_14042A5E0(v82, *((unsigned __int8 *)v87 - 6));
          v84 = v333;
          v90 ^= v92;
          v89 = (_BYTE *)v329;
        }
        v89 -= 2;
        v82 -= 2LL;
        --v87;
        v329 = (unsigned __int64)v89;
        v333 = --v84;
      }
      while ( v84 );
      v93 = v337;
      v94 = v67 ^ v90;
      v67 = v320;
      v95 = v66 ^ v88;
      v66 = v319;
      *(v337 - 4) = v94;
      *v93 = v95;
      v96 = __ROR4__(v94, 8);
      *(v93 - 5) = v96;
      v97 = __ROR4__(v95, 8);
      *(v93 - 1) = v97;
      v98 = __ROR4__(v96, 8);
      *(v93 - 6) = v98;
      v99 = __ROR4__(v97, 8);
      *(v93 - 2) = v99;
      v100 = __ROR4__(v98, 8);
      v101 = __ROR4__(v99, 8);
      *(v93 - 7) = v100;
      *(v93 - 3) = v101;
      v63 = __ROR4__(v101, 8);
      v54 = __ROR4__(v100, 8);
      v102 = v338 == (PVOID)1;
      v338 = (char *)v338 - 1;
      v337 = v93 + 8;
      if ( v102 )
        break;
      LODWORD(v34) = v362;
      v65 = (unsigned __int8 *)v327;
      v68 = v340;
    }
    v6 = (char *)v321[1];
    v36 = 0;
    v5 = v330;
    v64 = (char *)Src;
    v41 = -1;
  }
  v103 = 0LL;
  if ( v64 )
  {
    do
      v36 ^= *((_BYTE *)P + v103++);
    while ( v103 < (unsigned __int64)v64 );
  }
  if ( v36 != *(_QWORD *)&v64[Size] )
  {
    ExFreePoolWithTag(P, 0);
    goto LABEL_113;
  }
  if ( (unsigned int)v64 < 4 )
    goto LABEL_115;
  LODWORD(v320) = *(_DWORD *)P;
  if ( (char *)P + 4 < P )
  {
    v28 = P;
    Acl = -1073741675;
    goto LABEL_541;
  }
  if ( (unsigned int)((_DWORD)v64 - 4) < 4 )
  {
    Acl = -1073741762;
    v28 = P;
    goto LABEL_541;
  }
  v104 = *((unsigned int *)P + 1);
  v105 = (char *)P + 8;
  if ( (char *)P + 8 < (char *)P + 4 )
    goto LABEL_535;
  if ( (int)v64 - 8 < (unsigned int)v104 )
  {
    Acl = -1073741762;
    v28 = P;
    goto LABEL_541;
  }
  if ( (unsigned int)v104 >= 0xFFFFFFF8 )
  {
LABEL_535:
    Acl = -1073741675;
    v28 = P;
    goto LABEL_541;
  }
  v106 = (unsigned __int64)&v105[v104];
  v107 = *((unsigned int *)P + 1);
  if ( (char *)P + (unsigned int)v64 < &v105[v104] || (unsigned int)v64 - v104 - 8 >= 8 )
  {
LABEL_115:
    Acl = -1073741762;
    v28 = P;
    goto LABEL_541;
  }
  v28 = P;
  v329 = 0LL;
  v108 = 0LL;
  v109 = 0;
  if ( P != (PVOID)-8LL )
  {
    v110 = (char *)P + 8;
    if ( v106 >= (unsigned __int64)v105 )
    {
      if ( v106 > (unsigned __int64)v105 )
      {
        do
        {
          if ( v110 + 4 < v110 )
            goto LABEL_538;
          if ( (unsigned __int64)(v110 + 4) > v106 )
            goto LABEL_155;
          v111 = *(_DWORD *)v110 + 4;
          if ( *(_DWORD *)v110 >= 0xFFFFFFFC )
            goto LABEL_538;
          v112 = &v110[v111];
          if ( v112 < v110 )
            goto LABEL_538;
          v110 += v111;
          if ( (unsigned __int64)v112 > v106 )
            goto LABEL_155;
          ++v109;
        }
        while ( (unsigned __int64)v112 < v106 );
        v108 = (void *)v329;
      }
      if ( v110 != (char *)v106 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      goto LABEL_137;
    }
LABEL_538:
    Acl = -1073741675;
    goto LABEL_541;
  }
LABEL_137:
  if ( (_DWORD)v104 )
  {
    v108 = (void *)ExAllocatePool2(256LL, v104, 542329939LL);
    v329 = (unsigned __int64)v108;
    if ( !v108 )
    {
      Acl = -1073741801;
      goto LABEL_541;
    }
    v107 = v104;
  }
  if ( P != (PVOID)-8LL )
  {
    memmove(v108, v105, v107);
    v108 = (void *)v329;
  }
  v324[1] = v108;
  v324[0] = (PVOID)__PAIR64__(v104, v109);
  if ( (_DWORD)v320 != v109 )
  {
    Acl = -1073741762;
    goto LABEL_541;
  }
  if ( !v324[1] )
  {
    Acl = -1073741811;
    goto LABEL_541;
  }
  if ( !v109 )
  {
    Acl = -1073741811;
    goto LABEL_541;
  }
  v113 = *(_DWORD *)v324[1];
  if ( (char *)v324[1] + 4 < v324[1] )
    goto LABEL_538;
  v114 = 0LL;
  if ( v113 )
    v114 = (unsigned int *)((char *)v324[1] + 4);
  if ( v113 != 4 )
  {
    Acl = -1073741789;
    goto LABEL_541;
  }
  v319 = *v114;
  if ( v109 <= 1 )
  {
LABEL_155:
    Acl = -1073741811;
    goto LABEL_541;
  }
  v115 = (unsigned int *)v324[1];
  v116 = 0;
  v323 = P;
  v330 = v5;
  do
  {
    v117 = *v115;
    v118 = v115 + 1;
    if ( v115 + 1 < v115 )
      goto LABEL_538;
    v115 = (unsigned int *)((char *)v118 + v117);
    if ( (unsigned int *)((char *)v118 + v117) < v118 )
      goto LABEL_538;
    ++v116;
  }
  while ( !v116 );
  v119 = *v115;
  v120 = v115 + 1;
  LODWORD(v320) = *v115;
  if ( v115 + 1 < v115 )
    goto LABEL_538;
  v121 = 0LL;
  if ( v119 )
    v121 = (size_t)v120;
  Size = v121;
  if ( v109 <= 2 )
  {
    Acl = -1073741811;
    goto LABEL_541;
  }
  v122 = (unsigned int *)v324[1];
  for ( i = 0; i < 2; ++i )
  {
    v124 = *v122;
    v125 = v122 + 1;
    if ( v122 + 1 < v122 )
      goto LABEL_538;
    v122 = (unsigned int *)((char *)v125 + v124);
    if ( (unsigned int *)((char *)v125 + v124) < v125 )
      goto LABEL_538;
  }
  v126 = *v122;
  if ( v122 + 1 < v122 )
    goto LABEL_538;
  v127 = 0LL;
  if ( (_DWORD)v126 )
    v127 = v122 + 1;
  v129 = ExAllocatePool2(256LL, 48LL, 542329939LL);
  if ( !v129 )
  {
    Acl = -1073741801;
    goto LABEL_541;
  }
  *(_QWORD *)v129 = 0LL;
  *(_QWORD *)(v129 + 20) = 0LL;
  *(_QWORD *)(v129 + 28) = 0LL;
  *(_QWORD *)(v129 + 36) = 0LL;
  *(_DWORD *)(v129 + 44) = 0;
  v131 = (const void *)Size;
  *(_QWORD *)(v129 + 8) = 0LL;
  if ( v131 )
  {
    v132 = (unsigned int)v320;
    *(_DWORD *)(v129 + 16) = v320;
    if ( !(_DWORD)v132 )
    {
      Acl = -1073741762;
LABEL_185:
      v135 = *(void **)(v129 + 8);
      if ( v135 )
      {
        ExFreePoolWithTag(v135, 0);
        v6 = 0LL;
        *(_QWORD *)(v129 + 8) = 0LL;
      }
      else
      {
        v6 = 0LL;
      }
      v136 = *(void **)(v129 + 24);
      if ( v136 )
      {
        ExFreePoolWithTag(v136, 0);
        *(_QWORD *)(v129 + 24) = 0LL;
      }
      v137 = *(void **)(v129 + 40);
      if ( v137 )
      {
        ExFreePoolWithTag(v137, 0);
        *(_QWORD *)(v129 + 40) = 0LL;
      }
      ExFreePoolWithTag((PVOID)v129, 0);
      goto LABEL_541;
    }
    Size = v132;
    v133 = (void *)ExAllocatePool2(256LL, v132, 542329939LL);
    if ( !v133 )
    {
LABEL_184:
      Acl = -1073741801;
      goto LABEL_185;
    }
    *(_QWORD *)(v129 + 24) = v133;
    memmove(v133, v131, Size);
  }
  else
  {
    *(_DWORD *)(v129 + 16) = 0;
  }
  if ( v127 )
  {
    *(_DWORD *)(v129 + 32) = v126;
    if ( !(_DWORD)v126 )
    {
      Acl = -1073741762;
      goto LABEL_185;
    }
    v134 = (void *)ExAllocatePool2(256LL, v126, 542329939LL);
    if ( !v134 )
      goto LABEL_184;
    *(_QWORD *)(v129 + 40) = v134;
    memmove(v134, v127, v126);
  }
  else
  {
    *(_DWORD *)(v129 + 32) = 0;
    *(_QWORD *)(v129 + 40) = 0LL;
  }
  switch ( v319 )
  {
    case 0u:
      v138 = sub_1407D2C60(v324, v129, v318, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 1u:
      v139 = qword_140D3B478;
      GrantedAccess = 0;
      memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
      v361 = 0LL;
      AccessStatus = 0;
      memset(&SubjectContext, 0, sizeof(SubjectContext));
      v140 = RtlLengthSid(*(PSID *)(qword_140D3B478 + 384));
      v141 = RtlLengthSid(*(PSID *)(v139 + 272)) + v140;
      v142 = RtlLengthSid(*(PSID *)(v139 + 392)) + 32 + v141;
      v143 = (ACL *)ExAllocatePool2(256LL, v142, 542329939LL);
      v144 = v143;
      if ( !v143 )
      {
        Acl = -1073741801;
        v6 = (char *)v129;
        goto LABEL_541;
      }
      Acl = RtlCreateAcl(v143, v142, 2u);
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v144, 2u, 0, 32, *(unsigned __int8 **)(v139 + 384), 0);
        if ( Acl >= 0 )
        {
          Acl = sub_1407B4900(v144, 2u, 0, 32, *(unsigned __int8 **)(v139 + 392), 0);
          if ( Acl >= 0 )
          {
            Acl = sub_1407B4900(v144, 2u, 0, 32, *(unsigned __int8 **)(v139 + 272), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v144, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectContext);
                  v145 = SeAccessCheck(
                           SecurityDescriptor,
                           &SubjectContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&stru_140A38030,
                           1,
                           &GrantedAccess,
                           &AccessStatus);
                  SeReleaseSubjectContext(&SubjectContext);
                  if ( !v145 )
                    Acl = AccessStatus;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v144, 0);
      if ( Acl < 0 )
        goto LABEL_231;
      ReturnLength = 0;
      SystemInformation = 8LL;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &SystemInformation, 8u, &ReturnLength);
      if ( *(_DWORD *)v326 != 160 )
        goto LABEL_337;
      v146 = *v332;
      if ( !memcmp(qword_140A3C730, *v332, 0xA0uLL) && *(_DWORD *)(v129 + 16) == 160 )
      {
        v147 = (_DWORD *)v321[0];
        v148 = v328;
        if ( !memcmp(qword_140A3CB90, *(const void **)(v129 + 24), 0xA0uLL)
          && *(_DWORD *)v321[0] == 8
          && **v328 == 0xA564595855B292C4uLL
          && *(_DWORD *)(v129 + 32) == 8
          && **(_QWORD **)(v129 + 40) == 0x1B732BD76B4D09FCLL )
        {
          goto LABEL_228;
        }
      }
      else
      {
        v148 = v328;
        v147 = (_DWORD *)v321[0];
      }
      if ( memcmp(qword_140A3CAF0, v146, 0xA0uLL)
        || *(_DWORD *)(v129 + 16) != 160
        || memcmp(qword_140A3C2D0, *(const void **)(v129 + 24), 0xA0uLL)
        || *v147 != 8
        || **v148 != 0x93278D843BBDC445uLL
        || *(_DWORD *)(v129 + 32) != 8
        || **(_QWORD **)(v129 + 40) != 0x6223E824AB21D998LL )
      {
        goto LABEL_337;
      }
LABEL_228:
      v149 = 0;
      if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2170LL) & 7) == 0 )
        v149 = -2147024891;
      Acl = v149;
LABEL_231:
      v6 = (char *)v129;
      if ( Acl >= 0 )
      {
        Acl = sub_1406E0690((__int64)v324, v129, v318, (__int64)&v321[2]);
        if ( Acl >= 0 )
        {
          v321[1] = v129;
          goto LABEL_445;
        }
      }
      goto LABEL_541;
    case 2u:
      v138 = sub_1406E17A8(v128, v129, v318, (__int64)&v321[2]);
      goto LABEL_197;
    case 4u:
      v138 = sub_140A0B4C4(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 5u:
      v138 = sub_1406E825C((__int64)v324, v129, v130, (__int64)&v321[2]);
      goto LABEL_197;
    case 6u:
      v138 = sub_140A0E96C(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 7u:
      v138 = sub_140A0D5E8(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x16u:
      v138 = sub_14065EE94((__int64)v324, (void *)0x140000000LL, v130, (__int64)&v321[2]);
      goto LABEL_197;
    case 0x17u:
      v150 = qword_140D3B478;
      v348 = 0;
      memset(v358, 0, sizeof(v358));
      v359 = 0LL;
      v342 = 0;
      memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
      v151 = RtlLengthSid(*(PSID *)(qword_140D3B478 + 384));
      v152 = RtlLengthSid(*(PSID *)(v150 + 272)) + v151;
      v153 = RtlLengthSid(*(PSID *)(v150 + 392)) + 32 + v152;
      v154 = (ACL *)ExAllocatePool2(256LL, v153, 542329939LL);
      v155 = v154;
      if ( !v154 )
      {
        Acl = -1073741801;
        v6 = (char *)v129;
        goto LABEL_541;
      }
      Acl = RtlCreateAcl(v154, v153, 2u);
      if ( Acl >= 0 )
      {
        Acl = sub_1407B4900(v155, 2u, 0, 32, *(unsigned __int8 **)(v150 + 384), 0);
        if ( Acl >= 0 )
        {
          Acl = sub_1407B4900(v155, 2u, 0, 32, *(unsigned __int8 **)(v150 + 392), 0);
          if ( Acl >= 0 )
          {
            Acl = sub_1407B4900(v155, 2u, 0, 32, *(unsigned __int8 **)(v150 + 272), 0);
            if ( Acl >= 0 )
            {
              Acl = RtlCreateSecurityDescriptor(v358, 1u);
              if ( Acl >= 0 )
              {
                Acl = RtlSetDaclSecurityDescriptor(v358, 1u, v155, 0);
                if ( Acl >= 0 )
                {
                  SeCaptureSubjectContext(&SubjectSecurityContext);
                  v156 = SeAccessCheck(
                           v358,
                           &SubjectSecurityContext,
                           0,
                           0x20u,
                           0,
                           0LL,
                           (PGENERIC_MAPPING)&stru_140A38030,
                           1,
                           &v348,
                           &v342);
                  SeReleaseSubjectContext(&SubjectSecurityContext);
                  if ( !v156 )
                    Acl = v342;
                }
              }
            }
          }
        }
      }
      ExFreePoolWithTag(v155, 0);
      if ( Acl < 0 )
        goto LABEL_291;
      v347 = 0;
      v352 = 8LL;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v352, 8u, &v347);
      v159 = *(_DWORD *)v326;
      if ( *(_DWORD *)v326 != 160 )
      {
        v161 = (_DWORD *)v321[0];
LABEL_268:
        if ( v159 != 160 )
          goto LABEL_337;
        goto LABEL_269;
      }
      v160 = *v332;
      if ( !memcmp(qword_140A3C5F0, *v332, 0xA0uLL) && *(_DWORD *)(v129 + 16) == 160 )
      {
        v161 = (_DWORD *)v321[0];
        if ( !memcmp(qword_140A3C690, *(const void **)(v129 + 24), 0xA0uLL)
          && *(_DWORD *)v321[0] == 8
          && **v328 == 0x35DCEB18766AABAALL
          && *(_DWORD *)(v129 + 32) == 8
          && **(_QWORD **)(v129 + 40) == 0x14CEA8BAE086077CLL )
        {
          goto LABEL_285;
        }
      }
      else
      {
        v161 = (_DWORD *)v321[0];
      }
      if ( !memcmp(qword_140A3C870, v160, 0xA0uLL)
        && *(_DWORD *)(v129 + 16) == 160
        && !memcmp(qword_140A3CEB0, *(const void **)(v129 + 24), 0xA0uLL)
        && *v161 == 8
        && **v328 == 0xF10D668DB2BB8BB9uLL
        && *(_DWORD *)(v129 + 32) == 8 )
      {
        if ( **(_QWORD **)(v129 + 40) == 0x768DFD321621EA95LL )
          goto LABEL_285;
        goto LABEL_268;
      }
LABEL_269:
      v162 = *v332;
      if ( !memcmp(qword_140A3CE10, *v332, 0xA0uLL) && *(_DWORD *)(v129 + 16) == 160 )
      {
        v163 = v328;
        if ( !memcmp(sub_140A3C370, *(const void **)(v129 + 24), 0xA0uLL)
          && *v161 == 8
          && **v328 == 0xA10B922F1A2F2A8AuLL
          && *(_DWORD *)(v129 + 32) == 8
          && **(_QWORD **)(v129 + 40) == 0xC349B50B0A716A96uLL )
        {
          goto LABEL_285;
        }
      }
      else
      {
        v163 = v328;
      }
      if ( memcmp(qword_140A3CA50, v162, 0xA0uLL)
        || *(_DWORD *)(v129 + 16) != 160
        || memcmp(qword_140A3C910, *(const void **)(v129 + 24), 0xA0uLL)
        || *v161 != 8
        || **v163 != 0xA6723CF736811074uLL
        || *(_DWORD *)(v129 + 32) != 8
        || **(_QWORD **)(v129 + 40) != 0x7511056E178DA076LL )
      {
        goto LABEL_337;
      }
LABEL_285:
      Acl = 0;
      v345 = 0;
      updated = QueryUpdateFileEaAllowedExt(&v345);
      if ( updated == -1073741637 || (Acl = updated, updated >= 0) && v345 != 1 )
      {
        v165 = Acl;
        if ( (*(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2170LL) & 7) == 0 )
          v165 = -2147024891;
        Acl = v165;
      }
LABEL_291:
      v6 = (char *)v129;
      if ( Acl >= 0 )
      {
        v138 = sub_14065EA54((__int64)v324, v157, v158, (__int64)&v321[2]);
        goto LABEL_198;
      }
      goto LABEL_541;
    case 0x18u:
      v138 = sub_1406605B8((__int64)v324, (void *)0x140000000LL, v130, (__int64)&v321[2]);
      goto LABEL_197;
    case 0x64u:
      v138 = sub_140A0E378(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x65u:
      v138 = sub_140A0E160(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x66u:
      Acl = -1073741822;
      goto LABEL_344;
    case 0x67u:
      v138 = sub_140A0BC8C(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x68u:
      v138 = sub_140A0D838(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x69u:
      v138 = sub_140A0D214(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x6Au:
      v138 = sub_140A0CB34(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x6Bu:
      v138 = sub_140648860((__int64)v324, v129, v130, (__int64)&v321[2]);
      goto LABEL_197;
    case 0x6Du:
      v138 = sub_1406CD46C((__int64)v324, v129, v130, (__int64)&v321[2]);
      goto LABEL_197;
    case 0x6Eu:
      v138 = sub_140A0C7AC(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x6Fu:
      v138 = sub_140A0BA74(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x70u:
      v138 = sub_1407F7874(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0x71u:
      v138 = sub_1406D9B20((__int64)v324, v129, v130, (__int64)&v321[2]);
      goto LABEL_197;
    case 0xCCu:
      v138 = sub_140A0E590(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xCDu:
      v138 = sub_140A0B85C(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xCEu:
      v346 = 0;
      v353 = 8LL;
      ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v353, 8u, &v346);
      v166 = *(_DWORD *)v326;
      if ( *(_DWORD *)v326 == 160 )
      {
        v167 = *v332;
        if ( !memcmp(qword_140A3C9B0, *v332, 0xA0uLL) && *(_DWORD *)(v129 + 16) == 160 )
        {
          v169 = (_DWORD *)v321[0];
          if ( !memcmp(qword_140A3CD70, *(const void **)(v129 + 24), 0xA0uLL)
            && *(_DWORD *)v321[0] == 8
            && **v328 == 0x5638EBB72F3355A5LL
            && *(_DWORD *)(v129 + 32) == 8
            && **(_QWORD **)(v129 + 40) == 0x9F2DD8784FE939B7uLL )
          {
            goto LABEL_336;
          }
        }
        else
        {
          v169 = (_DWORD *)v321[0];
        }
        if ( memcmp(qword_140A3CC30, v167, 0xA0uLL)
          || *(_DWORD *)(v129 + 16) != 160
          || memcmp(qword_140A3CCD0, *(const void **)(v129 + 24), 0xA0uLL)
          || *v169 != 8
          || **v328 != 0x5638EBB72F3355A5LL
          || *(_DWORD *)(v129 + 32) != 8 )
        {
LABEL_320:
          v170 = *v332;
          if ( memcmp(qword_140A3C550, *v332, 0xA0uLL) || *(_DWORD *)(v129 + 16) != 160 )
          {
            v171 = v328;
            goto LABEL_329;
          }
          v171 = v328;
          if ( memcmp(qword_140A3C7D0, *(const void **)(v129 + 24), 0xA0uLL)
            || *v169 != 8
            || **v328 != 0xF10D668DB2BB8BB9uLL
            || *(_DWORD *)(v129 + 32) != 8
            || **(_QWORD **)(v129 + 40) != 0x768DFD321621EA95LL )
          {
LABEL_329:
            if ( !memcmp(qword_140A3C410, v170, 0xA0uLL)
              && *(_DWORD *)(v129 + 16) == 160
              && !memcmp(qword_140A3C4B0, *(const void **)(v129 + 24), 0xA0uLL)
              && *v169 == 8
              && **v171 == 0xF10D668DB2BB8BB9uLL
              && *(_DWORD *)(v129 + 32) == 8
              && **(_QWORD **)(v129 + 40) == 0x768DFD321621EA95LL )
            {
              goto LABEL_336;
            }
LABEL_337:
            Acl = -2147024891;
            v6 = (char *)v129;
            goto LABEL_541;
          }
LABEL_336:
          v138 = sub_140648D4C((__int64)v324, v129, v168, (__int64)&v321[2]);
LABEL_197:
          v6 = (char *)v129;
LABEL_198:
          Acl = v138;
          if ( v138 >= 0 )
          {
            v321[1] = v129;
            goto LABEL_445;
          }
          goto LABEL_541;
        }
        if ( **(_QWORD **)(v129 + 40) == 0x9F2DD8784FE939B7uLL )
          goto LABEL_336;
      }
      else
      {
        v169 = (_DWORD *)v321[0];
      }
      if ( v166 != 160 )
        goto LABEL_337;
      goto LABEL_320;
    case 0xCFu:
      v138 = sub_140A0C1F4(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xD0u:
      v138 = sub_1407D45CC(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xD1u:
      v138 = sub_140A0DD98(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xD2u:
      v138 = sub_140A0B0F0(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xD3u:
      v138 = sub_140A0AD40(v324, v129, v130, &v321[2], *(_QWORD *)PreviouslyGrantedAccess, Privileges, GenericMapping);
      goto LABEL_197;
    case 0xD4u:
      v6 = (char *)v129;
      if ( !v324[1] )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      if ( LODWORD(v324[0]) <= 3 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v172 = v324[1];
      v321[0] = (unsigned __int64)v324[1];
      v321[1] = v129;
      do
      {
        Acl = sub_140354360((unsigned __int64)v172, 4LL, v321);
        if ( Acl < 0 )
          goto LABEL_541;
        Acl = sub_140354360(v321[0], v173, v321);
        if ( Acl < 0 )
          goto LABEL_541;
        v172 = (PVOID)v321[0];
      }
      while ( (unsigned int)(v174 + 1) < 3 );
      Acl = sub_140354360(v321[0], 4LL, v321);
      if ( Acl < 0 )
        goto LABEL_541;
      v177 = (size_t *)v321[0];
      if ( !v175 )
        v177 = 0LL;
      if ( v175 != 8 )
      {
        Acl = -1073741789;
        goto LABEL_541;
      }
      Size = *v177;
      if ( !v324[1] )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      if ( v176 <= 4 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v178 = v324[1];
      v321[0] = (unsigned __int64)v324[1];
      do
      {
        Acl = sub_140354360((unsigned __int64)v178, 4LL, v321);
        if ( Acl < 0 )
          goto LABEL_541;
        Acl = sub_140354360(v321[0], v179, v321);
        if ( Acl < 0 )
          goto LABEL_541;
        v178 = (PVOID)v321[0];
      }
      while ( (unsigned int)(v180 + 1) < 4 );
      v181 = *(unsigned int *)v321[0];
      Acl = sub_140354360(v321[0], 4LL, v321);
      if ( Acl < 0 )
        goto LABEL_541;
      v182 = (unsigned int *)v321[0];
      if ( !(_DWORD)v181 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v183 = (void *)ExAllocatePool2(256LL, v181, 542329939LL);
      if ( !v183 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      memmove(v183, v182, v181);
      if ( (_DWORD)v181 != 4 )
      {
        Acl = -1073741306;
        goto LABEL_541;
      }
      if ( !v324[1] )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      if ( LODWORD(v324[0]) <= 5 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v184 = v324[1];
      v321[0] = (unsigned __int64)v324[1];
      do
      {
        Acl = sub_140354360((unsigned __int64)v184, 4LL, v321);
        if ( Acl < 0 )
          goto LABEL_541;
        Acl = sub_140354360(v321[0], v185, v321);
        if ( Acl < 0 )
          goto LABEL_541;
        v184 = (PVOID)v321[0];
      }
      while ( (unsigned int)(v186 + 1) < 5 );
      v187 = *(unsigned int *)v321[0];
      Acl = sub_140354360(v321[0], 4LL, v321);
      if ( Acl < 0 )
        goto LABEL_541;
      v188 = (_QWORD *)v321[0];
      if ( !(_DWORD)v187 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v189 = (void *)ExAllocatePool2(256LL, v187, 542329939LL);
      if ( !v189 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      memmove(v189, v188, v187);
      if ( (_DWORD)v187 != 8 )
      {
        Acl = -1073741306;
        goto LABEL_541;
      }
      v190 = sub_14042A5E0(*v182, *v188);
      LODWORD(v320) = 0;
      v318 = 0;
      Acl = sub_1402E1260(4u, 4, (int *)&v318);
      if ( Acl < 0 )
        goto LABEL_541;
      Acl = sub_1402E1260(0, v318, (int *)&v320);
      if ( Acl < 0 )
        goto LABEL_444;
      v318 = 0;
      Acl = sub_1402E1260(4u, 8, (int *)&v318);
      if ( Acl < 0 )
        goto LABEL_541;
      Acl = sub_1402E1260(v320, v318, (int *)&v320);
      if ( Acl < 0 )
        goto LABEL_444;
      HIDWORD(v321[2]) = v320;
      if ( !(_DWORD)v320 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v191 = ExAllocatePool2(256LL, (unsigned int)v320, 542329939LL);
      if ( !v191 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      v321[3] = v191;
      LODWORD(v321[2]) = 0;
      v192 = v190 | 0x10000000;
      v340 = 0LL;
      LODWORD(v341) = 0;
      Acl = sub_140354360(v191, 4LL, (unsigned __int64 *)&v341);
      if ( Acl < 0 )
        goto LABEL_541;
      if ( v193 + 2 > (_DWORD *)((char *)v193 + HIDWORD(v321[2])) )
      {
        Acl = -1073741789;
        goto LABEL_541;
      }
      v194 = v341;
      *v193 = 4;
      *v194 = v192;
      v195 = LODWORD(v321[2]) + 1;
      v340 = 0LL;
      ++LODWORD(v321[2]);
      LODWORD(v341) = 0;
      if ( v321[3] )
      {
        v196 = (int *)v321[3];
        v326 = v321[3];
        if ( !v195 )
        {
LABEL_417:
          Acl = sub_140354360((unsigned __int64)v196, 4LL, (unsigned __int64 *)&v341);
          if ( Acl < 0 )
            goto LABEL_444;
          if ( (unsigned __int64)(v201 + 3) > v321[3] + HIDWORD(v321[2]) )
          {
            Acl = -1073741789;
            goto LABEL_444;
          }
          v202 = (size_t *)v341;
          v203 = Size;
          *v201 = 8;
          *v202 = v203;
          goto LABEL_443;
        }
        while ( 1 )
        {
          v197 = *v196;
          v318 = 0;
          Acl = sub_1402E1260(4u, v197, (int *)&v318);
          if ( Acl < 0 )
            break;
          Acl = sub_140354360(v198, v318, &v326);
          if ( Acl < 0 )
            break;
          v196 = (int *)v326;
          if ( v199 + 1 >= v200 )
            goto LABEL_417;
        }
      }
      else
      {
        v318 = 0;
        Acl = sub_1402E1260(4u, 8, (int *)&v318);
        if ( Acl >= 0 )
        {
          Acl = sub_1402E1260(HIDWORD(v321[2]), v318, (int *)&v321[2] + 1);
          if ( Acl >= 0 )
          {
            Acl = 0;
LABEL_443:
            ++LODWORD(v321[2]);
          }
        }
      }
LABEL_444:
      if ( Acl < 0 )
        goto LABEL_541;
LABEL_445:
      v214 = __rdtsc();
      v331 = 8;
      Acl = sub_1402E1260(8u, SHIDWORD(v321[2]), (int *)&v331);
      if ( Acl < 0 )
      {
        v325 = 0LL;
        goto LABEL_541;
      }
      v215 = (v331 + 7) & 0xFFFFFFF8;
      if ( (unsigned int)v215 < v331 )
      {
        Acl = -1073741675;
        goto LABEL_541;
      }
      v331 = (v331 + 7) & 0xFFFFFFF8;
      if ( !(_DWORD)v215 )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v216 = (_DWORD *)ExAllocatePool2(256LL, v215, 542329939LL);
      if ( !v216 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      *v216 = v321[2];
      v327 = v216;
      Acl = sub_140354360((unsigned __int64)v216, 4LL, (unsigned __int64 *)&v327);
      if ( Acl < 0
        || (v217 = v327,
            *(_DWORD *)v327 = HIDWORD(v321[2]),
            Acl = sub_140354360((unsigned __int64)v217, 4LL, (unsigned __int64 *)&v327),
            Acl < 0) )
      {
        ExFreePoolWithTag(v216, 0);
        goto LABEL_541;
      }
      v218 = v327;
      *(_QWORD *)((char *)v216 + v331 - 8) = v214;
      memmove(v218, (const void *)v321[3], HIDWORD(v321[2]));
      v219 = v216;
      v325 = v216;
      if ( !v331 )
      {
        Acl = -1073741811;
        v325 = v216;
        goto LABEL_541;
      }
      v220 = (__int64 *)*((_QWORD *)v6 + 5);
      v321[0] = (unsigned __int64)(v6 + 40);
      if ( !v220 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v332 = (const void **)(v6 + 32);
      v221 = *((_DWORD *)v6 + 8);
      if ( !v221 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v222 = (char *)*((_QWORD *)v6 + 3);
      v343 = (const void **)(v6 + 24);
      Src = v222;
      if ( !v222 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v333 = (__int64)(v6 + 16);
      v223 = *((_DWORD *)v6 + 4);
      if ( !v223 )
      {
        Acl = -1073741811;
        goto LABEL_541;
      }
      v329 = v331;
      if ( v221 != 8 )
        goto LABEL_532;
      if ( v223 != 160 )
        goto LABEL_532;
      v224 = *v220;
      v225 = 0;
      v226 = 0LL;
      v322 = 0;
      do
        v225 ^= *((_BYTE *)v219 + v226++);
      while ( v226 < v331 );
      v322 = v225;
      v340 = v222 + 128;
      v227 = ExAllocatePool2(256LL, v331 + 8LL, 542329939LL);
      v338 = (PVOID)v227;
      if ( !v227 )
      {
LABEL_532:
        Acl = -1073741823;
        goto LABEL_541;
      }
      v228 = 0;
      v363 = v224;
      v229 = 0;
      Size = v329 & 7;
      v230 = (unsigned __int8 *)v325;
      v327 = v325;
      P = (PVOID)v227;
      LODWORD(v320) = 0;
      v319 = 0;
      if ( (v329 & 7) != 0 )
      {
        LODWORD(v320) = 0;
        v319 = 0;
        v231 = 0;
        v232 = 0;
        v233 = 56;
        do
        {
          v234 = *v230++;
          if ( (unsigned int)v232 >= 4 )
            v231 |= v234 << v233;
          else
            v228 |= v234 << (v233 - 32);
          ++v232;
          v233 -= 8;
        }
        while ( v232 < (unsigned __int8)(v329 & 7) );
        v319 = v228;
        LODWORD(v320) = v231;
        v327 = v230;
        v321[1] = (unsigned __int64)v6;
        v323 = v28;
        v330 = v5;
        v235 = 16LL;
        v326 = 16LL;
        v236 = (unsigned __int8 *)Src + 158;
        v237 = (char *)Src + 126;
        v238 = 30LL;
        do
        {
          if ( v236[1] < 0x1Fu )
          {
            v239 = sub_14042A5E0(v238 + 1, (unsigned __int8)*(v237 - 2));
            v235 = v326;
            v41 ^= v239;
          }
          if ( *v236 < 0x1Fu )
          {
            v240 = sub_14042A5E0(v238, (unsigned __int8)*(v237 - 6));
            v235 = v326;
            v229 ^= v240;
          }
          v238 -= 2LL;
          v236 -= 2;
          v237 -= 8;
          v326 = --v235;
        }
        while ( v235 );
        v229 ^= v319;
        v241 = v320 ^ v41;
        v242 = v229;
        v243 = Size;
        v244 = v241;
        v225 = v322;
        v245 = 0;
        v5 = v330;
        if ( (_DWORD)Size )
        {
          v246 = P;
          do
          {
            v247 = v246 + 1;
            if ( v245 >= 4 )
            {
              v244 = __ROL4__(v244, 8);
              v248 = v244;
            }
            else
            {
              v242 = __ROL4__(v242, 8);
              v248 = v242;
            }
            ++v245;
            *v246++ = v248;
          }
          while ( (int)v245 < (int)v243 );
          v227 = (__int64)v247;
        }
        else
        {
          v227 = (__int64)P;
        }
        if ( v243 <= 4 )
        {
          v41 = 0;
          if ( v243 < 4 )
            v229 = v229 >> (8 * (4 - v243)) << (8 * (4 - v243));
        }
        else
        {
          v41 = v241 >> (8 * (8 - v243)) << (8 * (8 - v243));
        }
        v230 = (unsigned __int8 *)v327;
      }
      v249 = v329;
      v337 = (_BYTE *)(v329 >> 3);
      if ( v329 >> 3 )
      {
        v250 = v230 + 2;
        v251 = (char *)Src + 2;
        Size = (size_t)Src + 2;
        P = (PVOID)(v227 + 7);
        do
        {
          v252 = *(v250 - 2);
          v253 = 0LL;
          v254 = *(v250 - 1);
          v255 = v251;
          v256 = v250[2];
          v250 += 8;
          v257 = v340;
          v258 = *(v250 - 5) | (v256 << 8);
          v318 = *(v250 - 7) | ((*(v250 - 8) | ((v254 | (v252 << 8)) << 8)) << 8);
          v259 = v318 ^ v229;
          v260 = 16LL;
          v261 = *(v250 - 4) | (v258 << 8);
          v326 = 16LL;
          LODWORD(v328) = *(v250 - 3) | (v261 << 8);
          v262 = (unsigned int)v328 ^ v41;
          do
          {
            if ( *v257 < 0x1Fu )
            {
              v263 = sub_14042A5E0(v253, (unsigned __int8)*(v255 - 2));
              v260 = v326;
              v259 ^= v263;
            }
            if ( v257[1] < 0x1Fu )
            {
              v264 = sub_14042A5E0(v253 + 1, (unsigned __int8)v255[2]);
              v260 = v326;
              v262 ^= v264;
            }
            v253 += 2LL;
            v257 += 2;
            v255 += 8;
            v326 = --v260;
          }
          while ( v260 );
          v265 = HIDWORD(v363);
          v266 = (HIWORD(v363) * ((unsigned __int16)v363 + __ROR4__(~v262, 5))) ^ v259;
          v267 = (v266 >> 10) ^ (WORD1(v363) * (v266 ^ HIWORD(v363))) ^ v262;
          v268 = __ROR4__(v267, 10) ^ (WORD2(v363) * __ROR4__(v267 ^ v363, 12)) ^ v266;
          v269 = (HIWORD(v363) * __ROR4__(v268 - v363, 14) - __ROL4__(v268, 8)) ^ v267;
          v270 = (__ROL4__(v269, 2) + (unsigned __int16)v363 * __ROR4__(HIDWORD(v363) + v269, 15)) ^ v268;
          v271 = (WORD1(v363) * (v270 ^ WORD2(v363))) ^ __ROR4__(v270, 6) ^ v269;
          v272 = (HIDWORD(v363) - (v271 ^ v363)) ^ v270;
          v273 = (HIWORD(v363) * __ROL4__(v272 ^ WORD1(v363), 6) - __ROL4__(v272, 2)) ^ v271;
          v274 = ((unsigned __int16)v363 * (v273 - WORD2(v363)) - (v273 >> 13)) ^ v272;
          v275 = (WORD1(v363) * __ROR4__(v274 + HIDWORD(v363), 9) - __ROL4__(v274, 2)) ^ v273;
          v276 = P;
          v277 = v318;
          v278 = (int)v328;
          v279 = (__ROL4__(v275, 10) + WORD2(v363) * __ROL4__(v275 - v363, 5)) ^ v274;
          v280 = v279 ^ v363;
          v281 = v319 ^ v279;
          *((char *)P - 4) = v281;
          v282 = __ROR4__(v281, 8);
          v283 = v320 ^ v265 ^ v280 ^ v275;
          *v276 = v283;
          *(v276 - 5) = v282;
          v284 = __ROR4__(v283, 8);
          *(v276 - 1) = v284;
          v285 = __ROR4__(v282, 8);
          *(v276 - 6) = v285;
          v286 = __ROR4__(v284, 8);
          *(v276 - 2) = v286;
          v287 = __ROR4__(v285, 8);
          *(v276 - 7) = v287;
          v288 = __ROR4__(v286, 8);
          *(v276 - 3) = v288;
          v41 = __ROR4__(v288, 8);
          v229 = __ROR4__(v287, 8);
          v102 = v337-- == (_BYTE *)1;
          P = v276 + 8;
          v251 = (char *)Size;
          v319 = v277;
          LODWORD(v320) = v278;
        }
        while ( !v102 );
        v225 = v322;
        v6 = (char *)v321[1];
        v5 = v330;
        v249 = v329;
      }
      v289 = v338;
      v290 = v249 + 8;
      *(_QWORD *)((char *)v338 + v249) = v225;
      Acl = 0;
      if ( (_DWORD)v249 == -8 )
      {
        Acl = -1073741762;
      }
      else
      {
        v291 = (void *)ExAllocatePool2(256LL, v290, 542329939LL);
        v292 = v291;
        if ( v291 )
        {
          memmove(v291, v289, v290);
          *((_QWORD *)v6 + 1) = v292;
          *(_DWORD *)v6 = v290;
        }
        else
        {
          Acl = -1073741801;
        }
      }
      v293 = v323;
      v294 = (const void **)v6;
      v295 = v325;
      v327 = v325;
      v326 = (unsigned __int64)v5;
      v330 = v323;
      ExFreePoolWithTag(v338, 0);
      v325 = v295;
      v6 = (char *)v294;
      v28 = v293;
      if ( Acl >= 0 )
      {
        v296 = *(_DWORD *)v294;
        v319 = 4;
        v298 = sub_1402E1260(4u, v296, (int *)&v319);
        if ( v298 < 0 )
        {
          v300 = (_DWORD *)v333;
        }
        else
        {
          v299 = sub_1402E1260(v319, v297, (int *)&v319);
          v300 = (_DWORD *)v333;
          v298 = v299;
          if ( v299 >= 0 )
          {
            v298 = sub_1402E1260(v319, *(_DWORD *)v333, (int *)&v319);
            if ( v298 >= 0 )
            {
              v301 = sub_1402E1260(v319, 4, (int *)&v319);
              v302 = v332;
              v298 = v301;
              if ( v301 >= 0 )
              {
                v298 = sub_1402E1260(v319, *(_DWORD *)v332, (int *)&v319);
                if ( v298 >= 0 )
                {
                  v303 = v319;
                  v318 = v319;
                  goto LABEL_519;
                }
              }
LABEL_518:
              v303 = 0;
              v318 = 0;
              if ( v298 < 0 )
              {
LABEL_531:
                v28 = v330;
                v325 = v327;
                v5 = (_QWORD *)v326;
                Acl = v298;
                v6 = (char *)v294;
                goto LABEL_541;
              }
LABEL_519:
              if ( !v303 )
              {
                Acl = -1073741762;
                v28 = v330;
                v6 = (char *)v294;
                v325 = v327;
                goto LABEL_541;
              }
              v304 = (_DWORD *)ExAllocatePool2(256LL, v303, 542329939LL);
              if ( !v304 )
              {
                Acl = -1073741801;
                v28 = v330;
                v6 = (char *)v294;
                v5 = (_QWORD *)v326;
                v325 = v327;
                goto LABEL_541;
              }
              *v304 = *(_DWORD *)v294;
              v325 = v304;
              v298 = sub_140354360((unsigned __int64)v304, 4LL, (unsigned __int64 *)&v325);
              if ( v298 >= 0 )
              {
                memmove(v325, v294[1], *(unsigned int *)v294);
                v298 = sub_140354360((unsigned __int64)v325, *(unsigned int *)v294, (unsigned __int64 *)&v325);
                if ( v298 >= 0 )
                {
                  v305 = v325;
                  *(_DWORD *)v325 = *v300;
                  v298 = sub_140354360((unsigned __int64)v305, 4LL, (unsigned __int64 *)&v325);
                  if ( v298 >= 0 )
                  {
                    memmove(v325, *v343, (unsigned int)*v300);
                    v298 = sub_140354360((unsigned __int64)v325, (unsigned int)*v300, (unsigned __int64 *)&v325);
                    if ( v298 >= 0 )
                    {
                      v306 = v325;
                      *(_DWORD *)v325 = *(_DWORD *)v302;
                      v298 = sub_140354360((unsigned __int64)v306, 4LL, (unsigned __int64 *)&v325);
                      if ( v298 >= 0 )
                      {
                        memmove(v325, *(const void **)v321[0], *(unsigned int *)v302);
                        v298 = sub_140354360((unsigned __int64)v325, *(unsigned int *)v302, (unsigned __int64 *)&v325);
                        Acl = v298;
                        if ( v298 >= 0 )
                        {
                          v307 = v318;
                          v6 = (char *)v294;
                          v325 = v327;
                          v28 = v330;
                          v5 = (_QWORD *)v326;
                          *v354 = v304;
                          *v355 = v307;
                          goto LABEL_541;
                        }
                      }
                    }
                  }
                }
              }
              ExFreePoolWithTag(v304, 0);
              goto LABEL_531;
            }
          }
        }
        v302 = v332;
        goto LABEL_518;
      }
LABEL_541:
      v324[0] = 0LL;
      if ( v324[1] )
      {
        ExFreePoolWithTag(v324[1], 0);
        v324[1] = 0LL;
      }
      v321[2] = 0LL;
      if ( v321[3] )
      {
        ExFreePoolWithTag((PVOID)v321[3], 0);
        v321[3] = 0LL;
      }
      if ( v28 )
        ExFreePoolWithTag(v28, 0);
      if ( v5 )
      {
        v308 = (void *)v5[1];
        if ( v308 )
        {
          ExFreePoolWithTag(v308, 0);
          v5[1] = 0LL;
        }
        v309 = (void *)v5[3];
        if ( v309 )
        {
          ExFreePoolWithTag(v309, 0);
          v5[3] = 0LL;
        }
        v310 = (void *)v5[5];
        if ( v310 )
        {
          ExFreePoolWithTag(v310, 0);
          v5[5] = 0LL;
        }
        ExFreePoolWithTag(v5, 0);
      }
      if ( v6 )
      {
        v311 = (void *)*((_QWORD *)v6 + 1);
        if ( v311 )
        {
          ExFreePoolWithTag(v311, 0);
          *((_QWORD *)v6 + 1) = 0LL;
        }
        v312 = (void *)*((_QWORD *)v6 + 3);
        if ( v312 )
        {
          ExFreePoolWithTag(v312, 0);
          *((_QWORD *)v6 + 3) = 0LL;
        }
        v313 = (void *)*((_QWORD *)v6 + 5);
        if ( v313 )
        {
          ExFreePoolWithTag(v313, 0);
          *((_QWORD *)v6 + 5) = 0LL;
        }
        ExFreePoolWithTag(v6, 0);
      }
      if ( v325 )
        ExFreePoolWithTag(v325, 0);
      return (unsigned int)Acl;
    default:
      Size = 0LL;
      LODWORD(v335) = 0;
      if ( v321[3] )
      {
        v205 = (int *)v321[3];
        v6 = (char *)v129;
        v326 = v321[3];
        v321[1] = v129;
        if ( LODWORD(v321[2]) )
        {
          do
          {
            v206 = *v205;
            v318 = 0;
            Acl = sub_1402E1260(4u, v206, (int *)&v318);
            if ( Acl < 0 )
              goto LABEL_541;
            Acl = sub_140354360(v207, v318, &v326);
            if ( Acl < 0 )
              goto LABEL_541;
            v205 = (int *)v326;
          }
          while ( (unsigned int)(v208 + 1) < LODWORD(v321[2]) );
          v321[1] = v129;
          v323 = v28;
          v330 = v5;
        }
        Acl = sub_140354360((unsigned __int64)v205, 4LL, (unsigned __int64 *)&v335);
        if ( Acl >= 0 )
        {
          if ( (unsigned __int64)(v209 + 2) > v321[3] + HIDWORD(v321[2]) )
          {
            Acl = -1073741789;
            goto LABEL_541;
          }
          v210 = v335;
          *v209 = 4;
          *v210 = -2147467263;
          goto LABEL_435;
        }
      }
      else
      {
        v318 = 0;
        Acl = sub_1402E1260(4u, 4, (int *)&v318);
        if ( Acl < 0 )
        {
LABEL_344:
          v6 = (char *)v129;
          goto LABEL_541;
        }
        v204 = sub_1402E1260(HIDWORD(v321[2]), v318, (int *)&v321[2] + 1);
        v321[1] = v129;
        Acl = v204;
        v6 = (char *)v129;
        if ( v204 >= 0 )
        {
          v321[1] = v129;
          goto LABEL_435;
        }
      }
      if ( Acl < 0 )
        goto LABEL_541;
LABEL_435:
      if ( !HIDWORD(v321[2]) )
      {
        Acl = -1073741762;
        goto LABEL_541;
      }
      v211 = ExAllocatePool2(256LL, HIDWORD(v321[2]), 542329939LL);
      if ( !v211 )
      {
        Acl = -1073741801;
        goto LABEL_541;
      }
      v321[3] = v211;
      LODWORD(v321[2]) = 0;
      Size = 0LL;
      LODWORD(v335) = 0;
      Acl = sub_140354360(v211, 4LL, (unsigned __int64 *)&v335);
      if ( Acl < 0 )
        goto LABEL_444;
      if ( v212 + 2 > (_DWORD *)((char *)v212 + HIDWORD(v321[2])) )
      {
        Acl = -1073741789;
        goto LABEL_444;
      }
      v213 = v335;
      *v212 = 4;
      *v213 = -2147467263;
      goto LABEL_443;
  }
}
