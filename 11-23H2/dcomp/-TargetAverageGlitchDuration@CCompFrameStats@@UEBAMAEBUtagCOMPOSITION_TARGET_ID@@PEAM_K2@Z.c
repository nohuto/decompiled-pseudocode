/*
 * XREFs of ?TargetAverageGlitchDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A9910
 * Callers:
 *     ?TargetAverageGlitchDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x1801A4400 (-TargetAverageGlitchDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180003A68 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180013A38 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     sqrt @ 0x18009695C (sqrt.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x18016FC80 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_1e7e29a789397ed4e8377fc110abbbe7___ @ 0x1801A9714 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_float_______lambda_1e7e2.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CCompFrameStats::TargetAverageGlitchDuration(
        CCompFrameStats *this,
        const struct tagCOMPOSITION_TARGET_ID *a2,
        float *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  float *v5; // r14
  double v7; // xmm6_8
  double v8; // xmm7_8
  float *v9; // rbx
  __int64 v10; // r9
  __int64 v11; // rdi
  float *v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  const struct tagCOMPOSITION_TARGET_ID *v15; // r14
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rcx
  float v19; // xmm0_4
  float v20; // xmm0_4
  __int64 v21; // rcx
  float v22; // xmm1_4
  __int64 v23; // rax
  float v24; // xmm0_4
  double v25; // xmm1_8
  void *v26; // rdi
  unsigned __int64 v27; // r11
  double v28; // xmm0_8
  __int64 v29; // r11
  __int64 v30; // r11
  double v31; // xmm1_8
  float v32; // xmm1_4
  float v33; // xmm0_4
  double v36; // [rsp+28h] [rbp-61h] BYREF
  __int128 v37; // [rsp+30h] [rbp-59h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+48h] [rbp-41h] BYREF
  __int128 v39; // [rsp+58h] [rbp-31h] BYREF
  float *v40; // [rsp+68h] [rbp-21h]
  float v41; // [rsp+E8h] [rbp+5Fh] BYREF
  const struct tagCOMPOSITION_TARGET_ID *v42; // [rsp+F0h] [rbp+67h]
  double v43; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int64 v44; // [rsp+100h] [rbp+77h] BYREF

  v44 = a4;
  v43 = *(double *)&a3;
  v42 = a2;
  v5 = a3;
  v7 = 0.0;
  v8 = 0.0;
  v39 = 0LL;
  v9 = 0LL;
  v40 = 0LL;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 72);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 72));
  CCompFrameStats::CalcFrameRange(this, &v44, &a5);
  v10 = *((_QWORD *)this + 18);
  *(_QWORD *)&v37 = v10;
  v11 = *((_QWORD *)this + 17);
  v12 = 0LL;
  if ( v11 != v10 )
  {
    v13 = a5;
    v14 = v44;
    v15 = v42;
    do
    {
      if ( *(_QWORD *)v11 >= v14 && *(_QWORD *)v11 <= v13 )
      {
        if ( tagCOMPOSITION_TARGET_ID::operator==((_DWORD *)(v11 + 32), v15) )
        {
          if ( *(_QWORD *)(v11 + 72) )
          {
            v16 = *(_QWORD *)(v11 + 104);
            if ( v16 )
            {
              v17 = *(_QWORD *)(v11 + 128);
              if ( v17 )
              {
                if ( v17 > v16 )
                {
                  v18 = v17 - v16;
                  if ( v18 < 0 )
                    v19 = (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1))
                        + (float)(v18 & 1 | (unsigned int)((unsigned __int64)v18 >> 1));
                  else
                    v19 = (float)(int)v18;
                  v20 = v19 * 1000.0;
                  v21 = *((_QWORD *)this + 2);
                  if ( v21 < 0 )
                  {
                    v23 = *((_QWORD *)this + 2) & 1LL | ((unsigned __int64)v21 >> 1);
                    v22 = (float)(int)v23 + (float)(int)v23;
                  }
                  else
                  {
                    v22 = (float)(int)v21;
                  }
                  v24 = v20 / v22;
                  v41 = v24;
                  if ( v12 == v9 )
                  {
                    std::vector<float>::_Emplace_reallocate<float const &>((__int64)&v39, v12, &v41);
                    v9 = v40;
                    v12 = (float *)*((_QWORD *)&v39 + 1);
                    v24 = v41;
                    v10 = v37;
                  }
                  else
                  {
                    *v12++ = v24;
                    *((_QWORD *)&v39 + 1) = v12;
                  }
                  v8 = v8 + v24;
                }
              }
            }
          }
        }
      }
      v11 += 136LL;
    }
    while ( v11 != v10 );
    v5 = *(float **)&v43;
  }
  LeaveCriticalSection(lpCriticalSection[0]);
  v25 = 0.0;
  v36 = 0.0;
  v26 = (void *)v39;
  v27 = (__int64)((__int64)v12 - v39) >> 2;
  if ( v27 )
  {
    if ( (v27 & 0x8000000000000000uLL) != 0LL )
      v28 = (double)(int)(((__int64)((__int64)v12 - v39) >> 2) & 1 | (v27 >> 1))
          + (double)(int)(((__int64)((__int64)v12 - v39) >> 2) & 1 | (v27 >> 1));
    else
      v28 = (double)(int)v27;
    v25 = v8 / v28;
    v36 = v8 / v28;
    if ( !v5 )
      goto LABEL_34;
    if ( v27 > 1 )
    {
      v43 = 0.0;
      lpCriticalSection[0] = (LPCRITICAL_SECTION)&v36;
      lpCriticalSection[1] = (LPCRITICAL_SECTION)&v43;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_1e7e29a789397ed4e8377fc110abbbe7___(
        &v37,
        (float *)v39,
        v12,
        (double **)lpCriticalSection);
      v30 = v29 - 1;
      if ( v30 < 0 )
        v31 = (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1))
            + (double)(int)(v30 & 1 | ((unsigned __int64)v30 >> 1));
      else
        v31 = (double)(int)v30;
      v32 = sqrt(v43 / v31);
      v7 = v32;
      v25 = v36;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_34;
  }
  v33 = v7;
  *v5 = v33;
LABEL_34:
  if ( v26 )
    std::_Deallocate<16,0>(v26, ((char *)v9 - (_BYTE *)v26) & 0xFFFFFFFFFFFFFFFCuLL);
  return v25;
}
