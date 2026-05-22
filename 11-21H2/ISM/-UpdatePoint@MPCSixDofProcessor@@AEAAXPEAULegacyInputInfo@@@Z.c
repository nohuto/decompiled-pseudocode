/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C21EC
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C0BD0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _o_sqrtf_0 @ 0x18004A8C4 (_o_sqrtf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801BFE0C (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1801C1C80 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // si
  int v5; // xmm0_4
  bool v6; // r15
  const char *v7; // r9
  float v8; // xmm6_4
  char v9; // dl
  MPCButtonHoldHelper *v10; // rcx
  __int64 v11; // rax
  volatile signed __int32 *v12; // rcx
  char v13; // r14
  char v14; // r11
  char v15; // dl
  const char *v16; // r9
  char v17; // r11
  int v18; // xmm0_4
  int v19; // xmm1_4
  float v20; // xmm6_4
  const char *v21; // r9
  MPCConstantManager *v22; // rcx
  float v23; // xmm6_4
  float v24; // xmm0_4
  __m128 v25; // xmm6
  __m128 v26; // xmm10
  const char *v27; // r9
  float v28; // xmm7_4
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  float v32; // xmm9_4
  const char *v33; // r9
  const char *v34; // r9
  float v35; // xmm0_4
  const char *v36; // r9
  unsigned int v37; // xmm0_4
  __int64 v38; // rdx
  BOOL v39; // ecx
  unsigned __int64 *v40; // rax
  float v41; // xmm0_4
  const char *v42; // r9
  __m128 v43; // xmm2
  __m128 v44; // xmm1
  __m128 v45; // xmm2
  __m128 v46; // xmm1
  float v47; // xmm6_4
  float v48; // xmm7_4
  float v49; // xmm1_4
  __m128 v50; // xmm2
  __m128 v51; // xmm1
  __m128 v52; // xmm2
  __m128 v53; // xmm1
  float v54; // xmm0_4
  int v55; // eax
  __int128 v56; // [rsp+38h] [rbp-99h] BYREF
  __int128 v57; // [rsp+48h] [rbp-89h] BYREF
  __int128 v58; // [rsp+58h] [rbp-79h] BYREF
  __int128 v59; // [rsp+68h] [rbp-69h] BYREF
  __int128 v60; // [rsp+78h] [rbp-59h] BYREF
  __int128 v61; // [rsp+88h] [rbp-49h] BYREF
  __int128 v62[6]; // [rsp+98h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  std::_Ref_count_base *v64; // [rsp+138h] [rbp+67h]
  std::_Ref_count_base *v65; // [rsp+138h] [rbp+67h]
  std::_Ref_count_base *v66; // [rsp+138h] [rbp+67h]
  unsigned __int64 v67; // [rsp+140h] [rbp+6Fh] BYREF
  float v68; // [rsp+148h] [rbp+77h] BYREF
  int v69; // [rsp+14Ch] [rbp+7Bh]

  LODWORD(v64) = 0;
  v4 = 0;
  *((_DWORD *)this + 1042) = *((_DWORD *)a2 + 567);
  v5 = *((_DWORD *)a2 + 575);
  *((_DWORD *)this + 1052) = *((_DWORD *)a2 + 574);
  *((_DWORD *)this + 1053) = v5;
  *((_DWORD *)this + 1043) = *((_DWORD *)a2 + 570) & *((_DWORD *)a2 + 569);
  if ( (*((_BYTE *)a2 + 2280) & 4) == 0 || (v6 = 1, *((_BYTE *)this + 10808)) )
    v6 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCSlateDeadzoneHelper **)this + 519),
    v6,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  if ( *((_BYTE *)a2 + 2323) )
  {
    v8 = *((float *)a2 + 578) - *((float *)this + 1044);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v7);
    *((_QWORD *)&v56 + 1) = 22LL;
    *(_QWORD *)&v56 = L"TriggerSmoothingFactor";
    v62[0] = v56;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, v62);
    *((float *)this + 1044) = (float)(COERCE_FLOAT(L"TriggerSmoothingFactor") * v8) + *((float *)this + 1044);
  }
  else
  {
    *((_DWORD *)this + 1044) = 0;
  }
  if ( (*((_BYTE *)this + 4172) & 8) == 0 || (v9 = 1, *((_BYTE *)this + 10808)) )
    v9 = 0;
  v10 = (MPCButtonHoldHelper *)*((_QWORD *)this + 514);
  *((_BYTE *)this + 10802) = v9;
  MPCButtonHoldHelper::UpdateState(v10, v9, *((_QWORD *)a2 + 2));
  if ( *(_BYTE *)(*((_QWORD *)this + 514) + 10LL) )
  {
    v12 = (volatile signed __int32 *)v64;
LABEL_18:
    v13 = 1;
    goto LABEL_19;
  }
  v11 = *((_QWORD *)this + 519);
  v12 = *(volatile signed __int32 **)(v11 + 24);
  if ( v12 )
  {
    _InterlockedIncrement(v12 + 2);
    v12 = *(volatile signed __int32 **)(v11 + 24);
  }
  v4 = 1;
  if ( *(_BYTE *)(*(_QWORD *)(v11 + 16) + 10LL) )
    goto LABEL_18;
  v13 = 0;
