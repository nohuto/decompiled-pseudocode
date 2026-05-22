/*
 * XREFs of ?ProcessPoints@MPCClickerProcessor@@IEAAXPEAULegacyInputInfo@@@Z @ 0x1801EA8F8
 * Callers:
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801EA760 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800B95F0 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD890 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
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
  float v15; // xmm12_4
  struct MPCHolographicInputManager *Instance; // rax
  const char *v17; // r9
  _DWORD *v18; // r14
  MPCConstantManager *v19; // rcx
  BOOL v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  const char *v23; // r9
  MPCConstantManager *v24; // rcx
  const char *v25; // r9
  MPCConstantManager *v26; // rcx
  const char *v27; // r9
  struct MPCHolographicInputManager *v28; // rax
  float *v29; // rax
  const char *v30; // r9
  float *v31; // rdi
  float v32; // xmm0_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  const char *v35; // r9
  float v36; // xmm2_4
  float v37; // xmm0_4
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm2_4
  float v41; // xmm0_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float *v44; // rax
  struct MPCHolographicInputManager *v45; // rax
  __int64 v46; // xmm0_8
  float *v47; // rax
  __int128 v48; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v49; // [rsp+30h] [rbp-D8h]
  __int64 v50; // [rsp+38h] [rbp-D0h] BYREF
  int v51; // [rsp+40h] [rbp-C8h]
  _OWORD v52[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v53[16]; // [rsp+88h] [rbp-80h] BYREF
  __int128 v54; // [rsp+98h] [rbp-70h]
  __int128 v55; // [rsp+A8h] [rbp-60h]
  __int128 v56; // [rsp+B8h] [rbp-50h]
  __int128 v57; // [rsp+C8h] [rbp-40h]
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
    v10 = v8 - *((float *)this + 922);
    v9 = v7 - *((float *)this + 923);
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *((_QWORD *)&v48 + 1) = L"DeadZoneAngle";
  v49 = 13LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
    (__int128 *)((char *)&v48 + 8));
  if ( COERCE_FLOAT(L"DeadZoneAngle") > COERCE_FLOAT(COERCE_UNSIGNED_INT(v8 - 0.0) & _xmm) )
    v10 = 0.0;
  LODWORD(v12) = COERCE_UNSIGNED_INT(*((float *)this + 921) - 0.0) & _xmm;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
  *((_QWORD *)&v48 + 1) = L"DeadZoneAngle";
  v49 = 13LL;
  MPCConstantManager::GetConstant<float>(
    (__int64)MPCConstantManager::s_instance,
    (__int64)this + 24,
    (__int128 *)((char *)&v48 + 8));
  if ( COERCE_FLOAT(L"DeadZoneAngle") > v12 )
    v9 = 0.0;
  v14 = 0.0;
  if ( *((_BYTE *)a2 + 2322) && (*((_BYTE *)a2 + 2280) & 0x40) != 0 )
  {
    v15 = *((float *)a2 + 575);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v13);
    v49 = 18LL;
    *((_QWORD *)&v48 + 1) = L"ThumbStickDeadZone";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v48 + 8));
    if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(v15 - 0.0) & _xmm) > COERCE_FLOAT(L"ThumbStickDeadZone") )
    {
      v14 = (float)(v15 + *((float *)this + 924)) * 0.5;
      *((float *)this + 924) = v14;
    }
  }
  Instance = MPCHolographicInputManager::GetInstance();
  memcpy_0(v53, Instance, 0xCD0uLL);
  v18 = (_DWORD *)((char *)this + 3672);
  v19 = MPCConstantManager::s_instance;
  v20 = *((_BYTE *)a2 + 2256) == 1;
  v52[0] = v54;
  v21 = v56;
  v52[1] = v55;
  v22 = v57;
  *((_DWORD *)this + 918) = v20;
  v52[2] = v21;
  v52[3] = v22;
  if ( !v19 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v17);
  v49 = 18LL;
  *((_QWORD *)&v48 + 1) = L"PointScaleFactorXY";
  MPCConstantManager::GetConstant<float>((__int64)v19, (__int64)this + 24, (__int128 *)((char *)&v48 + 8));
  v24 = MPCConstantManager::s_instance;
  *((float *)this + 932) = (float)(COERCE_FLOAT(L"PointScaleFactorXY") * v10) + *((float *)this + 932);
  if ( !v24 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v23);
  *((_QWORD *)&v48 + 1) = L"PointScaleFactorXY";
  v49 = 18LL;
  MPCConstantManager::GetConstant<float>((__int64)v24, (__int64)this + 24, (__int128 *)((char *)&v48 + 8));
  v26 = MPCConstantManager::s_instance;
  *((float *)this + 933) = (float)(COERCE_FLOAT(L"PointScaleFactorXY") * v9) + *((float *)this + 933);
  if ( !v26 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v25);
  v49 = 21LL;
  *((_QWORD *)&v48 + 1) = L"PointScaleFactorStick";
  MPCConstantManager::GetConstant<float>((__int64)v26, (__int64)this + 24, (__int128 *)((char *)&v48 + 8));
  v4 = *v18 == 0;
  *((_DWORD *)this + 922) = *((_DWORD *)this + 920);
  *((_DWORD *)this + 923) = *((_DWORD *)this + 921);
  *((_BYTE *)this + 3700) = 1;
  *((float *)this + 934) = (float)(COERCE_FLOAT((unsigned int)L"PointScaleFactorStick" ^ _xmm) * v14)
                         + *((float *)this + 934);
  if ( v4 )
  {
    v45 = MPCHolographicInputManager::GetInstance();
    v46 = *((_QWORD *)v45 + 30);
    LODWORD(v45) = *((_DWORD *)v45 + 62);
    v50 = v46;
    v51 = (int)v45;
    v47 = Windows::Foundation::Numerics::transform((float *)&v48 + 2, (float *)&v50, (float *)v52);
    *(_QWORD *)((char *)this + 3716) = *(_QWORD *)v47;
    *((float *)this + 931) = v47[2];
  }
  else if ( *((_DWORD *)this + 919) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v27);
    *((_QWORD *)&v48 + 1) = L"PointScaleFactorXY";
    v49 = 18LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v48 + 8));
    v31 = (float *)((char *)this + 3716);
    v32 = COERCE_FLOAT(L"PointScaleFactorXY") * v10;
    v33 = (float)(v32 * 0.0) + *((float *)this + 930);
    v34 = (float)(v32 * 0.0) + *((float *)this + 931);
    *((float *)this + 929) = v32 + *((float *)this + 929);
    *((float *)this + 930) = v33;
    *((float *)this + 931) = v34;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v30);
    *((_QWORD *)&v48 + 1) = L"PointScaleFactorXY";
    v49 = 18LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v48 + 8));
    v36 = COERCE_FLOAT(L"PointScaleFactorXY") * v9;
    v37 = v36 + *((float *)this + 930);
    v38 = v36 * 0.0;
    v39 = v38 + *((float *)this + 931);
    *v31 = v38 + *v31;
    *((float *)this + 930) = v37;
    *((float *)this + 931) = v39;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v35);
    v49 = 21LL;
    *((_QWORD *)&v48 + 1) = L"PointScaleFactorStick";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      (__int64)this + 24,
      (__int128 *)((char *)&v48 + 8));
    v40 = COERCE_FLOAT((unsigned int)L"PointScaleFactorStick" ^ _xmm) * v14;
    v41 = v40 + *((float *)this + 931);
    v42 = v40 * 0.0;
    v43 = v42 + *((float *)this + 930);
    *v31 = v42 + *v31;
    *((float *)this + 930) = v43;
    *((float *)this + 931) = v41;
    v44 = Windows::Foundation::Numerics::transform((float *)&v50, (float *)this + 929, (float *)v52);
    *((_QWORD *)this + 463) = *(_QWORD *)v44;
    *((float *)this + 928) = v44[2];
  }
  else
  {
    v28 = MPCHolographicInputManager::GetInstance();
    *(_QWORD *)((char *)this + 3716) = *((_QWORD *)v28 + 30);
    *((_DWORD *)this + 931) = *((_DWORD *)v28 + 62);
    v29 = Windows::Foundation::Numerics::transform((float *)&v50, (float *)this + 929, (float *)v52);
    *((_QWORD *)this + 463) = *(_QWORD *)v29;
    *(float *)&v29 = v29[2];
    v51 = 0;
    *((_DWORD *)this + 928) = (_DWORD)v29;
    LODWORD(v29) = v51;
    *((_QWORD *)this + 466) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_DWORD *)this + 934) = (_DWORD)v29;
    *((_BYTE *)this + 3700) = 0;
  }
  *((_DWORD *)this + 919) = *v18;
}
