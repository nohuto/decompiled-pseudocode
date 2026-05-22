/*
 * XREFs of ?ProcessHistory@RayStabilizer@@AEAA_N_KAEBUTargetingData@1@AEAUProcessedHistoryData@1@@Z @ 0x1800C97B4
 * Callers:
 *     ?PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z @ 0x1800C8E08 (-PerformDropOffStabilization@RayStabilizer@@AEAAXAEAVRayStabilizationResult@@@Z.c)
 * Callees:
 *     _o_fmodf_0 @ 0x1800565E0 (_o_fmodf_0.c)
 *     _o_sqrtf_0 @ 0x180056634 (_o_sqrtf_0.c)
 *     ?DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1800C8DBC (-DeltaAngle@RayStabilizer@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z @ 0x1800C9D90 (-TransformRay@RayStabilizer@@CA_NUTargetingRay@@AEAUTargetingData@1@@Z.c)
 *     ?GetAtStep@RayStabilizationResult@@QEBA?AUTargetingRay@@_K@Z @ 0x1800CA4FC (-GetAtStep@RayStabilizationResult@@QEBA-AUTargetingRay@@_K@Z.c)
 */

bool __fastcall RayStabilizer::ProcessHistory(
        RayStabilizer *this,
        __int64 a2,
        const struct RayStabilizer::TargetingData *a3,
        struct RayStabilizer::ProcessedHistoryData *a4)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  float v10; // xmm11_4
  float v11; // xmm0_4
  float v12; // xmm8_4
  float v13; // xmm6_4
  float v14; // xmm0_4
  int v15; // eax
  float v16; // xmm7_4
  float v17; // xmm3_4
  float v18; // xmm1_4
  float v19; // xmm2_4
  float v20; // xmm8_4
  float v21; // xmm0_4
  float v22; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm6_4
  float v27; // xmm1_4
  float v28; // xmm7_4
  float v29; // xmm1_4
  float v30; // xmm3_4
  bool result; // al
  float v32; // xmm0_4
  float v33; // xmm8_4
  float v34; // xmm9_4
  float v35; // xmm10_4
  float v36; // xmm7_4
  float v37; // xmm0_4
  float v38; // xmm6_4
  float v39; // xmm0_4
  float v40; // xmm0_4
  float v41; // xmm0_4
  float v42; // xmm9_4
  float v43; // xmm0_4
  __int64 v44; // [rsp+28h] [rbp-99h] BYREF
  __int64 v45; // [rsp+30h] [rbp-91h]
  __int64 v46; // [rsp+38h] [rbp-89h] BYREF
  int v47; // [rsp+40h] [rbp-81h]
  __int128 v48; // [rsp+48h] [rbp-79h] BYREF
  __int64 v49; // [rsp+58h] [rbp-69h]
  __int128 v50; // [rsp+68h] [rbp-59h] BYREF
  __int64 v51; // [rsp+78h] [rbp-49h]
  float v52; // [rsp+88h] [rbp-39h] BYREF
  float v53; // [rsp+8Ch] [rbp-35h]
  float v54; // [rsp+90h] [rbp-31h]
  __int64 v55; // [rsp+94h] [rbp-2Dh]
  int v56; // [rsp+9Ch] [rbp-25h]
  float v57; // [rsp+A0h] [rbp-21h]
  float v58; // [rsp+A4h] [rbp-1Dh]

  *((_DWORD *)a4 + 6) = 0;
  *((_DWORD *)a4 + 2) = 0;
  *((_DWORD *)a4 + 14) = 0;
  *((_DWORD *)a4 + 10) = 0;
  v8 = *((_QWORD *)this + 3);
  v9 = v8 + *((_QWORD *)this + 4);
  *(_DWORD *)a4 = 0x800000;
  v10 = 0.0;
  *((_DWORD *)a4 + 4) = 0x800000;
  *((_DWORD *)a4 + 8) = 0x800000;
  *((_DWORD *)a4 + 12) = 0x800000;
  *((_DWORD *)a4 + 1) = 2139095039;
  *((_DWORD *)a4 + 5) = 2139095039;
  *((_DWORD *)a4 + 9) = 2139095039;
  *((_DWORD *)a4 + 13) = 2139095039;
  while ( v8 != v9 )
  {
    RayStabilizationResult::GetAtStep(
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * (v8 & (*((_QWORD *)this + 2) - 1LL))),
      &v48,
      a2);
    v50 = v48;
    v51 = v49;
    if ( (unsigned __int8)RayStabilizer::TransformRay(&v50, &v52) )
    {
      v10 = v10 + 1.0;
      v11 = *((float *)a3 + 6) - v57;
      LODWORD(v12) = COERCE_UNSIGNED_INT(
                       (float)((float)((float)(v53 - *((float *)a3 + 1)) * (float)(v53 - *((float *)a3 + 1)))
                             + (float)((float)(v52 - *(float *)a3) * (float)(v52 - *(float *)a3)))
                     + (float)((float)(v54 - *((float *)a3 + 2)) * (float)(v54 - *((float *)a3 + 2)))) & _xmm;
      o_fmodf_0();
      LODWORD(v13) = LODWORD(v11) & _xmm;
      v14 = *((float *)a3 + 7) - v58;
      o_fmodf_0();
      v15 = *((_DWORD *)a3 + 5);
      v44 = *(_QWORD *)((char *)a3 + 12);
      LODWORD(v16) = LODWORD(v14) & _xmm;
      LODWORD(v45) = v15;
      v46 = v55;
      v47 = v56;
      v17 = RayStabilizer::DeltaAngle((float *)&v46, (float *)&v44);
      v18 = fminf(*(float *)a4, v12);
      v19 = fmaxf(*((float *)a4 + 1), v12);
      v20 = v12 + *((float *)a4 + 2);
      v21 = fminf(*((float *)a4 + 12), v16);
      *(float *)a4 = v18;
      v22 = fminf(*((float *)a4 + 8), v13);
      *((float *)a4 + 1) = v19;
      v23 = *((float *)a4 + 9);
      *((float *)a4 + 12) = v21;
      v24 = fmaxf(v23, v13);
      v25 = *((float *)a4 + 4);
      v26 = v13 + *((float *)a4 + 10);
      *((float *)a4 + 8) = v22;
      v27 = fmaxf(*((float *)a4 + 13), v16);
      *((float *)a4 + 2) = v20;
      v28 = v16 + *((float *)a4 + 14);
      *((float *)a4 + 9) = v24;
      *((float *)a4 + 10) = v26;
      *((float *)a4 + 4) = fminf(v25, v17);
      *((float *)a4 + 13) = v27;
      v29 = fmaxf(*((float *)a4 + 5), v17);
      *((float *)a4 + 14) = v28;
      v30 = v17 + *((float *)a4 + 6);
      *((float *)a4 + 5) = v29;
      *((float *)a4 + 6) = v30;
    }
    ++v8;
  }
  if ( v10 == 0.0 )
    return 0;
  v32 = *(float *)a4;
  v33 = *((float *)a4 + 10) / v10;
  v34 = *((float *)a4 + 14) / v10;
  v35 = *((float *)a4 + 6) / v10;
  *((float *)a4 + 10) = v33;
  *((float *)a4 + 14) = v34;
  *((float *)a4 + 6) = v35;
  v36 = o_sqrtf_0(v32);
  v37 = *((float *)a4 + 1);
  *(float *)a4 = v36;
  v38 = o_sqrtf_0(v37);
  v39 = *((float *)a4 + 2) / v10;
  *((float *)a4 + 1) = v38;
  v40 = o_sqrtf_0(v39);
  *((float *)a4 + 2) = v40;
  result = 1;
  *((float *)a4 + 3) = (float)(v40 + v40) + (float)(v38 - v36);
  v41 = *((float *)a4 + 13) - *((float *)a4 + 12);
  *((float *)a4 + 11) = (float)(v33 + v33) + (float)(*((float *)a4 + 9) - *((float *)a4 + 8));
  v42 = (float)(v34 + v34) + v41;
  v43 = *((float *)a4 + 5) - *((float *)a4 + 4);
  *((float *)a4 + 15) = v42;
  *((float *)a4 + 7) = (float)(v35 + v35) + v43;
  return result;
}
