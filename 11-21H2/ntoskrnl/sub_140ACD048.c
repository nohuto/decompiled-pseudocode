/*
 * XREFs of sub_140ACD048 @ 0x140ACD048
 * Callers:
 *     sub_140AB9010 @ 0x140AB9010 (sub_140AB9010.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     sub_1403F966C @ 0x1403F966C (sub_1403F966C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140ACD048 @ 0x140ACD048 (sub_140ACD048.c)
 *     sub_140ACF0E0 @ 0x140ACF0E0 (sub_140ACF0E0.c)
 *     sub_140ACFC24 @ 0x140ACFC24 (sub_140ACFC24.c)
 *     sub_140AD049C @ 0x140AD049C (sub_140AD049C.c)
 *     sub_140AD0CE4 @ 0x140AD0CE4 (sub_140AD0CE4.c)
 *     j__guard_dispatch_icall_nop @ 0x140AD23B0 (j__guard_dispatch_icall_nop.c)
 *     sub_140AD6FD0 @ 0x140AD6FD0 (sub_140AD6FD0.c)
 */

__int64 __fastcall sub_140ACD048(_QWORD *a1, ULONG_PTR a2, unsigned int a3)
{
  ULONG_PTR v3; // r13
  _QWORD *v4; // rdi
  __int64 v5; // r15
  int *v6; // r8
  __int64 result; // rax
  int v8; // ecx
  int *v9; // rax
  _BYTE *v10; // rbx
  __int64 v11; // r9
  unsigned int v12; // esi
  _BYTE *v13; // r14
  int v14; // r12d
  int v15; // ecx
  unsigned int v16; // edx
  int v17; // edi
  unsigned int v18; // r11d
  _BYTE *v19; // r10
  __int64 v20; // rdi
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  __int64 v25; // rax
  int v26; // eax
  unsigned __int64 v27; // r10
  __int64 v28; // r11
  unsigned int v29; // r14d
  __int64 (__fastcall *v30)(ULONG_PTR, char *, int *, __int64); // rax
  __int64 v31; // rax
  ULONG_PTR v32; // r12
  int v33; // r15d
  int v34; // ecx
  unsigned int v35; // edi
  unsigned int *v36; // rax
  int v37; // ecx
  __int64 v38; // rdx
  unsigned int v39; // esi
  unsigned int v40; // r10d
  _BYTE *v41; // r14
  unsigned int v42; // ecx
  int v43; // r11d
  _BYTE *v44; // r9
  unsigned int **v45; // r8
  __int64 v46; // r11
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  int v50; // ecx
  __int64 v51; // rax
  int v52; // eax
  unsigned __int64 v53; // r9
  __int64 v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  int v57; // r15d
  _BYTE *v58; // rbx
  char **v59; // rsi
  _BYTE *v60; // rbx
  __int64 v61; // rcx
  __int64 v62; // rdx
  char *v63; // rdx
  __int64 v64; // r9
  ULONG_PTR v65; // rax
  __int64 v66; // rdx
  __int64 (__fastcall *v67)(ULONG_PTR, __int64, _QWORD, __int64 *); // rax
  __int64 v68; // rdx
  __int64 (__fastcall *v69)(ULONG_PTR, __int64, __int64, __int64 *); // rax
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 (__fastcall *v72)(ULONG_PTR, __int64, __int64, __int64 *); // rax
  __int64 (__fastcall *v73)(ULONG_PTR); // rax
  __int64 v74; // rdi
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rax
  __int64 v78; // rsi
  __int64 v79; // r8
  unsigned int v80; // eax
  __int64 v81; // r9
  _BYTE *v82; // rdi
  int v83; // ecx
  unsigned int v84; // eax
  __int64 v85; // r8
  int v86; // edx
  unsigned __int64 v87; // rcx
  int v88; // ebx
  ULONG_PTR *v89; // r13
  _BYTE *v90; // r15
  _DWORD *v91; // r14
  __int64 v92; // r12
  __int64 v93; // rdx
  _QWORD *v94; // rbx
  int v95; // ecx
  _QWORD *v96; // rax
  _QWORD *v97; // r9
  const char *v98; // rax
  int v99; // r11d
  __int64 v100; // rsi
  unsigned __int64 v101; // r8
  unsigned int v102; // r10d
  __int64 v103; // rdx
  __int64 v104; // rax
  __int64 v105; // r8
  unsigned __int128 v106; // rax
  unsigned int v107; // edx
  unsigned __int64 v108; // r10
  unsigned __int64 i; // rax
  _DWORD *v110; // r14
  ULONG_PTR v111; // r13
  int v112; // ebx
  _QWORD *v113; // rsi
  __int64 v114; // rdx
  _BYTE *v115; // rdi
  int v116; // ecx
  _BYTE *v117; // r14
  unsigned int v118; // r9d
  _QWORD *v119; // rbx
  _DWORD *v120; // r12
  _QWORD *v121; // rax
  _QWORD *v122; // r10
  const char *v123; // rax
  int v124; // r11d
  __int64 v125; // r15
  unsigned __int64 v126; // rcx
  ULONG_PTR v127; // r8
  unsigned int v128; // esi
  __int64 v129; // rax
  __int64 v130; // r8
  unsigned __int128 v131; // rax
  unsigned __int64 v132; // r9
  unsigned __int64 v133; // rax
  __int64 v134; // rax
  bool v135; // zf
  ULONG_PTR j; // rax
  __int64 v137; // rdx
  _BYTE *v138; // rsi
  int v139; // r15d
  __int64 v140; // rsi
  unsigned int v141; // eax
  int v142; // ecx
  unsigned int v143; // eax
  __int64 v144; // r8
  int v145; // edx
  unsigned __int64 v146; // rcx
  int v147; // edi
  int v148; // ecx
  _QWORD *v149; // rax
  __int64 v150; // rdx
  unsigned __int64 v151; // r12
  __int64 v152; // r15
  int v153; // r10d
  __int64 v154; // rdi
  const char *v155; // rax
  unsigned int v156; // r11d
  __int64 v157; // rdx
  ULONG_PTR v158; // rax
  __int64 v159; // r8
  unsigned __int128 v160; // rax
  unsigned __int64 v161; // r11
  __int64 v162; // rax
  ULONG_PTR k; // rax
  BOOL v164; // ecx
  unsigned int v165; // eax
  __int64 v166; // rdi
  __int64 v167; // rax
  int v168; // ecx
  _QWORD *v169; // rax
  _QWORD *v170; // rax
  __int64 v171; // rax
  unsigned __int64 v172; // r8
  unsigned int v173; // r15d
  unsigned __int64 v174; // r9
  unsigned int *v175; // rdi
  unsigned int v176; // r10d
  __int64 v177; // r12
  unsigned int *v178; // r11
  unsigned int v179; // ecx
  unsigned int *v180; // r12
  unsigned int v181; // r15d
  unsigned int v182; // edx
  unsigned int v183; // r15d
  unsigned int v184; // eax
  __int64 v185; // rax
  unsigned int v186; // esi
  unsigned int v187; // r13d
  unsigned int v188; // esi
  unsigned int *v189; // rax
  __int64 v190; // r9
  unsigned int *v191; // r14
  ULONG_PTR v192; // r8
  unsigned int *v193; // rax
  unsigned int v194; // eax
  _DWORD *v195; // r14
  __int64 v196; // r12
  _BYTE *v197; // rax
  int v198; // ecx
  __int64 v199; // rdi
  unsigned int v200; // eax
  _BYTE *v201; // rsi
  int v202; // ecx
  unsigned int v203; // eax
  __int64 v204; // r8
  int v205; // edx
  unsigned __int64 v206; // rcx
  int v207; // ebx
  _BYTE *v208; // rdx
  _QWORD *v209; // rax
  __int64 v210; // rcx
  int v211; // r8d
  unsigned __int64 v212; // rcx
  unsigned __int64 m; // rax
  __int64 v214; // rax
  _DWORD *v215; // r14
  unsigned int *v216; // r15
  _DWORD *v217; // rax
  __int64 v218; // rdx
  __int64 v219; // rcx
  int v220; // r13d
  int v221; // eax
  char *v222; // rdx
  __int64 v223; // r8
  char *v224; // r10
  int v225; // r11d
  char *v226; // rbx
  char v227; // cl
  char v228; // al
  int v229; // ecx
  __int16 v230; // ax
  unsigned int v231; // edx
  char *v232; // r8
  __int64 v233; // rcx
  __int64 v234; // rax
  char v235; // cl
  char v236; // al
  int v237; // r8d
  __int64 v238; // rdx
  char v239; // cl
  char v240; // al
  int v241; // r8d
  __int64 v242; // rdx
  char v243; // cl
  char v244; // al
  unsigned int v245; // edi
  __int64 v246; // rdx
  unsigned int v247; // edi
  unsigned int v248; // r10d
  unsigned int v249; // r12d
  unsigned int v250; // eax
  unsigned int v251; // ecx
  unsigned int v252; // r15d
  bool v253; // cf
  unsigned __int64 v254; // r11
  unsigned int *v255; // rdx
  unsigned __int64 v256; // rbx
  unsigned __int64 *v257; // r8
  _QWORD *v258; // r10
  int v259; // edi
  const char *v260; // rax
  __int64 v261; // r14
  unsigned __int64 v262; // r8
  unsigned int v263; // ebx
  __int64 v264; // rax
  __int64 v265; // r8
  unsigned __int128 v266; // rax
  unsigned __int64 v267; // rax
  __int64 v268; // rax
  unsigned __int64 v269; // rax
  bool v270; // cc
  unsigned int *v271; // r8
  unsigned int *v272; // r14
  unsigned int v273; // r15d
  char *v274; // rax
  char v275; // r8
  __int64 v276; // rbx
  unsigned int *v277; // rcx
  unsigned __int64 v278; // r11
  unsigned __int64 *v279; // rdx
  unsigned __int64 v280; // rbx
  _QWORD *v281; // r10
  int v282; // edi
  const char *v283; // rax
  __int64 v284; // r14
  unsigned __int64 v285; // r8
  unsigned int v286; // ebx
  __int64 v287; // rdx
  __int64 v288; // rax
  __int64 v289; // r8
  unsigned __int128 v290; // rax
  unsigned __int64 v291; // rdx
  __int64 v292; // rax
  unsigned __int64 v293; // rax
  _DWORD *v294; // r14
  unsigned int *v295; // rcx
  unsigned __int64 v296; // r11
  unsigned __int64 *v297; // rdx
  unsigned __int64 v298; // rbx
  unsigned int v299; // r8d
  _QWORD *v300; // r10
  int v301; // edi
  const char *v302; // rax
  __int64 v303; // r14
  unsigned __int64 v304; // r8
  unsigned int v305; // ebx
  __int64 v306; // rax
  __int64 v307; // r8
  _QWORD *v308; // r10
  __int64 v309; // r8
  unsigned __int128 v310; // rax
  unsigned __int64 v311; // rax
  __int64 v312; // rax
  unsigned __int64 n; // rax
  unsigned int *v314; // r8
  char *v315; // rax
  __int64 v316; // r15
  __int64 v317; // rax
  __int64 v318; // rcx
  __int64 v319; // rax
  __int64 v320; // rdi
  __int64 ii; // rbx
  __int64 v322; // rax
  __int64 v323; // rdx
  __int64 v324; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE *v325; // [rsp+50h] [rbp-B8h] BYREF
  _DWORD *v326; // [rsp+58h] [rbp-B0h]
  unsigned int *v327; // [rsp+60h] [rbp-A8h]
  char *v328; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v329; // [rsp+70h] [rbp-98h]
  __int64 v330; // [rsp+78h] [rbp-90h]
  unsigned int *v331; // [rsp+80h] [rbp-88h]
  unsigned int v332; // [rsp+88h] [rbp-80h]
  unsigned int *v333; // [rsp+90h] [rbp-78h]
  _BYTE *v334; // [rsp+98h] [rbp-70h] BYREF
  __int64 v335; // [rsp+A0h] [rbp-68h]
  unsigned __int64 v336; // [rsp+A8h] [rbp-60h]
  __int64 v337; // [rsp+B0h] [rbp-58h]
  unsigned int v338; // [rsp+B8h] [rbp-50h] BYREF
  _DWORD *v339; // [rsp+C0h] [rbp-48h]
  __int64 v340; // [rsp+C8h] [rbp-40h]
  int v341; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v342; // [rsp+D8h] [rbp-30h]
  unsigned int v343; // [rsp+E0h] [rbp-28h] BYREF
  int v344; // [rsp+E8h] [rbp-20h] BYREF
  _DWORD v345[6]; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v346; // [rsp+108h] [rbp+0h]
  int v347; // [rsp+110h] [rbp+8h] BYREF
  ULONG_PTR v348; // [rsp+118h] [rbp+10h] BYREF
  __int64 v349; // [rsp+120h] [rbp+18h]
  __int64 v350; // [rsp+128h] [rbp+20h]
  __int64 v351; // [rsp+130h] [rbp+28h]
  __int64 v352; // [rsp+138h] [rbp+30h]
  __int64 v353; // [rsp+140h] [rbp+38h]
  char v354[8]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v355; // [rsp+150h] [rbp+48h]
  int v356; // [rsp+15Ch] [rbp+54h]
  __int64 v357; // [rsp+160h] [rbp+58h]
  __int64 v358; // [rsp+168h] [rbp+60h]
  __int64 v359; // [rsp+170h] [rbp+68h]
  __int64 v360; // [rsp+178h] [rbp+70h]
  __int64 v361; // [rsp+180h] [rbp+78h]
  __int64 v362; // [rsp+188h] [rbp+80h]
  char v363[8]; // [rsp+190h] [rbp+88h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+198h] [rbp+90h]
  int v365; // [rsp+1A4h] [rbp+9Ch]
  unsigned int v369; // [rsp+210h] [rbp+108h]
  unsigned __int16 v370; // [rsp+210h] [rbp+108h]
  unsigned int v371; // [rsp+210h] [rbp+108h]

  v3 = a2;
  v4 = a1;
  v325 = (_BYTE *)*a1;
  v5 = (*((__int64 (__fastcall **)(ULONG_PTR, char *))v325 + 62))(a2, v354);
  v6 = 0LL;
  v346 = v355;
  if ( !v355 )
  {
    if ( (*((_DWORD *)v325 + 598) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v3, 5uLL, 0LL);
    return 3221225595LL;
  }
  v8 = 4;
  v340 = 0LL;
  v9 = &v341;
  do
  {
    *(_BYTE *)v9 = 0;
    v9 = (int *)((char *)v9 + 1);
    --v8;
  }
  while ( v8 );
  v10 = v325;
  v11 = 0LL;
  v12 = *((_DWORD *)v325 + 501);
  if ( !v12 )
    goto LABEL_48;
  v13 = (_BYTE *)*((_QWORD *)v325 + 328);
  v14 = v356;
  v15 = v341;
  v16 = HIDWORD(v340);
  v17 = v340;
  while ( 1 )
  {
    v18 = 0;
    v19 = v325;
    if ( v13 )
      v19 = v13;
    v6 = (int *)&v19[*((unsigned int *)v19 + 500)];
    if ( v17 && v16 <= (unsigned int)v11 )
    {
      v18 = v16;
      v6 = (int *)&v19[v15];
    }
    if ( v18 != (_DWORD)v11 )
    {
      v20 = (unsigned int)v11 - v18;
      v18 = v11;
      while ( 1 )
      {
        v21 = *v6;
        if ( *v6 > 12 )
          break;
        if ( v21 == 12 )
          goto LABEL_29;
        v22 = v21 - 1;
        if ( !v22 )
          goto LABEL_29;
        v23 = v22 - 6;
        if ( v23 )
        {
          v24 = v23 - 1;
          if ( !v24 )
          {
            v26 = *((unsigned __int16 *)v6 + 16);
LABEL_34:
            v25 = (v26 + 55) & 0xFFFFFFF8;
            goto LABEL_35;
          }
          if ( v24 != 2 )
            goto LABEL_31;
          v25 = (unsigned int)(16 * (v6[7] + 3));
        }
        else
        {
          v25 = (unsigned int)(24 * (v6[6] + 2));
        }
LABEL_35:
        v6 = (int *)((char *)v6 + v25);
        if ( !--v20 )
        {
          v14 = v356;
          v3 = a2;
          goto LABEL_37;
        }
      }
      if ( v21 == 28 )
      {
        v26 = *((unsigned __int16 *)v6 + 20);
        goto LABEL_34;
      }
      if ( v21 == 30 )
      {
        v25 = (((v6[9] != 0 ? v6[9] - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8) + 24 * (*((unsigned __int16 *)v6 + 20) + 2);
        goto LABEL_35;
      }
      if ( v21 <= 32 )
      {
LABEL_31:
        v25 = 48LL;
        goto LABEL_35;
      }
      if ( v21 <= 34 )
      {
        v25 = 20 * (unsigned int)(((v6[8] & 0xFFF) + (unsigned __int64)(unsigned int)v6[10] + 4095) >> 12) + 48;
        goto LABEL_35;
      }
      if ( v21 != 43 )
        goto LABEL_31;
LABEL_29:
      v25 = 4 * (v6[4] / 0xCu) + 48;
      goto LABEL_35;
    }
LABEL_37:
    LODWORD(v340) = 1;
    v15 = (_DWORD)v6 - (_DWORD)v19;
    v16 = v18;
    v27 = *v6;
    v17 = 1;
    HIDWORD(v340) = v18;
    v341 = v15;
    if ( (unsigned int)v27 <= 0x2B )
    {
      v28 = 0x80000001002LL;
      if ( _bittest64(&v28, v27) )
      {
        if ( *((_QWORD *)v6 + 1) == v5 && v6[4] == v14 )
          break;
      }
    }
    if ( (unsigned int)(v27 - 33) <= 1 && *((_QWORD *)v6 + 4) == v346 )
      break;
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v12 )
      goto LABEL_47;
  }
  if ( v6 )
    return 3221225742LL;
LABEL_47:
  v4 = a1;
LABEL_48:
  v29 = a3;
  v30 = (__int64 (__fastcall *)(ULONG_PTR, char *, int *, __int64))*((_QWORD *)v325 + 62);
  v369 = a3;
  v334 = v325;
  v31 = v30(v3, v363, v6, v11);
  v32 = BugCheckParameter2;
  v33 = v365;
  v327 = (unsigned int *)v31;
  LODWORD(v324) = v365;
  v329 = BugCheckParameter2;
  if ( !BugCheckParameter2 )
  {
    if ( (*((_DWORD *)v325 + 598) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v3, 5uLL, 0LL);
    v34 = -1073741701;
    *v4 = v325;
    return (unsigned int)v34;
  }
  v35 = 0;
  v36 = &v343;
  v342 = 0LL;
  v37 = 4;
  v38 = 1LL;
  do
  {
    *(_BYTE *)v36 = 0;
    v36 = (unsigned int *)((char *)v36 + 1);
    --v37;
  }
  while ( v37 );
  v39 = *((_DWORD *)v10 + 501);
  v40 = 0;
  if ( v39 )
  {
    v41 = (_BYTE *)*((_QWORD *)v10 + 328);
    v42 = v343;
    LODWORD(v38) = HIDWORD(v342);
    v43 = v342;
    while ( 1 )
    {
      v44 = v10;
      if ( v41 )
        v44 = v41;
      v45 = (unsigned int **)&v44[*((unsigned int *)v44 + 500)];
      if ( v43 && (unsigned int)v38 <= v40 )
      {
        v35 = v38;
        v45 = (unsigned int **)&v44[v42];
      }
      if ( v35 != v40 )
        break;
LABEL_84:
      LODWORD(v342) = 1;
      v42 = (_DWORD)v45 - (_DWORD)v44;
      v38 = v35;
      v53 = *(int *)v45;
      v43 = 1;
      HIDWORD(v342) = v35;
      v343 = v42;
      if ( (unsigned int)v53 <= 0x2B
        && (v54 = 0x80000001002LL, _bittest64(&v54, v53))
        && v45[1] == v327
        && *((_DWORD *)v45 + 4) == v33
        || (unsigned int)(v53 - 33) <= 1 && v45[4] == (unsigned int *)v32 )
      {
        if ( !v45 )
        {
LABEL_93:
          v29 = a3;
          goto LABEL_94;
        }
LABEL_102:
        v58 = v325;
LABEL_486:
        v113 = a1;
        *a1 = v58;
        goto LABEL_487;
      }
      if ( ++v40 >= v39 )
        goto LABEL_93;
      v35 = 0;
    }
    v46 = v40 - v35;
    v35 = v40;
    while ( 2 )
    {
      v47 = *(_DWORD *)v45;
      if ( *(int *)v45 > 12 )
      {
        if ( v47 == 28 )
        {
          v52 = *((unsigned __int16 *)v45 + 20);
          goto LABEL_81;
        }
        if ( v47 == 30 )
        {
          v51 = (((*((_DWORD *)v45 + 9) != 0 ? *((_DWORD *)v45 + 9) - 1 : 0) / 0xCu + 7) & 0xFFFFFFF8)
              + 24 * (*((unsigned __int16 *)v45 + 20) + 2);
          goto LABEL_82;
        }
        if ( v47 <= 32 )
          goto LABEL_78;
        if ( v47 <= 34 )
        {
          v51 = 20
              * (unsigned int)((((_DWORD)v45[4] & 0xFFF) + (unsigned __int64)*((unsigned int *)v45 + 10) + 4095) >> 12)
              + 48;
          goto LABEL_82;
        }
        if ( v47 != 43 )
          goto LABEL_78;
      }
      else if ( v47 != 12 )
      {
        v48 = v47 - 1;
        if ( v48 )
        {
          v49 = v48 - 6;
          if ( !v49 )
          {
            v51 = (unsigned int)(24 * (*((_DWORD *)v45 + 6) + 2));
            goto LABEL_82;
          }
          v50 = v49 - 1;
          if ( v50 )
          {
            if ( v50 == 2 )
            {
              v51 = (unsigned int)(16 * (*((_DWORD *)v45 + 7) + 3));
              goto LABEL_82;
            }
LABEL_78:
            v51 = 48LL;
LABEL_82:
            v45 = (unsigned int **)((char *)v45 + v51);
            if ( !--v46 )
            {
              v3 = a2;
              v32 = v329;
              goto LABEL_84;
            }
            continue;
          }
          v52 = *((unsigned __int16 *)v45 + 16);
LABEL_81:
          v51 = (v52 + 55) & 0xFFFFFFF8;
          goto LABEL_82;
        }
      }
      break;
    }
    v51 = 4 * (*((_DWORD *)v45 + 4) / 0xCu) + 48;
    goto LABEL_82;
  }
LABEL_94:
  v57 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64))v10 + 83))(v3, v38);
  LODWORD(v331) = v57;
  v332 = v324;
  if ( (a3 & 0x10) != 0 && (*((_DWORD *)v10 + 599) & 0x400) == 0 )
  {
    v29 = a3 & 0xFFFFFFEF;
    v369 = a3 & 0xFFFFFFEF;
  }
  if ( (v29 & 0x10) != 0 && !(unsigned int)sub_140AD0CE4(v10, v32, v55, v56) )
  {
    v29 &= ~0x10u;
    v369 = v29;
  }
  if ( (v29 & 2) != 0 && !v57 )
    goto LABEL_102;
  v59 = (char **)*((_QWORD *)v10 + 161);
  LODWORD(v336) = v29 & 1;
  _disable();
  v60 = v334;
  v61 = *(_QWORD *)((char *)KeGetCurrentPrcb() + *((_QWORD *)v334 + 195));
  _enable();
  (*((void (__fastcall **)(__int64))v60 + 43))(v61);
  LOBYTE(v62) = 1;
  (*((void (__fastcall **)(_QWORD, __int64))v60 + 28))(*((_QWORD *)v60 + 162), v62);
  v63 = *v59;
  if ( *v59 != (char *)v59 )
  {
    v64 = *((_QWORD *)v334 + 227);
    while ( 1 )
    {
      v65 = *(_QWORD *)&v63[*((_QWORD *)v334 + 228) - v64];
      if ( v32 >= v65 && v32 < v65 + *(unsigned int *)&v63[*((_QWORD *)v334 + 229) - v64] )
        break;
      v63 = *(char **)v63;
      if ( v63 == (char *)v59 )
        goto LABEL_110;
    }
    (*((void (__fastcall **)(char *, _QWORD))v334 + 26))(&v63[-v64], (unsigned int)!(v29 & 1) + 1);
  }
