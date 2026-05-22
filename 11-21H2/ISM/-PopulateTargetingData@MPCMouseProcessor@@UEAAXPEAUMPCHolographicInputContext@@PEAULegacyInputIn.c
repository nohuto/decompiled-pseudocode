/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C8FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x18009A05C (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800A1FF0 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5AC8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800B0B2C (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800B1058 (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800EE878 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801C5DA8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801C755C (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C8584 (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801C877C (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801C9FF0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x1801CA1F8 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCMouseProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  LARGE_INTEGER *v6; // r13
  __int64 v7; // r9
  int v8; // eax
  const char *v9; // r9
  char v10; // cl
  __m128 v11; // xmm2
  __m128 v12; // xmm1
  __m128 v13; // xmm7
  __m128 v14; // xmm7
  __m128 v15; // xmm2
  __m128 v16; // xmm0
  __m128 v17; // xmm8
  unsigned __int32 v18; // xmm7_4
  LARGE_INTEGER v19; // rbx
  float *v20; // rbx
  float YawAngleBetweenTwoVectors; // xmm0_4
  float v22; // xmm6_4
  const char *v23; // r9
  float v24; // xmm7_4
  const char *v25; // r9
  __int64 v26; // rdx
  const char *v27; // r9
  float v28; // xmm7_4
  const char *v29; // r9
  float v30; // xmm7_4
  float v31; // xmm6_4
  const char *v32; // r9
  float v33; // xmm6_4
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm3
  float *v37; // rdx
  float *v38; // rax
  unsigned __int32 v39; // ecx
  LARGE_INTEGER v40; // xmm0_8
  unsigned __int32 v41; // eax
  __int64 v42; // rdi
  __int64 (__fastcall *v43)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char v48[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+80h] [rbp-80h] BYREF
  char v50; // [rsp+90h] [rbp-70h]
  float v51; // [rsp+94h] [rbp-6Ch] BYREF
  float v52; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER v53; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int32 v54; // [rsp+A8h] [rbp-58h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+B0h] [rbp-50h] BYREF
  LARGE_INTEGER v56; // [rsp+C0h] [rbp-40h] BYREF
  float v57; // [rsp+C8h] [rbp-38h] BYREF
  int v58; // [rsp+D0h] [rbp-30h] BYREF
  __m128 v59; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v61; // [rsp+100h] [rbp+0h]
  int v62; // [rsp+108h] [rbp+8h]
  __int128 v63; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  QueryPerformanceCounter(PerformanceCount);
  v6 = (LARGE_INTEGER *)((char *)a2 + 180);
  v53 = *(LARGE_INTEGER *)((char *)a2 + 180);
  v54 = *((_DWORD *)a2 + 47);
  v48[0] = 0;
  LOBYTE(v7) = 1;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, char *))(**(_QWORD **)(this + 3648) + 104LL))(
         *(_QWORD *)(this + 3648),
         0LL,
         1LL,
         v7,
         v48);
  v10 = v48[0];
  if ( v8 < 0 )
    v10 = 0;
  v48[0] = v10;
  v11 = (__m128)*((unsigned int *)a2 + 63);
  if ( v11.m128_f32[0] != *((float *)a2 + 42)
    || *((float *)a2 + 64) != *((float *)a2 + 43)
    || *((float *)a2 + 65) != *((float *)a2 + 44) )
  {
    v56 = *(LARGE_INTEGER *)((char *)a2 + 168);
    v57 = *((float *)a2 + 44);
    v12 = (__m128)*((unsigned int *)a2 + 64);
    v12.m128_f32[0] = v12.m128_f32[0] - *(float *)&v56.HighPart;
    v11.m128_f32[0] = v11.m128_f32[0] - *(float *)&v56.LowPart;
    *((float *)&v49 + 2) = *((float *)a2 + 65) - v57;
    v13 = 0LL;
    v13.m128_u64[0] = _mm_unpacklo_ps(v11, v12).m128_u64[0];
    v14 = _mm_movelh_ps(v13, (__m128)DWORD2(v49));
    v15 = _mm_mul_ps(v14, v14);
    v16 = _mm_shuffle_ps(v15, v15, 102);
    v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    v17 = _mm_div_ps(v14, _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)));
    v56 = (LARGE_INTEGER)v17.m128_i64[0];
    v18 = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
    v57 = *(float *)&v18;
    v19 = PerformanceCount[0];
    if ( !*(_QWORD *)(this + 8416) )
      goto LABEL_11;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v9);
    *(_QWORD *)&v49 = L"MouseParams_ResetCursorDirectionThresholdSeconds";
    *((_QWORD *)&v49 + 1) = 48LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      this & ((unsigned __int128)-(__int128)(this - 40) >> 64),
      &v49);
    if ( (float)((double)(v19.LowPart - *(_DWORD *)(this + 8416)) / (double)(int)qword_180242808) > (double)COERCE_FLOAT(L"MouseParams_ResetCursorDirectionThresholdSeconds") )
    {
      *(LARGE_INTEGER *)(this + 8416) = v19;
      v20 = (float *)(this + 8424);
    }
    else
    {
LABEL_11:
      *(LARGE_INTEGER *)(this + 8416) = v19;
      v20 = (float *)(this + 8424);
      if ( *(float *)(this + 8424) != 0.0 || *(float *)(this + 8428) != 0.0 || *(float *)(this + 8432) != 0.0 )
        goto LABEL_15;
    }
    *(_QWORD *)v20 = v17.m128_u64[0];
    v20[2] = *(float *)&v18;
