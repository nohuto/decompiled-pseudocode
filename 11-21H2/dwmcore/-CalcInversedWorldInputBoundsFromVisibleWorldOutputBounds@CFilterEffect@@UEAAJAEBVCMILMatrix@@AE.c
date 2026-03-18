/*
 * XREFs of ?CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds@CFilterEffect@@UEAAJAEBVCMILMatrix@@AEBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@1PEAV3@2@Z @ 0x180203C50
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFilterEffect::CalcInversedWorldInputBoundsFromVisibleWorldOutputBounds(
        __int64 *a1,
        __int64 a2,
        float *a3,
        __int128 *a4,
        _DWORD *a5,
        float *a6)
{
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rcx
  float v15; // xmm0_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm3_4
  float v19; // xmm0_4
  float v20; // xmm1_4
  float v21; // xmm5_4
  float v22; // xmm4_4
  float v23; // xmm1_4
  __int128 v24; // [rsp+40h] [rbp-58h] BYREF

  *a5 = 0;
  a5[1] = 0;
  a5[2] = 0;
  a5[3] = 0;
  v10 = *a1;
  v24 = *a4;
  v11 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, __int64))(v10 + 248))(a1, &v24, a2);
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x166u);
    goto LABEL_16;
  }
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, float *, __int128 *, _DWORD *, float *))(*a1 + 240))(
             a1,
             a2,
             a3,
             a4,
             a5,
             a6);
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0LL, result, 0x16Eu);
LABEL_16:
    result = 0LL;
    *(_OWORD *)a5 = *a4;
    *(_OWORD *)a6 = *(_OWORD *)a3;
    return result;
  }
  v15 = *a3;
  v16 = *a6;
  if ( *a3 > *a6 )
  {
    *a6 = v15;
    v16 = v15;
  }
  v17 = a3[1];
  v18 = a6[1];
  if ( v17 > v18 )
  {
    a6[1] = v17;
    v18 = v17;
  }
  v19 = a6[2];
  v20 = a3[2];
  v21 = v19;
  if ( v19 > v20 )
  {
    a6[2] = v20;
    v19 = v20;
    v21 = v20;
  }
  v22 = a3[3];
  v23 = a6[3];
  if ( v23 > v22 )
  {
    a6[3] = v22;
    v19 = v21;
    v23 = v22;
  }
  if ( v19 <= v16 || v23 <= v18 )
  {
    a6[3] = 0.0;
    a6[2] = 0.0;
    a6[1] = 0.0;
    *a6 = 0.0;
  }
  return result;
}