LABEL_110:
  (*((void (__fastcall **)(_QWORD))v334 + 33))(*((_QWORD *)v334 + 162));
  (*((void (**)(void))v334 + 44))();
  if ( (*((_DWORD *)v334 + 598) & 0x40000000) != 0 )
  {
    v34 = sub_140AD6FD0(&v325, v32, v29);
    goto LABEL_301;
  }
  v67 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD, __int64 *))*((_QWORD *)v334 + 60);
  LOBYTE(v66) = 1;
  v352 = 0LL;
  v345[4] = 0;
  v349 = v67(v32, v66, 0LL, &v324);
  v68 = v349 != 0 ? (unsigned int)v324 : 0;
  LODWORD(v324) = v68;
  v69 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64 *))*((_QWORD *)v60 + 60);
  v345[1] = v68;
  LOBYTE(v68) = 1;
  v70 = v69(v32, v68, 12LL, &v324);
  v71 = v70;
  v333 = (unsigned int *)v70;
  v350 = v70;
  LOBYTE(v71) = 1;
  LODWORD(v324) = v70 != 0 ? v324 : 0;
  v72 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64, __int64 *))*((_QWORD *)v60 + 60);
  LODWORD(v326) = v324;
  v345[2] = v324;
  v351 = v72(v32, v71, 10LL, &v324);
  LODWORD(v324) = v351 != 0 ? v324 : 0;
  v73 = (__int64 (__fastcall *)(ULONG_PTR))*((_QWORD *)v60 + 61);
  v345[3] = v324;
  v74 = v73(v32);
  if ( !v74 )
  {
    if ( (*((_DWORD *)v60 + 598) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v32, 7uLL, 0LL);
    if ( !*((_DWORD *)v60 + 560) )
    {
      *((_QWORD *)v60 + 282) = 0LL;
      *((_QWORD *)v60 + 283) = 271LL;
      *((_QWORD *)v60 + 281) = v60 - 0x5C5FC0A76E374B18LL;
      *((_QWORD *)v60 + 284) = v32;
      *((_DWORD *)v60 + 560) = 1;
      sub_140AD049C(v60, 0LL, v75, v76);
    }
    v34 = -1073741701;
    goto LABEL_237;
  }
  v77 = (*((__int64 (__fastcall **)(ULONG_PTR, int *))v60 + 145))(v32, &v347);
  v78 = *((unsigned int *)v60 + 491);
  v79 = *((unsigned int *)v60 + 571);
  v353 = v77;
  v345[5] = v347;
  v345[0] = *(_DWORD *)(v74 + 84);
  v348 = v32;
  v80 = v78 + 288;
  LODWORD(v81) = v57 != 0 ? 0xB : 0;
  LODWORD(v328) = v81;
  if ( (unsigned int)(v78 + 288) <= *((_DWORD *)v60 + 633) )
  {
    v82 = v60;
    v337 = (__int64)v60;
    *((_DWORD *)v60 + 491) = v80;
    goto LABEL_134;
  }
  v337 = sub_140ACFC24(v60, v80, v79);
  v82 = (_BYTE *)v337;
  if ( !v337 )
  {
LABEL_236:
    v34 = -1073741670;
LABEL_237:
    *a1 = v325;
    return (unsigned int)v34;
  }
  v83 = *((_DWORD *)v60 + 598);
  if ( (v83 & 4) == 0 )
  {
    v84 = *((_DWORD *)v60 + 491);
    v85 = *((_QWORD *)v60 + 242);
    v86 = (v83 & 0x20000000) != 0 ? *((_DWORD *)v60 + 571) : 0;
    if ( v84 >= 8 )
    {
      v87 = (unsigned __int64)v84 >> 3;
      do
      {
        *(_QWORD *)v60 = 0LL;
        v84 -= 8;
        v60 += 8;
        --v87;
      }
      while ( v87 );
    }
    for ( ; v84; --v84 )
      *v60++ = 0;
    v88 = *((_DWORD *)v82 + 571);
    *((_DWORD *)v82 + 571) = v86;
    if ( v86 == 3 )
    {
      (*((void (__fastcall **)(__int64))v82 + 107))(v85);
    }
    else if ( (*((_DWORD *)v82 + 598) & 0x10000000) != 0 || !v86 )
    {
      (*((void (__fastcall **)(__int64))v82 + 30))(v85);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v82 + 67))(v85 - 8, *(_QWORD *)(v85 - 8));
    }
    *((_DWORD *)v82 + 571) = v88;
  }
  *((_DWORD *)v82 + 598) &= ~4u;
  LODWORD(v81) = (_DWORD)v328;