LABEL_19:
  if ( (v4 & 1) != 0 && v12 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
  if ( v13 )
    MPCSixDofProcessor::ResetRayLength(this);
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 517),
    (*((_DWORD *)a2 + 570) & 0x40) != 0,
    *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 516), (v14 & 0x40) == 0, *((_QWORD *)a2 + 2));
  v15 = *((_BYTE *)this + 3676);
  if ( v15 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 516) + 9LL) )
    {
      *((_BYTE *)this + 3676) = 0;
      v15 = 0;
    }
  }
  else
  {
    v15 = 0;
    if ( *(_BYTE *)(*((_QWORD *)this + 517) + 9LL) )
    {
      *((_BYTE *)this + 3676) = 1;
      v15 = 1;
    }
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 518), v15, *((_QWORD *)a2 + 2));
  if ( v17 )
  {
    v18 = *((_DWORD *)a2 + 574);
    v19 = *((_DWORD *)a2 + 575);
    *((_DWORD *)this + 1048) = v18;
    *((_DWORD *)this + 1049) = v19;
    *((_DWORD *)this + 1054) = v18;
    *((_DWORD *)this + 1055) = v19;
    *((_DWORD *)this + 918) = 2;
    *((_QWORD *)this + 528) = 0LL;
    *((_QWORD *)this + 529) = 0LL;
    *(_QWORD *)((char *)this + 4284) = 0LL;
  }
  if ( !*((_BYTE *)this + 3676) )
  {
    *((_QWORD *)this + 528) = 0LL;
    goto LABEL_71;
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v16);
  v20 = *((float *)this + 1048);
  *(_QWORD *)&v56 = L"TouchpadAxesSmoothingFactor";
  *((_QWORD *)&v56 + 1) = 27LL;
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v56);
  v22 = MPCConstantManager::s_instance;
  *((float *)this + 1048) = (float)((float)(*((float *)this + 1052) - v20) * COERCE_FLOAT(L"TouchpadAxesSmoothingFactor"))
                          + v20;
  if ( !v22 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v21);
  v23 = *((float *)this + 1049);
  *(_QWORD *)&v57 = L"TouchpadAxesSmoothingFactor";
  *((_QWORD *)&v57 + 1) = 27LL;
  MPCConstantManager::GetConstant<float>((__int64)v22, (__int64)this + 24, &v57);
  *((float *)this + 1049) = (float)((float)(*((float *)this + 1053) - v23) * COERCE_FLOAT(L"TouchpadAxesSmoothingFactor"))
                          + v23;
  v24 = *((float *)this + 1049) - *((float *)this + 1051);
  *((float *)this + 1056) = *((float *)this + 1048) - *((float *)this + 1050);
  *((float *)this + 1057) = v24;
  v25 = (__m128)*((unsigned int *)this + 1048);
  v26 = (__m128)*((unsigned int *)this + 1049);
  v25.m128_f32[0] = v25.m128_f32[0] - *((float *)this + 1054);
  v26.m128_f32[0] = v26.m128_f32[0] - *((float *)this + 1055);
  v28 = o_sqrtf_0((float)(v26.m128_f32[0] * v26.m128_f32[0]) + (float)(v25.m128_f32[0] * v25.m128_f32[0]));
  if ( v6 )
  {
    *((_DWORD *)this + 918) = 3;
LABEL_42:
    if ( !*((_BYTE *)this + 3676) )
      *((_DWORD *)this + 918) = 2;
    goto LABEL_71;
  }
  v29 = *((_DWORD *)this + 918);
  if ( !v29 )
  {
    *((_DWORD *)this + 1057) = 0;
    goto LABEL_71;
  }
  v30 = v29 - 1;
  if ( !v30 )
  {
    *((_DWORD *)this + 1056) = 0;
    goto LABEL_71;
  }
  v31 = v30 - 1;
  if ( v31 )
  {
    if ( v31 != 1 )
      goto LABEL_71;
    goto LABEL_42;
  }
  v32 = (double)(*(_DWORD *)(*((_QWORD *)this + 517) + 32LL) - *(_DWORD *)(*((_QWORD *)this + 517) + 16LL))
      / (double)(int)qword_180242808;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v27);
  *((_QWORD *)&v58 + 1) = 27LL;
  *(_QWORD *)&v58 = L"TouchpadRailsTimeoutSeconds";
  MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v58);
  if ( v32 > COERCE_FLOAT(L"TouchpadRailsTimeoutSeconds") )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v33);
    *((_QWORD *)&v59 + 1) = 32LL;
    *(_QWORD *)&v59 = L"TouchpadRailsMinDistanceTraveled";
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v59);
    if ( v28 > COERCE_FLOAT(L"TouchpadRailsMinDistanceTraveled") )
    {
      v35 = o_sqrtf_0(
              (float)(*((float *)this + 1054) * *((float *)this + 1054))
            + (float)(*((float *)this + 1055) * *((float *)this + 1055)));
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v34);
      *((_QWORD *)&v60 + 1) = 24LL;
      *(_QWORD *)&v60 = L"TouchpadRailsMinDistance";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v60);
      if ( v35 <= COERCE_FLOAT(L"TouchpadRailsMinDistance") )
      {
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            41LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v36);
        *((_QWORD *)&v61 + 1) = 29LL;
        *(_QWORD *)&v61 = L"TouchpadRailsDirectionDegrees";
        v37 = (unsigned int)L"TouchpadRailsDirectionDegrees";
        MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v61);
        v38 = _mm_unpacklo_ps(v25, v26).m128_u64[0];
      }
      else
      {
        v65 = (std::_Ref_count_base *)*((_QWORD *)this + 527);
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            41LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v36);
        *((_QWORD *)&v61 + 1) = 25LL;
        *(_QWORD *)&v61 = L"TouchpadRailsPressDegrees";
        v37 = (unsigned int)L"TouchpadRailsPressDegrees";
        MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v61);
        v38 = (__int64)v65;
      }
      v39 = !IsPointInHorizontalQuadrant(*(float *)&v37 * 0.0174532925199433, v38);
      *((_DWORD *)this + 918) = v39;
      if ( v39 )
      {
        LODWORD(v67) = 0;
        *((float *)&v67 + 1) = v28;
      }
      else
      {
        v69 = 0;
        v68 = v28;
      }
      v40 = &v67;
      if ( !v39 )
        v40 = (unsigned __int64 *)&v68;
      *((_QWORD *)this + 528) = *v40;
      if ( *((_DWORD *)this + 918) )
        v25.m128_i32[0] = v26.m128_i32[0];
      if ( v25.m128_f32[0] < 0.0 )
      {
        v41 = *((float *)this + 1057) * -1.0;
        *((float *)this + 1056) = *((float *)this + 1056) * -1.0;
        *((float *)this + 1057) = v41;
      }
    }
  }
