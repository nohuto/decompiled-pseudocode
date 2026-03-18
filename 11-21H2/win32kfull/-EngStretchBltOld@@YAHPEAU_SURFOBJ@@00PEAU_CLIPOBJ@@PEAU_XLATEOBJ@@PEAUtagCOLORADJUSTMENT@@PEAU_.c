/*
 * XREFs of ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C028C190
 * Callers:
 *     EngStretchBlt @ 0x1C002FB50 (EngStretchBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C0008914 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C0009024 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C002AF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z @ 0x1C002F66C (-StretchDIBDirect@@YAHPEAXJKKPEAU_RECTL@@0JKK111K@Z.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C0031090 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C008E0D4 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngHTBlt @ 0x1C009247C (EngHTBlt.c)
 *     ?vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z @ 0x1C00DF6A0 (-vInitStrDDA@@YAXPEAU_STRDDA@@PEAU_RECTL@@11@Z.c)
 *     ?vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z @ 0x1C00F624C (-vInitBuffer@@YAXPEAU_XRUNLEN@@PEAU_RECTL@@K@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x1C0106F1C (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x1C015D508 (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C015D534 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015DC78 (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     ?MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z @ 0x1C02A0698 (-MulCopyDeviceToDIB@@YAHPEAU_SURFOBJ@@PEAVSURFMEM@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall EngStretchBltOld(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct tagCOLORADJUSTMENT *a6,
        struct _POINTL *a7,
        struct _RECTL *a8,
        struct _RECTL *a9,
        struct _POINTL *a10,
        unsigned int a11,
        int *a12)
{
  struct _SURFOBJ *v12; // r10
  struct _SURFOBJ *v13; // r11
  struct tagCOLORADJUSTMENT *v14; // r9
  struct _RECTL *v15; // r12
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // eax
  struct _SURFOBJ *v19; // rdi
  __int64 v20; // rbx
  __int64 v21; // r15
  unsigned int v22; // r14d
  int v23; // eax
  __int64 v24; // rdx
  unsigned int v25; // ecx
  int v26; // eax
  int v27; // r11d
  LONG bottom; // eax
  LONG top; // r10d
  LONG v30; // r8d
  LONG right; // eax
  LONG left; // r9d
  LONG v33; // edx
  int v34; // eax
  int v35; // edx
  struct _SURFOBJ *v36; // rax
  LONG v37; // ecx
  LONG v38; // eax
  SIZEL v39; // r13
  LONG v40; // r9d
  int v41; // ecx
  LONG v42; // r8d
  LONG v43; // edx
  LONG v44; // edx
  SURFOBJ *v45; // rax
  int v46; // eax
  unsigned int (__fastcall *hdev)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD); // rax
  LONG v48; // ecx
  LONG v49; // eax
  struct _RECTL *v50; // rcx
  int v51; // eax
  BOOL (__stdcall *dhpdev)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r13
  unsigned __int64 v53; // rbx
  int v54; // eax
  BOOL (__stdcall *v55)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  unsigned __int64 v56; // r9
  __int64 v57; // r8
  int v58; // eax
  int v59; // ecx
  __int64 v60; // rcx
  int v61; // r8d
  LONG v62; // r11d
  int v63; // r9d
  struct _RECTL *v64; // rbx
  int v65; // ecx
  int v66; // edx
  unsigned int v67; // edx
  int v68; // ecx
  XCLIPOBJ *v69; // rdi
  int v70; // eax
  struct _RECTL *v71; // rcx
  LONG v72; // eax
  LONG v73; // ecx
  LONG v74; // edx
  LONG v75; // r8d
  unsigned int v76; // eax
  unsigned int v77; // eax
  struct _POINTL *v78; // r12
  struct _RECTL *v79; // r9
  struct _RECTL *v80; // rbx
  unsigned __int64 v81; // rcx
  unsigned int v82; // r8d
  unsigned int v83; // eax
  __int64 v84; // rcx
  HSURF v85; // rbx
  __int64 v86; // r8
  __int64 v87; // r11
  unsigned int v88; // r8d
  unsigned int v89; // r8d
  LONG v90; // r9d
  int i; // r10d
  int v92; // edx
  __int64 v93; // rax
  unsigned __int64 v94; // rbx
  XCLIPOBJ *v96; // r15
  unsigned int v97; // [rsp+70h] [rbp-3B8h]
  LONG v98; // [rsp+70h] [rbp-3B8h]
  int v99; // [rsp+74h] [rbp-3B4h]
  int v100; // [rsp+74h] [rbp-3B4h]
  int v101; // [rsp+78h] [rbp-3B0h]
  unsigned int v102; // [rsp+7Ch] [rbp-3ACh]
  unsigned int v103; // [rsp+7Ch] [rbp-3ACh]
  LONG v104; // [rsp+80h] [rbp-3A8h]
  int v105; // [rsp+80h] [rbp-3A8h]
  LONG v106; // [rsp+80h] [rbp-3A8h]
  __int64 v107; // [rsp+80h] [rbp-3A8h]
  int v108; // [rsp+88h] [rbp-3A0h]
  int v109; // [rsp+88h] [rbp-3A0h]
  __int64 v110; // [rsp+88h] [rbp-3A0h]
  __int16 v111; // [rsp+90h] [rbp-398h]
  int v112; // [rsp+90h] [rbp-398h]
  unsigned __int64 v113; // [rsp+90h] [rbp-398h]
  __int64 v114; // [rsp+98h] [rbp-390h] BYREF
  SIZEL sizl; // [rsp+A0h] [rbp-388h]
  unsigned __int64 v116; // [rsp+A8h] [rbp-380h]
  struct _SURFOBJ *v117; // [rsp+B0h] [rbp-378h]
  SIZEL v118; // [rsp+B8h] [rbp-370h] BYREF
  char v119; // [rsp+C0h] [rbp-368h]
  int v120; // [rsp+C4h] [rbp-364h]
  XCLIPOBJ *v121; // [rsp+C8h] [rbp-360h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-358h]
  BOOL (__stdcall *v123)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+D8h] [rbp-350h]
  struct _RECTL *v124; // [rsp+E0h] [rbp-348h]
  __int64 v125; // [rsp+E8h] [rbp-340h] BYREF
  char v126; // [rsp+F0h] [rbp-338h]
  int v127; // [rsp+F4h] [rbp-334h]
  unsigned __int64 v128; // [rsp+F8h] [rbp-330h]
  HSURF hsurf; // [rsp+100h] [rbp-328h]
  struct tagCOLORADJUSTMENT *v130; // [rsp+108h] [rbp-320h]
  struct _POINTL *v131; // [rsp+110h] [rbp-318h]
  struct REGION *v132[2]; // [rsp+118h] [rbp-310h] BYREF
  int v133; // [rsp+128h] [rbp-300h]
  struct _SURFOBJ *v134; // [rsp+130h] [rbp-2F8h]
  struct _RECTL *v135; // [rsp+138h] [rbp-2F0h]
  struct _SURFOBJ *v136; // [rsp+140h] [rbp-2E8h]
  struct REGION *v137[2]; // [rsp+148h] [rbp-2E0h] BYREF
  void (**v138)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *); // [rsp+158h] [rbp-2D0h]
  int v139; // [rsp+160h] [rbp-2C8h]
  unsigned __int64 v140; // [rsp+168h] [rbp-2C0h]
  _QWORD *v141; // [rsp+170h] [rbp-2B8h]
  __int64 v142; // [rsp+178h] [rbp-2B0h] BYREF
  char v143; // [rsp+180h] [rbp-2A8h]
  int v144; // [rsp+184h] [rbp-2A4h]
  unsigned __int64 v145; // [rsp+188h] [rbp-2A0h]
  struct _SURFOBJ *v146; // [rsp+190h] [rbp-298h]
  struct _CLIPOBJ *v147; // [rsp+198h] [rbp-290h]
  _DWORD v148[4]; // [rsp+1A0h] [rbp-288h] BYREF
  __int64 v149; // [rsp+1B0h] [rbp-278h]
  int v150; // [rsp+1B8h] [rbp-270h]
  int v151; // [rsp+1BCh] [rbp-26Ch]
  _DWORD v152[4]; // [rsp+1C0h] [rbp-268h] BYREF
  __int64 v153; // [rsp+1D0h] [rbp-258h]
  int v154; // [rsp+1D8h] [rbp-250h]
  int v155; // [rsp+1DCh] [rbp-24Ch]
  __int64 v156; // [rsp+1E0h] [rbp-248h] BYREF
  __int64 v157; // [rsp+1E8h] [rbp-240h] BYREF
  __int64 v158; // [rsp+1F0h] [rbp-238h] BYREF
  struct _RECTL v159; // [rsp+1F8h] [rbp-230h] BYREF
  struct _RECTL v160; // [rsp+208h] [rbp-220h] BYREF
  struct _RECTL v161; // [rsp+218h] [rbp-210h] BYREF
  struct _RECTL v162; // [rsp+228h] [rbp-200h] BYREF
  int v163; // [rsp+238h] [rbp-1F0h]
  __m128i v164; // [rsp+240h] [rbp-1E8h] BYREF
  __int128 v165; // [rsp+250h] [rbp-1D8h] BYREF
  struct _RECTL v166; // [rsp+260h] [rbp-1C8h] BYREF
  __int128 v167; // [rsp+270h] [rbp-1B8h] BYREF
  struct _RECTL v168; // [rsp+280h] [rbp-1A8h] BYREF
  struct _RECTL v169; // [rsp+290h] [rbp-198h] BYREF
  _BYTE v170[160]; // [rsp+2A0h] [rbp-188h] BYREF
  _BYTE v171[4]; // [rsp+340h] [rbp-E8h] BYREF
  char v172[156]; // [rsp+344h] [rbp-E4h] BYREF

  v121 = (XCLIPOBJ *)a4;
  v134 = a3;
  v12 = a2;
  v117 = a2;
  v13 = a1;
  v116 = (unsigned __int64)a1;
  v122 = (unsigned __int64)a5;
  v147 = a4;
  v14 = a6;
  v130 = a6;
  v131 = a7;
  v124 = a8;
  v15 = a9;
  v135 = a9;
  v141 = a10;
  v97 = a11;
  v138 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))a12;
  if ( a11 - 1 > 3 )
    return 0LL;
  v128 = (unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL);
  v145 = v128;
  v16 = (unsigned __int64)&a2[-1].pvScan0 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64);
  v140 = (unsigned __int64)&a3[-1].pvScan0 & -(__int64)(a3 != 0LL);
  *(_QWORD *)&v162.left = v140;
  if ( !v128 )
    return 0LL;
  if ( !v16 )
    return 0LL;
  v17 = *(_DWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0LL;
  v18 = *(_DWORD *)(v16 + 96);
  if ( v18 == 9 || v17 == 10 || v18 == 10 )
    return 0LL;
  if ( a9->left != a9->right && a9->top != a9->bottom && a8->left != a8->right && a8->top != a8->bottom )
  {
    v19 = *(struct _SURFOBJ **)(((unsigned __int64)&v13[-1].pvScan0 & -(__int64)(v13 != 0LL)) + 0x30);
    v136 = v19;
    v146 = v19;
    v20 = *(_QWORD *)(v16 + 48);
    v142 = 0LL;
    v143 = 0;
    v144 = 0;
    v169 = *a9;
    v21 = v16;
    v22 = 1;
    if ( v12->iType == 1 && v20 && (*(_DWORD *)(v20 + 40) & 0x20000) != 0 )
    {
      if ( !(unsigned int)MulCopyDeviceToDIB(v12, (struct SURFMEM *)&v142, &v169) )
      {
LABEL_210:
        v22 = 0;
        goto LABEL_191;
      }
      if ( !v142 )
        goto LABEL_191;
      v15 = &v169;
      v135 = &v169;
      v12 = (struct _SURFOBJ *)(v142 + 24);
      v117 = (struct _SURFOBJ *)(v142 + 24);
      v21 = v142 & -(__int64)(v142 != -24);
      v20 = *(_QWORD *)(v21 + 0x30);
      v13 = (struct _SURFOBJ *)v116;
      v14 = v130;
    }
    if ( !v122 || (v23 = 1, (*(_DWORD *)(v122 + 4) & 8) == 0) )
      v23 = 0;
    v99 = v23;
    v139 = v23;
    if ( v23 )
    {
      if ( v12->iType )
        goto LABEL_210;
      if ( v13->iType != 1 )
        goto LABEL_210;
      v24 = (__int64)v134;
      if ( v134 )
        goto LABEL_210;
    }
    else
    {
      v24 = (__int64)v134;
    }
    v25 = a11;
    if ( a11 == 4 )
    {
      if ( v23 )
        goto LABEL_210;
      v26 = EngHTBlt(
              v13,
              v12,
              v24,
              (CLIPOBJ *)v121,
              (struct XLATE *)v122,
              v14,
              (POINTL)v131,
              a8,
              (struct SURFACE *)v15,
              v141,
              0,
              0LL);
      if ( v26 == -1 )
        goto LABEL_210;
      if ( v26 )
      {
        if ( v26 != 1 )
        {
          v25 = 4;
          goto LABEL_33;
        }
LABEL_191:
        SURFMEM::~SURFMEM((SURFMEM *)&v142);
        return v22;
      }
      v25 = 3;
      v97 = 3;
    }
LABEL_33:
    v27 = 0;
    v102 = 0;
    bottom = a8->bottom;
    top = a8->top;
    v30 = bottom;
    if ( bottom < top )
    {
      v30 = a8->top;
      a8->top = bottom;
      a8->bottom = top;
      v27 = 2;
      v102 = 2;
      top = bottom;
    }
    right = a8->right;
    left = a8->left;
    v33 = right;
    if ( right < a8->left )
    {
      v33 = a8->left;
      a8->left = right;
      a8->right = left;
      v27 |= 1u;
      v102 = v27;
      left = right;
    }
    if ( v25 >= 3 || v140 )
      goto LABEL_41;
    v101 = 1;
    if ( v33 - left < v15->right - v15->left )
    {
      v25 = v97;
    }
    else
    {
      v25 = v97;
      if ( v30 - top >= v15->bottom - v15->top )
      {
LABEL_41:
        v34 = 0;
        v101 = 0;
        goto LABEL_45;
      }
    }
    v34 = 1;
LABEL_45:
    v133 = v34;
    if ( !v34 )
    {
      if ( v25 < 3 )
        v25 = 3;
      v97 = v25;
    }
    v35 = *(_DWORD *)(v128 + 112);
    if ( (v35 & 0x40000) == 0 )
    {
      if ( v122 && (*(_DWORD *)(v122 + 4) & 1) == 0 )
      {
        v36 = v117;
      }
      else
      {
        v36 = v117;
        if ( !v117->iType )
          goto LABEL_53;
      }
      if ( *(_WORD *)(v128 + 100) )
      {
        if ( (v35 & 2) != 0 && !v27 && !v134 )
        {
          v40 = v15->left;
          if ( v15->left >= 0 )
          {
            v41 = v15->top;
            if ( v41 >= 0 )
            {
              v42 = v15->right;
              if ( v42 <= v36->sizlBitmap.cx )
              {
                v43 = v15->bottom;
                if ( v43 <= v36->sizlBitmap.cy )
                {
                  v167 = 0LL;
                  v112 = v42 - v40;
                  sizl.cx = v42 - v40;
                  v44 = v43 - v41;
                  v104 = v44;
                  sizl.cy = v44;
                  if ( v42 - v40 <= a8->right - a8->left && v44 <= a8->bottom - a8->top )
                  {
                    hsurf = (HSURF)EngCreateBitmap(sizl, 0, *(_DWORD *)(v116 + 72), 0, 0LL);
                    v45 = EngLockSurface(hsurf);
                    sizl = (SIZEL)v45;
                    if ( v45 )
                    {
                      v45->iUniq = 0;
                      *((_QWORD *)&v167 + 1) = __PAIR64__(v104, v112);
                      if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
                        v46 = (*(__int64 (__fastcall **)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))(v20 + 2816))(
                                v45,
                                v117,
                                0LL,
                                v122,
                                &v167,
                                v15);
                      else
                        v46 = ((__int64 (__fastcall *)(SURFOBJ *, struct _SURFOBJ *, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))EngCopyBits)(
                                v45,
                                v117,
                                0LL,
                                v122,
                                &v167,
                                v15);
                      if ( !v46
                        || (hdev = (unsigned int (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v19[35].hdev) == 0LL
                        || !((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))hdev)(
                              v116,
                              sizl,
                              0LL,
                              v121,
                              0LL,
                              v130,
                              v131,
                              a8,
                              &v167,
                              v141,
                              v97) )
                      {
                        v22 = 0;
                      }
                      EngUnlockSurface(*(SURFOBJ **)&sizl);
                      EngDeleteSurface(hsurf);
                      goto LABEL_191;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_53:
    v118 = 0LL;
    v119 = 0;
    v120 = 0;
    v164 = 0LL;
    ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v170);
    v37 = *(_DWORD *)(v21 + 60);
    v38 = *(_DWORD *)(v21 + 56);
    *(_QWORD *)&v159.left = 0LL;
    v159.right = v38;
    v159.bottom = v37;
    v161 = 0LL;
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v132);
    v111 = *(_WORD *)(v128 + 100);
    if ( v111 || *(_QWORD *)(v128 + 32) == *(_QWORD *)(v21 + 32) )
    {
      v164 = *(__m128i *)a8;
      v105 = _mm_cvtsi128_si32(v164);
      v160.left = v105 - 1;
      v160.top = v164.m128i_i32[1] - 1;
      v108 = _mm_cvtsi128_si32(_mm_srli_si128(v164, 8));
      v160.right = v108 + 1;
      v160.bottom = _mm_srli_si128(v164, 8).m128i_i32[1] + 1;
      v39 = (SIZEL)v128;
      v48 = *(_DWORD *)(v128 + 60);
      v49 = *(_DWORD *)(v128 + 56);
      *(_QWORD *)&v166.left = 0LL;
      v166.right = v49;
      v166.bottom = v48;
      ERECTL::operator*=(&v160.left, &v166.left);
      if ( ERECTL::bEmpty((ERECTL *)&v160) )
        goto LABEL_190;
      if ( v111
        || v160.left <= v15->right && v160.right >= v15->left && v160.top <= v15->bottom && v160.bottom >= v15->top )
      {
        v164.m128i_i32[0] = v105 - v160.left;
        v164.m128i_i32[1] -= v160.top;
        v164.m128i_i32[2] = v108 - v160.left;
        v164.m128i_i32[3] -= v160.top;
        v148[3] = 0;
        v151 = 0;
        v148[1] = v160.right - v160.left + 1;
        v148[2] = v160.bottom - v160.top + 1;
        v149 = 0LL;
        if ( v99 )
          v51 = *(_DWORD *)(v21 + 96);
        else
          v51 = *(_DWORD *)(v128 + 96);
        v148[0] = v51;
        v150 = *(_DWORD *)(v128 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v118, (struct _DEVBITMAPINFO *)v148, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !*(_QWORD *)&v118 )
          goto LABEL_209;
        v114 = *(_QWORD *)&v160.left;
        if ( !v132[0] )
          goto LABEL_209;
        *(_QWORD *)&v160.left = 0LL;
        v160.right -= v114;
        v160.bottom -= HIDWORD(v114);
        RGNOBJ::vSet((RGNOBJ *)v132, &v160);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v170, v132[0], (struct ERECTL *)&v160, 1);
        v157 = *(_QWORD *)(*(_QWORD *)&v39 + 48LL);
        hsurf = (HSURF)(*(_QWORD *)&v39 + 24LL);
        PDEVOBJ::vSync((PDEVOBJ *)&v157, (struct _SURFOBJ *)(*(_QWORD *)&v39 + 24LL), 0LL, 0);
        if ( v140 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&v39 + 112LL) & 0x400) != 0 )
            dhpdev = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v19[35].dhpdev;
          else
            dhpdev = EngCopyBits;
          v123 = EngCopyBits;
          ((void (__fastcall *)(__int64, HSURF, _QWORD, XLATEOBJ *const, struct _RECTL *, __int64 *))dhpdev)(
            (*(_QWORD *)&v118 + 24LL) & -(__int64)(v118 != 0LL),
            hsurf,
            0LL,
            xloIdent,
            &v160,
            &v114);
        }
        else
        {
          v123 = EngCopyBits;
        }
        v39 = v118;
        v50 = (struct _RECTL *)&v164;
        v116 = (unsigned __int64)v170;
      }
      else
      {
        v50 = v124;
        v116 = (unsigned __int64)v121;
        v123 = EngCopyBits;
      }
      v124 = v50;
      sizl = v39;
    }
    else
    {
      v39 = (SIZEL)v128;
      sizl = (SIZEL)v128;
      v116 = (unsigned __int64)v121;
      v123 = EngCopyBits;
    }
    v158 = *(_QWORD *)(v21 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)&v158, v117, 0LL, 0);
    ERECTL::operator*=(&v159.left, &v15->left);
    if ( !ERECTL::bEmpty((ERECTL *)&v159) )
    {
      v125 = 0LL;
      v126 = 0;
      v127 = 0;
      v165 = 0LL;
      if ( v102 || *(_WORD *)(v21 + 100) || (unsigned int)(*(_DWORD *)(v21 + 96) - 7) <= 1 )
      {
        v152[3] = 0;
        v155 = 0;
        v152[1] = v159.right - v159.left;
        v152[2] = v159.bottom - v159.top;
        v153 = 0LL;
        if ( v99 )
          v54 = *(_DWORD *)(v21 + 96);
        else
          v54 = *(_DWORD *)(*(_QWORD *)&v39 + 96LL);
        v152[0] = v54;
        v154 = *(_DWORD *)(v21 + 112) & 0x40000;
        SURFMEM::bCreateDIB((SURFMEM *)&v125, (struct _DEVBITMAPINFO *)v152, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
        if ( !v125 )
          goto LABEL_208;
        DWORD2(v165) = v159.right - v159.left;
        HIDWORD(v165) = v159.bottom - v159.top;
        if ( (*(_DWORD *)(v21 + 112) & 0x400) != 0 )
          v55 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v20 + 2816);
        else
          v55 = EngCopyBits;
        v56 = 0LL;
        if ( !v99 )
          v56 = v122;
        ((void (__fastcall *)(__int64, __int64, _QWORD, unsigned __int64, __int128 *, struct _RECTL *))v55)(
          v125 + 24,
          v21 + 24,
          0LL,
          v56,
          &v165,
          &v159);
        LODWORD(v165) = v15->left - v159.left;
        DWORD1(v165) = v15->top - v159.top;
        DWORD2(v165) = v15->right - v159.left;
        HIDWORD(v165) = v15->bottom - v159.top;
        v57 = v125;
        v21 = v125;
        v130 = (struct tagCOLORADJUSTMENT *)v125;
        v15 = (struct _RECTL *)&v165;
        v135 = (struct _RECTL *)&v165;
        v113 = 0LL;
        v159.right -= v159.left;
        v58 = v159.bottom - v159.top;
        v159.bottom -= v159.top;
        *(_QWORD *)&v159.left = 0LL;
        if ( (v102 & 2) != 0 )
        {
          v59 = *(_DWORD *)(v125 + 88);
          if ( v59 <= 0 )
            *(_QWORD *)(v125 + 80) = *(_QWORD *)(v125 + 72);
          else
            *(_QWORD *)(v125 + 80) = *(_QWORD *)(v125 + 72) + v59 * (v58 - 1);
          *(_DWORD *)(v125 + 88) = -*(_DWORD *)(v125 + 88);
          v57 = v125;
        }
        if ( (v102 & 1) != 0 )
        {
          v60 = *(unsigned int *)(v57 + 96);
          if ( (unsigned int)(v60 - 1) > 5 )
            goto LABEL_208;
          ((void (__fastcall *)(__int64))(&apfnMirror)[v60])(v57);
        }
      }
      else
      {
        v130 = (struct tagCOLORADJUSTMENT *)v21;
        v53 = 0LL;
        if ( !v99 )
          v53 = v122;
        v113 = v53;
      }
      v156 = *(_QWORD *)(*(_QWORD *)&v39 + 48LL);
      PDEVOBJ::vSync((PDEVOBJ *)&v156, (struct _SURFOBJ *)(*(_QWORD *)&v39 + 24LL), 0LL, 0);
      v106 = v15->right;
      v61 = v106 - v15->left;
      if ( v61 < 128000000 )
      {
        v62 = v15->top;
        v63 = v15->bottom - v62;
        if ( v63 < 128000000 )
        {
          v64 = v124;
          v65 = v124->right - v124->left;
          if ( v65 < 128000000 )
          {
            v66 = v124->bottom - v124->top;
            if ( v66 < 128000000 && v65 > -128000000 && v66 > -128000000 )
            {
              if ( v97 == 3 && !v134 && (!v113 || (*(_DWORD *)(v113 + 4) & 1) != 0) )
              {
                v67 = *(_DWORD *)(*(_QWORD *)&v39 + 96LL);
                v68 = *(_DWORD *)(v21 + 96);
                if ( v67 == v68 && ((v68 - 3) & 0xFFFFFFFC) == 0 && v68 != 5 )
                {
                  if ( v116 && *(_BYTE *)(v116 + 20) == 3 )
                  {
                    v166 = 0LL;
                    *(_QWORD *)&v159.right = 0LL;
                    *(_QWORD *)&v159.left = 0LL;
                    v162 = 0LL;
                    v163 = 0;
                    v69 = v121;
                    XCLIPOBJ::cEnumStart(v121, 0, 0, 4u, 0);
                    do
                    {
                      v70 = XCLIPOBJ::bEnum(v69, 0x14u, (char *)&v162, 0LL);
                      v109 = v70;
                      if ( v162.left )
                      {
                        StretchDIBDirect(
                          *(char **)(*(_QWORD *)&v39 + 80LL),
                          *(_DWORD *)(*(_QWORD *)&v39 + 88LL),
                          *(_DWORD *)(*(_QWORD *)&v39 + 56LL),
                          *(_DWORD *)(*(_QWORD *)&v39 + 60LL),
                          v64,
                          *(char **)(v21 + 80),
                          *(_DWORD *)(v21 + 88),
                          *(_DWORD *)(v21 + 56),
                          *(_DWORD *)(v21 + 60),
                          v15,
                          &v166,
                          (struct _RECTL *)&v162.top,
                          *(_DWORD *)(*(_QWORD *)&v39 + 96LL));
                        ERECTL::operator+=((unsigned int *)&v159, (unsigned int *)&v166);
                        v70 = v109;
                      }
                    }
                    while ( v70 );
                    v19 = v136;
                  }
                  else
                  {
                    v71 = v124;
                    if ( v116 && *(_BYTE *)(v116 + 20) == 1 )
                      v71 = (struct _RECTL *)(v116 + 4);
                    StretchDIBDirect(
                      *(char **)(*(_QWORD *)&v39 + 80LL),
                      *(_DWORD *)(*(_QWORD *)&v39 + 88LL),
                      *(_DWORD *)(*(_QWORD *)&v39 + 56LL),
                      *(_DWORD *)(*(_QWORD *)&v39 + 60LL),
                      v124,
                      *(char **)(v21 + 80),
                      *(_DWORD *)(v21 + 88),
                      *(_DWORD *)(v21 + 56),
                      *(_DWORD *)(v21 + 60),
                      v15,
                      &v159,
                      v71,
                      v67);
                  }
                  v72 = v159.left;
                  v161 = v159;
                  v73 = v159.right;
                  v74 = v159.top;
                  v75 = v159.bottom;
LABEL_188:
                  v94 = v128;
                  if ( v39 == v128 )
                  {
LABEL_189:
                    SURFMEM::~SURFMEM((SURFMEM *)&v125);
                    goto LABEL_190;
                  }
                  v161.left = v114 + v72;
                  v161.top = HIDWORD(v114) + v74;
                  v161.right = v114 + v73;
                  v161.bottom = HIDWORD(v114) + v75;
                  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
                  if ( v137[0] )
                  {
                    v96 = v121;
                    if ( !v121 )
                    {
                      RGNOBJ::vSet((RGNOBJ *)v137, &v161);
LABEL_198:
                      v168 = (struct _RECTL)*((_OWORD *)v137[0] + 6);
                      if ( !v96 || bIntersect(&v168, (const struct _RECTL *)((char *)v96 + 4), &v168) )
                      {
                        ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v171, v137[0], (struct ERECTL *)&v168, 1);
                        if ( !ERECTL::bEmpty((ERECTL *)v172) )
                        {
                          v160.left += v114;
                          v160.top += HIDWORD(v114);
                          v160.right += v114;
                          v160.bottom += HIDWORD(v114);
                          v114 = 0LL;
                          if ( (*(_DWORD *)(v94 + 112) & 0x400) != 0 )
                            v123 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v19[35].dhpdev;
                          ((void (__fastcall *)(unsigned __int64, __int64, _BYTE *, unsigned __int64, struct _RECTL *, __int64 *))v123)(
                            v94 + 24,
                            (*(_QWORD *)&v118 + 24LL) & -(__int64)(v118 != 0LL),
                            v171,
                            v122 & -(__int64)(v139 != 0),
                            &v160,
                            &v114);
                        }
                      }
                      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
                      goto LABEL_189;
                    }
                    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v162);
                    if ( *(_QWORD *)&v162.left )
                    {
                      RGNOBJ::vSet((RGNOBJ *)&v162, &v161);
                      if ( RGNOBJ::bMerge((RGNOBJ *)v137, (struct RGNOBJ *)&v162, (XCLIPOBJ *)((char *)v96 + 56), 8u) )
                      {
                        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v162);
                        goto LABEL_198;
                      }
                    }
                    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v162);
                  }
                  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v137);
                  goto LABEL_208;
                }
              }
              if ( v106 >= v15->left && v15->bottom >= v62 )
              {
                v76 = v63 + v61;
                if ( v63 + v61 >= (unsigned int)v61 && v76 < 0x3FFFFFF5 )
                {
                  v77 = 4 * v76 + 40;
                  v78 = v77 ? (struct _POINTL *)Win32AllocPool(v77, 1752462151LL) : 0LL;
                  v131 = v78;
                  if ( v78 )
                  {
                    *(_DWORD *)v138 = 1;
                    v79 = v64;
                    v80 = v135;
                    vInitStrDDA((struct _STRDDA *)v78, &v159, v135, v79);
                    v161 = *(struct _RECTL *)&v78->x;
                    v81 = v113;
                    if ( v113 )
                    {
                      if ( (*(_BYTE *)(v113 + 4) & 1) != 0 )
                        v81 = 0LL;
                      v113 = v81;
                    }
                    if ( v116 )
                      v116 &= -(__int64)(*(_BYTE *)(v116 + 20) != 0);
                    v138 = (void (**)(struct _STRRUN *, struct _XRUNLEN *, struct SURFACE *, struct _CLIPOBJ *))(&apfnWrite)[*(unsigned int *)(*(_QWORD *)&v39 + 96LL)];
                    if ( v101 )
                      v78[2].y = (v97 != 1) - 1;
                    v117 = (struct _SURFOBJ *)*(&apfnRead + 3 * *(unsigned int *)(v21 + 96) + v97 - 1);
                    v136 = v117;
                    v82 = v161.right - v161.left;
                    if ( v80->right - v80->left <= v124->right - v124->left )
                    {
                      if ( v82 + 3 >= v82 )
                      {
                        v83 = (v82 + 3) >> 1;
                        if ( v83 < 0x15555553 )
                        {
LABEL_166:
                          v84 = 12 * (v83 + 2);
                          if ( v82 <= 0x5F5E100 && (unsigned int)v84 <= 0x2710000 )
                          {
                            v85 = (HSURF)AllocFreeTmpBuffer(v84);
                            hsurf = v85;
                            if ( v85 )
                            {
                              v86 = *(_QWORD *)(v21 + 80) + v159.top * *(_DWORD *)(v21 + 88);
                              v110 = v86;
                              v124 = 0LL;
                              if ( v134 )
                              {
                                LODWORD(v124) = *(_DWORD *)v141 + v159.left - v135->left;
                                v87 = *(_QWORD *)(v140 + 80)
                                    + *(_DWORD *)(v140 + 88) * (v159.top + *((_DWORD *)v141 + 1) - v135->top);
                              }
                              else
                              {
                                v87 = 0LL;
                              }
                              v107 = v87;
                              v103 = 0;
                              if ( v101 )
                              {
                                v88 = -1;
                                if ( v97 != 1 )
                                  v88 = 0;
                                vInitBuffer((struct _XRUNLEN *)(v85 + 2), &v161, v88);
                                v103 = v89;
                                v86 = v110;
                              }
                              *(_DWORD *)v85 = v78->y;
                              v90 = v159.top;
                              for ( i = 0; ; ++i )
                              {
                                v100 = i;
                                v98 = v90;
                                if ( v90 >= v159.bottom )
                                  break;
                                v92 = *(_DWORD *)(*(_QWORD *)&v78[3] + 4LL * i);
                                *((_DWORD *)v85 + 1) = v92;
                                if ( v92 )
                                {
                                  v93 = ((__int64 (__fastcall *)(struct _POINTL *, HSURF, __int64, __int64, unsigned __int64, LONG, LONG, _DWORD))v117)(
                                          v78,
                                          v85,
                                          v86,
                                          v87,
                                          v113,
                                          v159.left,
                                          v159.right,
                                          (_DWORD)v124);
                                  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v138)(v85, v93, v39, v116);
                                  v90 = v98;
                                  if ( v101 )
                                  {
                                    vInitBuffer((struct _XRUNLEN *)(v85 + 2), &v161, v103);
                                    v90 = v98;
                                  }
                                  i = v100;
                                  v86 = v110;
                                  v87 = v107;
                                }
                                else if ( v101 )
                                {
                                  ((void (__fastcall *)(struct _POINTL *, HSURF, __int64, _QWORD, unsigned __int64, LONG, LONG, _DWORD))v117)(
                                    v78,
                                    v85,
                                    v86,
                                    0LL,
                                    v113,
                                    v159.left,
                                    v159.right,
                                    0);
                                  v87 = v107;
                                  v86 = v110;
                                  v90 = v98;
                                  i = v100;
                                }
                                v86 += *(int *)(v21 + 88);
                                v110 = v86;
                                *(_DWORD *)v85 += *((_DWORD *)v85 + 1);
                                if ( v87 )
                                {
                                  v87 += *(int *)(*(_QWORD *)&v162.left + 88LL);
                                  v107 = v87;
                                }
                                ++v90;
                              }
                              FreeTmpBuffer(v85);
                              Win32FreePool(v78);
                              v75 = v161.bottom;
                              v73 = v161.right;
                              v74 = v161.top;
                              v72 = v161.left;
                              goto LABEL_188;
                            }
                          }
                        }
                      }
                    }
                    else if ( v82 < 0x15555553 )
                    {
                      v83 = v161.right - v161.left;
                      goto LABEL_166;
                    }
                    Win32FreePool(v78);
                  }
                }
              }
            }
          }
        }
      }
LABEL_208:
      SURFMEM::~SURFMEM((SURFMEM *)&v125);
LABEL_209:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v132);
      SURFMEM::~SURFMEM((SURFMEM *)&v118);
      goto LABEL_210;
    }
LABEL_190:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v132);
    SURFMEM::~SURFMEM((SURFMEM *)&v118);
    goto LABEL_191;
  }
  return 1LL;
}