LABEL_134:
  *((_DWORD *)v82 + 501) += 6;
  v339 = &v82[v78];
  v89 = &v348;
  v90 = &v82[v78];
  v335 = 6LL;
  v91 = v345;
  do
  {
    v92 = (unsigned int)*v91;
    v93 = 6LL;
    v94 = (_QWORD *)*v89;
    v95 = 48;
    LODWORD(v330) = *v91;
    v96 = v90;
    do
    {
      *v96 = 0LL;
      v95 -= 8;
      ++v96;
      --v93;
    }
    while ( v93 );
    for ( ; v95; --v95 )
    {
      *(_BYTE *)v96 = 0;
      v96 = (_QWORD *)((char *)v96 + 1);
    }
    *(_DWORD *)v90 = v81;
    *((_QWORD *)v90 + 1) = v94;
    v97 = v94;
    *((_DWORD *)v90 + 4) = v92;
    v98 = (const char *)v94;
    *((_DWORD *)v82 + 508) += v92;
    v99 = *((_DWORD *)v82 + 503);
    v100 = *((_QWORD *)v82 + 252);
    if ( v94 < (_QWORD *)((char *)v94 + v92) )
    {
      do
      {
        _mm_prefetch(v98, 0);
        v98 += 64;
      }
      while ( v98 < (const char *)v94 + v92 );
    }
    v101 = *((_QWORD *)v82 + 252);
    v102 = (unsigned int)v92 >> 7;
    if ( (unsigned int)v92 >> 7 )
    {
      do
      {
        v103 = 8LL;
        do
        {
          v104 = v101 ^ *v97;
          v105 = v97[1];
          v97 += 2;
          v101 = __ROL8__(__ROL8__(v104, v99) ^ v105, v99);
          --v103;
        }
        while ( v103 );
        v106 = (__ROL8__(v100 ^ ((char *)v97 - (char *)v94), 17) ^ v100 ^ (unsigned __int64)((char *)v97 - (char *)v94))
             * (unsigned __int128)0x7010008004002001uLL;
        v357 = *((_QWORD *)&v106 + 1);
        v99 = ((unsigned __int8)v106 ^ (unsigned __int8)(BYTE8(v106) ^ v99)) & 0x3F;
        if ( !v99 )
          LOBYTE(v99) = 1;
        --v102;
      }
      while ( v102 );
      v82 = (_BYTE *)v337;
      LODWORD(v92) = v330;
    }
    v107 = v92 & 0x7F;
    if ( v107 >= 8 )
    {
      v108 = (unsigned __int64)(v92 & 0x7F) >> 3;
      do
      {
        v101 = __ROL8__(*v97++ ^ v101, v99);
        v107 -= 8;
        --v108;
      }
      while ( v108 );
    }
    for ( ; v107; --v107 )
    {
      v101 = __ROL8__(*(unsigned __int8 *)v97 ^ v101, v99);
      v97 = (_QWORD *)((char *)v97 + 1);
    }
    for ( i = v101; ; v101 = (unsigned int)i ^ (unsigned int)v101 )
    {
      i >>= 31;
      if ( !i )
        break;
    }
    v81 = (unsigned int)v328;
    LODWORD(v101) = v101 & 0x7FFFFFFF;
    ++v91;
    *((_DWORD *)v90 + 5) = v101;
    ++v89;
    *((_DWORD *)v82 + 508) += v92;
    v90 += 48;
    --v335;
  }
  while ( v335 );
  v110 = v339;
  v111 = v329;
  v112 = (int)v331;
  *v339 = 44;
  *((_QWORD *)v110 + 3) = v111;
  if ( (*((_DWORD *)v82 + 598) & 0x10200000) != 0 )
  {
    if ( !v112 )
      goto LABEL_164;
    goto LABEL_163;
  }
  if ( v112 )
  {
LABEL_163:
    v110[8] |= 2u;
    goto LABEL_164;
  }
  if ( (*((_DWORD *)v82 + 599) & 0x8000) != 0 )
  {
    v110[8] |= 1u;
    if ( (unsigned int)sub_140AD0CE4(v82, v111, v101, v81) )
      v110[8] |= 4u;
  }
