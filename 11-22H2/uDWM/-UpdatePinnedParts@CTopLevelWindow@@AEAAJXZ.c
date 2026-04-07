/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x18002DD30
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002ADE0 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ @ 0x1800257A0 (-GetShadowMargins@CWindowBorder@@QEAA-AU_MARGINS@@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x18005D948 (IsOpenThemeDataPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800AC7E0 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800AC8B0 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v2; // eax
  int v4; // ecx
  int v5; // esi
  int v6; // r13d
  int v7; // edi
  LONG v8; // eax
  __int64 v9; // rcx
  int v10; // r13d
  __int64 v11; // rax
  char v12; // bl
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rcx
  int v16; // r9d
  int v17; // ebx
  __int64 v18; // rdx
  double v19; // xmm1_8
  int v20; // r8d
  int v21; // edx
  int v22; // ecx
  LONG v23; // esi
  int v24; // eax
  int v25; // r14d
  int v26; // eax
  int v27; // r9d
  int v28; // eax
  int v29; // r12d
  int v30; // r13d
  int v31; // r11d
  __int64 v32; // rax
  int v33; // r13d
  int v34; // edi
  int cxLeftWidth; // ecx
  __int64 v36; // rax
  int cxRightWidth; // ecx
  __int64 v38; // rax
  int cyTopHeight; // ecx
  __int64 v40; // rax
  CWindowBorder *v41; // rcx
  struct _MARGINS v42; // xmm0
  LONG cx; // r10d
  int v44; // ecx
  int v45; // r8d
  int v46; // edx
  int v47; // ecx
  CAtlasedImage **v48; // rbx
  LONG *v49; // rdi
  struct _MARGINS *v50; // rsi
  __int64 v51; // r14
  struct _MARGINS *ShadowMargins; // rax
  CAtlasedImage *v54; // rcx
  CAtlasedImage *v55; // rcx
  int v56; // [rsp+20h] [rbp-E0h]
  int v57; // [rsp+20h] [rbp-E0h]
  int v58; // [rsp+24h] [rbp-DCh]
  int v59; // [rsp+24h] [rbp-DCh]
  int v60; // [rsp+2Ch] [rbp-D4h]
  struct tagSIZE v61[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v62; // [rsp+40h] [rbp-C0h]
  int v63; // [rsp+44h] [rbp-BCh]
  int v64; // [rsp+48h] [rbp-B8h]
  int v65; // [rsp+4Ch] [rbp-B4h]
  int cyBottomHeight; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v67; // [rsp+58h] [rbp-A8h] BYREF
  struct tagSIZE v68; // [rsp+68h] [rbp-98h] BYREF
  struct _MARGINS v69; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v70[17]; // [rsp+80h] [rbp-80h] BYREF
  int v71; // [rsp+C4h] [rbp-3Ch]
  int v72; // [rsp+C8h] [rbp-38h]
  int v73; // [rsp+CCh] [rbp-34h]
  int v74; // [rsp+D0h] [rbp-30h]
  int v75; // [rsp+D4h] [rbp-2Ch]
  int v76; // [rsp+D8h] [rbp-28h]
  int v77; // [rsp+DCh] [rbp-24h]
  int v78; // [rsp+E0h] [rbp-20h]
  int v79; // [rsp+E4h] [rbp-1Ch]
  LONG v80; // [rsp+E8h] [rbp-18h]
  int v81; // [rsp+ECh] [rbp-14h]
  int v82; // [rsp+F0h] [rbp-10h]
  int v83; // [rsp+F4h] [rbp-Ch]
  int v84; // [rsp+F8h] [rbp-8h]
  int v85; // [rsp+FCh] [rbp-4h]
  int v86; // [rsp+100h] [rbp+0h]
  int v87; // [rsp+104h] [rbp+4h]
  int v88; // [rsp+108h] [rbp+8h]
  int v89; // [rsp+10Ch] [rbp+Ch]
  int v90; // [rsp+110h] [rbp+10h]
  int v91; // [rsp+114h] [rbp+14h]
  int v92; // [rsp+118h] [rbp+18h]
  int v93; // [rsp+11Ch] [rbp+1Ch]
  int v94; // [rsp+120h] [rbp+20h]
  int v95; // [rsp+124h] [rbp+24h]
  int v96; // [rsp+128h] [rbp+28h]
  int v97; // [rsp+12Ch] [rbp+2Ch]
  int v98; // [rsp+130h] [rbp+30h]
  int v99; // [rsp+134h] [rbp+34h]
  LONG v100; // [rsp+138h] [rbp+38h]
  int v101; // [rsp+13Ch] [rbp+3Ch]
  int v102; // [rsp+140h] [rbp+40h]
  int v103; // [rsp+144h] [rbp+44h]
  LONG v104; // [rsp+148h] [rbp+48h]
  int v105; // [rsp+14Ch] [rbp+4Ch]
  LONG v106; // [rsp+150h] [rbp+50h]
  int v107; // [rsp+154h] [rbp+54h]
  int v108; // [rsp+158h] [rbp+58h]
  int v109; // [rsp+15Ch] [rbp+5Ch]
  int v110; // [rsp+160h] [rbp+60h]
  int v111; // [rsp+164h] [rbp+64h]
  LONG v112; // [rsp+168h] [rbp+68h]
  int v113; // [rsp+16Ch] [rbp+6Ch]
  int v114; // [rsp+170h] [rbp+70h]
  int v115; // [rsp+174h] [rbp+74h]
  int v116; // [rsp+178h] [rbp+78h]
  int v117; // [rsp+17Ch] [rbp+7Ch]
  LONG v118; // [rsp+180h] [rbp+80h]
  int v119; // [rsp+184h] [rbp+84h]
  int v120; // [rsp+188h] [rbp+88h]
  int v121; // [rsp+18Ch] [rbp+8Ch]
  LONG v122; // [rsp+190h] [rbp+90h]
  int v123; // [rsp+194h] [rbp+94h]
  LONG v124; // [rsp+198h] [rbp+98h]
  int v125; // [rsp+19Ch] [rbp+9Ch]
  int v126; // [rsp+1A0h] [rbp+A0h]
  int v127; // [rsp+1A4h] [rbp+A4h]
  int v128; // [rsp+1A8h] [rbp+A8h]
  int v129; // [rsp+1ACh] [rbp+ACh]
  LONG v130; // [rsp+1B0h] [rbp+B0h]
  int v131; // [rsp+1B4h] [rbp+B4h]
  int v132; // [rsp+1B8h] [rbp+B8h]
  int v133; // [rsp+1BCh] [rbp+BCh]
  LONG v134; // [rsp+1C0h] [rbp+C0h]
  int v135; // [rsp+1C4h] [rbp+C4h]
  int v136; // [rsp+1C8h] [rbp+C8h]
  int v137; // [rsp+1CCh] [rbp+CCh]
  int v138; // [rsp+1D0h] [rbp+D0h]
  int v139; // [rsp+1D4h] [rbp+D4h]
  int v140; // [rsp+1D8h] [rbp+D8h]
  int v141; // [rsp+1DCh] [rbp+DCh]
  int v142; // [rsp+1E0h] [rbp+E0h]
  int v143; // [rsp+1E4h] [rbp+E4h]
  int v144; // [rsp+1E8h] [rbp+E8h]
  int v145; // [rsp+1ECh] [rbp+ECh]
  int v146; // [rsp+1F0h] [rbp+F0h]
  int v147; // [rsp+1F4h] [rbp+F4h]
  int v148; // [rsp+1F8h] [rbp+F8h]
  int v149; // [rsp+1FCh] [rbp+FCh]
  int v150; // [rsp+200h] [rbp+100h]
  int v151; // [rsp+204h] [rbp+104h]
  int v152; // [rsp+208h] [rbp+108h]
  int v153; // [rsp+20Ch] [rbp+10Ch]
  LONG v154; // [rsp+210h] [rbp+110h]
  int v155; // [rsp+214h] [rbp+114h]
  int v156; // [rsp+218h] [rbp+118h]
  int v157; // [rsp+21Ch] [rbp+11Ch]
  int v158; // [rsp+220h] [rbp+120h]
  int v159; // [rsp+224h] [rbp+124h]
  LONG v160; // [rsp+228h] [rbp+128h]
  int v161; // [rsp+22Ch] [rbp+12Ch]
  int v162; // [rsp+230h] [rbp+130h]
  int v163; // [rsp+234h] [rbp+134h]
  int v164; // [rsp+238h] [rbp+138h]
  int v165; // [rsp+23Ch] [rbp+13Ch]
  LONG v166; // [rsp+240h] [rbp+140h]
  int v167; // [rsp+244h] [rbp+144h]
  int v168; // [rsp+248h] [rbp+148h]
  int v169; // [rsp+24Ch] [rbp+14Ch]
  int v170; // [rsp+250h] [rbp+150h]
  int v171; // [rsp+254h] [rbp+154h]
  int v172; // [rsp+258h] [rbp+158h]
  int v173; // [rsp+25Ch] [rbp+15Ch]
  int v174; // [rsp+260h] [rbp+160h]
  int v175; // [rsp+264h] [rbp+164h]
  int v176; // [rsp+268h] [rbp+168h]
  int v177; // [rsp+26Ch] [rbp+16Ch]
  int v178; // [rsp+270h] [rbp+170h]
  int v179; // [rsp+274h] [rbp+174h]
  int v180; // [rsp+278h] [rbp+178h]
  int v181; // [rsp+27Ch] [rbp+17Ch]

  v1 = *(__m128i *)((char *)this + 660);
  v2 = *((_DWORD *)this + 161);
  v4 = *((_DWORD *)this + 162);
  v5 = _mm_cvtsi128_si32(v1);
  v6 = *((_DWORD *)this + 164);
  v7 = *((_DWORD *)this + 156);
  v56 = v2 - v5;
  *(__m128i *)&v61[0].cx = v1;
  v8 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v58 = v4 - v1.m128i_i32[1];
  v9 = (unsigned int)(*((_DWORD *)this + 163) - v8);
  v68.cx = v8;
  v62 = v9;
  v10 = v6 - _mm_srli_si128(v1, 8).m128i_i32[1];
  v11 = *((_QWORD *)this + 94);
  v67 = 0LL;
  v12 = *(_BYTE *)(v11 + 675);
  IsOpenThemeDataPresent(v9);
  v13 = v12 & 0x10;
  if ( (v7 & 0x20) != 0 )
  {
    if ( v13 || (v7 & 0x40) != 0 )
      v15 = 2LL;
    else
      v15 = 3LL;
  }
  else
  {
    if ( v13 || (v7 & 0x40) != 0 )
    {
      v14 = 4LL;
      v15 = 0LL;
    }
    else
    {
      v14 = 5LL;
      v15 = 1LL;
    }
    if ( (v7 & 2) != 0 )
      v15 = v14;
  }
  v16 = 0;
  v17 = 0;
  v18 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v15);
  if ( v18 )
  {
    v19 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 53);
    v16 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v18 + 1480) + 24LL) - 1) * v19);
    v17 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v18 + 1624) + 24LL) - 1) * v19);
  }
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *((_DWORD *)this + 157) - v16 >= 0 )
    v20 = *((_DWORD *)this + 157) - v16;
  v23 = v20 + v5;
  v24 = *((_DWORD *)this + 158) - v16;
  v61[0].cx = v23;
  if ( v24 >= 0 )
    v21 = v24;
  v25 = v21 + v61[0].cy;
  v26 = *((_DWORD *)this + 160) - v16;
  v61[0].cy += v21;
  v27 = v56;
  if ( v26 >= 0 )
    v22 = v26;
  v28 = v58 - v21;
  v29 = v22 + v61[1].cy;
  v61[1].cy += v22;
  v30 = v10 - v22;
  v57 = v56 - v20;
  v59 = v58 - v21;
  v60 = v30;
  if ( v27 - v20 < 0 )
    v57 = 0;
  if ( v28 < 0 )
    v59 = 0;
  if ( v30 < 0 )
  {
    v31 = 0;
    v60 = 0;
  }
  else
  {
    v31 = v30;
  }
  v32 = *((_QWORD *)this + 61);
  v33 = v17 + v61[0].cy;
  v34 = v17 + v61[1].cy;
  v61[0].cx = v17 + v61[1].cx;
  if ( v32 )
  {
    cxLeftWidth = *(_DWORD *)(v32 + 24);
    v67.cxLeftWidth = cxLeftWidth;
  }
  else
  {
    cxLeftWidth = v67.cxLeftWidth;
  }
  v36 = *((_QWORD *)this + 62);
  v63 = cxLeftWidth;
  if ( v36 )
  {
    cxRightWidth = *(_DWORD *)(v36 + 24);
    v67.cxRightWidth = cxRightWidth;
  }
  else
  {
    cxRightWidth = v67.cxRightWidth;
  }
  v38 = *((_QWORD *)this + 63);
  v64 = cxRightWidth;
  if ( v38 )
  {
    cyTopHeight = *(_DWORD *)(v38 + 28);
    v67.cyTopHeight = cyTopHeight;
  }
  else
  {
    cyTopHeight = v67.cyTopHeight;
  }
  v40 = *((_QWORD *)this + 64);
  v65 = cyTopHeight;
  if ( v40 )
  {
    cyBottomHeight = *(_DWORD *)(v40 + 28);
    v67.cyBottomHeight = cyBottomHeight;
  }
  else
  {
    cyBottomHeight = v67.cyBottomHeight;
  }
  v41 = (CWindowBorder *)*((_QWORD *)this + 34);
  if ( *((_QWORD *)v41 + 31) )
  {
    ShadowMargins = CWindowBorder::GetShadowMargins(v41, &v67);
    v31 = v60;
    v42 = *ShadowMargins;
  }
  else
  {
    v42 = v67;
  }
  cx = v68.cx;
  v44 = v62;
  v70[0] = v57;
  v70[12] = v59;
  *(struct _MARGINS *)((char *)this + 692) = v42;
  v45 = *((_DWORD *)this + 161);
  v46 = *((_DWORD *)this + 162);
  v71 = *((_DWORD *)this + 164);
  v77 = v71;
  v78 = v59;
  v96 = v59;
  v70[1] = v44;
  v70[7] = v44;
  v70[13] = v44;
  v47 = *((_DWORD *)this + 163);
  v103 = v62;
  v70[16] = v47;
  v76 = v47;
  v110 = v17 + v23;
  v69.cxLeftWidth = v23;
  v69.cxRightWidth = 0x7FFFFFFF;
  v69.cyTopHeight = cx;
  v69.cyBottomHeight = 0x7FFFFFFF;
  v70[2] = v45;
  v70[3] = v46;
  v70[4] = cx;
  v70[5] = 0x7FFFFFFF;
  v70[6] = 0x7FFFFFFF;
  v70[8] = 0x7FFFFFFF;
  v70[9] = v25;
  v70[10] = cx;
  v70[11] = 0x7FFFFFFF;
  v70[14] = v23;
  v70[15] = 0x7FFFFFFF;
  v72 = v57;
  v73 = 0x7FFFFFFF;
  v74 = 0x7FFFFFFF;
  v75 = v25;
  v79 = 0x7FFFFFFF;
  v80 = v23;
  v81 = 0x7FFFFFFF;
  v82 = 0x7FFFFFFF;
  v83 = v29;
  v84 = v57;
  v85 = v31;
  v86 = v45;
  v87 = v46;
  v88 = 0x7FFFFFFF;
  v89 = v29;
  v90 = 0x7FFFFFFF;
  v91 = v31;
  v92 = 0x7FFFFFFF;
  v93 = v25;
  v94 = 0x7FFFFFFF;
  v95 = v29;
  v97 = v31;
  v98 = v45;
  v99 = v46;
  v100 = cx;
  v101 = 0x7FFFFFFF;
  v102 = 0x7FFFFFFF;
  v104 = v23;
  v105 = 0x7FFFFFFF;
  v106 = cx;
  v107 = 0x7FFFFFFF;
  v108 = v17;
  v109 = v17;
  v111 = v33;
  v112 = cx;
  v113 = 0x7FFFFFFF;
  v114 = 0x7FFFFFFF;
  v115 = v17;
  v116 = 0x7FFFFFFF;
  v140 = v17 + v23;
  v152 = v17 + v23;
  v162 = v63;
  v122 = v23;
  v134 = v23;
  v117 = v25;
  v129 = v25;
  v147 = v25;
  v168 = v64;
  v118 = cx;
  v160 = cx;
  v166 = cx;
  v175 = v65;
  v137 = v29;
  v143 = v29;
  v149 = v29;
  v161 = v29;
  v167 = v29;
  v120 = v17;
  v121 = v17;
  v125 = v34;
  v126 = v17;
  v131 = v34;
  v132 = v17;
  v138 = v17;
  v139 = v17;
  v145 = v17;
  v150 = v17;
  v151 = v17;
  v48 = (CAtlasedImage **)((char *)this + 344);
  v155 = v34;
  v49 = v70;
  v158 = v23 - v63;
  v165 = v25 - v64;
  v170 = v23 - v63;
  v171 = v25 - v64;
  v176 = v23 - v63;
  v50 = &v69;
  v177 = v25 - v64;
  v51 = 22LL;
  v179 = v29 - cyBottomHeight;
  v119 = 0x7FFFFFFF;
  v123 = 0x7FFFFFFF;
  v124 = v61[0].cx;
  v127 = 0x7FFFFFFF;
  v128 = 0x7FFFFFFF;
  v130 = v61[0].cx;
  v133 = 0x7FFFFFFF;
  v135 = 0x7FFFFFFF;
  v136 = 0x7FFFFFFF;
  v141 = v33;
  v142 = 0x7FFFFFFF;
  v144 = 0x7FFFFFFF;
  v146 = 0x7FFFFFFF;
  v148 = 0x7FFFFFFF;
  v153 = v33;
  v154 = v61[0].cx;
  v156 = 0x7FFFFFFF;
  v157 = 0x7FFFFFFF;
  v159 = 0x7FFFFFFF;
  v163 = 0x7FFFFFFF;
  v164 = 0x7FFFFFFF;
  v169 = 0x7FFFFFFF;
  v172 = cx - v65;
  v173 = 0x7FFFFFFF;
  v174 = 0x7FFFFFFF;
  v178 = 0x7FFFFFFF;
  v180 = 0x7FFFFFFF;
  v181 = cyBottomHeight;
  do
  {
    if ( *v48 )
    {
      CAtlasedImage::SetInsetFromParent(*v48, v50);
      if ( *v49 != 0x7FFFFFFF )
      {
        v54 = *v48;
        v61[0].cx = *v49;
        v61[0].cy = *((_DWORD *)v54 + 7);
        CAtlasedImage::SetSize(v54, v61);
      }
      if ( v49[1] != 0x7FFFFFFF )
      {
        v55 = *v48;
        v68.cy = v49[1];
        v68.cx = *((_DWORD *)v55 + 6);
        CAtlasedImage::SetSize(v55, &v68);
      }
    }
    v50 = (struct _MARGINS *)((char *)v50 + 24);
    ++v48;
    v49 += 6;
    --v51;
  }
  while ( v51 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 38) + 24LL))(*((_QWORD *)this + 38), 4096LL);
  return 0LL;
}
