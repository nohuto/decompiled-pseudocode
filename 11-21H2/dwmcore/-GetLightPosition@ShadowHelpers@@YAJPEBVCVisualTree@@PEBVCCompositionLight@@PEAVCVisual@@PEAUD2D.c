/*
 * XREFs of ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1802A9FAC
 * Callers:
 *     ?IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1@@Z @ 0x180236744 (-IsShadowInFrontOfReceiver@CProjectedShadowScene@@AEBA_NPEBVCDrawingContext@@PEBUReceiverEntry@1.c)
 *     ?GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Numerics@Foundation@Windows@@PEAVCMILMatrix@@@Z @ 0x1802AA298 (-GetLightToCameraMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@AEBUfloat3@Num.c)
 *     ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1802AA6D0 (-GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@@Z @ 0x18023610C (-CalcSrcToDestVisualTransform@CVisual@@SAJPEBVCVisualTree@@W4WalkReason@@PEAV1@2PEAVCMILMatrix@@.c)
 *     ?Transform4DVector@CMILMatrix@@QEBA?AUD2D_VECTOR_4F@@AEBU2@@Z @ 0x180261004 (-Transform4DVector@CMILMatrix@@QEBA-AUD2D_VECTOR_4F@@AEBU2@@Z.c)
 */

__int64 __fastcall ShadowHelpers::GetLightPosition(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        const struct CCompositionLight *a3,
        FLOAT *a4)
{
  unsigned int v8; // ebx
  const struct CCompositionLight *v9; // rax
  __int64 v10; // rdx
  CVisual *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  FLOAT v16; // xmm1_4
  FLOAT v17; // xmm0_4
  unsigned __int64 v18; // xmm1_8
  int v19; // eax
  __int64 v20; // rcx
  float v21; // xmm6_4
  float v22; // xmm7_4
  float v23; // xmm8_4
  __int64 v24; // rax
  float *v25; // rax
  FLOAT v26; // xmm8_4
  FLOAT v27; // xmm7_4
  __m128 v28; // xmm1
  FLOAT z; // eax
  struct D2D_VECTOR_4F v31; // [rsp+38h] [rbp-D0h] BYREF
  struct D2D_VECTOR_4F v32; // [rsp+48h] [rbp-C0h] BYREF
  _OWORD v33[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+88h] [rbp-80h]
  int v35; // [rsp+98h] [rbp-70h]
  _OWORD v36[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v37; // [rsp+E8h] [rbp-20h]

  v8 = 0;
  v9 = (const struct CCompositionLight *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 200LL))(a2);
  v37 = 0;
  v11 = v9;
  if ( a3 == v9 )
  {
    v36[0] = _xmm;
    v36[1] = _xmm;
    BYTE1(v37) = BYTE1(v37) & 0xC0 | 0x17;
    v36[2] = _xmm;
    v36[3] = _xmm;
    LOBYTE(v37) = 85;
  }
  else
  {
    v12 = CVisual::CalcSrcToDestVisualTransform(this, v10, (__int64)v9, a3, (__int64)v36);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v12, 0x59u);
      return v8;
    }
  }
  if ( (*(unsigned int (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL))(a2) == 2 )
  {
    v15 = (*(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 224LL))(a2);
    v16 = *(float *)(v15 + 4);
    v31.x = *(FLOAT *)v15;
    v17 = *(float *)(v15 + 8);
    v31.y = v16;
    v31.z = v17;
    LODWORD(v31.w) = (_DWORD)FLOAT_1_0;
    CMILMatrix::Transform4DVector((CMILMatrix *)v36, &v32, &v31);
    v31.z = v32.z;
    v18 = _mm_unpacklo_ps((__m128)LODWORD(v32.x), (__m128)LODWORD(v32.y)).m128_u64[0];
  }
  else
  {
    v35 = 0;
    if ( a3 == v11 )
    {
      v33[0] = _xmm;
      v33[1] = _xmm;
      BYTE1(v35) = BYTE1(v35) & 0xC0 | 0x17;
      v33[2] = _xmm;
      v34 = _xmm;
      LOBYTE(v35) = 85;
    }
    else
    {
      v19 = CVisual::CalcSrcToDestVisualTransform(this, v14, (__int64)a3, v11, (__int64)v33);
      v8 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0LL, v19, 0x72u);
        return v8;
      }
    }
    v21 = *(float *)&v34;
    v22 = *((float *)&v34 + 1);
    v23 = *((float *)&v34 + 2);
    v24 = *(_QWORD *)a2;
    v31.w = *((FLOAT *)&v34 + 3);
    v25 = (float *)(*(__int64 (__fastcall **)(const struct CVisualTree *))(v24 + 232))(a2);
    v26 = v23 - (float)(v25[2] * 100.0);
    v27 = v22 - (float)(v25[1] * 100.0);
    v31.x = v21 - (float)(*v25 * 100.0);
    v31.z = v26;
    v31.y = v27;
    v28 = (__m128)_mm_loadu_si128((const __m128i *)CMILMatrix::Transform4DVector((CMILMatrix *)v36, &v32, &v31));
    LODWORD(v31.z) = _mm_shuffle_ps(v28, v28, 170).m128_u32[0];
    v18 = _mm_unpacklo_ps(v28, _mm_shuffle_ps(v28, v28, 85)).m128_u64[0];
  }
  z = v31.z;
  *(_QWORD *)a4 = v18;
  a4[2] = z;
  return v8;
}