LABEL_164:
  v334 = v82;
  v325 = v82;
  v34 = sub_140ACF0E0((unsigned int)&v334, (_DWORD)v327, v332, v111, v112, v369, (__int64)&v338, (__int64)&v344);
  if ( v34 < 0 )
  {
    v113 = a1;
    v58 = v325;
    *a1 = v325;
    goto LABEL_302;
  }
  v114 = 6LL;
  v115 = v334;
  v116 = 48;
  v117 = &v334[(char *)v110 - v325];
  v118 = v344 - v338;
  v119 = (_QWORD *)(v111 + v338);
  v120 = v117 + 192;
  v121 = v117 + 192;
  do
  {
    *v121 = 0LL;
    v116 -= 8;
    ++v121;
    --v114;
  }
  while ( v114 );
  for ( ; v116; --v116 )
  {
    *(_BYTE *)v121 = 0;
    v121 = (_QWORD *)((char *)v121 + 1);
  }
  v122 = v119;
  *v120 = (_DWORD)v328;
  v123 = (const char *)v119;
  *((_QWORD *)v117 + 25) = v119;
  *((_DWORD *)v117 + 52) = v118;
  *((_DWORD *)v115 + 508) += v118;
  v124 = *((_DWORD *)v115 + 503);
  v125 = *((_QWORD *)v115 + 252);
  v126 = (unsigned __int64)v119 + v118;
  if ( (unsigned __int64)v119 < v126 )
  {
    do
    {
      _mm_prefetch(v123, 0);
      v123 += 64;
    }
    while ( (unsigned __int64)v123 < v126 );
  }
  v127 = *((_QWORD *)v115 + 252);
  v128 = v118 >> 7;
  if ( v118 >> 7 )
  {
    do
    {
      v129 = 8LL;
      do
      {
        v130 = v122[1] ^ __ROL8__(*v122 ^ v127, v124);
        v122 += 2;
        v127 = __ROL8__(v130, v124);
        --v129;
      }
      while ( v129 );
      v131 = (__ROL8__(v125 ^ ((char *)v122 - (char *)v119), 17) ^ v125 ^ (unsigned __int64)((char *)v122 - (char *)v119))
           * (unsigned __int128)0x7010008004002001uLL;
      v358 = *((_QWORD *)&v131 + 1);
      v124 = ((unsigned __int8)v131 ^ (unsigned __int8)(BYTE8(v131) ^ v124)) & 0x3F;
      if ( !v124 )
        LOBYTE(v124) = 1;
      --v128;
    }
    while ( v128 );
    v111 = v329;
    v120 = v117 + 192;
  }
  v132 = v118 & 0x7F;
  if ( (unsigned int)v132 >= 8 )
  {
    v133 = (unsigned __int64)(unsigned int)v132 >> 3;
    do
    {
      v127 = __ROL8__(*v122++ ^ v127, v124);
      v132 = (unsigned int)(v132 - 8);
      --v133;
    }
    while ( v133 );
  }
  if ( (_DWORD)v132 )
  {
    do
    {
      v134 = *(unsigned __int8 *)v122;
      v122 = (_QWORD *)((char *)v122 + 1);
      v127 = __ROL8__(v134 ^ v127, v124);
      v135 = (_DWORD)v132 == 1;
      v132 = (unsigned int)(v132 - 1);
    }
    while ( !v135 );
  }
  for ( j = v127 >> 31; j; j >>= 31 )
    v127 = (unsigned int)j ^ (unsigned int)v127;
  v137 = (unsigned int)v331;
  LODWORD(v127) = v127 & 0x7FFFFFFF;
  v120[5] = v127;
  *((_DWORD *)v117 + 60) = 48;
  if ( *((_DWORD *)v117 + 64) )
    *((_DWORD *)v117 + 66) = *((_DWORD *)v117 + 66) & 0xFFFFFFFE | ((_DWORD)v137 != 0);
  v325 = v115;
  v138 = v117 + 96;
  v139 = ((_DWORD)v137 != 0) + 13;
  if ( v117 != (_BYTE *)-96LL )
  {
    v151 = (unsigned __int64)v333;
    v58 = v115;
    *(_DWORD *)v138 = v139;
    LODWORD(v152) = (_DWORD)v326;
    goto LABEL_231;
  }
  v140 = *((unsigned int *)v115 + 491);
  v141 = v140 + 48;
  if ( (unsigned int)(v140 + 48) <= *((_DWORD *)v115 + 633) )
  {
    v58 = v115;
    *((_DWORD *)v115 + 491) = v141;
    goto LABEL_207;
  }
  v58 = (_BYTE *)sub_140ACFC24(v115, v141, *((unsigned int *)v115 + 571));
  if ( !v58 )
    goto LABEL_236;
  v142 = *((_DWORD *)v115 + 598);
  if ( (v142 & 4) == 0 )
  {
    v143 = *((_DWORD *)v115 + 491);
    v144 = *((_QWORD *)v115 + 242);
    v145 = (v142 & 0x20000000) != 0 ? *((_DWORD *)v115 + 571) : 0;
    if ( v143 >= 8 )
    {
      v146 = (unsigned __int64)v143 >> 3;
      do
      {
        *(_QWORD *)v115 = 0LL;
        v143 -= 8;
        v115 += 8;
        --v146;
      }
      while ( v146 );
    }
    for ( ; v143; --v143 )
      *v115++ = 0;
    v147 = *((_DWORD *)v58 + 571);
    *((_DWORD *)v58 + 571) = v145;
    if ( v145 == 3 )
    {
      (*((void (__fastcall **)(__int64))v58 + 107))(v144);
    }
    else if ( (*((_DWORD *)v58 + 598) & 0x10000000) != 0 || !v145 )
    {
      (*((void (__fastcall **)(__int64))v58 + 30))(v144);
    }
    else
    {
      (*((void (__fastcall **)(__int64, _QWORD))v58 + 67))(v144 - 8, *(_QWORD *)(v144 - 8));
    }
    *((_DWORD *)v58 + 571) = v147;
  }
  *((_DWORD *)v58 + 598) &= ~4u;
