/*
 * XREFs of ?ProcessPoints@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F5828
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F3AB0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800CA740 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801F1AD8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 */

void __fastcall MPCMouseProcessor::ProcessPoints(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  struct MPCHolographicInputManager *Instance; // rax
  const char *v5; // r9
  float v6; // xmm10_4
  float v7; // xmm11_4
  float v8; // xmm12_4
  float v9; // xmm6_4
  float v10; // xmm7_4
  float v11; // xmm8_4
  float v12; // xmm9_4
  const char *v13; // r9
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm13_4
  const char *v18; // r9
  float v19; // xmm0_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm10_4
  const char *v23; // r9
  float v24; // xmm0_4
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm6_4
  const char *v28; // r9
  MPCConstantManager *v29; // rcx
  float v30; // xmm0_4
  float v31; // xmm6_4
  const char *v32; // r9
  MPCConstantManager *v33; // rcx
  float v34; // xmm0_4
  float v35; // xmm6_4
  bool v36; // zf
  struct MPCHolographicInputManager *v37; // rax
  struct MPCHolographicInputManager *v38; // rax
  float *v39; // rax
  __int128 v40; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+30h] [rbp-D8h]
  __int128 v42; // [rsp+38h] [rbp-D0h] BYREF
  float v43; // [rsp+48h] [rbp-C0h]
  float v44; // [rsp+4Ch] [rbp-BCh]
  float v45; // [rsp+50h] [rbp-B8h]
  float v46; // [rsp+58h] [rbp-B0h]
  float v47; // [rsp+5Ch] [rbp-ACh]
  float v48; // [rsp+60h] [rbp-A8h]
  _QWORD v49[3]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v50; // [rsp+88h] [rbp-80h]
  __int128 v51; // [rsp+98h] [rbp-70h]
  __int128 v52; // [rsp+A8h] [rbp-60h]
  _BYTE v53[16]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v54; // [rsp+C8h] [rbp-40h]
  __int128 v55; // [rsp+D8h] [rbp-30h]
  __int128 v56; // [rsp+E8h] [rbp-20h]
  __int128 v57; // [rsp+F8h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+E20h] [rbp+D18h]

  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v53, Instance, 0xCD0uLL);
  *(_OWORD *)&v49[1] = v54;
  v50 = v55;
  v51 = v56;
  v52 = v57;
  MPCMath::OrientToGravity(&v42, (float *)&v49[1], 0.89999998);
  v6 = v43;
  v7 = v44;
  v8 = v45;
  v9 = v46;
  v10 = v47;
  v11 = v48;
  v12 = (float)*((int *)this + 1320);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v5);
  *((_QWORD *)&v40 + 1) = L"MouseParams_PointScaleFactorXY";
  v41 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
    (__int128 *)((char *)&v40 + 8));
  v14 = COERCE_FLOAT(L"MouseParams_PointScaleFactorXY") * v12;
  v15 = (float)(v14 * *((float *)&v42 + 1)) + *((float *)this + 1330);
  v16 = (float)(v14 * *((float *)&v42 + 2)) + *((float *)this + 1331);
  *((float *)this + 1329) = (float)(v14 * *(float *)&v42) + *((float *)this + 1329);
  *((float *)this + 1330) = v15;
  *((float *)this + 1331) = v16;
  v17 = (float)*((int *)this + 1321);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v13);
  *((_QWORD *)&v40 + 1) = L"MouseParams_PointScaleFactorXY";
  v41 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
    (__int128 *)((char *)&v40 + 8));
  v19 = COERCE_FLOAT((unsigned int)L"MouseParams_PointScaleFactorXY" ^ _xmm) * v17;
  v20 = (float)(v19 * v7) + *((float *)this + 1330);
  v21 = (float)(v19 * v8) + *((float *)this + 1331);
  *((float *)this + 1329) = (float)(v19 * v6) + *((float *)this + 1329);
  *((float *)this + 1330) = v20;
  *((float *)this + 1331) = v21;
  v22 = (float)*((int *)this + 1323);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v18);
  v41 = 33LL;
  *((_QWORD *)&v40 + 1) = L"MouseParams_PointScaleFactorWheel";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64)this + 40,
    (__int128 *)((char *)&v40 + 8));
  v24 = COERCE_FLOAT((unsigned int)L"MouseParams_PointScaleFactorWheel" ^ _xmm) * v22;
  v25 = (float)(v10 * v24) + *((float *)this + 1330);
  v26 = (float)(v11 * v24) + *((float *)this + 1331);
  *((float *)this + 1329) = (float)(v9 * v24) + *((float *)this + 1329);
  *((float *)this + 1330) = v25;
  *((float *)this + 1331) = v26;
  v27 = (float)*((int *)this + 1320);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v23);
  *((_QWORD *)&v40 + 1) = L"MouseParams_PointScaleFactorXY";
  v41 = 30LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64)this + 40,
    (__int128 *)((char *)&v40 + 8));
  v29 = MPCConstantManager::s_instance;
  v30 = COERCE_FLOAT(L"MouseParams_PointScaleFactorXY") * v27;
  v31 = (float)*((int *)this + 1321);
  *((float *)this + 1332) = v30 + *((float *)this + 1332);
  if ( !v29 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v28);
  *((_QWORD *)&v40 + 1) = L"MouseParams_PointScaleFactorXY";
  v41 = 30LL;
  MPCConstantManager::GetConstant<float>((__int64)v29, (__int64)this + 40, (__int128 *)((char *)&v40 + 8));
  v33 = MPCConstantManager::s_instance;
  v34 = COERCE_FLOAT((unsigned int)L"MouseParams_PointScaleFactorXY" ^ _xmm) * v31;
  v35 = (float)*((int *)this + 1323);
  *((float *)this + 1333) = v34 + *((float *)this + 1333);
  if ( !v33 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v32);
  *((_QWORD *)&v40 + 1) = L"MouseParams_PointScaleFactorWheel";
  v41 = 33LL;
  MPCConstantManager::GetConstant<float>((__int64)v33, (__int64)this + 40, (__int128 *)((char *)&v40 + 8));
  v36 = (*((_BYTE *)this + 5300) & 0x70) == 0;
  *((float *)this + 1334) = (float)(COERCE_FLOAT(L"MouseParams_PointScaleFactorWheel") * v35) + *((float *)this + 1334);
  if ( !v36 && !*((_QWORD *)this + 455) )
  {
    v37 = MPCHolographicInputManager::GetInstance();
    *((_QWORD *)this + 663) = *((_QWORD *)v37 + 30);
    *((_DWORD *)this + 1328) = *((_DWORD *)v37 + 62);
    v38 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v53, v38, 0xCD0uLL);
    *(_OWORD *)&v49[1] = v54;
    v50 = v55;
    v51 = v56;
    v52 = v57;
    v39 = Windows::Foundation::Numerics::transform((float *)&v40 + 2, (float *)this + 1326, (float *)&v49[1]);
    *(_QWORD *)((char *)this + 5316) = *(_QWORD *)v39;
    *(float *)&v39 = v39[2];
    LODWORD(v41) = 0;
    *((_DWORD *)this + 1331) = (_DWORD)v39;
    LODWORD(v39) = v41;
    *((_QWORD *)this + 666) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 1334) = (_DWORD)v39;
  }
}
