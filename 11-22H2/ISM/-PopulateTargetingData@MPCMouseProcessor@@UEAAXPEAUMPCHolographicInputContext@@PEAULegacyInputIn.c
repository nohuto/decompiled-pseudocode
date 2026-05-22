/*
 * XREFs of ?PopulateTargetingData@MPCMouseProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801F4CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x180015894 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnMouseSnappedToGaze@MPCManager@@QEAAXXZ @ 0x1800C2C64 (-OnMouseSnappedToGaze@MPCManager@@QEAAXXZ.c)
 *     ?transform_normal@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x1800CA7E8 (-transform_normal@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE160 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?Reset@RayStabilizer@@QEAAXXZ @ 0x1800D8E74 (-Reset@RayStabilizer@@QEAAXXZ.c)
 *     ?make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA?AUquaternion@123@AEBUfloat3@123@M@Z @ 0x1800D938C (-make_quaternion_from_axis_angle@Numerics@Foundation@Windows@@YA-AUquaternion@123@AEBUfloat3@123.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801163A8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801F1AD8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801F32B8 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 *     ?GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801F42B0 (-GetPitchAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z @ 0x1801F44AC (-GetYawAngleBetweenTwoVectors@MPCMouseProcessor@@CAMUfloat3@Numerics@Foundation@Windows@@0@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801F5D44 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_HolographicMouseGameMode@@@details@wil@@Q.c)
 *     ?make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA?AUfloat4x4@123@AEBUquaternion@123@@Z @ 0x1801F5F48 (-make_float4x4_from_quaternion@Numerics@Foundation@Windows@@YA-AUfloat4x4@123@AEBUquaternion@123.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall MPCMouseProcessor::PopulateTargetingData(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  LARGE_INTEGER *v6; // r15
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
  float YawAngleBetweenTwoVectors; // xmm0_4
  float v21; // xmm6_4
  const char *v22; // r9
  float v23; // xmm7_4
  const char *v24; // r9
  __int64 v25; // rdx
  const char *v26; // r9
  char v27; // r13
  float v28; // xmm7_4
  const char *v29; // r9
  float v30; // xmm7_4
  float v31; // xmm6_4
  const char *v32; // r9
  float v33; // xmm6_4
  __m128 v34; // xmm3
  __m128 v35; // xmm0
  __m128 v36; // xmm3
  float *v37; // rax
  char *v38; // rdx
  unsigned __int32 v39; // ecx
  LARGE_INTEGER v40; // xmm0_8
  __int64 v41; // rdi
  __int64 (__fastcall *v42)(__int64, _QWORD, _QWORD, _QWORD); // rbx
  int v43; // eax
  unsigned __int32 v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  char v48[16]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v49; // [rsp+80h] [rbp-80h] BYREF
  float v50; // [rsp+90h] [rbp-70h] BYREF
  float v51; // [rsp+94h] [rbp-6Ch] BYREF
  LARGE_INTEGER v52; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int32 v53; // [rsp+A0h] [rbp-60h]
  LARGE_INTEGER PerformanceCount[2]; // [rsp+B0h] [rbp-50h] BYREF
  LARGE_INTEGER v55; // [rsp+C0h] [rbp-40h] BYREF
  float v56; // [rsp+C8h] [rbp-38h] BYREF
  int v57; // [rsp+D0h] [rbp-30h] BYREF
  __m128 v58; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v60; // [rsp+100h] [rbp+0h]
  int v61; // [rsp+108h] [rbp+8h]
  __int128 v62; // [rsp+130h] [rbp+30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  QueryPerformanceCounter(PerformanceCount);
  v6 = (LARGE_INTEGER *)((char *)a2 + 180);
  v52 = *(LARGE_INTEGER *)((char *)a2 + 180);
  v53 = *((_DWORD *)a2 + 47);
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
    v55 = *(LARGE_INTEGER *)((char *)a2 + 168);
    v56 = *((float *)a2 + 44);
    v12 = (__m128)*((unsigned int *)a2 + 64);
    v12.m128_f32[0] = v12.m128_f32[0] - *(float *)&v55.HighPart;
    v11.m128_f32[0] = v11.m128_f32[0] - *(float *)&v55.LowPart;
    *((float *)&v49 + 2) = *((float *)a2 + 65) - v56;
    v13 = 0LL;
    v13.m128_u64[0] = _mm_unpacklo_ps(v11, v12).m128_u64[0];
    v14 = _mm_movelh_ps(v13, (__m128)DWORD2(v49));
    v15 = _mm_mul_ps(v14, v14);
    v16 = _mm_shuffle_ps(v15, v15, 102);
    v15.m128_f32[0] = (float)(v15.m128_f32[0] + v16.m128_f32[0]) + _mm_shuffle_ps(v16, v16, 85).m128_f32[0];
    v17 = _mm_div_ps(v14, _mm_sqrt_ps(_mm_shuffle_ps(v15, v15, 0)));
    v55 = (LARGE_INTEGER)v17.m128_i64[0];
    v18 = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
    v56 = *(float *)&v18;
    v19 = PerformanceCount[0];
    if ( !*(_QWORD *)(this + 8416) )
      goto LABEL_11;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v9);
    *(_QWORD *)&v49 = L"MouseParams_ResetCursorDirectionThresholdSeconds";
    *((_QWORD *)&v49 + 1) = 48LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      this & ((unsigned __int128)-(__int128)(this - 40) >> 64),
      &v49);
    if ( (float)((double)(v19.LowPart - *(_DWORD *)(this + 8416)) / (double)(int)qword_1802778B0) > (double)COERCE_FLOAT(L"MouseParams_ResetCursorDirectionThresholdSeconds") )
    {
      *(LARGE_INTEGER *)(this + 8416) = v19;
    }
    else
    {
LABEL_11:
      *(LARGE_INTEGER *)(this + 8416) = v19;
      if ( *(float *)(this + 8424) != 0.0 || *(float *)(this + 8428) != 0.0 || *(float *)(this + 8432) != 0.0 )
        goto LABEL_15;
    }
    *(_QWORD *)(this + 8424) = v17.m128_u64[0];
    *(float *)(this + 8432) = *(float *)&v18;
LABEL_15:
    if ( !*(_DWORD *)(this + 5332) )
    {
      v52 = v55;
      v53 = v18;
    }
    v51 = 0.0;
    v50 = 0.0;
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
      LODWORD(v21) = LODWORD(YawAngleBetweenTwoVectors) & _xmm;
      LODWORD(v23) = MPCMouseProcessor::GetPitchAngleBetweenTwoVectors(
                       (unsigned __int64 *)&PerformanceCount[0].QuadPart,
                       (unsigned __int64 *)&v49).m128_u32[0] & _xmm;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v22);
      *(_QWORD *)&v49 = L"MouseParams_ResetHorizontalAngleRadians";
      *((_QWORD *)&v49 + 1) = 39LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        this & -(__int64)(this != 40),
        &v49);
      if ( v21 > COERCE_FLOAT(L"MouseParams_ResetHorizontalAngleRadians") )
        goto LABEL_47;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v24);
      *(_QWORD *)&v49 = L"MouseParams_ResetVerticalAngleRadians";
      *((_QWORD *)&v49 + 1) = 37LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        this & -(__int64)(this != 40),
        &v49);
      if ( v23 > COERCE_FLOAT(L"MouseParams_ResetVerticalAngleRadians") )
      {
LABEL_47:
        MPCManager::OnMouseSnappedToGaze(MPCManager::s_instance);
        v52 = *v6;
        v53 = *((_DWORD *)a2 + 47);
        v44 = v53;
        *(LARGE_INTEGER *)(this + 8424) = v52;
        *(_DWORD *)(this + 8432) = v44;
        RayStabilizer::Reset((RayStabilizer *)(this + 448));
      }
      else if ( !*(_BYTE *)(this + 5312) || !v48[0] )
      {
        LOBYTE(v25) = 1;
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_HolographicMouseGameMode>::ReportUsage(
          &`wil::Feature<__WilFeatureTraits_Feature_HolographicMouseGameMode>::GetImpl'::`2'::impl,
          v25);
        if ( !*((_BYTE *)a2 + 3272) )
        {
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x29,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v26);
          *(_QWORD *)&v49 = L"MouseParams_UseHitTestMouseReference";
          *((_QWORD *)&v49 + 1) = 36LL;
          v27 = MPCConstantManager::GetConstant<bool>(
                  (__int64)MPCConstantManager::s_instance,
                  this & -(__int64)(this != 40),
                  &v49);
          v28 = (float)*(int *)(this + 5356);
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x29,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              (const char *)retaddr);
          *(_QWORD *)&v49 = L"MouseParams_DeltaToRadiansRatio";
          *((_QWORD *)&v49 + 1) = 31LL;
          MPCConstantManager::GetConstant<float>(
            (__int64)MPCConstantManager::s_instance,
            this & -(__int64)(this != 40),
            &v49);
          v30 = (float)(v28 / COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio")) * -1.0;
          v51 = v30;
          v31 = (float)*(int *)(this + 5360);
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x29,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v29);
          *(_QWORD *)&v49 = L"MouseParams_DeltaToRadiansRatio";
          *((_QWORD *)&v49 + 1) = 31LL;
          MPCConstantManager::GetConstant<float>(
            (__int64)MPCConstantManager::s_instance,
            this & -(__int64)(this != 40),
            &v49);
          v33 = (float)(v31 / COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio")) * -1.0;
          v50 = v33;
          if ( !v27 )
          {
            if ( !MPCConstantManager::s_instance )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x29,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                v32);
            *(_QWORD *)&v49 = L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor";
            *((_QWORD *)&v49 + 1) = 70LL;
            MPCConstantManager::GetConstant<float>(
              (__int64)MPCConstantManager::s_instance,
              this & -(__int64)(this != 40),
              &v49);
            v30 = COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor") * v30;
            v51 = v30;
            v33 = COERCE_FLOAT(L"MouseParams_DeltaToRadiansRatio_NoHitTestSensitivityCompensationFactor") * v33;
            v50 = v33;
          }
          MPCMath::OrientToGravity(&v59, (float *)a2 + 4, 0.89999998);
          PerformanceCount[0].QuadPart = v59;
          PerformanceCount[1].LowPart = DWORD2(v59);
          *(_QWORD *)&v49 = v60;
          DWORD2(v49) = v61;
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle(v58.m128_f32, (float *)PerformanceCount, v33);
          Windows::Foundation::Numerics::make_quaternion_from_axis_angle((float *)PerformanceCount, (float *)&v49, v30);
          v34 = _mm_shuffle_ps(*(__m128 *)&PerformanceCount[0].LowPart, *(__m128 *)&PerformanceCount[0].LowPart, 27);
          v35 = _mm_mul_ps(_mm_shuffle_ps(v58, v58, 0), v34);
          v36 = _mm_shuffle_ps(v34, v34, 177);
          v58 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v58, v58, 255), *(__m128 *)&PerformanceCount[0].LowPart),
                    _mm_mul_ps(v35, (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlWZYX)),
                  _mm_add_ps(
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v58, v58, 85), v36),
                      (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlZWXY),
                    _mm_mul_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v58, v58, 170), _mm_shuffle_ps(v36, v36, 27)),
                      (__m128)`DirectX::XMQuaternionMultiply'::`2'::ControlYXWZ)));
          Windows::Foundation::Numerics::make_float4x4_from_quaternion(&v59, &v58);
          if ( v27 )
          {
            v37 = Windows::Foundation::Numerics::transform_normal((float *)&v49, (float *)&v52, (float *)&v59);
            v38 = (char *)(this + 8424);
          }
          else
          {
            v37 = Windows::Foundation::Numerics::transform_normal((float *)&v49, (float *)(this + 8424), (float *)&v59);
          }
          v40 = *(LARGE_INTEGER *)v37;
          v53 = *((_DWORD *)v37 + 2);
          v39 = v53;
          v52 = v40;
          *(LARGE_INTEGER *)v38 = v40;
          *((_DWORD *)v38 + 2) = v39;
        }
      }
    }
    ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta<unsigned long &,float &,float &,float &,float &,float &,float &,long &,long &,int &,long &,long &,float &,float &>(
      (unsigned int *)a3 + 1,
      (float *)a2 + 45,
      (float *)a2 + 46,
      (float *)a2 + 47,
      (float *)&v55,
      (float *)&v55.HighPart,
      &v56,
      (int *)(this + 5240),
      (int *)(this + 5244),
      (int *)(this + 5364),
      (int *)(this + 5356),
      (int *)(this + 5360),
      &v51,
      &v50);
  }
  *((_BYTE *)a3 + 48) = 1;
  *((_DWORD *)a3 + 30) = *((_DWORD *)a2 + 42);
  *((_DWORD *)a3 + 31) = *((_DWORD *)a2 + 43);
  *((_DWORD *)a3 + 32) = *((_DWORD *)a2 + 44);
  *(LARGE_INTEGER *)((char *)a3 + 132) = v52;
  *((_DWORD *)a3 + 35) = v53;
  *((_QWORD *)a3 + 21) = 0LL;
  *((_BYTE *)a3 + 89) = 0;
  v62 = 0LL;
  LOBYTE(v9) = 1;
  if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int64, const char *, __int128 *))(**(_QWORD **)(this + 3648) + 112LL))(
         *(_QWORD *)(this + 3648),
         0LL,
         1LL,
         v9,
         &v62) >= 0
    && (((_DWORD)v62 == DWORD2(v62)) == DWORD1(v62)) == HIDWORD(v62) )
  {
    v51 = 0.0;
    v50 = 0.0;
    v57 = 0;
    PerformanceCount[0].QuadPart = 0LL;
    v41 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this + 16) + 64LL))(*(_QWORD *)(this + 16));
    v42 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v41 + 64LL);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)PerformanceCount);
    v43 = v42(v41, 0LL, 0LL, 0LL);
    if ( v43 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2FA,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
        (const char *)(unsigned int)v43,
        (int)PerformanceCount);
    v52.QuadPart = 0LL;
    if ( PerformanceCount[0].QuadPart
      && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(PerformanceCount, (__int64 *)&v52) >= 0 )
    {
      v45 = (*(__int64 (__fastcall **)(LARGE_INTEGER, float *))(*(_QWORD *)v52.QuadPart + 32LL))(v52, &v51);
      if ( v45 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x2FF,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v45,
          (int)PerformanceCount);
      v46 = (*(__int64 (__fastcall **)(LARGE_INTEGER, float *))(*(_QWORD *)v52.QuadPart + 40LL))(v52, &v50);
      if ( v46 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x300,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v46,
          (int)PerformanceCount);
      v47 = (*(__int64 (__fastcall **)(LARGE_INTEGER, int *))(*(_QWORD *)v52.QuadPart + 48LL))(v52, &v57);
      if ( v47 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x301,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          (const char *)(unsigned int)v47,
          (int)PerformanceCount);
    }
    *((_BYTE *)a3 + 89) = 1;
    *((float *)a3 + 23) = v51;
    *((float *)a3 + 24) = v50;
    *((_DWORD *)a3 + 25) = v57;
    *(_OWORD *)((char *)a3 + 104) = v62;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v52);
    Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)PerformanceCount);
  }
  *((_DWORD *)a3 + 20) = **(_DWORD **)(this + 24);
  *((_DWORD *)a3 + 21) = 2;
}