LABEL_207:
  v148 = 48;
  ++*((_DWORD *)v58 + 501);
  v138 = &v58[v140];
  v149 = v138;
  v150 = 6LL;
  do
  {
    *v149 = 0LL;
    v148 -= 8;
    ++v149;
    --v150;
  }
  while ( v150 );
  for ( ; v148; --v148 )
  {
    *(_BYTE *)v149 = 0;
    v149 = (_QWORD *)((char *)v149 + 1);
  }
  v151 = (unsigned __int64)v333;
  *(_DWORD *)v138 = v139;
  v132 = v151;
  v152 = (unsigned int)v326;
  *((_QWORD *)v138 + 1) = v151;
  *((_DWORD *)v138 + 4) = v152;
  *((_DWORD *)v58 + 508) += v152;
  v153 = *((_DWORD *)v58 + 503);
  v154 = *((_QWORD *)v58 + 252);
  if ( v151 < v151 + v152 )
  {
    v155 = (const char *)v151;
    do
    {
      _mm_prefetch(v155, 0);
      v155 += 64;
    }
    while ( (unsigned __int64)v155 < v151 + v152 );
  }
  v127 = *((_QWORD *)v58 + 252);
  v156 = (unsigned int)v152 >> 7;
  if ( (unsigned int)v152 >> 7 )
  {
    do
    {
      v157 = 8LL;
      do
      {
        v158 = v127 ^ *(_QWORD *)v132;
        v159 = *(_QWORD *)(v132 + 8);
        v132 += 16LL;
        v127 = __ROL8__(__ROL8__(v158, v153) ^ v159, v153);
        --v157;
      }
      while ( v157 );
      v160 = (__ROL8__(v154 ^ (v132 - v151), 17) ^ v154 ^ (v132 - v151)) * (unsigned __int128)0x7010008004002001uLL;
      v359 = *((_QWORD *)&v160 + 1);
      v153 = ((unsigned __int8)v160 ^ (unsigned __int8)(BYTE8(v160) ^ v153)) & 0x3F;
      if ( !v153 )
        LOBYTE(v153) = 1;
      --v156;
    }
    while ( v156 );
    LODWORD(v152) = (_DWORD)v326;
    v111 = v329;
  }
  v137 = v152 & 0x7F;
  if ( (unsigned int)v137 >= 8 )
  {
    v161 = (unsigned __int64)(v152 & 0x7F) >> 3;
    do
    {
      v127 = __ROL8__(*(_QWORD *)v132 ^ v127, v153);
      v132 += 8LL;
      v137 = (unsigned int)(v137 - 8);
      --v161;
    }
    while ( v161 );
  }
  if ( (_DWORD)v137 )
  {
    do
    {
      v162 = *(unsigned __int8 *)v132++;
      v127 = __ROL8__(v162 ^ v127, v153);
      v135 = (_DWORD)v137 == 1;
      v137 = (unsigned int)(v137 - 1);
    }
    while ( !v135 );
  }
  for ( k = v127; ; v127 = (unsigned int)k ^ (unsigned int)v127 )
  {
    k >>= 31;
    if ( !k )
      break;
  }
  LODWORD(v127) = v127 & 0x7FFFFFFF;
  *((_DWORD *)v138 + 5) = v127;
  *((_DWORD *)v58 + 508) += v152;
LABEL_231:
  if ( (*((_DWORD *)v58 + 598) & 0x40000000) != 0 && (_DWORD)v152 )
    sub_1403F966C((__int64)v58, v151, v152, (__int64)(v138 + 28));
  *((_DWORD *)v138 + 6) = v336 != 0;
  v325 = v58;
  v164 = (_DWORD)v331 != 0;
  v165 = *((_DWORD *)v117 + 46) & 0xFFFFFFFE;
  *((_DWORD *)v117 + 36) = 35;
  v253 = *((_DWORD *)v117 + 40) < 0x94u;
  *((_DWORD *)v117 + 46) = v165 | v164;
  if ( !v253 )
  {
    v166 = *((_QWORD *)v117 + 19);
    v167 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))v58 + 61))(
             v111,
             v137,
             v127,
             v132);
    if ( !v167 )
      goto LABEL_236;
    v127 = v111 + *(unsigned int *)(v167 + 80);
    v137 = *((_DWORD *)v117 + 46) | 2u;
    *((_DWORD *)v117 + 46) = v137;
    v168 = v137;
    v169 = *(_QWORD **)(v166 + 112);
    if ( (unsigned __int64)v169 >= v111 && (unsigned __int64)v169 < v127 )
    {
      v168 = v137 | 4;
      *((_QWORD *)v117 + 21) = *v169;
      *((_DWORD *)v117 + 46) = v137 | 4;
    }
    v170 = *(_QWORD **)(v166 + 120);
    if ( (unsigned __int64)v170 >= v111 && (unsigned __int64)v170 < v127 )
    {
      *((_QWORD *)v117 + 22) = *v170;
      *((_DWORD *)v117 + 46) = v168 | 8;
    }
  }
  v135 = (*((_DWORD *)v58 + 598) & 0x400000) == 0;
  v334 = v58;
  if ( v135 )
    goto LABEL_485;
  v171 = (*((__int64 (__fastcall **)(ULONG_PTR, __int64, ULONG_PTR, unsigned __int64))v58 + 61))(v111, v137, v127, v132);
  v339 = (_DWORD *)v171;
  if ( !v171 )
    goto LABEL_246;
  v173 = *(unsigned __int16 *)(v171 + 6);
  v370 = v173;
  v174 = v332 / 0xCuLL;
  v336 = v174;
  if ( !(_WORD)v173 )
  {
    if ( (*((_DWORD *)v58 + 598) & 0x200000) == 0 )
      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v111, 0LL, 0LL);
    if ( *((_DWORD *)v58 + 560) )
      goto LABEL_246;
    *((_DWORD *)v58 + 560) = 1;
    goto LABEL_251;
  }
  v175 = v327;
  v176 = v173;
  LODWORD(v328) = v173;
  v177 = *(unsigned __int16 *)(v171 + 20) + v171 + 24;
  v178 = &v327[3 * (unsigned int)v174];
  v333 = v178;
  v179 = 0;
  v335 = v177;
  LODWORD(v326) = 0;
  v180 = (unsigned int *)(v177 + 8);
  v172 = 1LL;
  while ( 2 )
  {
    v181 = v180[2];
    v182 = v180[1];
    if ( v181 <= *v180 )
      v181 = *v180;
    LODWORD(v330) = v180[1];
    v183 = v182 + v181;
    if ( v179 )
    {
      if ( v183 >= *(_DWORD *)(v335 + 40LL * (v179 - 1) + 12) )
      {
        v179 = (unsigned int)v326;
        goto LABEL_259;
      }
      if ( (*((_DWORD *)v58 + 598) & 0x200000) == 0 )
        KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v111, 1uLL, 0LL);
      if ( *((_DWORD *)v58 + 560) )
        goto LABEL_246;
      *((_DWORD *)v58 + 560) = 1;
LABEL_251:
      *((_QWORD *)v58 + 281) = v58 - 0x5C5FC0A76E374B18LL;
LABEL_252:
      *((_QWORD *)v58 + 282) = 0LL;
      *((_QWORD *)v58 + 283) = 271LL;
      *((_QWORD *)v58 + 284) = v111;
      sub_140AD049C(v58, 0LL, v172, v174);
      goto LABEL_246;
    }
