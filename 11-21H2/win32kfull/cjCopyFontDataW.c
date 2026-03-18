/*
 * XREFs of cjCopyFontDataW @ 0x1C000E5E8
 * Callers:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C000E3EC (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 * Callees:
 *     ?bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z @ 0x1C000EAC4 (-bIFIMetricsToTextMetricW2@@YAHAEAVDCOBJ@@PEAU_NTMW_INTERNAL@@AEAVPFEOBJ@@HKVEFLOATEXT@@JJ@Z.c)
 *     ?IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z @ 0x1C000F010 (-IsVariableFont@@YA_NPEAU_IFIMETRICS@@@Z.c)
 *     ?bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z @ 0x1C000F050 (-bIFIMetricsToLogFontW2@@YAHAEAVDCOBJ@@PEAUtagENUMLOGFONTEXW@@PEAU_IFIMETRICS@@VEFLOATEXT@@@Z.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C00174DC (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C0017528 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C001EC98 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     memmove @ 0x1C0160280 (memmove.c)
 *     InitializeScripts @ 0x1C03901B0 (InitializeScripts.c)
 */

__int64 __fastcall cjCopyFontDataW(__int64 a1, __int64 a2, __int64 *a3, int a4, wchar_t *Src, int a6, int a7)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rbx
  __int64 v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r12d
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  int v19; // eax
  __m128i v20; // xmm1
  __m128i v21; // xmm6
  __int64 v22; // r14
  unsigned int v23; // eax
  _DWORD *v24; // r8
  __int64 v25; // r15
  int v26; // eax
  __int64 v27; // r14
  __int64 v28; // rax
  int v29; // eax
  _DWORD *v30; // rcx
  unsigned int v31; // r15d
  _WORD *v32; // r14
  __int64 v33; // rax
  _DWORD *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int16 v37; // ax
  _WORD *v38; // rax
  const wchar_t *v39; // r8
  int v40; // eax
  unsigned int v42; // edx
  int v43; // ecx
  unsigned int *v44; // rdx
  struct HLFONT__ *v45; // rdx
  signed int v46; // eax
  __m128i v47; // xmm1
  __m128i v48; // xmm0
  __m128 v49; // xmm1
  __int64 v50; // rdx
  int v51; // r12d
  int v52; // edx
  unsigned int v53; // [rsp+40h] [rbp-68h]
  unsigned int v54; // [rsp+44h] [rbp-64h]
  __int64 v55; // [rsp+48h] [rbp-60h] BYREF
  struct LFONT *v56; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v61; // [rsp+E8h] [rbp+40h]

  v8 = 0LL;
  v9 = *a3;
  v11 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  v55 = v11;
  v12 = *(_QWORD *)(v9 + 32);
  v53 = *(_DWORD *)(v9 + 12) & 1;
  v61 = *(_DWORD *)(v12 + 132);
  if ( v11 )
  {
    v13 = (unsigned int)-(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62));
    if ( *(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62) != 0 && *(_WORD *)(v12 + 56) != 0 )
    {
      if ( (*(_DWORD *)(v9 + 12) & 1) != 0 && (*(_DWORD *)(v12 + 48) & 0x3000010) == 0 )
      {
        v61 = PDEVOBJ::ulLogPixelsX((PDEVOBJ *)&v55);
        PDEVOBJ::ulLogPixelsY((PDEVOBJ *)&v55);
      }
      v14 = *(unsigned int *)(v12 + 48);
      v15 = 4;
      if ( (v14 & 0x3000010) != 0 )
      {
        if ( (v14 & 1) != 0 || (v14 & 2) == 0 && (v14 & 4) == 0 && (v14 & 8) != 0 )
        {
          W32GetCurrentThreadDpiAwarenessContext(v14, v13);
          W32GetCurrentThreadDpiAwarenessContext(v17, v16);
        }
        if ( v53 )
        {
          v45 = *(struct HLFONT__ **)(v11 + 1424);
          if ( !v45 )
            return v8;
          LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v56, v45, 0LL);
          if ( !v56 )
            return v8;
          v46 = *((_DWORD *)v56 + 69);
          if ( v46 >= 0 )
          {
            v47 = _mm_cvtsi32_si128(v46);
            v48 = _mm_cvtsi32_si128(*(__int16 *)(v12 + 60) + *(__int16 *)(v12 + 62));
          }
          else
          {
            v47 = _mm_cvtsi32_si128(-v46);
            v48 = _mm_cvtsi32_si128(*(__int16 *)(v12 + 56));
          }
          v49 = _mm_cvtepi32_ps(v47);
          v49.m128_f32[0] = v49.m128_f32[0] / _mm_cvtepi32_ps(v48).m128_f32[0];
          v21 = (__m128i)v49;
          DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v56);
        }
        else
        {
          CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14, v13);
          if ( (*(_DWORD *)(v11 + 40) & 1) != 0 && (CurrentThreadDpiAwarenessContext & 0xF) - 1 > 1 )
            v19 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
          else
            v19 = *(_DWORD *)(v11 + 2148);
          v20 = (__m128i)COERCE_UNSIGNED_INT((float)v19);
          *(float *)v20.m128i_i32 = (float)(*(float *)v20.m128i_i32 * 0.33333334) / (float)*(__int16 *)(v12 + 56);
          v21 = v20;
        }
      }
      else
      {
        v21 = (__m128i)v61;
      }
      if ( (unsigned int)bIFIMetricsToLogFontW2(a1, a2 + 12, v12, (unsigned int)_mm_cvtsi128_si32(v21)) )
      {
        v22 = 368LL;
        v23 = *(_DWORD *)(*a3 + 128);
        *(_DWORD *)a2 = v23;
        v54 = v23;
        v24 = *(_DWORD **)(*a3 + 32);
        if ( (v24[12] & 0x4000) != 0 || IsVariableFont(*(struct _IFIMETRICS **)(*a3 + 32)) )
        {
          v42 = v24[1];
          if ( v42 <= 0xC )
            DbgPrint("Test it %d %Iu \n", v42, 12);
          else
            v22 = (unsigned int)(4 * *(_DWORD *)((char *)v24 + v24[51] + 4) + 368);
        }
        if ( ((*(_DWORD *)(a2 + 4) = v22,
               LODWORD(v25) = 0,
               v26 = *(_DWORD *)(v12 + 48),
               v27 = a2 + v22,
               (v26 & 0x4000) != 0)
           || (v26 & 0x4000001) != 0
           && *(_DWORD *)(v12 + 4) > 0xCu
           && (v28 = *(unsigned int *)(v12 + 204), (_DWORD)v28)
           && *(_DWORD *)(v28 + v12 + 4)
           && ((v43 = *(_DWORD *)(v28 + v12), v43 == 134248052) || v43 == 134248035))
          && *(_DWORD *)(v12 + 4) > 0xCu )
        {
          v44 = (unsigned int *)(v12 + *(int *)(v12 + 204));
          v25 = v44[1];
          if ( (unsigned int)v25 > 0x10 )
            v25 = 16LL;
          memmove((void *)(a2 + 360), v44, 4 * v25 + 8);
          v29 = v25;
        }
        else
        {
          v29 = 0;
          *(_DWORD *)(a2 + 360) = 134248036;
        }
        *(_DWORD *)(a2 + 364) = v29;
        v30 = (_DWORD *)(v27 + 108);
        if ( (*(_DWORD *)(v12 + 48) & 0x4000) != 0 && *(_DWORD *)(v12 + 4) > 0x10u )
        {
          memmove(v30, (const void *)(v12 + *(int *)(v12 + 208)), 40LL * (unsigned int)v25 + 8);
        }
        else
        {
          *(_DWORD *)(v27 + 112) = 0;
          *v30 = 134245473;
        }
        v31 = v53;
        if ( (unsigned int)bIFIMetricsToTextMetricW2(a1, v27, a3, v53) )
        {
          if ( a7 )
          {
            *(_BYTE *)(a2 + 35) = a6;
            *(_BYTE *)(v27 + 64) = a6;
            v32 = (_WORD *)(a2 + 296);
            if ( (unsigned int)InitializeScripts() )
            {
              v33 = 0LL;
              v34 = &aScripts;
              while ( *v34 != a6 + 1000 )
              {
                v33 = (unsigned int)(v33 + 1);
                v34 += 4;
                if ( (unsigned int)v33 >= 0x13 )
                {
                  v50 = qword_1C0335BA8;
                  goto LABEL_30;
                }
              }
              _mm_lfence();
              v11 = v55;
              v50 = *((_QWORD *)&aScripts + 2 * v33 + 1);
LABEL_30:
              v35 = 32LL;
              v36 = v50 - (_QWORD)v32;
              do
              {
                if ( v35 == -2147483614 )
                  break;
                v37 = *(_WORD *)((char *)v32 + v36);
                if ( !v37 )
                  break;
                *v32++ = v37;
                --v35;
              }
              while ( v35 );
              v38 = v32 - 1;
              if ( v35 )
                v38 = v32;
              *v38 = 0;
            }
            v31 = v53;
          }
          else
          {
            *(_WORD *)(a2 + 296) = 0;
          }
          v39 = Src;
          if ( !Src )
          {
            if ( a4 != 5 )
            {
LABEL_40:
              *(_DWORD *)(a2 + 8) = 0;
              v40 = *(_DWORD *)(v12 + 48);
              if ( (v40 & 1) != 0 )
              {
                if ( (*(_DWORD *)(v11 + 40) & 1) == 0
                  && (*(_DWORD *)(v11 + 2152) & 0x2000) == 0
                  && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 208LL) == 1 )
                {
                  v15 = 6;
                }
                *(_DWORD *)(a2 + 8) = v15;
              }
              else if ( (v40 & 2) != 0 )
              {
                *(_DWORD *)(a2 + 8) = 1;
                v15 = 1;
              }
              else
              {
                v15 = 0;
                if ( v40 < 0 )
                {
                  *(_DWORD *)(a2 + 8) = 2;
                  v15 = 2;
                }
              }
              if ( v31 )
              {
                v51 = v15 | 2;
                v52 = 2;
                if ( (*(_DWORD *)(v12 + 48) & 0x3000010) == 0 )
                  v52 = v51;
                *(_DWORD *)(a2 + 8) = v52;
                if ( *(_DWORD *)(v11 + 2108) == 2
                  && (*(_DWORD *)(v12 + 48) & 0x3000010) != 0
                  && (*(_DWORD *)(v11 + 2152) & 0x100) == 0 )
                {
                  *(_DWORD *)(a2 + 8) = v52 | 0x80000000;
                }
              }
              return v54;
            }
            v39 = (const wchar_t *)(a2 + 104);
          }
          wcsncpy_s((wchar_t *)(a2 + 40), 0x20uLL, v39, 0x1FuLL);
          *(_WORD *)(a2 + 102) = 0;
          goto LABEL_40;
        }
      }
    }
  }
  return v8;
}
