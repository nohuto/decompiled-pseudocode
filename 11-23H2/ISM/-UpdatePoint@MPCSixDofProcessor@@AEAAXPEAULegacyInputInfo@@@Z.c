/*
 * XREFs of ?UpdatePoint@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E0C4C
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DF620 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _o_sqrtf_0 @ 0x180056634 (_o_sqrtf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD890 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800C8640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800C8840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z @ 0x1801DE5AC (-IsPointInHorizontalQuadrant@@YA_NNUfloat2@Numerics@Foundation@Windows@@@Z.c)
 *     ?ResetRayLength@MPCSixDofProcessor@@AEAAXXZ @ 0x1801E06D4 (-ResetRayLength@MPCSixDofProcessor@@AEAAXXZ.c)
 */

void __fastcall MPCSixDofProcessor::UpdatePoint(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // r14
  int v5; // xmm0_4
  bool v6; // r15
  const char *v7; // r9
  float v8; // xmm6_4
  char v9; // dl
  MPCButtonHoldHelper *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  std::_Ref_count_base *v14; // rcx
  char v15; // si
  char v16; // r10
  char v17; // dl
  const char *v18; // r9
  char v19; // r10
  int v20; // xmm0_4
  int v21; // xmm1_4
  float v22; // xmm6_4
  char *v23; // rdi
  const char *v24; // r9
  MPCConstantManager *v25; // rcx
  float v26; // xmm6_4
  float v27; // xmm0_4
  __m128 v28; // xmm6
  __m128 v29; // xmm8
  const char *v30; // r9
  float v31; // xmm7_4
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  float v35; // xmm9_4
  const char *v36; // r9
  const char *v37; // r9
  float v38; // xmm0_4
  const char *v39; // r9
  unsigned int v40; // xmm0_4
  __int64 v41; // rdx
  BOOL v42; // ecx
  unsigned __int64 *v43; // rax
  float v44; // xmm1_4
  const char *v45; // r9
  __m128 v46; // xmm2
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  __m128 v49; // xmm1
  float v50; // xmm6_4
  float v51; // xmm7_4
  float v52; // xmm1_4
  __m128 v53; // xmm2
  __m128 v54; // xmm1
  __m128 v55; // xmm2
  __m128 v56; // xmm1
  float v57; // xmm0_4
  int v58; // eax
  __int128 v59; // [rsp+38h] [rbp-99h] BYREF
  __int128 v60; // [rsp+48h] [rbp-89h] BYREF
  __int128 v61; // [rsp+58h] [rbp-79h] BYREF
  __int128 v62; // [rsp+68h] [rbp-69h] BYREF
  __int128 v63; // [rsp+78h] [rbp-59h] BYREF
  __int128 v64; // [rsp+88h] [rbp-49h] BYREF
  __int128 v65[6]; // [rsp+98h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  std::_Ref_count_base *v67; // [rsp+138h] [rbp+67h]
  std::_Ref_count_base *v68; // [rsp+138h] [rbp+67h]
  std::_Ref_count_base *v69; // [rsp+138h] [rbp+67h]
  unsigned __int64 v70; // [rsp+140h] [rbp+6Fh] BYREF
  float v71; // [rsp+148h] [rbp+77h] BYREF
  int v72; // [rsp+14Ch] [rbp+7Bh]

  LODWORD(v67) = 0;
  v4 = 0;
  *((_DWORD *)this + 1042) = *((_DWORD *)a2 + 567);
  v5 = *((_DWORD *)a2 + 575);
  *((_DWORD *)this + 1052) = *((_DWORD *)a2 + 574);
  *((_DWORD *)this + 1053) = v5;
  *((_DWORD *)this + 1043) = *((_DWORD *)a2 + 570) & *((_DWORD *)a2 + 569);
  if ( (*((_BYTE *)a2 + 2280) & 4) == 0 || (v6 = 1, *((_BYTE *)this + 10808)) )
    v6 = 0;
  MPCSlateDeadzoneHelper::UpdateState(
    *((MPCButtonHoldHelper ***)this + 519),
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
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v7);
    *((_QWORD *)&v59 + 1) = 22LL;
    *(_QWORD *)&v59 = L"TriggerSmoothingFactor";
    v65[0] = v59;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64),
      v65);
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
    v14 = v67;
LABEL_18:
    v15 = 1;
    goto LABEL_19;
  }
  v11 = *((_QWORD *)this + 519);
  v12 = *(_QWORD *)(v11 + 24);
  if ( v12 )
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
  v13 = *(_QWORD *)(v11 + 16);
  v4 = 1;
  v14 = *(std::_Ref_count_base **)(v11 + 24);
  if ( *(_BYTE *)(v13 + 10) )
    goto LABEL_18;
  v15 = 0;
