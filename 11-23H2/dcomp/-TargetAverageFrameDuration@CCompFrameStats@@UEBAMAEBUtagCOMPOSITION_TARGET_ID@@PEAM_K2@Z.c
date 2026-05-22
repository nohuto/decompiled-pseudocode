/*
 * XREFs of ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180013070
 * Callers:
 *     ?SendTelemetry@CAnimationFrameStats@@MEAAXXZ @ 0x180014050 (-SendTelemetry@CAnimationFrameStats@@MEAAXXZ.c)
 *     ?TargetAverageFrameDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A43F0 (-TargetAverageFrameDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x180002BFC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     sqrt @ 0x18009695C (sqrt.c)
 *     memmove_0 @ 0x1800A8138 (memmove_0.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x1800E5D98 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ?_Dwm_Xlength_error@std@@YAXPEBD@Z @ 0x1801004AC (-_Dwm_Xlength_error@std@@YAXPEBD@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_5a5df3e7ea2afaeb6c182426c549c520___ @ 0x1801A9758 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_float_______lambda_5a5df.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CCompFrameStats::TargetAverageFrameDuration(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        float *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  float *v5; // rsi
  CCompFrameStats *v7; // r15
  double v8; // xmm7_8
  double v9; // xmm8_8
  float *v10; // rbx
  unsigned __int64 *v11; // rdx
  unsigned __int64 *v12; // r8
  float *v13; // r14
  _BYTE *v14; // rdi
  _QWORD *v15; // rsi
  unsigned __int64 v16; // rax
  int v17; // eax
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  float v20; // xmm6_4
  float v21; // xmm6_4
  __int64 v22; // rcx
  float v23; // xmm0_4
  float v24; // xmm6_4
  double v25; // xmm1_8
  unsigned __int64 v26; // r11
  double v27; // xmm0_8
  signed __int64 v30; // r14
  __int64 v31; // r13
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rcx
  float *v34; // r15
  __int64 v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // r11
  __int64 v38; // r11
  double v39; // xmm1_8
  float v40; // xmm1_4
  float v41; // xmm0_4
  double v42; // [rsp+28h] [rbp-81h] BYREF
  void *Src[2]; // [rsp+30h] [rbp-79h]
  float *v44; // [rsp+40h] [rbp-69h]
  unsigned __int64 v45; // [rsp+48h] [rbp-61h] BYREF
  void *v46; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 *v47; // [rsp+58h] [rbp-51h]
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+68h] [rbp-41h] BYREF
  __int64 v49; // [rsp+78h] [rbp-31h]
  unsigned __int64 *v50; // [rsp+80h] [rbp-29h] BYREF
  double v51; // [rsp+108h] [rbp+5Fh] BYREF
  float *v52; // [rsp+118h] [rbp+6Fh]
  unsigned __int64 v53; // [rsp+120h] [rbp+77h] BYREF

  v53 = a4;
  v52 = a3;
  v51 = *(double *)&this;
  v5 = a3;
  v7 = this;
  v8 = 0.0;
  v9 = 0.0;
  *(_OWORD *)Src = 0LL;
  v10 = 0LL;
  v44 = 0LL;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  CCompFrameStats::CalcFrameRange(v7, &v53, &a5);
  v11 = (unsigned __int64 *)*((_QWORD *)v7 + 17);
  v47 = v11;
  v12 = (unsigned __int64 *)*((_QWORD *)v7 + 18);
  v50 = v12;
  v13 = 0LL;
  v14 = 0LL;
  if ( v11 != v12 )
  {
    v15 = v11 + 5;
    v16 = v53;
    do
    {
      if ( *v11 >= v16 )
      {
        if ( *v11 <= a5
          && *((_DWORD *)v15 - 2) == *(_DWORD *)a2
          && *((_DWORD *)v15 - 1) == *((_DWORD *)a2 + 1)
          && *(_DWORD *)v15 == *((_DWORD *)a2 + 2)
          && *((_DWORD *)v15 + 1) == *((_DWORD *)a2 + 3)
          && *((_DWORD *)v15 + 2) == *((_DWORD *)a2 + 4)
          && *((_DWORD *)v15 + 3) == *((_DWORD *)a2 + 5) )
        {
          v17 = *((_DWORD *)a2 + 6);
          if ( *((_DWORD *)v15 + 4) == v17 || !*((_DWORD *)v15 + 4) || !v17 )
          {
            if ( v15[4] )
            {
              v18 = v15[11];
              if ( v18 )
              {
                if ( v18 > *(v15 - 4) )
                {
                  v19 = v18 - *(v15 - 4);
                  if ( v19 < 0 )
                    v20 = (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1))
                        + (float)(v19 & 1 | (unsigned int)((unsigned __int64)v19 >> 1));
                  else
                    v20 = (float)(int)v19;
                  v21 = v20 * 1000.0;
                  v22 = *((_QWORD *)v7 + 2);
                  if ( v22 < 0 )
                  {
                    v36 = (unsigned __int64)v22 >> 1;
                    v22 = *((_QWORD *)v7 + 2) & 1LL;
                    v23 = (float)(int)(v22 | v36) + (float)(int)(v22 | v36);
                  }
                  else
                  {
                    v23 = (float)(int)v22;
                  }
                  v24 = v21 / v23;
                  if ( v13 == v10 )
                  {
                    v30 = (char *)v13 - v14;
                    v31 = v30 >> 2;
                    if ( v30 >> 2 == 0x3FFFFFFFFFFFFFFFLL )
                      std::_Dwm_Xlength_error((const char *)v22);
                    v32 = ((char *)v10 - v14) >> 2;
                    if ( v32 > 0x3FFFFFFFFFFFFFFFLL - (v32 >> 1) )
                    {
                      v33 = 0x3FFFFFFFFFFFFFFFLL;
                    }
                    else
                    {
                      v33 = v31 + 1;
                      if ( (v32 >> 1) + v32 >= v31 + 1 )
                        v33 = (v32 >> 1) + v32;
                      if ( v33 > 0x3FFFFFFFFFFFFFFFLL )
                        std::_Throw_bad_array_new_length();
                    }
                    v49 = 4 * v33;
                    v34 = (float *)std::_Allocate<16,std::_Default_allocate_traits,0>(4 * v33);
                    v34[v31] = v24;
                    memmove_0(v34, v14, v30);
                    if ( v14 )
                    {
                      v35 = 4 * v32;
                      v45 = 4 * v32;
                      v46 = v14;
                      if ( 4 * v32 >= 0x1000 )
                      {
                        std::_Adjust_manually_vector_aligned(&v46, &v45);
                        v35 = v45;
                        v14 = v46;
                      }
                      operator delete(v14, v35);
                    }
                    v14 = v34;
                    Src[0] = v34;
                    v13 = &v34[v31 + 1];
                    v10 = &v34[(unsigned __int64)v49 / 4];
                    v44 = &v34[(unsigned __int64)v49 / 4];
                    v11 = v47;
                    v7 = *(CCompFrameStats **)&v51;
                    v12 = v50;
                  }
                  else
                  {
                    *v13++ = v24;
                  }
                  Src[1] = v13;
                  v9 = v9 + v24;
                }
              }
            }
          }
        }
        v16 = v53;
      }
      v11 += 17;
      v47 = v11;
      v15 += 17;
    }
    while ( v11 != v12 );
    v5 = v52;
  }
  LeaveCriticalSection(lpCriticalSection[0]);
  v25 = 0.0;
  v42 = 0.0;
  v26 = ((char *)v13 - v14) >> 2;
  if ( v26 )
  {
    if ( (v26 & 0x8000000000000000uLL) != 0LL )
      v27 = (double)(int)((((char *)v13 - v14) >> 2) & 1 | (v26 >> 1))
          + (double)(int)((((char *)v13 - v14) >> 2) & 1 | (v26 >> 1));
    else
      v27 = (double)(int)v26;
    v25 = v9 / v27;
    v42 = v9 / v27;
    if ( !v5 )
      goto LABEL_29;
    if ( v26 > 1 )
    {
      v51 = 0.0;
      lpCriticalSection[0] = (LPCRITICAL_SECTION)&v42;
      lpCriticalSection[1] = (LPCRITICAL_SECTION)&v51;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_5a5df3e7ea2afaeb6c182426c549c520___(
        &v50,
        v14,
        v13,
        lpCriticalSection);
      v38 = v37 - 1;
      if ( v38 < 0 )
        v39 = (double)(int)(v38 & 1 | ((unsigned __int64)v38 >> 1))
            + (double)(int)(v38 & 1 | ((unsigned __int64)v38 >> 1));
      else
        v39 = (double)(int)v38;
      v40 = sqrt(v51 / v39);
      v8 = v40;
      v25 = v42;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_29;
  }
  v41 = v8;
  *v5 = v41;
LABEL_29:
  if ( v14 )
    std::_Deallocate<16,0>(v14, ((char *)v10 - v14) & 0xFFFFFFFFFFFFFFFCuLL);
  return v25;
}
