/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C0FA0
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C0E10 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x180099B78 (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x18009E52C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A20 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??$_Emplace_reallocate@AEBK@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z @ 0x1800B5840 (--$_Emplace_reallocate@AEBK@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAKAEBK@Z.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801BCF9C (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801BD1F8 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801BD23C (--$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801BD280 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801BDF28 (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801BF298 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801BFF30 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C1E2C (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int *v4; // r13
  unsigned int v5; // r15d
  unsigned int *v6; // r12
  char v8; // bl
  unsigned int v10; // eax
  __int64 v11; // r8
  MPCButtonHoldHelper *v12; // rcx
  const char *v13; // r9
  char v14; // dl
  const char *v15; // r9
  unsigned int v16; // eax
  const char *v17; // r9
  float v18; // xmm8_4
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm9_4
  const char *v23; // r9
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm6_4
  __int128 v27; // xmm0
  __m128 v28; // xmm2
  __m128 v29; // xmm1
  __int64 v30; // rcx
  __int64 v31; // rax
  float v32; // xmm4_4
  float v33; // eax
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm0_4
  float v37; // eax
  float v38; // xmm2_4
  float v39; // xmm1_4
  float v40; // xmm0_4
  __int64 v41; // rax
  float v42; // xmm6_4
  const char *v43; // r9
  const char *v44; // r9
  const char *v45; // r9
  char v46; // al
  char v47; // al
  MPCConstantManager *v48; // rcx
  unsigned int v49; // ebx
  bool v50; // al
  __int64 v51; // rax
  _BYTE *v52; // rdx
  unsigned int v53; // eax
  char v54; // bl
  _BYTE *v55; // rdi
  MPCHolographicInputManager *Instance; // rax
  __int64 v57; // rdx
  __int64 v58; // r8
  const char *v59; // r9
  __int64 v60; // rax
  _BYTE *v61; // rbx
  MPCHolographicInputManager *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // r8
  const char *v65; // r9
  __int64 v66; // rax
  unsigned int *v67; // r13
  unsigned int *i; // rbx
  MPCHolographicInputManager *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // r8
  const char *v72; // r9
  __int64 v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rcx
  ISMTracing *v76; // rcx
  int v77; // eax
  int v78; // eax
  float v79; // eax
  __int128 v80; // [rsp+B8h] [rbp-80h] BYREF
  float v81; // [rsp+C8h] [rbp-70h] BYREF
  float v82; // [rsp+CCh] [rbp-6Ch] BYREF
  float v83; // [rsp+D0h] [rbp-68h] BYREF
  float v84; // [rsp+D4h] [rbp-64h] BYREF
  float v85; // [rsp+D8h] [rbp-60h] BYREF
  float v86; // [rsp+E0h] [rbp-58h] BYREF
  float v87; // [rsp+E4h] [rbp-54h] BYREF
  float v88; // [rsp+E8h] [rbp-50h] BYREF
  float v89; // [rsp+F0h] [rbp-48h] BYREF
  float v90; // [rsp+F4h] [rbp-44h] BYREF
  float v91; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v92; // [rsp+100h] [rbp-38h]
  float v93; // [rsp+108h] [rbp-30h]
  _QWORD v94[22]; // [rsp+110h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+C8h]
  unsigned int v96; // [rsp+208h] [rbp+D0h] BYREF
  unsigned int v97; // [rsp+210h] [rbp+D8h] BYREF
  unsigned int v98; // [rsp+218h] [rbp+E0h] BYREF
  char v99; // [rsp+220h] [rbp+E8h] BYREF

  v4 = (unsigned int *)((char *)this + 4292);
  v5 = *((_DWORD *)this + 1073);
  v6 = (unsigned int *)((char *)a2 + 2280);
  v8 = *((_BYTE *)a2 + 2280) & 1;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *((_QWORD *)&v80 + 1) = 33LL;
  *(_QWORD *)&v80 = L"HomeCancelExceedThresholdMaxCount";
  v10 = MPCConstantManager::GetConstant<unsigned long>(
          (__int64)MPCConstantManager::s_instance,
          (__int64)this + 24,
          &v80);
  v11 = *((_QWORD *)a2 + 2);
  v12 = (MPCButtonHoldHelper *)*((_QWORD *)this + 513);
  LOBYTE(v97) = v5 >= v10;
  MPCButtonHoldHelper::UpdateState(v12, v8, v11);
  v14 = *(_BYTE *)(*((_QWORD *)this + 513) + 8LL);
  if ( !v14 && *(_BYTE *)(*((_QWORD *)this + 512) + 8LL) )
    v14 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v13) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
  MPCButtonHoldHelper::UpdateState(*((MPCButtonHoldHelper **)this + 512), v14, *((_QWORD *)a2 + 2));
  v96 = *v4;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
  *((_QWORD *)&v80 + 1) = 33LL;
  *(_QWORD *)&v80 = L"HomeCancelExceedThresholdMaxCount";
  v16 = MPCConstantManager::GetConstant<unsigned long>(
          (__int64)MPCConstantManager::s_instance,
          (__int64)this + 24,
          &v80);
  LOBYTE(v96) = v96 >= v16;
  v92 = 0LL;
  v93 = 0.0;
  v89 = 0.0;
  v90 = 0.0;
  v91 = 0.0;
  if ( *((_BYTE *)this + 10801) )
  {
    v18 = *((float *)a2 + 31);
    v19 = *((float *)a2 + 32);
    LODWORD(v92) = *((_DWORD *)a2 + 30);
    *((float *)&v92 + 1) = v18;
    v93 = v19;
    v20 = *(float *)&v92 - *((float *)this + 1086);
    v21 = v18 - *((float *)this + 1087);
    v22 = v19 - *((float *)this + 1088);
    v89 = v20;
    v90 = v21;
    v91 = v22;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v17);
    *((_QWORD *)&v80 + 1) = 18LL;
    *(_QWORD *)&v80 = L"HomeDistanceWeight";
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v80);
    v24 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1089);
    v25 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1090);
    v26 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1091);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v23);
    *((_QWORD *)&v80 + 1) = 18LL;
    *(_QWORD *)&v80 = L"HomeDistanceWeight";
    v27 = v80;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v80);
    v28 = (__m128)v27;
    v29 = (__m128)v27;
    v28.m128_f32[0] = (float)(*(float *)&v27 * v20) + v24;
    v29.m128_f32[0] = (float)(*(float *)&v27 * v21) + v25;
    *((float *)&v80 + 2) = (float)(*(float *)&v27 * v22) + v26;
    *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
    *((float *)this + 1091) = (float)(*(float *)&v27 * v22) + v26;
  }
  if ( v8 || *(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
  {
    v30 = *((_QWORD *)a2 + 2);
    v83 = 0.0;
    v31 = v30 - *((_QWORD *)this + 538);
    v84 = 0.0;
    v85 = 0.0;
    v86 = 0.0;
    v87 = 0.0;
    v88 = 0.0;
    v32 = (double)(int)v31 / (double)(int)qword_180242808;
    if ( v32 > 0.0 )
    {
      if ( *((_BYTE *)a2 + 2440) )
      {
        v33 = *((float *)a2 + 603);
        *(_QWORD *)&v80 = *(_QWORD *)((char *)a2 + 2404);
        v34 = *(float *)&v80 - *((float *)this + 1080);
        v35 = *((float *)&v80 + 1) - *((float *)this + 1081);
        *((float *)&v80 + 2) = v33;
        v36 = (float)(v33 - *((float *)this + 1082)) * (float)(1.0 / v32);
        v83 = v34 * (float)(1.0 / v32);
        v84 = v35 * (float)(1.0 / v32);
        v85 = v36;
      }
      if ( *((_BYTE *)a2 + 2441) )
      {
        v37 = *((float *)a2 + 606);
        *(_QWORD *)&v80 = *((_QWORD *)a2 + 302);
        v38 = *(float *)&v80 - *((float *)this + 1083);
        v39 = *((float *)&v80 + 1) - *((float *)this + 1084);
        *((float *)&v80 + 2) = v37;
        v40 = (float)(v37 - *((float *)this + 1085)) * (float)(1.0 / v32);
        v86 = v38 * (float)(1.0 / v32);
        v87 = v39 * (float)(1.0 / v32);
        v88 = v40;
      }
    }
    v94[0] = (char *)a2 + 2340;
    v94[2] = &v86;
    v94[3] = &v83;
    v41 = *((_QWORD *)this + 513);
    v94[1] = this;
    if ( *(_BYTE *)(v41 + 10) )
    {
      v42 = (double)((int)v30 - *((_DWORD *)this + 1078)) / (double)(int)qword_180242808;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v17);
      *(_QWORD *)&v80 = L"HomeAllowTimeBetweenClicksInSec";
      *((_QWORD *)&v80 + 1) = 31LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v80);
      if ( COERCE_FLOAT(L"HomeAllowTimeBetweenClicksInSec") <= v42 )
        goto LABEL_34;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v43);
      *((_QWORD *)&v80 + 1) = 32LL;
      *(_QWORD *)&v80 = L"HomeSecondClickAngularMultiplier";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v80);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v44);
      *((_QWORD *)&v80 + 1) = 31LL;
      *(_QWORD *)&v80 = L"HomeSecondClickLinearMultiplier";
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v80);
      if ( lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(
             v94,
             COERCE_FLOAT(L"HomeSecondClickLinearMultiplier"),
             COERCE_FLOAT(L"HomeSecondClickAngularMultiplier"),
             v45) )
      {
LABEL_34:
        v46 = 0;
      }
      else
      {
        v46 = 1;
      }
      *((_BYTE *)this + 4296) = v46;
      *((_QWORD *)this + 539) = *((_QWORD *)a2 + 2);
      if ( MPCSixDofProcessor::AreButtonsOrAxesActive(this, (MPCSixDofProcessor *)((char *)this + 7792), 1, v43)
        || (v47 = 1, (*((_BYTE *)this + 10072) & 0x40) != 0) )
      {
        v47 = 0;
      }
      *((_BYTE *)this + 10808) = v47;
    }
    if ( !*((_BYTE *)this + 4296) && lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(v94, 1.0, 1.0, v17) )
    {
      v48 = MPCConstantManager::s_instance;
      v49 = *v4 + 1;
      *v4 = v49;
      if ( !v48 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v17);
      *((_QWORD *)&v80 + 1) = 33LL;
      *(_QWORD *)&v80 = L"HomeCancelExceedThresholdMaxCount";
      LOBYTE(v96) = v49 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                           (__int64)v48,
                                           (__int64)this + 24,
                                           &v80);
    }
    v50 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1, v17) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
    *((_BYTE *)this + 4297) |= v50;
    v98 = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      &v98,
      (bool *)&v96,
      v4,
      (float *)a2 + 604,
      (float *)a2 + 605,
      (float *)a2 + 606,
      (float *)a2 + 601,
      (float *)a2 + 602,
      (float *)a2 + 603,
      &v86,
      &v87,
      &v88,
      &v83,
      &v84,
      &v85,
      &v89,
      &v90,
      &v91,
      (float *)this + 1089,
      (float *)this + 1090,
      (float *)this + 1091,
      v6);
  }
  v51 = *((_QWORD *)this + 512);
  if ( *(_BYTE *)(v51 + 8) || *(_BYTE *)(v51 + 12) )
  {
    v17 = (char *)this + 10816;
    v52 = (_BYTE *)*((_QWORD *)this + 1353);
    if ( ((unsigned __int64)&v52[-*((_QWORD *)this + 1352)] & 0xFFFFFFFFFFFFFFFCuLL) == 0
      || *(_DWORD *)(*((_QWORD *)this + 1353) - 4LL) != *v6 )
    {
      if ( *((_BYTE *)this + 10808) )
      {
        v53 = *v6;
        v98 = *v6;
        if ( v52 == *((_BYTE **)this + 1354) )
        {
          std::vector<unsigned long>::_Emplace_reallocate<unsigned long const &>((const void **)this + 1352, v52, &v98);
        }
        else
        {
          *(_DWORD *)v52 = v53;
          *((_QWORD *)this + 1353) += 4LL;
        }
        v98 = **((_DWORD **)this + 6);
        ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged<unsigned long,unsigned int const &>(&v98, v6);
      }
    }
  }
  v54 = v96;
  v55 = (char *)this + 10808;
  if ( *((_BYTE *)this + 10808) )
  {
    if ( !(_BYTE)v96 )
    {
      *((_DWORD *)a2 + 578) = 0;
      *v6 = 0;
      *((_DWORD *)a2 + 571) = 0;
      *((_BYTE *)a2 + 2256) = 0;
LABEL_67:
      *((_DWORD *)a2 + 17) = 6;
      goto LABEL_68;
    }
    if ( !(_BYTE)v97 && (*(_BYTE *)v6 & 0x3E) != 0 )
    {
      if ( *((_DWORD *)a2 + 17) == 3 )
      {
        *((_DWORD *)a2 + 17) = 2;
        Instance = MPCHolographicInputManager::GetInstance();
        LOBYTE(v97) = MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v57, v58, v59);
        v60 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        LOBYTE(v98) = 1;
        v99 = 1;
        v82 = **((float **)this + 6);
        v81 = (double)(int)v60 / (double)(int)qword_180242808;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int *)&v82,
          (bool *)&v99,
          (bool *)&v98,
          (bool *)this + 10808,
          (bool *)this + 4297,
          v6,
          (bool *)&v96,
          &v81,
          (bool *)&v97);
        goto LABEL_68;
      }
      if ( *((_DWORD *)a2 + 17) == 4 )
        goto LABEL_67;
    }
  }