LABEL_71:
  if ( o_sqrtf_0(
         (float)(*((float *)this + 1057) * *((float *)this + 1057))
       + (float)(*((float *)this + 1056) * *((float *)this + 1056))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 518) + 9LL) )
    {
      v43 = (__m128)*((unsigned __int64 *)this + 529);
      v44 = _mm_mul_ps(v43, v43);
      v44.m128_f32[0] = v44.m128_f32[0] + _mm_shuffle_ps(v44, v44, 85).m128_f32[0];
      v67 = _mm_div_ps(v43, _mm_sqrt_ps(_mm_shuffle_ps(v44, v44, 0))).m128_u64[0];
      v45 = (__m128)*((unsigned __int64 *)this + 528);
      v46 = _mm_mul_ps(v45, v45);
      v46.m128_f32[0] = v46.m128_f32[0] + _mm_shuffle_ps(v46, v46, 85).m128_f32[0];
      v66 = (std::_Ref_count_base *)_mm_div_ps(v45, _mm_sqrt_ps(_mm_shuffle_ps(v46, v46, 0))).m128_u64[0];
      v47 = *(float *)&v66 - *(float *)&v67;
      v48 = *((float *)&v66 + 1) - *((float *)&v67 + 1);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v42);
      *((_QWORD *)&v62[0] + 1) = 28LL;
      *(_QWORD *)&v62[0] = L"TouchpadDeltaSmoothingFactor";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, v62);
      v49 = (float)(COERCE_FLOAT(L"TouchpadDeltaSmoothingFactor") * v47) + *((float *)this + 1058);
      *((float *)this + 1059) = (float)(COERCE_FLOAT(L"TouchpadDeltaSmoothingFactor") * v48) + *((float *)this + 1059);
      *((float *)this + 1058) = v49;
    }
    else
    {
      v50 = (__m128)*((unsigned __int64 *)this + 528);
      v51 = _mm_mul_ps(v50, v50);
      v51.m128_f32[0] = v51.m128_f32[0] + _mm_shuffle_ps(v51, v51, 85).m128_f32[0];
      *((_QWORD *)this + 529) = _mm_div_ps(v50, _mm_sqrt_ps(_mm_shuffle_ps(v51, v51, 0))).m128_u64[0];
    }
  }
  v52 = (__m128)*((unsigned int *)this + 1045);
  v53 = v52;
  v54 = v52.m128_f32[0] * *((float *)this + 1067);
  v52.m128_f32[0] = (float)(v52.m128_f32[0] * *((float *)this + 1065)) + *((float *)this + 1062);
  v53.m128_f32[0] = (float)(v53.m128_f32[0] * *((float *)this + 1066)) + *((float *)this + 1063);
  *((float *)&v56 + 2) = v54 + *((float *)this + 1064);
  v55 = DWORD2(v56);
  *((_QWORD *)this + 534) = _mm_unpacklo_ps(v52, v53).m128_u64[0];
  *((_QWORD *)this + 525) = *((_QWORD *)this + 524);
  *((_DWORD *)this + 1070) = v55;
}
