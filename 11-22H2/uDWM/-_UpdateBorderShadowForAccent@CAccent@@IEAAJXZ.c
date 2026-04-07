/*
 * XREFs of ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800A1C00
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800404D0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A10C0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetShadowMargins@CAccent@@KA?AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z @ 0x1800A0B2C (-GetShadowMargins@CAccent@@KA-AU_MARGINS@@PEAUWindowFrame@CTopLevelWindow@@@Z.c)
 *     ?SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z @ 0x1800AC7E0 (-SetInsetFromParent@CAtlasedImage@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x1800AC8B0 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowForAccent(CAccent *this)
{
  int v1; // edi
  __int64 v3; // rbx
  struct _MARGINS *ShadowMargins; // rax
  int v5; // r10d
  __m128i v6; // xmm0
  int v7; // r11d
  int v8; // r9d
  int v9; // r8d
  unsigned __int64 v10; // rax
  __int32 v11; // r8d
  int v12; // edx
  int v13; // eax
  LONG *v14; // rdi
  __int64 v15; // r14
  CAtlasedImage **v16; // rbx
  struct _MARGINS *v17; // rsi
  CAtlasedImage *v18; // rcx
  CAtlasedImage *v19; // rcx
  struct tagSIZE v21; // [rsp+20h] [rbp-E0h] BYREF
  struct _MARGINS v22; // [rsp+28h] [rbp-D8h] BYREF
  struct _MARGINS v23; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v24[16]; // [rsp+50h] [rbp-B0h] BYREF
  int v25; // [rsp+90h] [rbp-70h]
  int v26; // [rsp+94h] [rbp-6Ch]
  int v27; // [rsp+98h] [rbp-68h]
  int v28; // [rsp+9Ch] [rbp-64h]
  int v29; // [rsp+A0h] [rbp-60h]
  int v30; // [rsp+A4h] [rbp-5Ch]
  int v31; // [rsp+A8h] [rbp-58h]
  int v32; // [rsp+ACh] [rbp-54h]
  int v33; // [rsp+B0h] [rbp-50h]
  int v34; // [rsp+B4h] [rbp-4Ch]
  int v35; // [rsp+B8h] [rbp-48h]
  int v36; // [rsp+BCh] [rbp-44h]
  int v37; // [rsp+C0h] [rbp-40h]
  int v38; // [rsp+C4h] [rbp-3Ch]
  int v39; // [rsp+C8h] [rbp-38h]
  int v40; // [rsp+CCh] [rbp-34h]
  int v41; // [rsp+D0h] [rbp-30h]
  int v42; // [rsp+D4h] [rbp-2Ch]
  int v43; // [rsp+D8h] [rbp-28h]
  int v44; // [rsp+DCh] [rbp-24h]
  int v45; // [rsp+E0h] [rbp-20h]
  int v46; // [rsp+E4h] [rbp-1Ch]
  int v47; // [rsp+E8h] [rbp-18h]
  int v48; // [rsp+ECh] [rbp-14h]
  int v49; // [rsp+F0h] [rbp-10h]
  int v50; // [rsp+F4h] [rbp-Ch]
  int v51; // [rsp+F8h] [rbp-8h]
  int v52; // [rsp+FCh] [rbp-4h]
  int v53; // [rsp+100h] [rbp+0h]
  int v54; // [rsp+104h] [rbp+4h]
  int v55; // [rsp+108h] [rbp+8h]
  int v56; // [rsp+10Ch] [rbp+Ch]
  int v57; // [rsp+110h] [rbp+10h]
  int v58; // [rsp+114h] [rbp+14h]
  int v59; // [rsp+118h] [rbp+18h]
  int v60; // [rsp+11Ch] [rbp+1Ch]
  int v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+124h] [rbp+24h]
  int v63; // [rsp+128h] [rbp+28h]
  int v64; // [rsp+12Ch] [rbp+2Ch]
  int v65; // [rsp+130h] [rbp+30h]
  int v66; // [rsp+134h] [rbp+34h]
  int v67; // [rsp+138h] [rbp+38h]
  int v68; // [rsp+13Ch] [rbp+3Ch]
  int v69; // [rsp+140h] [rbp+40h]
  int v70; // [rsp+144h] [rbp+44h]
  int v71; // [rsp+148h] [rbp+48h]
  int v72; // [rsp+14Ch] [rbp+4Ch]
  int v73; // [rsp+150h] [rbp+50h]
  int v74; // [rsp+154h] [rbp+54h]
  int v75; // [rsp+158h] [rbp+58h]
  int v76; // [rsp+15Ch] [rbp+5Ch]
  int v77; // [rsp+160h] [rbp+60h]
  int v78; // [rsp+164h] [rbp+64h]
  int v79; // [rsp+168h] [rbp+68h]
  int v80; // [rsp+16Ch] [rbp+6Ch]
  int v81; // [rsp+170h] [rbp+70h]
  int v82; // [rsp+174h] [rbp+74h]
  int v83; // [rsp+178h] [rbp+78h]
  int v84; // [rsp+17Ch] [rbp+7Ch]
  int v85; // [rsp+180h] [rbp+80h]
  int v86; // [rsp+184h] [rbp+84h]
  int v87; // [rsp+188h] [rbp+88h]
  int v88; // [rsp+18Ch] [rbp+8Ch]
  int v89; // [rsp+190h] [rbp+90h]
  int v90; // [rsp+194h] [rbp+94h]
  int v91; // [rsp+198h] [rbp+98h]
  int v92; // [rsp+19Ch] [rbp+9Ch]
  int v93; // [rsp+1A0h] [rbp+A0h]
  int v94; // [rsp+1A4h] [rbp+A4h]
  int v95; // [rsp+1A8h] [rbp+A8h]
  int v96; // [rsp+1ACh] [rbp+ACh]
  int v97; // [rsp+1B0h] [rbp+B0h]
  int v98; // [rsp+1B4h] [rbp+B4h]
  int v99; // [rsp+1B8h] [rbp+B8h]
  int v100; // [rsp+1BCh] [rbp+BCh]
  int v101; // [rsp+1C0h] [rbp+C0h]
  int v102; // [rsp+1C4h] [rbp+C4h]
  int v103; // [rsp+1C8h] [rbp+C8h]
  int v104; // [rsp+1CCh] [rbp+CCh]
  int v105; // [rsp+1D0h] [rbp+D0h]
  int v106; // [rsp+1D4h] [rbp+D4h]
  int v107; // [rsp+1D8h] [rbp+D8h]
  int v108; // [rsp+1DCh] [rbp+DCh]
  int v109; // [rsp+1E0h] [rbp+E0h]
  int v110; // [rsp+1E4h] [rbp+E4h]
  int v111; // [rsp+1E8h] [rbp+E8h]
  int v112; // [rsp+1ECh] [rbp+ECh]
  __int32 v113; // [rsp+1F0h] [rbp+F0h]
  int v114; // [rsp+1F4h] [rbp+F4h]
  int v115; // [rsp+1F8h] [rbp+F8h]
  int v116; // [rsp+1FCh] [rbp+FCh]
  __int32 v117; // [rsp+200h] [rbp+100h]
  int v118; // [rsp+204h] [rbp+104h]
  int v119; // [rsp+208h] [rbp+108h]
  int v120; // [rsp+20Ch] [rbp+10Ch]
  int v121; // [rsp+210h] [rbp+110h]
  int v122; // [rsp+214h] [rbp+114h]
  int v123; // [rsp+218h] [rbp+118h]
  int v124; // [rsp+21Ch] [rbp+11Ch]
  __int32 v125; // [rsp+220h] [rbp+120h]
  int v126; // [rsp+224h] [rbp+124h]
  __int32 v127; // [rsp+228h] [rbp+128h]
  int v128; // [rsp+22Ch] [rbp+12Ch]
  int v129; // [rsp+230h] [rbp+130h]
  __int32 v130; // [rsp+234h] [rbp+134h]
  __int32 v131; // [rsp+238h] [rbp+138h]
  int v132; // [rsp+23Ch] [rbp+13Ch]
  int v133; // [rsp+240h] [rbp+140h]
  __int32 v134; // [rsp+244h] [rbp+144h]
  int v135; // [rsp+248h] [rbp+148h]
  __int32 v136; // [rsp+24Ch] [rbp+14Ch]

  v1 = 0;
  v3 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8);
  if ( v3 )
    v1 = (int)((double)*(int *)(*(_QWORD *)(v3 + 1480) + 28LL)
             * *((double *)CDesktopManager::s_pDesktopManagerInstance + 53));
  ShadowMargins = CAccent::GetShadowMargins(
                    &v22,
                    *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
  v23.cxLeftWidth = v5;
  v23.cxRightWidth = 0x7FFFFFFF;
  v23.cyTopHeight = v5;
  v6 = *(__m128i *)ShadowMargins;
  v23.cyBottomHeight = 0x7FFFFFFF;
  v24[0] = v7;
  v24[1] = v1;
  v24[2] = v8;
  v24[3] = v8;
  v24[4] = v5;
  v24[5] = 0x7FFFFFFF;
  v24[6] = 0x7FFFFFFF;
  v24[7] = v1;
  v24[8] = 0x7FFFFFFF;
  v24[9] = v5;
  v24[10] = v5;
  v24[11] = 0x7FFFFFFF;
  v24[12] = v7;
  v24[13] = v1;
  v24[14] = v5;
  v24[15] = 0x7FFFFFFF;
  v25 = v9;
  v26 = v8;
  v27 = v7;
  v28 = 0x7FFFFFFF;
  v29 = 0x7FFFFFFF;
  v30 = v5;
  v31 = v9;
  v32 = v8;
  v33 = v7;
  v34 = 0x7FFFFFFF;
  v35 = v5;
  v36 = 0x7FFFFFFF;
  v37 = 0x7FFFFFFF;
  v38 = v5;
  v39 = v7;
  v40 = v7;
  v41 = v8;
  v42 = v8;
  v43 = 0x7FFFFFFF;
  v44 = v5;
  v45 = 0x7FFFFFFF;
  v46 = v7;
  v47 = 0x7FFFFFFF;
  v48 = v5;
  v49 = 0x7FFFFFFF;
  v50 = v5;
  v51 = v7;
  v52 = v7;
  v53 = v8;
  v54 = v8;
  v55 = v5;
  v56 = 0x7FFFFFFF;
  v57 = 0x7FFFFFFF;
  v58 = v1;
  v59 = v5;
  v60 = 0x7FFFFFFF;
  v61 = v5;
  v62 = 0x7FFFFFFF;
  v63 = v7;
  v64 = v1;
  v65 = v5;
  v66 = v5;
  v67 = v5;
  v68 = 0x7FFFFFFF;
  v69 = 0x7FFFFFFF;
  v70 = v1;
  v71 = 0x7FFFFFFF;
  v72 = v5;
  v73 = v5;
  v74 = 0x7FFFFFFF;
  v10 = v6.m128i_i64[0];
  v79 = v9;
  v117 = v6.m128i_i32[0];
  v85 = v9;
  v109 = v9;
  v11 = v5 - v6.m128i_i32[0];
  v6.m128i_i64[0] = _mm_srli_si128(v6, 8).m128i_u64[0];
  v10 >>= 32;
  v12 = v5 - v10;
  v123 = v10;
  v130 = v6.m128i_i32[0];
  v77 = v5;
  v84 = v5;
  v89 = v5;
  v92 = v5;
  v98 = v5;
  v102 = v5;
  v104 = v5;
  v115 = v5;
  v116 = v5;
  v121 = v5;
  v122 = v5;
  v127 = v5 - v6.m128i_i32[0];
  v13 = *((_DWORD *)this + 73);
  v75 = v7;
  v76 = v1;
  v78 = 0x7FFFFFFF;
  v80 = v8;
  v81 = v7;
  v82 = 0x7FFFFFFF;
  v83 = 0x7FFFFFFF;
  v86 = v8;
  v87 = v7;
  v88 = 0x7FFFFFFF;
  v90 = 0x7FFFFFFF;
  v91 = 0x7FFFFFFF;
  v93 = v7;
  v94 = v7;
  v95 = v8;
  v96 = v8;
  v97 = 0x7FFFFFFF;
  v99 = 0x7FFFFFFF;
  v100 = v7;
  v101 = 0x7FFFFFFF;
  v103 = 0x7FFFFFFF;
  v105 = v7;
  v106 = v7;
  v107 = v8;
  v108 = v8;
  v110 = v8;
  v111 = 0x7FFFFFFF;
  v112 = 0x7FFFFFFF;
  v113 = v11;
  v114 = 0x7FFFFFFF;
  v118 = 0x7FFFFFFF;
  v119 = 0x7FFFFFFF;
  v120 = v12;
  v124 = 0x7FFFFFFF;
  v125 = v11;
  v126 = v12;
  v128 = 0x7FFFFFFF;
  v129 = 0x7FFFFFFF;
  v131 = v11;
  v132 = v12;
  v133 = 0x7FFFFFFF;
  v134 = v5 - v6.m128i_i32[1];
  v135 = 0x7FFFFFFF;
  v136 = v6.m128i_i32[1];
  if ( (v13 & 0x40) == 0 )
  {
    v115 = 0;
    v121 = 0;
    v25 = 0;
    v31 = 0;
  }
  if ( (v13 & 0x100) == 0 )
  {
    v116 = 0;
    v122 = 0;
  }
  v14 = v24;
  v15 = 22LL;
  v16 = (CAtlasedImage **)((char *)this + 408);
  v17 = &v23;
  do
  {
    if ( *v16 )
    {
      CAtlasedImage::SetInsetFromParent(*v16, v17);
      if ( *v14 != 0x7FFFFFFF )
      {
        v18 = *v16;
        v21.cx = *v14;
        v21.cy = *((_DWORD *)v18 + 7);
        CAtlasedImage::SetSize(v18, &v21);
      }
      if ( v14[1] != 0x7FFFFFFF )
      {
        v19 = *v16;
        v22.cxRightWidth = v14[1];
        v22.cxLeftWidth = *((_DWORD *)v19 + 6);
        CAtlasedImage::SetSize(v19, (const struct tagSIZE *)&v22);
      }
    }
    v17 = (struct _MARGINS *)((char *)v17 + 24);
    ++v16;
    v14 += 6;
    --v15;
  }
  while ( v15 );
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 49) + 24LL))(*((_QWORD *)this + 49), 4096LL);
  return 0LL;
}