LABEL_68:
  if ( !*(_BYTE *)(*((_QWORD *)this + 512) + 12LL) )
    goto LABEL_82;
  if ( v54 || !*v55 )
    goto LABEL_79;
  v61 = (char *)this + 4297;
  if ( *((_BYTE *)this + 4297) )
  {
    v67 = (unsigned int *)*((_QWORD *)this + 1353);
    for ( i = (unsigned int *)*((_QWORD *)this + 1352); i != v67; ++i )
    {
      MPCManager::OnButtonsChangedDuringHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 6),
        0x2000u,
        *i,
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 567));
      v97 = **((_DWORD **)this + 6);
      ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned long &>(&v97, i);
    }
    v4 = (unsigned int *)((char *)this + 4292);
LABEL_79:
    v69 = MPCHolographicInputManager::GetInstance();
    LOBYTE(v97) = MPCHolographicInputManager::IsExclusiveAppFocused(v69, v70, v71, v72);
    v61 = (char *)this + 4297;
    v73 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
    LOBYTE(v98) = 0;
    v99 = 0;
    v81 = **((float **)this + 6);
    v82 = (double)(int)v73 / (double)(int)qword_180242808;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int *)&v81,
      (bool *)&v99,
      (bool *)&v98,
      (bool *)this + 10808,
      (bool *)this + 4297,
      v6,
      (bool *)&v96,
      &v82,
      (bool *)&v97);
    if ( ISMTracing::IsEnabled(v74) )
    {
      wil::details::static_lazy<ISMTracing>::get(v75, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v76);
    }
    goto LABEL_81;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      433LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      v17);
  MPCSixDofProcessor::SendHomeEvent(this, a2);
  v62 = MPCHolographicInputManager::GetInstance();
  LOBYTE(v97) = MPCHolographicInputManager::IsExclusiveAppFocused(v62, v63, v64, v65);
  v66 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
  LOBYTE(v98) = 0;
  v99 = 1;
  v81 = **((float **)this + 6);
  v82 = (double)(int)v66 / (double)(int)qword_180242808;
  ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
    (unsigned int *)&v81,
    (bool *)&v99,
    (bool *)&v98,
    (bool *)this + 10808,
    (bool *)this + 4297,
    v6,
    (bool *)&v96,
    &v82,
    (bool *)&v97);
  *v6 |= 1u;
LABEL_81:
  DWORD2(v80) = 0;
  *v4 = 0;
  *((_BYTE *)this + 4296) = 0;
  *v61 = 0;
  *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1091) = 0;
  *v55 = 0;
  *((_QWORD *)this + 1353) = *((_QWORD *)this + 1352);
LABEL_82:
  if ( *((_BYTE *)a2 + 2440) )
  {
    v77 = *((_DWORD *)a2 + 603);
    *((_QWORD *)this + 540) = *(_QWORD *)((char *)a2 + 2404);
    *((_DWORD *)this + 1082) = v77;
  }
  if ( *((_BYTE *)a2 + 2441) )
  {
    v78 = *((_DWORD *)a2 + 606);
    *(_QWORD *)((char *)this + 4332) = *((_QWORD *)a2 + 302);
    *((_DWORD *)this + 1085) = v78;
  }
  if ( *((_BYTE *)this + 10801) )
  {
    v79 = v93;
    *((_QWORD *)this + 543) = v92;
    *((float *)this + 1088) = v79;
  }
  *((_QWORD *)this + 538) = *((_QWORD *)a2 + 2);
}