LABEL_259:
    if ( v175 == v178 )
      goto LABEL_282;
LABEL_260:
    v184 = v175[1];
    if ( *v175 >= v183 || v184 <= v182 )
    {
LABEL_281:
      v179 = (unsigned int)v326;
      v172 = 1LL;
      v176 = (unsigned int)v328;
LABEL_282:
      ++v179;
      v180 += 10;
      LODWORD(v326) = v179;
      if ( v179 < v176 )
        continue;
      v174 = v336;
      v172 = 0xA3A03F5891C8B4E8uLL;
      v195 = v339;
      v196 = v335;
      if ( v175 != v178 )
      {
        if ( (*((_DWORD *)v58 + 598) & 0x200000) == 0 )
          KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v111, 3uLL, 0LL);
        if ( *((_DWORD *)v58 + 560) )
          goto LABEL_246;
        v197 = v58 - 0x5C5FC0A76E374B18LL;
LABEL_292:
        *((_QWORD *)v58 + 281) = v197;
        *((_DWORD *)v58 + 560) = 1;
        goto LABEL_252;
      }
      if ( (_DWORD)v336 )
        v198 = (v336 + 6) & 0xFFFFFFF8;
      else
        v198 = 0;
      v199 = *((unsigned int *)v58 + 491);
      v200 = v198 + 24 * v176 + v199 + 48;
      if ( v200 <= *((_DWORD *)v58 + 633) )
      {
        v201 = v58;
        v337 = (__int64)v58;
        *((_DWORD *)v58 + 491) = v200;
      }
      else
      {
        v337 = sub_140ACFC24(v58, v200, *((unsigned int *)v58 + 571));
        v201 = (_BYTE *)v337;
        if ( !v337 )
        {
          v34 = -1073741670;
          goto LABEL_301;
        }
        v202 = *((_DWORD *)v58 + 598);
        if ( (v202 & 4) == 0 )
        {
          v203 = *((_DWORD *)v58 + 491);
          v204 = *((_QWORD *)v58 + 242);
          v205 = (v202 & 0x20000000) != 0 ? *((_DWORD *)v58 + 571) : 0;
          if ( v203 >= 8 )
          {
            v206 = (unsigned __int64)v203 >> 3;
            do
            {
              *(_QWORD *)v58 = 0LL;
              v203 -= 8;
              v58 += 8;
              --v206;
            }
            while ( v206 );
          }
          for ( ; v203; --v203 )
            *v58++ = 0;
          v207 = *((_DWORD *)v201 + 571);
          *((_DWORD *)v201 + 571) = v205;
          if ( v205 == 3 )
          {
            (*((void (__fastcall **)(__int64))v201 + 107))(v204);
          }
          else if ( (*((_DWORD *)v201 + 598) & 0x10000000) != 0 || !v205 )
          {
            (*((void (__fastcall **)(__int64))v201 + 30))(v204);
          }
          else
          {
            (*((void (__fastcall **)(__int64, _QWORD))v201 + 67))(v204 - 8, *(_QWORD *)(v204 - 8));
          }
          *((_DWORD *)v201 + 571) = v207;
        }
        *((_DWORD *)v201 + 598) &= ~4u;
        v174 = v336;
        v176 = (unsigned int)v328;
        v178 = v333;
      }
      v208 = &v201[v199];
      ++*((_DWORD *)v201 + 501);
      v209 = &v201[v199];
      v210 = 6LL;
      v211 = 48;
      do
      {
        *v209 = 0LL;
        v211 -= 8;
        ++v209;
        --v210;
      }
      while ( v210 );
      for ( ; v211; --v211 )
      {
        *(_BYTE *)v209 = 0;
        v209 = (_QWORD *)((char *)v209 + 1);
      }
      *((_QWORD *)v208 + 1) = v327;
      *(_DWORD *)v208 = 30;
      *((_DWORD *)v208 + 4) = 0;
      v212 = *((_QWORD *)v201 + 252);
      for ( m = v212; ; LODWORD(v212) = m ^ v212 )
      {
        m >>= 31;
        if ( !m )
          break;
      }
      v135 = (_DWORD)v331 == 0;
      v58 = v201;
      *((_DWORD *)v208 + 5) = v212 & 0x7FFFFFFF;
      *((_QWORD *)v208 + 3) = v111;
      *((_DWORD *)v208 + 8) = v195[20];
      *((_DWORD *)v208 + 9) = v332;
      *((_WORD *)v208 + 20) = v370;
      v214 = *((_WORD *)v208 + 21) & 0xFFFE;
      v334 = v201;
      *((_WORD *)v208 + 21) = v214 | !v135;
      v328 = v208 + 48;
      if ( (_DWORD)v174 )
        v215 = &v208[(((unsigned int)(v174 - 1) + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) + 48];
      else
        v215 = v208 + 48;
      v216 = v327;
      v326 = v215;
      v339 = &v215[6 * v370];
      if ( (_DWORD)v174 )
        v331 = v327 + 3;
      else
        v331 = v178;
      if ( v176 )
      {
        v217 = v215 + 2;
        v218 = v176;
        v174 = 0x80000000LL;
        do
        {
          v219 = 2LL;
          do
          {
            *((_QWORD *)v217 - 1) = 0LL;
            *v217 = 0x80000000;
            v217 += 3;
            --v219;
          }
          while ( v219 );
          --v218;
        }
        while ( v218 );
      }
      if ( v215 == &v215[6 * v370] )
      {
LABEL_485:
        v325 = v58;
        goto LABEL_486;
      }
      while ( 1 )
      {
        v220 = 0;
        if ( (*(_DWORD *)(v196 + 36) & 0x2000000) != 0 )
        {
LABEL_346:
          v220 = 1;
          goto LABEL_347;
        }
        v221 = *(_DWORD *)v196;
        if ( *(_DWORD *)v196 == 1414090313 )
          break;
        if ( v221 != 1162297680 )
          goto LABEL_341;
        v230 = *(_WORD *)(v196 + 4);
        if ( v230 == 30839 || v230 == 29303 || v230 == 30583 )
          goto LABEL_346;
LABEL_343:
        v222 = (char *)*((_QWORD *)v201 + 287);
        v174 = *((_QWORD *)v201 + 288);
        v223 = v196 - (_QWORD)v222;
        v224 = (char *)*((_QWORD *)v201 + 289);
        v225 = 7;
        v226 = (char *)*((_QWORD *)v201 + 290);
        while ( 1 )
        {
          v227 = v222[v223];
          v228 = *v222++;
          if ( v227 != v228 )
            break;
          if ( !--v225 )
            goto LABEL_346;
        }
        v231 = 8;
        v232 = (char *)v196;
        while ( 1 )
        {
          v233 = *(_QWORD *)v232;
          v232 += 8;
          v234 = *(_QWORD *)v174;
          v174 += 8LL;
          if ( v233 != v234 )
            break;
          v231 -= 8;
          if ( v231 < 8 )
          {
            if ( !v231 )
              goto LABEL_346;
            while ( 1 )
            {
              v235 = *v232++;
              v236 = *(_BYTE *)v174++;
              if ( v235 != v236 )
                goto LABEL_361;
              if ( !--v231 )
                goto LABEL_346;
            }
          }
        }
LABEL_361:
        v237 = 4;
        v238 = v196 - (_QWORD)v224;
        v174 = 0xFFFFFFFFLL;
        while ( 1 )
        {
          v239 = v224[v238];
          v240 = *v224++;
          if ( v239 != v240 )
            break;
          if ( !--v237 )
            goto LABEL_346;
        }
        v241 = 6;
        v242 = v196 - (_QWORD)v226;
        while ( 1 )
        {
          v243 = v226[v242];
          v244 = *v226++;
          if ( v243 != v244 )
            break;
          if ( !--v241 )
            goto LABEL_346;
        }
LABEL_347:
        v229 = *(_DWORD *)(v196 + 36);
        if ( v229 >= 0 )
        {
          if ( !v220 )
            goto LABEL_374;
        }
        else
        {
          v220 = 1;
        }
        if ( *(_DWORD *)v196 == 1414090313
          && *(_DWORD *)(v196 + 4) == 1195525195
          && (*((_DWORD *)v201 + 599) & 0x2000) != 0 )
        {
          v220 = 0;
        }
LABEL_374:
        if ( (*((_DWORD *)v201 + 599) & 0x4000) != 0
          && (v229 & 0x20000000) != 0
          && (v329 == *((_QWORD *)v201 + 184) || v329 == *((_QWORD *)v201 + 185)) )
        {
          v220 = 1;
        }
        v245 = *(_DWORD *)(v196 + 16);
        v246 = *(unsigned int *)(v196 + 12);
        if ( v245 <= *(_DWORD *)(v196 + 8) )
          v245 = *(_DWORD *)(v196 + 8);
        LODWORD(v330) = *(_DWORD *)(v196 + 12);
        v247 = v246 + v245;
        v248 = 0;
        v249 = v246;
        v371 = v247;
        if ( v216 == v333 )
        {
          v252 = 0;
          v253 = (_DWORD)v246 != 0;
        }
        else
        {
          v250 = *v216;
          v251 = v216[1];
          v252 = v251;
          v253 = v250 < (unsigned int)v246;
          if ( v250 > (unsigned int)v246 )
          {
            if ( v251 > v247 )
            {
LABEL_411:
              v270 = v252 <= v247;
              v216 = v327;
              if ( !v270 )
                goto LABEL_453;
              v271 = v333;
              if ( v327 == v333 )
                goto LABEL_453;
            }
            else
            {
              if ( !v220 )
              {
                v254 = v329 + v246;
                *v215 = v246;
                v215[1] = v250;
                v174 = v250 - (unsigned int)v246;
                LODWORD(v336) = v251;
                v255 = v345;
                v256 = v254 + v174;
                v257 = &v348;
                v249 = v250;
                do
                {
                  if ( v254 < *v257 + *v255 && v256 > *v257 )
                  {
                    v248 = 0;
                    goto LABEL_411;
                  }
                  ++v248;
                  ++v257;
                  ++v255;
                }
                while ( v248 < 6 );
                *((_DWORD *)v201 + 508) += v174;
                v258 = (_QWORD *)v254;
                v259 = *((_DWORD *)v201 + 503);
                v260 = (const char *)v254;
                v261 = *((_QWORD *)v201 + 252);
                if ( v254 < v256 )
                {
                  do
                  {
                    _mm_prefetch(v260, 0);
                    v260 += 64;
                  }
                  while ( (unsigned __int64)v260 < v256 );
                }
                v262 = *((_QWORD *)v201 + 252);
                v263 = (unsigned int)v174 >> 7;
                if ( (unsigned int)v174 >> 7 )
                {
                  do
                  {
                    v264 = 8LL;
                    do
                    {
                      v265 = v258[1] ^ __ROL8__(*v258 ^ v262, v259);
                      v258 += 2;
                      v262 = __ROL8__(v265, v259);
                      --v264;
                    }
                    while ( v264 );
                    v266 = (__ROL8__(v261 ^ ((unsigned __int64)v258 - v254), 17) ^ v261 ^ ((unsigned __int64)v258 - v254))
                         * (unsigned __int128)0x7010008004002001uLL;
                    v360 = *((_QWORD *)&v266 + 1);
                    v259 = ((unsigned __int8)v266 ^ (unsigned __int8)(BYTE8(v266) ^ v259)) & 0x3F;
                    if ( !v259 )
                      LOBYTE(v259) = 1;
                    --v263;
                  }
                  while ( v263 );
                  v201 = (_BYTE *)v337;
                  v252 = v336;
                }
                v174 &= 0x7Fu;
                if ( (unsigned int)v174 >= 8 )
                {
                  v267 = (unsigned __int64)(unsigned int)v174 >> 3;
                  do
                  {
                    v262 = __ROL8__(*v258++ ^ v262, v259);
                    v174 = (unsigned int)(v174 - 8);
                    --v267;
                  }
                  while ( v267 );
                }
                if ( (_DWORD)v174 )
                {
                  do
                  {
                    v268 = *(unsigned __int8 *)v258;
                    v258 = (_QWORD *)((char *)v258 + 1);
                    v262 = __ROL8__(v268 ^ v262, v259);
                    v135 = (_DWORD)v174 == 1;
                    v174 = (unsigned int)(v174 - 1);
                  }
                  while ( !v135 );
                }
                v269 = v262 >> 31;
                v248 = 0;
                while ( v269 )
                {
                  LODWORD(v262) = v269 ^ v262;
                  v269 >>= 31;
                }
                v247 = v371;
                v326[2] = v262 & 0x7FFFFFFF;
                goto LABEL_411;
              }
              v271 = v333;
            }
            v272 = v331;
            v273 = v331[1];
            v332 = v273;
            if ( v273 <= v247 )
            {
              v274 = v328;
              do
              {
                if ( v272 == v271 )
                  break;
                if ( v220 )
                {
                  v275 = 0x80;
                }
                else
                {
                  v249 = *v272;
                  v276 = v327[1];
                  if ( *v272 < (unsigned int)v276 )
                  {
                    if ( (*((_DWORD *)v201 + 598) & 0x200000) == 0 )
                      KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v329, 6uLL, 0LL);
                    if ( !*((_DWORD *)v201 + 560) )
                    {
                      *((_QWORD *)v201 + 284) = v329;
                      *((_QWORD *)v201 + 281) = v201 - 0x5C5FC0A76E374B18LL;
                      *((_QWORD *)v201 + 282) = 0LL;
                      *((_DWORD *)v201 + 560) = 1;
                      *((_QWORD *)v201 + 283) = 271LL;
                      sub_140AD049C(v201, 0LL, v271, v174);
                      v248 = 0;
                    }
                  }
                  v277 = v345;
                  v278 = v329 + v276;
                  v279 = &v348;
                  v174 = v249 - (unsigned int)v276;
                  v280 = v329 + v276 + v174;
                  do
                  {
                    if ( v278 < *v279 + *v277 && v280 > *v279 )
                      goto LABEL_447;
                    ++v248;
                    ++v279;
                    ++v277;
                  }
                  while ( v248 < 6 );
                  if ( (unsigned int)v174 < 4 )
                  {
LABEL_447:
                    v248 = 0;
                    v275 = 0x80;
                    goto LABEL_448;
                  }
                  *((_DWORD *)v201 + 508) += v174;
                  v281 = (_QWORD *)v278;
                  v282 = *((_DWORD *)v201 + 503);
                  v283 = (const char *)v278;
                  v284 = *((_QWORD *)v201 + 252);
                  if ( v278 < v280 )
                  {
                    do
                    {
                      _mm_prefetch(v283, 0);
                      v283 += 64;
                    }
                    while ( (unsigned __int64)v283 < v280 );
                  }
                  v285 = *((_QWORD *)v201 + 252);
                  v286 = (unsigned int)v174 >> 7;
                  if ( (unsigned int)v174 >> 7 )
                  {
                    do
                    {
                      v287 = 8LL;
                      do
                      {
                        v288 = v285 ^ *v281;
                        v289 = v281[1];
                        v281 += 2;
                        v285 = __ROL8__(__ROL8__(v288, v282) ^ v289, v282);
                        --v287;
                      }
                      while ( v287 );
                      v290 = (__ROL8__(v284 ^ ((unsigned __int64)v281 - v278), 17) ^ v284 ^ ((unsigned __int64)v281
                                                                                           - v278))
                           * (unsigned __int128)0x7010008004002001uLL;
                      v361 = *((_QWORD *)&v290 + 1);
                      v282 = ((unsigned __int8)v290 ^ (unsigned __int8)(BYTE8(v290) ^ v282)) & 0x3F;
                      if ( !v282 )
                        LOBYTE(v282) = 1;
                      --v286;
                    }
                    while ( v286 );
                    v201 = (_BYTE *)v337;
                    v273 = v332;
                  }
                  v174 &= 0x7Fu;
                  if ( (unsigned int)v174 >= 8 )
                  {
                    v291 = (unsigned __int64)(unsigned int)v174 >> 3;
                    do
                    {
                      v285 = __ROL8__(*v281++ ^ v285, v282);
                      v174 = (unsigned int)(v174 - 8);
                      --v291;
                    }
                    while ( v291 );
                  }
                  if ( (_DWORD)v174 )
                  {
                    do
                    {
                      v292 = *(unsigned __int8 *)v281;
                      v281 = (_QWORD *)((char *)v281 + 1);
                      v285 = __ROL8__(v292 ^ v285, v282);
                      v135 = (_DWORD)v174 == 1;
                      v174 = (unsigned int)(v174 - 1);
                    }
                    while ( !v135 );
                  }
                  v293 = v285 >> 7;
                  v248 = 0;
                  while ( v293 )
                  {
                    LOBYTE(v285) = v293 ^ v285;
                    v293 >>= 7;
                  }
                  v247 = v371;
                  v275 = v285 & 0x7F;
                  v272 = v331;
LABEL_448:
                  v274 = v328;
                }
                v327 += 3;
                v272 += 3;
                *v274 = v275;
                v271 = v333;
                v274 = ++v328;
                v331 = v272;
                if ( v272 != v333 )
                {
                  v273 = v272[1];
                  v332 = v273;
                }
              }
              while ( v273 <= v247 );
            }
            goto LABEL_452;
          }
        }
        if ( !v253 )
          goto LABEL_411;
LABEL_452:
        v216 = v327;
LABEL_453:
        v294 = v326;
        if ( !v220 && v249 != v247 )
        {
          v295 = v345;
          v296 = v329 + v249;
          v297 = &v348;
          v326[3] = v249;
          v174 = v247 - v249;
          v294[4] = v247;
          v298 = v296 + v174;
          v299 = 0;
          while ( v296 >= *v297 + *v295 || v298 <= *v297 )
          {
            ++v299;
            ++v297;
            ++v295;
            if ( v299 >= 6 )
            {
              *((_DWORD *)v201 + 508) += v174;
              v300 = (_QWORD *)v296;
              v301 = *((_DWORD *)v201 + 503);
              v302 = (const char *)v296;
              v303 = *((_QWORD *)v201 + 252);
              if ( v296 < v298 )
              {
                do
                {
                  _mm_prefetch(v302, 0);
                  v302 += 64;
                }
                while ( (unsigned __int64)v302 < v298 );
              }
              v304 = *((_QWORD *)v201 + 252);
              v305 = (unsigned int)v174 >> 7;
              if ( (unsigned int)v174 >> 7 )
              {
                do
                {
                  v306 = 8LL;
                  do
                  {
                    v307 = *v300 ^ v304;
                    v308 = v300 + 1;
                    v309 = *v308 ^ __ROL8__(v307, v301);
                    v300 = v308 + 1;
                    v304 = __ROL8__(v309, v301);
                    --v306;
                  }
                  while ( v306 );
                  v310 = (__ROL8__(v303 ^ ((unsigned __int64)v300 - v296), 17) ^ v303 ^ ((unsigned __int64)v300 - v296))
                       * (unsigned __int128)0x7010008004002001uLL;
                  v362 = *((_QWORD *)&v310 + 1);
                  v301 = ((unsigned __int8)v310 ^ (unsigned __int8)(BYTE8(v310) ^ v301)) & 0x3F;
                  if ( !v301 )
                    LOBYTE(v301) = 1;
                  --v305;
                }
                while ( v305 );
                v216 = v327;
              }
              v174 &= 0x7Fu;
              if ( (unsigned int)v174 >= 8 )
              {
                v311 = (unsigned __int64)(unsigned int)v174 >> 3;
                do
                {
                  v304 = __ROL8__(*v300++ ^ v304, v301);
                  v174 = (unsigned int)(v174 - 8);
                  --v311;
                }
                while ( v311 );
              }
              if ( (_DWORD)v174 )
              {
                do
                {
                  v312 = *(unsigned __int8 *)v300;
                  v300 = (_QWORD *)((char *)v300 + 1);
                  v304 = __ROL8__(v312 ^ v304, v301);
                  v135 = (_DWORD)v174 == 1;
                  v174 = (unsigned int)(v174 - 1);
                }
                while ( !v135 );
              }
              for ( n = v304; ; LODWORD(v304) = n ^ v304 )
              {
                n >>= 31;
                if ( !n )
                  break;
              }
              v294 = v326;
              v247 = v371;
              v326[5] = v304 & 0x7FFFFFFF;
              break;
            }
          }
        }
        if ( v216 != v333 && *v216 >= (unsigned int)v330 && v216[1] <= v247 )
        {
          v314 = v331;
          if ( v331 != v333 )
          {
            v315 = v328;
            *v328 = 0x80;
            v328 = v315 + 1;
            v331 = v314 + 3;
          }
          v216 += 3;
          v327 = v216;
        }
        v215 = v294 + 6;
        v196 = v335 + 40;
        v326 = v215;
        v335 += 40LL;
        if ( v215 == v339 )
        {
          v58 = v334;
          goto LABEL_485;
        }
      }
      if ( *(_DWORD *)(v196 + 4) == 1195525195 )
        goto LABEL_346;
