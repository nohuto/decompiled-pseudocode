/*
 * XREFs of ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C003BF70
 * Callers:
 *     GreStretchDIBitsInternal @ 0x1C0029B2C (GreStretchDIBitsInternal.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C002E3F0 (GreSetDIBitsToDeviceInternal.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00398B0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     ?iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z @ 0x1C013DC80 (-iCheckPassthroughImage@@YAHAEAVDCOBJ@@AEAVPDEVOBJ@@HHPEAXH2@Z.c)
 * Callees:
 *     ?bIsMonochrome@XEPALOBJ@@QEBAHXZ @ 0x1C00FDBF8 (-bIsMonochrome@XEPALOBJ@@QEBAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ??0COLORTRANSFORMOBJ@@QEAA@PEAX@Z @ 0x1C026ACF0 (--0COLORTRANSFORMOBJ@@QEAA@PEAX@Z.c)
 *     ?vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z @ 0x1C02BEB4C (-vMapNewXlate@XLATE@@QEAAXPEAU_TRANSLATE@@@Z.c)
 *     ?bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z @ 0x1C02D9D9C (-bEqualRGB_In_Palette@@YAHVXEPALOBJ@@0@Z.c)
 */

_DWORD *CreateXlateObject(void *a1, int a2, ...)
{
  struct PALETTE *v2; // rdi
  unsigned int v5; // r13d
  _DWORD *result; // rax
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  _DWORD *v9; // rdx
  int v10; // ecx
  int v11; // eax
  __int64 v12; // r14
  __int64 v13; // rcx
  int v14; // eax
  int v15; // r11d
  struct PALETTE *v16; // rbx
  __int16 v17; // cx
  int v18; // eax
  struct _TRANSLATE *v19; // r8
  struct _TRANSLATE *v20; // r10
  int v21; // edx
  __int64 v22; // rsi
  __int16 v23; // r11
  int v24; // eax
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // r9
  unsigned int v29; // eax
  _DWORD *v30; // rcx
  int v31; // r9d
  unsigned int v32; // ecx
  __int64 v33; // rdx
  __int64 v34; // rax
  unsigned int v35; // eax
  _DWORD *v36; // rcx
  unsigned int i; // edx
  __int64 v38; // rax
  int v39; // eax
  int v40; // r11d
  int v41; // edi
  unsigned int v42; // esi
  int v43; // eax
  int NearestIndexFromColorref; // eax
  int v45; // ebx
  void *v46; // rcx
  size_t v47; // r8
  __int64 v48; // rdx
  int v49; // eax
  struct _TRANSLATE *v50; // rdx
  struct _TRANSLATE *v51; // r13
  _DWORD *v52; // r9
  unsigned int v53; // eax
  _DWORD *v54; // rcx
  _DWORD *v55; // rsi
  __int16 v56; // ax
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rax
  int v60; // eax
  void *v61; // r9
  int v62; // ebx
  __int64 v63; // rdi
  __int64 v64; // r14
  __int64 v65; // r13
  struct PALETTE *v66; // rdi
  unsigned int v67; // esi
  __int64 v68; // rbx
  int v69; // eax
  unsigned int k; // esi
  int v71; // eax
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  int v75; // edx
  int v76; // ebx
  int v77; // r8d
  int *v78; // rdx
  int v79; // r11d
  int v80; // edi
  int v81; // r10d
  int v82; // ecx
  int *v83; // rcx
  int v84; // eax
  char v85; // [rsp+20h] [rbp-61h]
  __int16 v86; // [rsp+24h] [rbp-5Dh]
  int v87; // [rsp+24h] [rbp-5Dh]
  int v88; // [rsp+28h] [rbp-59h]
  int v89; // [rsp+28h] [rbp-59h]
  __int16 v90; // [rsp+2Ch] [rbp-55h]
  struct _TRANSLATE *v91; // [rsp+30h] [rbp-51h]
  struct _TRANSLATE *v92; // [rsp+38h] [rbp-49h]
  int v93; // [rsp+48h] [rbp-39h]
  _BYTE v94[32]; // [rsp+50h] [rbp-31h] BYREF
  __int64 v95; // [rsp+70h] [rbp-11h]
  struct PALETTE *j; // [rsp+D0h] [rbp+4Fh] BYREF
  va_list va; // [rsp+D0h] [rbp+4Fh]
  __int64 v98; // [rsp+D8h] [rbp+57h] BYREF
  va_list va1; // [rsp+D8h] [rbp+57h]
  __int64 v100; // [rsp+E0h] [rbp+5Fh]
  __int64 v101; // [rsp+E8h] [rbp+67h]
  __int64 v102; // [rsp+F0h] [rbp+6Fh]
  __int64 v103; // [rsp+F8h] [rbp+77h]
  __int64 v104; // [rsp+100h] [rbp+7Fh]
  __int64 v105; // [rsp+108h] [rbp+87h]
  va_list va2; // [rsp+110h] [rbp+8Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  j = va_arg(va1, struct PALETTE *);
  va_copy(va2, va1);
  v98 = va_arg(va2, _QWORD);
  v100 = va_arg(va2, _QWORD);
  v101 = va_arg(va2, _QWORD);
  v102 = va_arg(va2, _QWORD);
  v103 = va_arg(va2, _QWORD);
  v104 = va_arg(va2, _QWORD);
  v105 = va_arg(va2, _QWORD);
  v2 = j;
  v86 = v105;
  if ( j )
    v5 = *((_DWORD *)j + 7);
  else
    v5 = 256;
  result = (_DWORD *)AllocThreadBufferWithTag(4 * v5 + 88, 1953265735LL, 0LL);
  v7 = result;
  if ( !result )
    return result;
  v8 = 0;
  v9 = result + 21;
  v10 = 0;
  *result = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
  if ( !v5 )
  {
    v10 = 512;
    v9 = 0LL;
  }
  v11 = 2;
  if ( !v5 )
    v11 = 0;
  v7[1] = v11;
  *((_QWORD *)v7 + 2) = v9;
  v7[19] = v10;
  v7[2] = 0;
  v7[3] = v5;
  v7[9] = -1;
  *((_QWORD *)v7 + 5) = 0LL;
  *((_QWORD *)v7 + 6) = 0LL;
  *((_QWORD *)v7 + 7) = 0LL;
  v12 = ghsemPalette;
  GreAcquireSemaphore(ghsemPalette);
  v7[18] = 0;
  *((_QWORD *)v7 + 8) = 0LL;
  if ( (a2 & 7) != 0 )
  {
    if ( (a2 & 3) != 0 )
    {
      v7[18] = a2;
      *((_QWORD *)v7 + 8) = a1;
      if ( (a2 & 2) != 0 )
      {
        COLORTRANSFORMOBJ::COLORTRANSFORMOBJ((COLORTRANSFORMOBJ *)v94, a1);
        v13 = v95;
        if ( v95 )
        {
          v7[1] |= 0x10u;
          DEC_SHARE_REF_CNT(v13);
        }
        UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v94);
      }
      else if ( (a2 & 1) != 0 )
      {
        v14 = v7[1] | 0x20;
        v7[1] = v14;
        if ( (a2 & 0x10000000) != 0 )
        {
          if ( a1 )
            v7[1] = v14 | 8;
        }
      }
    }
    else if ( (a2 & 4) != 0 )
    {
      v7[1] |= 0x20u;
      v7[18] = a2;
    }
  }
  v15 = v7[1] & 8;
  v88 = v15;
  if ( !v98 || (*(_DWORD *)(v98 + 24) & 0x800) != 0 )
  {
    v16 = (struct PALETTE *)v101;
    v85 = 1;
    if ( !*(_QWORD *)(v101 + 72) )
      v16 = ppalDefault;
    v17 = v86;
    if ( (v86 & 0x2000) == 0 )
    {
      v18 = v7[19] | 0x800;
      v7[19] = v18;
      if ( v98 )
        v7[19] = v18 | 0x1000;
    }
  }
  else
  {
    v16 = (struct PALETTE *)v101;
    v17 = v86;
    v85 = 0;
  }
  *((_QWORD *)v7 + 5) = v2;
  *((_QWORD *)v7 + 6) = v98;
  *((_QWORD *)v7 + 7) = v16;
  v19 = (struct _TRANSLATE *)*((_QWORD *)v16 + 9);
  v20 = (struct _TRANSLATE *)*((_QWORD *)v16 + 10);
  v92 = v19;
  v91 = v20;
  if ( v2 )
  {
    v21 = *((_DWORD *)v2 + 6);
    v90 = v21;
    v93 = v21 & 0x800;
    if ( (v21 & 0x800) == 0 || v19 != v20 && (v17 & 0x4000) == 0 )
    {
      v22 = v98;
      if ( (v21 & 0x8000) != 0 )
      {
        if ( !v98 )
          goto LABEL_162;
        LODWORD(j) = *(_DWORD *)(v98 + 24);
        v23 = (__int16)j;
        if ( ((unsigned __int16)j & 0x8000) != 0 )
        {
          v24 = *(_DWORD *)(v98 + 28);
          if ( *((_DWORD *)v2 + 7) == v24 && v24 == 256 )
          {
            if ( ((unsigned __int16)j & 0x100) != 0 )
            {
              v25 = *(_QWORD *)(v98 + 72);
              if ( v25 )
              {
                LODWORD(v26) = 256;
                while ( 1 )
                {
                  v26 = (unsigned int)(v26 - 1);
                  if ( *(unsigned __int8 *)(v26 + v25 + 4) != (_DWORD)v26 )
                    break;
                  if ( !(_DWORD)v26 )
                    goto LABEL_43;
                }
              }
            }
            else
            {
LABEL_43:
              v27 = *((_QWORD *)v2 + 14);
              LODWORD(v28) = 256;
              while ( 1 )
              {
                v28 = (unsigned int)(v28 - 1);
                if ( ((*(_DWORD *)(*(_QWORD *)(v98 + 112) + 4 * v28) ^ *(_DWORD *)(v27 + 4 * v28)) & 0xFFFFFF) != 0 )
                  break;
                v27 = *((_QWORD *)v2 + 14);
                if ( !(_DWORD)v28 )
                  goto LABEL_51;
              }
              v23 = (__int16)j;
            }
          }
        }
        if ( (v23 & 0x800) != 0 && v19 == v20 )
        {
LABEL_162:
          if ( (unsigned int)bEqualRGB_In_Palette(v2, v16) )
          {
LABEL_51:
            v29 = 0;
            v30 = v7 + 21;
            do
              *v30++ = v29++;
            while ( v29 < 0x100 );
            goto LABEL_53;
          }
          v19 = v92;
          v20 = v91;
        }
        v15 = v88;
      }
      if ( v93 && !v22 )
      {
        v35 = 0;
        v36 = v7 + 21;
        do
          *v36++ = v35++;
        while ( v35 < 0x100 );
        for ( i = 0;
              i < *((_DWORD *)v16 + 7);
              v7[*((unsigned __int8 *)v20 + v38 + 4) + 21] = *((unsigned __int8 *)v19 + v38 + 4) )
        {
          v38 = i++;
        }
        v39 = *((_DWORD *)v2 + 6);
        if ( (v39 & 0x1000) != 0 )
        {
          v7[21] = 0;
          v7[276] = 255;
          goto LABEL_54;
        }
        if ( (v39 & 0x10000) != 0 )
          goto LABEL_54;
        v7[21] = 0;
LABEL_123:
        v7[267] = 246;
        v7[22] = 1;
        v7[268] = 247;
        v7[23] = 2;
        v7[269] = 248;
        v7[24] = 3;
        v7[270] = 249;
        v7[25] = 4;
        v7[271] = 250;
        v7[26] = 5;
        v7[272] = 251;
        v7[27] = 6;
        v7[273] = 252;
        v7[28] = 7;
        v7[274] = 253;
        v7[29] = 8;
        v7[275] = 254;
        v7[30] = 9;
        v7[276] = 255;
        goto LABEL_54;
      }
      if ( (v90 & 0x2000) != 0 )
      {
        if ( (unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
        {
          v7[21] = 0;
          v7[22] = 1;
        }
        else
        {
          v41 = v102;
          if ( v40 )
          {
            v42 = v103;
            v43 = v103;
            v7[21] = v102;
          }
          else
          {
            NearestIndexFromColorref = ulGetNearestIndexFromColorref(v22, v16, (unsigned int)v102, 1LL);
            v42 = v103;
            v7[21] = NearestIndexFromColorref;
            v43 = ulGetNearestIndexFromColorref(v98, v16, v42, 1LL);
          }
          v7[22] = v43;
          v7[19] |= 0x100u;
          v7[7] = v41;
          v7[8] = v42;
        }
        goto LABEL_54;
      }
      if ( !v5 )
      {
        if ( v22 && (*(_DWORD *)(v22 + 24) & 0x2000) != 0 )
        {
          v45 = v104;
          v7[21] = ulGetNearestIndexFromColorref(v2, v100, (unsigned int)v104, 1LL);
          v7[1] |= 4u;
          v7[6] = v45;
          *((_QWORD *)v7 + 2) = v7 + 21;
        }
        goto LABEL_54;
      }
      if ( !v22 || !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
      {
        if ( v15 )
        {
          v48 = v5;
          do
          {
            --v48;
            v7[v48 + 21] = *(_DWORD *)(v48 * 4 + *((_QWORD *)v2 + 14));
            --v5;
          }
          while ( v5 );
        }
        else
        {
          v49 = v86 & 0x2000;
          v87 = v49;
          if ( !v85 || v49 )
          {
            v16 = (struct PALETTE *)v22;
            if ( v49 )
              v7[19] |= 0x2000u;
          }
          for ( j = v16; ; v16 = j )
          {
            --v5;
            v7[v5 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                            (struct PALETTE **)va,
                            *((unsigned int *)v16 + 24),
                            *(unsigned int *)(*((_QWORD *)v2 + 14) + 4LL * v5));
            if ( !v5 )
              break;
          }
          if ( v85 && !v87 )
          {
            v50 = v92;
            if ( v98 )
              v50 = v91;
            XLATE::vMapNewXlate((XLATE *)v7, v50);
          }
        }
        goto LABEL_54;
      }
      v46 = v7 + 21;
      v47 = 4LL * v5;
LABEL_126:
      memset(v46, 0, v47);
      v62 = v104;
      v7[(unsigned int)ulGetNearestIndexFromColorref(v2, v100, (unsigned int)v104, 1LL) + 21] = 1;
      v7[1] |= 4u;
      v7[6] = v62;
      goto LABEL_54;
    }
  }
  v51 = (struct _TRANSLATE *)*((_QWORD *)v16 + 9);
  if ( !v19 )
  {
    v51 = (struct _TRANSLATE *)&defaultTranslate;
    v92 = (struct _TRANSLATE *)&defaultTranslate;
    v91 = (struct _TRANSLATE *)&defaultTranslate;
    v16 = ppalDefault;
    *((_QWORD *)v7 + 7) = ppalDefault;
  }
  v52 = v7 + 21;
  v53 = 0;
  v54 = v7 + 21;
  do
    *v54++ = v53++;
  while ( v53 < 0x100 );
  v55 = (_DWORD *)v98;
  if ( !v98 )
    goto LABEL_53;
  v89 = *(_DWORD *)(v98 + 24);
  v56 = v89;
  if ( (v89 & 0x8000) != 0 )
  {
    if ( (unsigned int)bEqualRGB_In_Palette(v98, v16) || v2 && (unsigned int)bEqualRGB_In_Palette(v57, v2) )
      goto LABEL_53;
    v56 = v89;
    v52 = v7 + 21;
  }
  if ( (v56 & 0x800) == 0 )
  {
    if ( !(unsigned int)XEPALOBJ::bIsMonochrome((XEPALOBJ *)va1) )
    {
      if ( v55[7] != 256 )
      {
        memset(v61, 0, 0x400uLL);
        v55 = (_DWORD *)v98;
      }
      v63 = 10LL;
      v64 = 0LL;
      v65 = 10LL;
      while ( 1 )
      {
        v7[v64 + 21] = XEPALOBJ::ulDispatchGFPEFunction(
                         (__int64 *)va1,
                         (unsigned int)v55[24],
                         *(unsigned int *)(v64 * 4 + logDefaultPal + 4));
        v7[v63 + 257] = XEPALOBJ::ulDispatchGFPEFunction(
                          (__int64 *)va1,
                          *(unsigned int *)(v98 + 96),
                          *(unsigned int *)(v63 * 4 + logDefaultPal + 4));
        ++v63;
        ++v64;
        if ( !--v65 )
          break;
        v55 = (_DWORD *)v98;
      }
      v66 = j;
      v12 = ghsemPalette;
      if ( (v86 & 0x2000) != 0 )
      {
        v67 = 0;
        if ( *((_DWORD *)j + 7) )
        {
          do
          {
            v68 = v67;
            v69 = XEPALOBJ::ulDispatchGFPEFunction(
                    (__int64 *)va1,
                    *(unsigned int *)(v98 + 96),
                    *(unsigned int *)(*((_QWORD *)v66 + 14) + 4LL * v67++));
            v7[v68 + 21] = v69;
          }
          while ( v67 < *((_DWORD *)v66 + 7) );
        }
        v7[19] |= 0x2000u;
      }
      else if ( v92 )
      {
        for ( k = 0; k < *((_DWORD *)v16 + 7); v7[v72 + 21] = v71 )
        {
          v71 = XEPALOBJ::ulDispatchGFPEFunction(
                  (__int64 *)va1,
                  *(unsigned int *)(v98 + 96),
                  *(unsigned int *)(*((_QWORD *)v16 + 14) + 4LL * k));
          v72 = *((unsigned __int8 *)v92 + k++ + 4);
        }
      }
      goto LABEL_54;
    }
    v47 = 1024LL;
    v46 = v61;
    goto LABEL_126;
  }
  if ( v91 != v51 )
  {
    v58 = 0;
    if ( *((_DWORD *)v16 + 7) )
    {
      do
      {
        v59 = v58++;
        v7[*((unsigned __int8 *)v51 + v59 + 4) + 21] = *((unsigned __int8 *)v91 + v59 + 4);
      }
      while ( v58 < *((_DWORD *)v16 + 7) );
      v55 = (_DWORD *)v98;
      v12 = ghsemPalette;
    }
    v60 = v55[6];
    if ( (v60 & 0x1000) != 0 )
    {
      *v52 = 0;
      v7[276] = 255;
      goto LABEL_54;
    }
    if ( (v60 & 0x10000) != 0 )
      goto LABEL_54;
    *v52 = 0;
    goto LABEL_123;
  }
LABEL_53:
  v7[1] |= 1u;
LABEL_54:
  v31 = v7[1];
  if ( (v31 & 9) == 0 )
  {
    v32 = v7[3];
    if ( v32 )
    {
      v33 = *((_QWORD *)v7 + 5);
      if ( !v33 || (v34 = *((_QWORD *)v7 + 6)) == 0 || *(_DWORD *)(v33 + 28) == *(_DWORD *)(v34 + 28) )
      {
        while ( *(_DWORD *)(*((_QWORD *)v7 + 2) + 4LL * v8) == v8 )
        {
          if ( ++v8 >= v32 )
            goto LABEL_156;
        }
      }
    }
    else
    {
      v73 = *((_QWORD *)v7 + 5);
      v74 = *((_QWORD *)v7 + 6);
      if ( v73 && v74 && !*(_DWORD *)(v74 + 28) )
      {
        v75 = *(_DWORD *)(v73 + 24);
        v76 = 65280;
        v77 = 16711680;
        if ( (v75 & 2) != 0 )
        {
          v78 = *(int **)(v73 + 112);
          v79 = *v78;
          v80 = v78[1];
          v81 = v78[2];
        }
        else
        {
          v80 = 65280;
          if ( (v75 & 4) != 0 )
          {
            v79 = 255;
            v81 = 16711680;
          }
          else
          {
            v79 = 16711680;
            v81 = 255;
          }
        }
        v82 = *(_DWORD *)(v74 + 24);
        if ( (v82 & 2) != 0 )
        {
          v83 = *(int **)(v74 + 112);
          v84 = *v83;
          v76 = v83[1];
          v77 = v83[2];
        }
        else if ( (v82 & 4) != 0 )
        {
          v84 = 255;
        }
        else
        {
          v84 = 16711680;
          v77 = 255;
        }
        if ( v79 == v84 && v80 == v76 && v81 == v77 )
LABEL_156:
          v7[1] = v31 | 1;
      }
    }
  }
  if ( v12 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v12);
    GreReleaseSemaphoreInternal(v12);
  }
  return v7;
}
