/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801CB8A0
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801CB720 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1F48 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 */

void __fastcall MPCClickerProcessor::ProcessPoints(
        MPCClickerProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  bool v4; // zf
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm9_4
  float v10; // xmm10_4
  const char *v11; // r9
  float v12; // xmm6_4
  const char *v13; // r9
  float v14; // xmm6_4
  float v15; // xmm13_4
  struct MPCHolographicInputManager *Instance; // rax
  const char *v17; // r9
  MPCConstantManager *v18; // rcx
  BOOL v19; // eax
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  const char *v22; // r9
  MPCConstantManager *v23; // rcx
  const char *v24; // r9
  MPCConstantManager *v25; // rcx
  const char *v26; // r9
  struct MPCHolographicInputManager *v27; // rax
  float *v28; // rax
  const char *v29; // r9
  float *v30; // rdi
  float v31; // xmm0_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  const char *v34; // r9
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v42; // xmm1_4
  float *v43; // rax
  struct MPCHolographicInputManager *v44; // rax
  __int64 v45; // xmm0_8
  float *v46; // rax
  __int128 v47; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-D8h]
  __int64 v49; // [rsp+38h] [rbp-D0h] BYREF
  int v50; // [rsp+40h] [rbp-C8h]
  _OWORD v51[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v52[16]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v53; // [rsp+98h] [rbp-70h]
  __int128 v54; // [rsp+A8h] [rbp-60h]
  __int128 v55; // [rsp+B8h] [rbp-50h]
  __int128 v56; // [rsp+C8h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+DD0h] [rbp+CC8h]

  v4 = *((_BYTE *)this + 3700) == 0;
  v7 = (float)(*((float *)a2 + 566) + *((float *)this + 921)) * 0.5;
  v8 = (float)(*((float *)a2 + 565) + *((float *)this + 920)) * 0.5;
  v9 = 0.0;
  v10 = 0.0;
  *((float *)this + 920) = v8;
  *((float *)this + 921) = v7;
  if ( !v4 )
  {
    v9 = v8 - *((float *)this + 922);
    v10 = v7 - *((float *)this + 923);
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  v48 = 13LL;
  *((_QWORD *)&v47 + 1) = L"DeadZoneAngle";
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64)this + 24,
    (__int128 *)((char *)&v47 + 8));
  if ( COERCE_FLOAT(L"DeadZoneAngle") > COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) )
    v9 = 0.0;
  LODWORD(v12) = COERCE_UNSIGNED_INT(*((float *)this + 921) - 0.0) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
  *((_QWORD *)&v47 + 1) = L"DeadZoneAngle";
  v48 = 13LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64)this + 24,
    (__int128 *)((char *)&v47 + 8));
  if ( COERCE_FLOAT(L"DeadZoneAngle") > v12 )
    v10 = 0.0;
  v14 = 0.0;
  if ( *((_BYTE *)a2 + 2322) && (*((_BYTE *)a2 + 2280) & 0x40) != 0 )
  {
    v15 = *((float *)a2 + 575);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v13);
    v48 = 18LL;
    *((_QWORD *)&v47 + 1) = L"ThumbStickDeadZone";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v47 + 8));
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 0.0) & _xmm) > COERCE_FLOAT(L"ThumbStickDeadZone") )
    {
      v14 = (float)(v15 + *((float *)this + 924)) * 0.5;
      *((float *)this + 924) = v14;
    }
  }
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v52, Instance, 0xCD0uLL);
  v18 = MPCConstantManager::s_instance;
  v19 = *((_BYTE *)a2 + 2256) == 1;
  v51[0] = v53;
  v20 = v55;
  v51[1] = v54;
  v21 = v56;
  *((_DWORD *)this + 918) = v19;
  v51[2] = v20;
  v51[3] = v21;
  if ( !v18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v17);
  v48 = 18LL;
  *((_QWORD *)&v47 + 1) = L"PointScaleFactorXY";
  MPCConstantManager::GetConstant<float>((__int64)v18, (__int64)this + 24, (__int128 *)((char *)&v47 + 8));
  v23 = MPCConstantManager::s_instance;
  *((float *)this + 932) = (float)(COERCE_FLOAT(L"PointScaleFactorXY") * v9) + *((float *)this + 932);
  if ( !v23 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v22);
  *((_QWORD *)&v47 + 1) = L"PointScaleFactorXY";
  v48 = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)v23, (__int64)this + 24, (__int128 *)((char *)&v47 + 8));
  v25 = MPCConstantManager::s_instance;
  *((float *)this + 933) = (float)(COERCE_FLOAT(L"PointScaleFactorXY") * v10) + *((float *)this + 933);
  if ( !v25 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v24);
  v48 = 21LL;
  *((_QWORD *)&v47 + 1) = L"PointScaleFactorStick";
  MPCConstantManager::GetConstant<float>((__int64)v25, (__int64)this + 24, (__int128 *)((char *)&v47 + 8));
  v4 = *((_DWORD *)this + 918) == 0;
  *((_DWORD *)this + 922) = *((_DWORD *)this + 920);
  *((_DWORD *)this + 923) = *((_DWORD *)this + 921);
  *((_BYTE *)this + 3700) = 1;
  *((float *)this + 934) = (float)(COERCE_FLOAT((unsigned int)L"PointScaleFactorStick" ^ _xmm) * v14)
                         + *((float *)this + 934);
  if ( v4 )
  {
    v44 = MPCHolographicInputManager::GetInstance();
    v45 = *((_QWORD *)v44 + 30);
    LODWORD(v44) = *((_DWORD *)v44 + 62);
    v49 = v45;
    v50 = (int)v44;
    v46 = Windows::Foundation::Numerics::transform((float *)&v47 + 2, (float *)&v49, (float *)v51);
    *(_QWORD *)((char *)this + 3716) = *(_QWORD *)v46;
    *((float *)this + 931) = v46[2];
  }
  else if ( *((_DWORD *)this + 919) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v26);
    *((_QWORD *)&v47 + 1) = L"PointScaleFactorXY";
    v48 = 18LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v47 + 8));
    v30 = (float *)((char *)this + 3716);
    v31 = COERCE_FLOAT(L"PointScaleFactorXY") * v9;
    v32 = (float)(v31 * 0.0) + *((float *)this + 930);
    v33 = (float)(v31 * 0.0) + *((float *)this + 931);
    *((float *)this + 929) = v31 + *((float *)this + 929);
    *((float *)this + 930) = v32;
    *((float *)this + 931) = v33;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v29);
    *((_QWORD *)&v47 + 1) = L"PointScaleFactorXY";
    v48 = 18LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v47 + 8));
    v35 = COERCE_FLOAT(L"PointScaleFactorXY") * v10;
    v36 = v35 + *((float *)this + 930);
    v37 = v35 * 0.0;
    v38 = v37 + *((float *)this + 931);
    *v30 = v37 + *v30;
    *((float *)this + 930) = v36;
    *((float *)this + 931) = v38;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v34);
    *((_QWORD *)&v47 + 1) = L"PointScaleFactorStick";
    v48 = 21LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v47 + 8));
    v39 = COERCE_FLOAT((unsigned int)L"PointScaleFactorStick" ^ _xmm) * v14;
    v40 = v39 + *((float *)this + 931);
    v41 = v39 * 0.0;
    v42 = v41 + *((float *)this + 930);
    *v30 = v41 + *v30;
    *((float *)this + 930) = v42;
    *((float *)this + 931) = v40;
    v43 = Windows::Foundation::Numerics::transform((float *)&v49, (float *)this + 929, (float *)v51);
    *((_QWORD *)this + 463) = *(_QWORD *)v43;
    *((float *)this + 928) = v43[2];
  }
  else
  {
    v27 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 3716) = *((_QWORD *)v27 + 30);
    *((_DWORD *)this + 931) = *((_DWORD *)v27 + 62);
    v28 = Windows::Foundation::Numerics::transform((float *)&v49, (float *)this + 929, (float *)v51);
    *((_QWORD *)this + 463) = *(_QWORD *)v28;
    *(float *)&v28 = v28[2];
    v50 = 0;
    *((_DWORD *)this + 928) = (_DWORD)v28;
    LODWORD(v28) = v50;
    *((_QWORD *)this + 466) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 934) = (_DWORD)v28;
    *((_BYTE *)this + 3700) = 0;
  }
  *((_DWORD *)this + 919) = *((_DWORD *)this + 918);
}
