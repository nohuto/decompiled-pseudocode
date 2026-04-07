/*
 * XREFs of ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x180032960
 * Callers:
 *     ?UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ @ 0x18002FD80 (-UpdateNCAreaPositionsAndSizes@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x18000EA18 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x18001FE00 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?GetShadowMargins@CWindowBorder@@QEAA?AU_MARGINS@@XZ @ 0x18002A470 (-GetShadowMargins@CWindowBorder@@QEAA-AU_MARGINS@@XZ.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow::UpdatePinnedParts(CTopLevelWindow *this)
{
  __m128i v1; // xmm1
  int v2; // eax
  int v4; // ecx
  int v5; // r14d
  int v6; // edi
  int v7; // r13d
  int v8; // ecx
  __int64 v9; // rax
  char v10; // bl
  char v11; // bl
  __int64 v12; // rdx
  int v13; // r9d
  int v14; // ebx
  __int64 v15; // rdx
  double v16; // xmm1_8
  int v17; // r8d
  int v18; // edx
  int v19; // ecx
  int v20; // eax
  LONG v21; // esi
  int v22; // r14d
  int v23; // eax
  int v24; // r9d
  int v25; // eax
  int v26; // r12d
  int v27; // r11d
  __int64 v28; // rcx
  LONG cx; // r9d
  int v30; // edi
  int cxLeftWidth; // edx
  __int64 v32; // rcx
  int cxRightWidth; // edx
  __int64 v34; // rcx
  int cyTopHeight; // edx
  __int64 v36; // rcx
  int cyBottomHeight; // edx
  CWindowBorder *v38; // rcx
  struct _MARGINS *ShadowMargins; // rax
  struct _MARGINS v40; // xmm0
  int v41; // r8d
  int v42; // edx
  int v43; // ecx
  CAtlasedImage **v44; // rbx
  LONG *v45; // rdi
  struct _MARGINS *v46; // rsi
  __int64 v47; // r14
  CAtlasedImage *v49; // rcx
  CAtlasedImage *v50; // rcx
  int v51; // [rsp+20h] [rbp-E0h]
  int v52; // [rsp+20h] [rbp-E0h]
  int v53; // [rsp+24h] [rbp-DCh]
  int v54; // [rsp+24h] [rbp-DCh]
  int v55; // [rsp+28h] [rbp-D8h]
  int v56; // [rsp+28h] [rbp-D8h]
  struct tagSIZE v57[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v58; // [rsp+40h] [rbp-C0h]
  int v59; // [rsp+44h] [rbp-BCh]
  int v60; // [rsp+48h] [rbp-B8h]
  int v61; // [rsp+4Ch] [rbp-B4h]
  int v62; // [rsp+50h] [rbp-B0h]
  struct _MARGINS v63; // [rsp+58h] [rbp-A8h] BYREF
  struct tagSIZE v64; // [rsp+68h] [rbp-98h] BYREF
  struct _MARGINS v65; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v66[17]; // [rsp+80h] [rbp-80h] BYREF
  int v67; // [rsp+C4h] [rbp-3Ch]
  int v68; // [rsp+C8h] [rbp-38h]
  int v69; // [rsp+CCh] [rbp-34h]
  int v70; // [rsp+D0h] [rbp-30h]
  int v71; // [rsp+D4h] [rbp-2Ch]
  int v72; // [rsp+D8h] [rbp-28h]
  int v73; // [rsp+DCh] [rbp-24h]
  int v74; // [rsp+E0h] [rbp-20h]
  int v75; // [rsp+E4h] [rbp-1Ch]
  LONG v76; // [rsp+E8h] [rbp-18h]
  int v77; // [rsp+ECh] [rbp-14h]
  int v78; // [rsp+F0h] [rbp-10h]
  int v79; // [rsp+F4h] [rbp-Ch]
  int v80; // [rsp+F8h] [rbp-8h]
  int v81; // [rsp+FCh] [rbp-4h]
  int v82; // [rsp+100h] [rbp+0h]
  int v83; // [rsp+104h] [rbp+4h]
  int v84; // [rsp+108h] [rbp+8h]
  int v85; // [rsp+10Ch] [rbp+Ch]
  int v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+114h] [rbp+14h]
  int v88; // [rsp+118h] [rbp+18h]
  int v89; // [rsp+11Ch] [rbp+1Ch]
  int v90; // [rsp+120h] [rbp+20h]
  int v91; // [rsp+124h] [rbp+24h]
  int v92; // [rsp+128h] [rbp+28h]
  int v93; // [rsp+12Ch] [rbp+2Ch]
  int v94; // [rsp+130h] [rbp+30h]
  int v95; // [rsp+134h] [rbp+34h]
  int v96; // [rsp+138h] [rbp+38h]
  int v97; // [rsp+13Ch] [rbp+3Ch]
  int v98; // [rsp+140h] [rbp+40h]
  int v99; // [rsp+144h] [rbp+44h]
  LONG v100; // [rsp+148h] [rbp+48h]
  int v101; // [rsp+14Ch] [rbp+4Ch]
  int v102; // [rsp+150h] [rbp+50h]
  int v103; // [rsp+154h] [rbp+54h]
  int v104; // [rsp+158h] [rbp+58h]
  int v105; // [rsp+15Ch] [rbp+5Ch]
  int v106; // [rsp+160h] [rbp+60h]
  LONG v107; // [rsp+164h] [rbp+64h]
  int v108; // [rsp+168h] [rbp+68h]
  int v109; // [rsp+16Ch] [rbp+6Ch]
  int v110; // [rsp+170h] [rbp+70h]
  int v111; // [rsp+174h] [rbp+74h]
  int v112; // [rsp+178h] [rbp+78h]
  int v113; // [rsp+17Ch] [rbp+7Ch]
  int v114; // [rsp+180h] [rbp+80h]
  int v115; // [rsp+184h] [rbp+84h]
  int v116; // [rsp+188h] [rbp+88h]
  int v117; // [rsp+18Ch] [rbp+8Ch]
  LONG v118; // [rsp+190h] [rbp+90h]
  int v119; // [rsp+194h] [rbp+94h]
  LONG v120; // [rsp+198h] [rbp+98h]
  int v121; // [rsp+19Ch] [rbp+9Ch]
  int v122; // [rsp+1A0h] [rbp+A0h]
  int v123; // [rsp+1A4h] [rbp+A4h]
  int v124; // [rsp+1A8h] [rbp+A8h]
  int v125; // [rsp+1ACh] [rbp+ACh]
  LONG v126; // [rsp+1B0h] [rbp+B0h]
  int v127; // [rsp+1B4h] [rbp+B4h]
  int v128; // [rsp+1B8h] [rbp+B8h]
  int v129; // [rsp+1BCh] [rbp+BCh]
  LONG v130; // [rsp+1C0h] [rbp+C0h]
  int v131; // [rsp+1C4h] [rbp+C4h]
  int v132; // [rsp+1C8h] [rbp+C8h]
  int v133; // [rsp+1CCh] [rbp+CCh]
  int v134; // [rsp+1D0h] [rbp+D0h]
  int v135; // [rsp+1D4h] [rbp+D4h]
  int v136; // [rsp+1D8h] [rbp+D8h]
  LONG v137; // [rsp+1DCh] [rbp+DCh]
  int v138; // [rsp+1E0h] [rbp+E0h]
  int v139; // [rsp+1E4h] [rbp+E4h]
  int v140; // [rsp+1E8h] [rbp+E8h]
  int v141; // [rsp+1ECh] [rbp+ECh]
  int v142; // [rsp+1F0h] [rbp+F0h]
  int v143; // [rsp+1F4h] [rbp+F4h]
  int v144; // [rsp+1F8h] [rbp+F8h]
  int v145; // [rsp+1FCh] [rbp+FCh]
  int v146; // [rsp+200h] [rbp+100h]
  int v147; // [rsp+204h] [rbp+104h]
  int v148; // [rsp+208h] [rbp+108h]
  LONG v149; // [rsp+20Ch] [rbp+10Ch]
  LONG v150; // [rsp+210h] [rbp+110h]
  int v151; // [rsp+214h] [rbp+114h]
  int v152; // [rsp+218h] [rbp+118h]
  int v153; // [rsp+21Ch] [rbp+11Ch]
  int v154; // [rsp+220h] [rbp+120h]
  int v155; // [rsp+224h] [rbp+124h]
  int v156; // [rsp+228h] [rbp+128h]
  int v157; // [rsp+22Ch] [rbp+12Ch]
  int v158; // [rsp+230h] [rbp+130h]
  int v159; // [rsp+234h] [rbp+134h]
  int v160; // [rsp+238h] [rbp+138h]
  int v161; // [rsp+23Ch] [rbp+13Ch]
  int v162; // [rsp+240h] [rbp+140h]
  int v163; // [rsp+244h] [rbp+144h]
  int v164; // [rsp+248h] [rbp+148h]
  int v165; // [rsp+24Ch] [rbp+14Ch]
  int v166; // [rsp+250h] [rbp+150h]
  int v167; // [rsp+254h] [rbp+154h]
  int v168; // [rsp+258h] [rbp+158h]
  int v169; // [rsp+25Ch] [rbp+15Ch]
  int v170; // [rsp+260h] [rbp+160h]
  int v171; // [rsp+264h] [rbp+164h]
  int v172; // [rsp+268h] [rbp+168h]
  int v173; // [rsp+26Ch] [rbp+16Ch]
  int v174; // [rsp+270h] [rbp+170h]
  int v175; // [rsp+274h] [rbp+174h]
  int v176; // [rsp+278h] [rbp+178h]
  int v177; // [rsp+27Ch] [rbp+17Ch]

  v1 = *(__m128i *)((char *)this + 644);
  v2 = *((_DWORD *)this + 157);
  v4 = *((_DWORD *)this + 158);
  v5 = _mm_cvtsi128_si32(v1);
  v6 = *((_DWORD *)this + 152);
  v7 = _mm_cvtsi128_si32(_mm_srli_si128(v1, 8));
  v51 = v2 - v5;
  *(__m128i *)&v57[0].cx = v1;
  v53 = v4 - v1.m128i_i32[1];
  v8 = *((_DWORD *)this + 160);
  v58 = *((_DWORD *)this + 159) - v7;
  v9 = *((_QWORD *)this + 94);
  v55 = v8 - _mm_srli_si128(v1, 8).m128i_i32[1];
  v63 = 0LL;
  v10 = *(_BYTE *)(v9 + 667);
  IsOpenThemeDataPresent();
  v11 = v10 & 0x10;
  if ( (v6 & 0x20) != 0 )
  {
    if ( v11 || (v6 & 0x40) != 0 )
      v12 = 16LL;
    else
      v12 = 24LL;
  }
  else if ( v11 || (v6 & 0x40) != 0 )
  {
    v12 = 0LL;
    if ( (v6 & 2) != 0 )
      v12 = 32LL;
  }
  else if ( (v6 & 2) != 0 )
  {
    v12 = 40LL;
  }
  else
  {
    v12 = 8LL;
  }
  v13 = 0;
  v14 = 0;
  v15 = *(_QWORD *)(v12 + CTopLevelWindow::s_rgpwfWindowFrames);
  if ( v15 )
  {
    v16 = *((double *)CDesktopManager::s_pDesktopManagerInstance + 51);
    v13 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v15 + 1480) + 24LL) - 1) * v16);
    v14 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v15 + 1624) + 24LL) - 1) * v16);
  }
  v17 = 0;
  v18 = 0;
  v19 = 0;
  if ( *((_DWORD *)this + 153) - v13 >= 0 )
    v17 = *((_DWORD *)this + 153) - v13;
  if ( *((_DWORD *)this + 154) - v13 >= 0 )
    v18 = *((_DWORD *)this + 154) - v13;
  v20 = *((_DWORD *)this + 156);
  v21 = v17 + v5;
  v22 = v18 + v57[0].cy;
  v57[0].cx = v21;
  v23 = v20 - v13;
  v57[0].cy += v18;
  v24 = v51;
  if ( v23 >= 0 )
    v19 = v23;
  v25 = v53 - v18;
  v26 = v19 + v57[1].cy;
  v57[1].cy += v19;
  v27 = v55 - v19;
  v52 = v51 - v17;
  v54 = v53 - v18;
  v56 = v55 - v19;
  if ( v24 - v17 < 0 )
    v52 = 0;
  if ( v25 < 0 )
  {
    v25 = 0;
    v54 = 0;
  }
  if ( v27 < 0 )
  {
    v27 = 0;
    v56 = 0;
  }
  v28 = *((_QWORD *)this + 58);
  cx = v14 + v57[0].cy;
  v30 = v14 + v57[1].cy;
  v64.cx = v14 + v57[0].cy;
  v57[0].cx = v14 + v57[1].cx;
  if ( v28 )
  {
    cxLeftWidth = *(_DWORD *)(v28 + 24);
    v63.cxLeftWidth = cxLeftWidth;
  }
  else
  {
    cxLeftWidth = v63.cxLeftWidth;
  }
  v32 = *((_QWORD *)this + 59);
  v59 = cxLeftWidth;
  if ( v32 )
  {
    cxRightWidth = *(_DWORD *)(v32 + 24);
    v63.cxRightWidth = cxRightWidth;
  }
  else
  {
    cxRightWidth = v63.cxRightWidth;
  }
  v34 = *((_QWORD *)this + 60);
  v60 = cxRightWidth;
  if ( v34 )
  {
    cyTopHeight = *(_DWORD *)(v34 + 28);
    v63.cyTopHeight = cyTopHeight;
  }
  else
  {
    cyTopHeight = v63.cyTopHeight;
  }
  v36 = *((_QWORD *)this + 61);
  v61 = cyTopHeight;
  if ( v36 )
  {
    cyBottomHeight = *(_DWORD *)(v36 + 28);
    v63.cyBottomHeight = cyBottomHeight;
  }
  else
  {
    cyBottomHeight = v63.cyBottomHeight;
  }
  v38 = (CWindowBorder *)*((_QWORD *)this + 33);
  v62 = cyBottomHeight;
  if ( *((_QWORD *)v38 + 31) )
  {
    ShadowMargins = CWindowBorder::GetShadowMargins(v38, &v63);
    cx = v64.cx;
    v27 = v56;
    v40 = *ShadowMargins;
    v25 = v54;
  }
  else
  {
    v40 = v63;
  }
  *(struct _MARGINS *)((char *)this + 676) = v40;
  v41 = *((_DWORD *)this + 157);
  v42 = *((_DWORD *)this + 158);
  v66[12] = v25;
  v67 = *((_DWORD *)this + 160);
  v73 = v67;
  v66[0] = v52;
  v74 = v54;
  v92 = v54;
  v66[1] = v58;
  v66[7] = v58;
  v66[13] = v58;
  v43 = *((_DWORD *)this + 159);
  v99 = v58;
  v66[16] = v43;
  v72 = v43;
  v106 = v21 + v14;
  v65.cxLeftWidth = v21;
  v65.cxRightWidth = 0x7FFFFFFF;
  v65.cyTopHeight = v7;
  v65.cyBottomHeight = 0x7FFFFFFF;
  v66[2] = v41;
  v66[3] = v42;
  v66[4] = v7;
  v66[5] = 0x7FFFFFFF;
  v66[6] = 0x7FFFFFFF;
  v66[8] = 0x7FFFFFFF;
  v66[9] = v22;
  v66[10] = v7;
  v66[11] = 0x7FFFFFFF;
  v66[14] = v21;
  v66[15] = 0x7FFFFFFF;
  v68 = v52;
  v69 = 0x7FFFFFFF;
  v70 = 0x7FFFFFFF;
  v71 = v22;
  v75 = 0x7FFFFFFF;
  v76 = v21;
  v77 = 0x7FFFFFFF;
  v78 = 0x7FFFFFFF;
  v79 = v26;
  v80 = v52;
  v81 = v27;
  v82 = v41;
  v83 = v42;
  v84 = 0x7FFFFFFF;
  v85 = v26;
  v86 = 0x7FFFFFFF;
  v87 = v27;
  v88 = 0x7FFFFFFF;
  v89 = v22;
  v90 = 0x7FFFFFFF;
  v91 = v26;
  v93 = v27;
  v94 = v41;
  v95 = v42;
  v96 = v7;
  v97 = 0x7FFFFFFF;
  v98 = 0x7FFFFFFF;
  v100 = v21;
  v101 = 0x7FFFFFFF;
  v102 = v7;
  v103 = 0x7FFFFFFF;
  v104 = v14;
  v105 = v14;
  v107 = cx;
  v108 = v7;
  v109 = 0x7FFFFFFF;
  v110 = 0x7FFFFFFF;
  v111 = v14;
  v112 = 0x7FFFFFFF;
  v113 = v22;
  v114 = v7;
  v136 = v21 + v14;
  v148 = v21 + v14;
  v158 = v59;
  v118 = v21;
  v130 = v21;
  v125 = v22;
  v143 = v22;
  v164 = v60;
  v156 = v7;
  v162 = v7;
  v171 = v61;
  v133 = v26;
  v139 = v26;
  v145 = v26;
  v157 = v26;
  v163 = v26;
  v116 = v14;
  v117 = v14;
  v121 = v30;
  v122 = v14;
  v127 = v30;
  v128 = v14;
  v134 = v14;
  v135 = v14;
  v141 = v14;
  v146 = v14;
  v147 = v14;
  v44 = (CAtlasedImage **)((char *)this + 320);
  v151 = v30;
  v45 = v66;
  v154 = v21 - v59;
  v161 = v22 - v60;
  v166 = v21 - v59;
  v167 = v22 - v60;
  v172 = v21 - v59;
  v46 = &v65;
  v173 = v22 - v60;
  v47 = 22LL;
  v175 = v26 - v62;
  v115 = 0x7FFFFFFF;
  v119 = 0x7FFFFFFF;
  v120 = v57[0].cx;
  v123 = 0x7FFFFFFF;
  v124 = 0x7FFFFFFF;
  v126 = v57[0].cx;
  v129 = 0x7FFFFFFF;
  v131 = 0x7FFFFFFF;
  v132 = 0x7FFFFFFF;
  v137 = cx;
  v138 = 0x7FFFFFFF;
  v140 = 0x7FFFFFFF;
  v142 = 0x7FFFFFFF;
  v144 = 0x7FFFFFFF;
  v149 = cx;
  v150 = v57[0].cx;
  v152 = 0x7FFFFFFF;
  v153 = 0x7FFFFFFF;
  v155 = 0x7FFFFFFF;
  v159 = 0x7FFFFFFF;
  v160 = 0x7FFFFFFF;
  v165 = 0x7FFFFFFF;
  v168 = v7 - v61;
  v169 = 0x7FFFFFFF;
  v170 = 0x7FFFFFFF;
  v174 = 0x7FFFFFFF;
  v176 = 0x7FFFFFFF;
  v177 = v62;
  do
  {
    if ( *v44 )
    {
      CAtlasedImage::SetInsetFromParent(*v44, v46);
      if ( *v45 != 0x7FFFFFFF )
      {
        v49 = *v44;
        v57[0].cx = *v45;
        v57[0].cy = *((_DWORD *)v49 + 7);
        CAtlasedImage::SetSize(v49, v57);
      }
      if ( v45[1] != 0x7FFFFFFF )
      {
        v50 = *v44;
        v64.cy = v45[1];
        v64.cx = *((_DWORD *)v50 + 6);
        CAtlasedImage::SetSize(v50, &v64);
      }
    }
    v46 = (struct _MARGINS *)((char *)v46 + 24);
    ++v44;
    v45 += 6;
    --v47;
  }
  while ( v47 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 36) + 24LL))(*((_QWORD *)this + 36), 4096LL);
  return 0LL;
}
