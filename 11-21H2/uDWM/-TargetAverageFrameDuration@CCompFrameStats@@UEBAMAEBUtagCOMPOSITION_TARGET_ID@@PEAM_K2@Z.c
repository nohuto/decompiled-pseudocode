/*
 * XREFs of ?TargetAverageFrameDuration@CCompFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x180008FD0
 * Callers:
 *     ?SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ @ 0x180004F30 (-SendAnimationLastFrameTelemetry@CAnimationFrameStats@@IEAAXXZ.c)
 *     ?TargetAverageFrameDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z @ 0x18010A9C0 (-TargetAverageFrameDuration@CAnimationFrameStats@@UEBAMAEBUtagCOMPOSITION_TARGET_ID@@PEAM_K2@Z.c)
 * Callees:
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x180004130 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 *     ?CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z @ 0x180008D60 (-CalcFrameRange@CCompFrameStats@@IEBAXPEA_K0@Z.c)
 *     ??8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z @ 0x180009750 (--8tagCOMPOSITION_TARGET_ID@@QEBA_NAEBU0@@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000FF20 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     sqrt @ 0x180060EF8 (sqrt.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_0c473a5cd93e874783090037bb7736f1___ @ 0x18010AA8C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_float_______lambda_0c473.c)
 */

// Hidden C++ exception states: #wind=1
float __fastcall CCompFrameStats::TargetAverageFrameDuration(
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
  unsigned __int64 *v10; // r9
  unsigned __int64 *v11; // rdi
  float *v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // r13
  const struct tagCOMPOSITION_TARGET_ID *v15; // r14
  unsigned __int64 v16; // rcx
  __int64 v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm0_4
  __int64 v20; // rcx
  float v21; // xmm1_4
  float v22; // xmm0_4
  double v23; // xmm1_8
  __int64 v24; // rdi
  unsigned __int64 v25; // r11
  double v26; // xmm0_8
  __int64 v29; // rax
  __int64 v30; // r11
  __int64 v31; // r11
  double v32; // xmm1_8
  float v33; // xmm1_4
  float v34; // xmm0_4
  double v35; // [rsp+28h] [rbp-61h] BYREF
  unsigned __int64 *v36; // [rsp+30h] [rbp-59h] BYREF
  LPCRITICAL_SECTION lpCriticalSection[2]; // [rsp+48h] [rbp-41h] BYREF
  __int128 v38; // [rsp+58h] [rbp-31h] BYREF
  float *v39; // [rsp+68h] [rbp-21h]
  float v40; // [rsp+E8h] [rbp+5Fh] BYREF
  const struct tagCOMPOSITION_TARGET_ID *v41; // [rsp+F0h] [rbp+67h]
  double v42; // [rsp+F8h] [rbp+6Fh] BYREF
  unsigned __int64 v43; // [rsp+100h] [rbp+77h] BYREF

  v43 = a4;
  v42 = *(double *)&a3;
  v41 = a2;
  v5 = a3;
  v7 = 0.0;
  v8 = 0.0;
  v38 = 0LL;
  v9 = 0LL;
  v39 = 0LL;
  lpCriticalSection[0] = (LPCRITICAL_SECTION)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  CCompFrameStats::CalcFrameRange(this, &v43, &a5);
  v10 = (unsigned __int64 *)*((_QWORD *)this + 15);
  v36 = v10;
  v11 = (unsigned __int64 *)*((_QWORD *)this + 14);
  v12 = 0LL;
  if ( v11 != v10 )
  {
    v13 = a5;
    v14 = v43;
    v15 = v41;
    do
    {
      if ( *v11 >= v14 && *v11 <= v13 )
      {
        if ( (unsigned __int8)tagCOMPOSITION_TARGET_ID::operator==(v11 + 4, v15) )
        {
          if ( v11[9] )
          {
            v16 = v11[16];
            if ( v16 )
            {
              if ( v16 > v11[1] )
              {
                v17 = v16 - v11[1];
                if ( v17 < 0 )
                  v18 = (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1))
                      + (float)(v17 & 1 | (unsigned int)((unsigned __int64)v17 >> 1));
                else
                  v18 = (float)(int)v17;
                v19 = v18 * 1000.0;
                v20 = *((_QWORD *)this + 2);
                if ( v20 < 0 )
                {
                  v29 = *((_QWORD *)this + 2) & 1LL | ((unsigned __int64)v20 >> 1);
                  v21 = (float)(int)v29 + (float)(int)v29;
                }
                else
                {
                  v21 = (float)(int)v20;
                }
                v22 = v19 / v21;
                v40 = v22;
                if ( v12 == v9 )
                {
                  std::vector<float>::_Emplace_reallocate<float const &>((const void **)&v38, v12, &v40);
                  v9 = v39;
                  v12 = (float *)*((_QWORD *)&v38 + 1);
                  v22 = v40;
                  v10 = v36;
                }
                else
                {
                  *v12++ = v22;
                  *((_QWORD *)&v38 + 1) = v12;
                }
                v8 = v8 + v22;
              }
            }
          }
        }
      }
      v11 += 17;
    }
    while ( v11 != v10 );
    v5 = *(float **)&v42;
  }
  LeaveCriticalSection(lpCriticalSection[0]);
  v23 = 0.0;
  v35 = 0.0;
  v24 = v38;
  v25 = (__int64)((__int64)v12 - v38) >> 2;
  if ( v25 )
  {
    if ( (v25 & 0x8000000000000000uLL) != 0LL )
      v26 = (double)(int)(((__int64)((__int64)v12 - v38) >> 2) & 1 | (v25 >> 1))
          + (double)(int)(((__int64)((__int64)v12 - v38) >> 2) & 1 | (v25 >> 1));
    else
      v26 = (double)(int)v25;
    v23 = v8 / v26;
    v35 = v8 / v26;
    if ( !v5 )
      goto LABEL_22;
    if ( v25 > 1 )
    {
      v42 = 0.0;
      lpCriticalSection[0] = (LPCRITICAL_SECTION)&v35;
      lpCriticalSection[1] = (LPCRITICAL_SECTION)&v42;
      std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_float_______lambda_0c473a5cd93e874783090037bb7736f1___(
        &v36,
        v38,
        v12,
        lpCriticalSection);
      v31 = v30 - 1;
      if ( v31 < 0 )
        v32 = (double)(int)(v31 & 1 | ((unsigned __int64)v31 >> 1))
            + (double)(int)(v31 & 1 | ((unsigned __int64)v31 >> 1));
      else
        v32 = (double)(int)v31;
      v33 = sqrt(v42 / v32);
      v7 = v33;
      v23 = v35;
    }
  }
  else if ( !v5 )
  {
    goto LABEL_22;
  }
  v34 = v7;
  *v5 = v34;
LABEL_22:
  if ( v24 )
    std::_Deallocate<16,0>(v24, ((unsigned __int64)v9 - v24) & 0xFFFFFFFFFFFFFFFCuLL);
  return v23;
}