LABEL_19:
  if ( (v4 & 1) != 0 && v14 )
    std::_Ref_count_base::_Decref(v14);
  if ( v15 )
    MPCSixDofProcessor::ResetRayLength(this);
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 517),
    (*((_DWORD *)a2 + 570) & 0x40) != 0,
    *((_QWORD *)a2 + 2));
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 516), (v16 & 0x40) == 0, *((_QWORD *)a2 + 2));
  v17 = *((_BYTE *)this + 3676);
  if ( v17 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 516) + 9LL) )
    {
      *((_BYTE *)this + 3676) = 0;
      v17 = 0;
    }
  }
  else if ( *(_BYTE *)(*((_QWORD *)this + 517) + 9LL) )
  {
    *((_BYTE *)this + 3676) = 1;
    v17 = 1;
  }
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 518), v17, *((_QWORD *)a2 + 2));
  if ( v19 )
  {
    v20 = *((_DWORD *)a2 + 574);
    v21 = *((_DWORD *)a2 + 575);
    *((_DWORD *)this + 1048) = v20;
    *((_DWORD *)this + 1049) = v21;
    *((_DWORD *)this + 1054) = v20;
    *((_DWORD *)this + 1055) = v21;
    *((_DWORD *)this + 918) = 2;
    *((_QWORD *)this + 528) = 0LL;
    *((_QWORD *)this + 529) = 0LL;
    *(_QWORD *)((char *)this + 4284) = 0LL;
  }
  if ( *((_BYTE *)this + 3676) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v18);
    v22 = *((float *)this + 1048);
    *(_QWORD *)&v59 = L"TouchpadAxesSmoothingFactor";
    v23 = (char *)this + 24;
    *((_QWORD *)&v59 + 1) = 27LL;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
      &v59);
    v25 = MPCConstantManager::s_instance;
    *((float *)this + 1048) = (float)((float)(*((float *)this + 1052) - v22)
                                    * COERCE_FLOAT(L"TouchpadAxesSmoothingFactor"))
                            + v22;
    if ( !v25 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v24);
    v26 = *((float *)this + 1049);
    *(_QWORD *)&v60 = L"TouchpadAxesSmoothingFactor";
    *((_QWORD *)&v60 + 1) = 27LL;
    MPCConstantManager::GetConstant<float>((__int64)v25, ((unsigned __int64)this + 24) & -(__int64)(this != 0LL), &v60);
    v29 = (__m128)*((unsigned int *)this + 1053);
    v29.m128_f32[0] = (float)((float)(v29.m128_f32[0] - v26) * COERCE_FLOAT(L"TouchpadAxesSmoothingFactor")) + v26;
    *((_DWORD *)this + 1049) = v29.m128_i32[0];
    v28 = (__m128)*((unsigned int *)this + 1048);
    v27 = *((float *)this + 1048) - *((float *)this + 1050);
    *((float *)this + 1057) = v29.m128_f32[0] - *((float *)this + 1051);
    *((float *)this + 1056) = v27;
    v28.m128_f32[0] = v28.m128_f32[0] - *((float *)this + 1054);
    v29.m128_f32[0] = v29.m128_f32[0] - *((float *)this + 1055);
    v31 = o_sqrtf_0((float)(v28.m128_f32[0] * v28.m128_f32[0]) + (float)(v29.m128_f32[0] * v29.m128_f32[0]));
    if ( v6 )
      *((_DWORD *)this + 918) = 3;
    v32 = *((_DWORD *)this + 918);
    if ( v32 )
    {
      v33 = v32 - 1;
      if ( v33 )
      {
        v34 = v33 - 1;
        if ( v34 )
        {
          if ( v34 == 1 && !*((_BYTE *)this + 3676) )
            *((_DWORD *)this + 918) = 2;
        }
        else
        {
          v35 = (double)(*(_DWORD *)(*((_QWORD *)this + 517) + 32LL) - *(_DWORD *)(*((_QWORD *)this + 517) + 16LL))
              / (double)(int)qword_180268898;
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x29,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v30);
          *((_QWORD *)&v61 + 1) = 27LL;
          *(_QWORD *)&v61 = L"TouchpadRailsTimeoutSeconds";
          MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)v23, &v61);
          if ( v35 > COERCE_FLOAT(L"TouchpadRailsTimeoutSeconds") )
          {
            if ( !MPCConstantManager::s_instance )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x29,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                v36);
            *((_QWORD *)&v62 + 1) = 32LL;
            *(_QWORD *)&v62 = L"TouchpadRailsMinDistanceTraveled";
            MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)v23, &v62);
            if ( v31 > COERCE_FLOAT(L"TouchpadRailsMinDistanceTraveled") )
            {
              v38 = o_sqrtf_0(
                      (float)(*((float *)this + 1054) * *((float *)this + 1054))
                    + (float)(*((float *)this + 1055) * *((float *)this + 1055)));
              if ( !MPCConstantManager::s_instance )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x29,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                  v37);
              *((_QWORD *)&v63 + 1) = 24LL;
              *(_QWORD *)&v63 = L"TouchpadRailsMinDistance";
              MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)v23, &v63);
              if ( v38 <= COERCE_FLOAT(L"TouchpadRailsMinDistance") )
              {
                if ( !MPCConstantManager::s_instance )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x29,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                    v39);
                *((_QWORD *)&v64 + 1) = 29LL;
                *(_QWORD *)&v64 = L"TouchpadRailsDirectionDegrees";
                v40 = (unsigned int)L"TouchpadRailsDirectionDegrees";
                MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)v23, &v64);
                v41 = _mm_unpacklo_ps(v28, v29).m128_u64[0];
              }
              else
              {
                v68 = (std::_Ref_count_base *)*((_QWORD *)this + 527);
                if ( !MPCConstantManager::s_instance )
                  wil::details::in1diag3::_FailFast_Unexpected(
                    retaddr,
                    (void *)0x29,
                    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                    v39);
                *((_QWORD *)&v64 + 1) = 25LL;
                *(_QWORD *)&v64 = L"TouchpadRailsPressDegrees";
                v40 = (unsigned int)L"TouchpadRailsPressDegrees";
                MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)v23, &v64);
                v41 = (__int64)v68;
              }
              v42 = !IsPointInHorizontalQuadrant(*(float *)&v40 * 0.0174532925199433, v41);
              *((_DWORD *)this + 918) = v42;
              if ( v42 )
              {
                LODWORD(v70) = 0;
                *((float *)&v70 + 1) = v31;
              }
              else
              {
                v72 = 0;
                v71 = v31;
              }
              v43 = &v70;
              if ( !v42 )
                v43 = (unsigned __int64 *)&v71;
              *((_QWORD *)this + 528) = *v43;
              if ( v42 )
                v28.m128_i32[0] = v29.m128_i32[0];
              if ( v28.m128_f32[0] < 0.0 )
              {
                v44 = *((float *)this + 1057) * -1.0;
                *((float *)this + 1056) = *((float *)this + 1056) * -1.0;
                *((float *)this + 1057) = v44;
              }
            }
          }
        }
      }
      else
      {
        *((_DWORD *)this + 1056) = 0;
      }
    }
    else
    {
      *((_DWORD *)this + 1057) = 0;
    }
  }
  else
  {
    *((_QWORD *)this + 528) = 0LL;
    v23 = (char *)this + 24;
  }
  if ( o_sqrtf_0(
         (float)(*((float *)this + 1056) * *((float *)this + 1056))
       + (float)(*((float *)this + 1057) * *((float *)this + 1057))) > 0.0 )
  {
    if ( *(_BYTE *)(*((_QWORD *)this + 518) + 9LL) )
    {
      v46 = (__m128)*((unsigned __int64 *)this + 529);
      v47 = _mm_mul_ps(v46, v46);
      v47.m128_f32[0] = v47.m128_f32[0] + _mm_shuffle_ps(v47, v47, 85).m128_f32[0];
      v70 = _mm_div_ps(v46, _mm_sqrt_ps(_mm_shuffle_ps(v47, v47, 0))).m128_u64[0];
      v48 = (__m128)*((unsigned __int64 *)this + 528);
      v49 = _mm_mul_ps(v48, v48);
      v49.m128_f32[0] = v49.m128_f32[0] + _mm_shuffle_ps(v49, v49, 85).m128_f32[0];
      v69 = (std::_Ref_count_base *)_mm_div_ps(v48, _mm_sqrt_ps(_mm_shuffle_ps(v49, v49, 0))).m128_u64[0];
      v50 = *(float *)&v69 - *(float *)&v70;
      v51 = *((float *)&v69 + 1) - *((float *)&v70 + 1);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v45);
      *((_QWORD *)&v65[0] + 1) = 28LL;
      *(_QWORD *)&v65[0] = L"TouchpadDeltaSmoothingFactor";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)v23, v65);
      v52 = (float)(COERCE_FLOAT(L"TouchpadDeltaSmoothingFactor") * v50) + *((float *)this + 1058);
      *((float *)this + 1059) = (float)(COERCE_FLOAT(L"TouchpadDeltaSmoothingFactor") * v51) + *((float *)this + 1059);
      *((float *)this + 1058) = v52;
    }
    else
    {
      v53 = (__m128)*((unsigned __int64 *)this + 528);
      v54 = _mm_mul_ps(v53, v53);
      v54.m128_f32[0] = v54.m128_f32[0] + _mm_shuffle_ps(v54, v54, 85).m128_f32[0];
      *((_QWORD *)this + 529) = _mm_div_ps(v53, _mm_sqrt_ps(_mm_shuffle_ps(v54, v54, 0))).m128_u64[0];
    }
  }
  v55 = (__m128)*((unsigned int *)this + 1045);
  v56 = v55;
  v57 = v55.m128_f32[0] * *((float *)this + 1067);
  v55.m128_f32[0] = (float)(v55.m128_f32[0] * *((float *)this + 1065)) + *((float *)this + 1062);
  v56.m128_f32[0] = (float)(v56.m128_f32[0] * *((float *)this + 1066)) + *((float *)this + 1063);
  *((float *)&v59 + 2) = v57 + *((float *)this + 1064);
  v58 = DWORD2(v59);
  *((_QWORD *)this + 534) = _mm_unpacklo_ps(v55, v56).m128_u64[0];
  *((_QWORD *)this + 525) = *((_QWORD *)this + 524);
  *((_DWORD *)this + 1070) = v58;
}