LABEL_341:
      if ( v221 == 1095914053 && *(_WORD *)(v196 + 4) == 16724 )
        goto LABEL_346;
      goto LABEL_343;
    }
    break;
  }
  if ( *v175 >= v182 && v184 <= v183 )
  {
    v185 = v175[2];
    if ( (v185 & 1) != 0 || (*(_BYTE *)(v185 + v111) & 0x20) != 0 )
    {
      v186 = v180[2];
      v187 = v180[1];
      if ( v186 <= *v180 )
        v186 = *v180;
      v188 = v187 + v186;
      v189 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, unsigned __int64))v58 + 129))(
                               v175,
                               v329,
                               v172);
      v191 = v189;
      if ( *v189 < v187 || v189[1] > v188 )
      {
        v192 = v329;
        if ( (*((_DWORD *)v58 + 598) & 0x200000) == 0 )
          KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v329, ((_DWORD)v189 - (_DWORD)v329) | 0x80000000, 0LL);
        if ( !*((_DWORD *)v58 + 560) )
        {
          *((_QWORD *)v58 + 282) = 0LL;
          *((_QWORD *)v58 + 283) = 271LL;
          *((_QWORD *)v58 + 281) = v58 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v58 + 284) = v192;
          *((_DWORD *)v58 + 560) = 1;
          sub_140AD049C(v58, 0LL, v192, v190);
        }
      }
      v193 = (unsigned int *)(*((__int64 (__fastcall **)(unsigned int *, ULONG_PTR, ULONG_PTR))v58 + 130))(
                               v191,
                               v329,
                               v329 + *v191);
      if ( *v193 >= v187 && v193[1] <= v188 )
      {
        v111 = v329;
      }
      else
      {
        v111 = v329;
        v194 = ((_DWORD)v193 - v329) | 0x80000000;
        if ( (*((_DWORD *)v58 + 598) & 0x200000) == 0 )
          KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v329, v194, 0LL);
        if ( !*((_DWORD *)v58 + 560) )
        {
          *((_QWORD *)v58 + 282) = 0LL;
          *((_QWORD *)v58 + 283) = 271LL;
          *((_QWORD *)v58 + 281) = v58 - 0x5C5FC0A76E374B18LL;
          *((_QWORD *)v58 + 284) = v111;
          *((_DWORD *)v58 + 560) = 1;
          sub_140AD049C(v58, 0LL, v172, v174);
        }
      }
      v182 = v330;
      v178 = v333;
    }
    v175 += 3;
    if ( v175 == v178 )
      goto LABEL_281;
    goto LABEL_260;
  }
  if ( (*((_DWORD *)v58 + 598) & 0x200000) == 0 )
    KeBugCheckEx(__ROR4__(664797184, 149), 0xAuLL, v111, 2uLL, 0LL);
  if ( !*((_DWORD *)v58 + 560) )
  {
    v197 = v58 - 0x5C5FC0A76E374B18LL;
    goto LABEL_292;
  }