LABEL_15:
    if ( !*(_DWORD *)(this + 5332) )
    {
      v53 = v56;
      v54 = v18;
    }
    v52 = 0.0;
    v51 = 0.0;
    if ( *(_DWORD *)(this + 5356) || *(_DWORD *)(this + 5360) )
    {
      *(_QWORD *)&v49 = v17.m128_u64[0];
      DWORD2(v49) = v18;
      PerformanceCount[0] = *v6;
      PerformanceCount[1].LowPart = *((_DWORD *)a2 + 47);
      YawAngleBetweenTwoVectors = MPCMouseProcessor::GetYawAngleBetweenTwoVectors(
                                    (unsigned __int64 *)&PerformanceCount[0].QuadPart,
                                    (unsigned __int64 *)&v49);
      *(_QWORD *)&v49 = v17.m128_u64[0];
      DWORD2(v49) = v18;
      PerformanceCount[0] = *v6;
      PerformanceCount[1].LowPart = *((_DWORD *)a2 + 47);
      LODWORD(v22) = LODWORD(YawAngleBetweenTwoVectors) & _xmm;
      LODWORD(v24) = MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(
                       (unsigned __int64 *)&PerformanceCount[0].QuadPart,
                       (unsigned __int64 *)&v49).m128_u32[0] & _xmm;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v23);
      *(_QWORD *)&v49 = L"MouseParams_ResetHorizontalAngleRadians";
      *((_QWORD *)&v49 + 1) = 39LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        this & -(__int64)(this != 40),
        &v49);
      if ( v22 > COERCE_FLOAT(L"MouseParams_ResetHorizontalAngleRadians") )
        goto LABEL_41;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v25);
      *(_QWORD *)&v49 = L"MouseParams_ResetVerticalAngleRadians";
      *((_QWORD *)&v49 + 1) = 37LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        this & -(__int64)(this != 40),
        &v49);
      if ( v24 > COERCE_FLOAT(L"MouseParams_ResetVerticalAngleRadians") )
      {
LABEL_41:
        MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance);
        v53 = *v6;
        v54 = *((_DWORD *)a2 + 47);
        v41 = v54;
        *(LARGE_INTEGER *)v20 = v53;
        *((_DWORD *)v20 + 2) = v41;
        RayStabilizer::Reset((RayStabilizer *)(this + 448));
      }
      else if ( !*(_BYTE *)(this + 5312) || !v48[0] )
      {
        LOBYTE(v26) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
          v26);
        if ( !*((_BYTE *)a2 + 3272) )
        {
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v27);
          *(_QWORD *)&v49 = L"MouseParams_UseHitTestMouseReference";
          *((_QWORD *)&v49 + 1) = 36LL;
          v50 = MPCConstantManager::GetConstant<bool>(
                  (__int64)MPCConstantManager::s_instance,
                  this & -(__int64)(this != 40),
                  &v49);
          v28 = (float)*(int *)(this + 5356);
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              (const char *)retaddr);
          *(_QWORD *)&v49 = L"MouseParams_DeltaToRadiansRatio";
          *((_QWORD *)&v49 + 1) = 31LL;
          MPCConstantManager::GetConstant<float>(
            (__int64)MPCConstantManager::s_instance,
            this & -(__int64)(this != 40),
            &v49);
          v30 = (float)(v28 / COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio")) * -1.0;
          v52 = v30;
          v31 = (float)*(int *)(this + 5360);
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              41LL,
              (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v29);
          *(_QWORD *)&v49 = L"MouseParams_DeltaToRadiansRatio";
          *((_QWORD *)&v49 + 1) = 31LL;
          MPCConstantManager::GetConstant<float>(
            (__int64)MPCConstantManager::s_instance,
            this & -(__int64)(this != 40),
            &v49);
          v33 = (float)(v31 / COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio")) * -1.0;
          v51 = v33;
          if ( !v50 )
          {
            if ( !MPCConstantManager::s_instance )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                41LL,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                v32);
            *(_QWORD *)&v49 = L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor";
            *((_QWORD *)&v49 + 1) = 70LL;
            MPCConstantManager::GetConstant<float>(
              (__int64)MPCConstantManager::s_instance,
              this & -(__int64)(this != 40),
              &v49);
            v30 = COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor") * v30;
            v52 = v30;
            v33 = COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor") * v33;
            v51 = v33;
          }
          MPCMath::OrientToGravity(&v60, (float *)a2 + 4, 0.89999998);
          PerformanceCount[0].QuadPart = v60;
          PerformanceCount[1].LowPart = DWORD2(v60);
          *(_QWORD *)&v49 = v61;
          DWORD2(v49) = v62;
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle(v59.m128_f32, (float *)PerformanceCount, v33);
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)PerformanceCount, (float *)&v49, v30);
          v34 = _mm_shuffle_ps(*(__m128 *)&PerformanceCount[0].LowPart, *(__m128 *)&PerformanceCount[0].LowPart, 27);
          v35 = _mm_mul_ps(_mm_shuffle_ps(v59, v59, 0), v34);
          v36 = _mm_shuffle_ps(v34, v34, 177);
          v59 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v59, v59, 255), *(__m128 *)&PerformanceCount[0].LowPart),
                    _mm_mul_ps(v35, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)),
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v59, v59, 85), v36),
                      (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v59, v59, 170), _mm_shuffle_ps(v36, v36, 27)),
                      (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)));
          Windows::Foundation::Numerics::make_float4x4_from_quaternion(&v60, &v59);
          v37 = (float *)&v53;
          if ( !v50 )
            v37 = v20;
          v38 = Windows::Foundation::Numerics::transform_normal((float *)&v49, v37, (float *)&v60);
          v40 = *(LARGE_INTEGER *)v38;
          v54 = *((_DWORD *)v38 + 2);
          v39 = v54;
          v53 = v40;
          *(LARGE_INTEGER *)v20 = v40;
          *((_DWORD *)v20 + 2) = v39;
        }
      }
    }
    ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,float &,float &,float &,float &,float &,float &,long &,long &,int &,long &,long &,float &,float &>(
      (unsigned int *)a3 + 1,
      (float *)a2 + 45,
      (float *)a2 + 46,
      (float *)a2 + 47,
      (float *)&v56,
      (float *)&v56.HighPart,
      &v57,
      (int *)(this + 5240),
      (int *)(this + 5244),
      (int *)(this + 5364),
      (int *)(this + 5356),
      (int *)(this + 5360),
      &v52,
      &v51);
  }
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 30) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 43);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 44);
  *(LARGE_INTEGER *)((char *)a3 + 132) = v53;
  *((_DWORD *)a3 + 35) = v54;
  *((_QWORD *)a3 + 21) = 0LL;
  *((_BYTE *)a3 + 89) = 0;
  v63 = 0LL;
  LOBYTE(v9) = 1;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, const char *, __int128 *))(**(_QWORD **)(this + 3648) + 112LL))(
         *(_QWORD *)(this + 3648),
         0LL,
         1LL,
         v9,
         &v63) >= 0
    && (((_DWORD)v63 == DWORD2(v63)) == DWORD1(v63)) == HIDWORD(v63) )
  {
    v52 = 0.0;
    v51 = 0.0;
    v58 = 0;
    PerformanceCount[0].QuadPart = 0LL;
    v42 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 64LL))(*(_QWORD *)(this + 16));
    v43 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v42 + 64LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)PerformanceCount);
    v44 = v43(v42, 0LL, 0LL, 0LL);
    if ( v44 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2FA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v44,
        (int)PerformanceCount);
    v53.QuadPart = 0LL;
    if ( PerformanceCount[0].QuadPart
      && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(PerformanceCount, (__int64 *)&v53) >= 0 )
    {
      v45 = (*(__int64 (__fastcall **)(LARGE_INTEGER, float *))(*(_QWORD *)v53.QuadPart + 32LL))(v53, &v52);
      if ( v45 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v45,
          (int)PerformanceCount);
      v46 = (*(__int64 (__fastcall **)(LARGE_INTEGER, float *))(*(_QWORD *)v53.QuadPart + 40LL))(v53, &v51);
      if ( v46 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x300,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v46,
          (int)PerformanceCount);
      v47 = (*(__int64 (__fastcall **)(LARGE_INTEGER, int *))(*(_QWORD *)v53.QuadPart + 48LL))(v53, &v58);
      if ( v47 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x301,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v47,
          (int)PerformanceCount);
    }
    *((_BYTE *)a3 + 89) = 1;
    *((float *)a3 + 23) = v52;
    *((float *)a3 + 24) = v51;
    *((_DWORD *)a3 + 25) = v58;
    *(_OWORD *)((char *)a3 + 104) = v63;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v53);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)PerformanceCount);
  }
  *((_DWORD *)a3 + 20) = **(_DWORD **)(this + 24);
  *((_DWORD *)a3 + 21) = 2;
}