LABEL_246:
  v34 = -1073741701;
LABEL_301:
  v113 = a1;
  v58 = v325;
  *a1 = v325;
  if ( v34 < 0 )
  {
LABEL_302:
    if ( v34 != -1073741554 )
      return (unsigned int)v34;
  }
LABEL_487:
  if ( (a3 & 0x80000004) != 0x80000004 )
  {
    v316 = v346;
    v317 = (*((__int64 (__fastcall **)(__int64))v58 + 61))(v346);
    v318 = *(unsigned int *)(v317 + 148);
    if ( (unsigned int)v318 >= 0x14 )
    {
      v319 = *(unsigned int *)(v317 + 144);
      v320 = v316 + v319 + v318;
      for ( ii = v319 + v316; ii != v320; ii += 20LL )
      {
        if ( !*(_DWORD *)(ii + 12) )
          break;
        v322 = *(unsigned int *)(ii + 16);
        if ( !(_DWORD)v322 )
          break;
        v323 = *(_QWORD *)(v322 + v316);
        if ( v323 )
        {
          result = sub_140ACD048(&v325, v323, a3 & 0x7FFFFFEF | 0x80000000);
          *v113 = v325;
          if ( (((_DWORD)result + 0x80000000) & 0x80000000) == 0 && (_DWORD)result != -1073741554 )
            return result;
        }
      }
    }
  }
  return 0LL;
}
