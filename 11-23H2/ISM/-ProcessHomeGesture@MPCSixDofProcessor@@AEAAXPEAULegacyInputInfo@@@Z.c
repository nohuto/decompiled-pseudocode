/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801DF9F4
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801DF860 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x1800B0648 (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800B575C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD83C (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD890 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800C8840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??$MPCSixDofProcessor_HomeButtonIgnored@$$V@ISMTracing@@SAXXZ @ 0x1801DB304 (--$MPCSixDofProcessor_HomeButtonIgnored@$$V@ISMTracing@@SAXXZ.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801DB3A4 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801DB708 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801DB7C8 (--$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801DB888 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z @ 0x1801DC0CC (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801DC758 (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801DDA28 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E0880 (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCSixDofProcessor::ProcessHomeGesture(
        MPCSixDofProcessor *this,
        struct LegacyInputInfo *a2,
        __int64 a3,
        const char *a4)
{
  unsigned int v4; // r15d
  unsigned int *v5; // r12
  char v7; // di
  unsigned int v9; // eax
  __int64 v10; // r8
  MPCButtonHoldHelper *v11; // rcx
  const char *v12; // r9
  MPCButtonHoldHelper **v13; // r13
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
  unsigned int v48; // edi
  bool v49; // al
  _BYTE *v50; // rdx
  unsigned int v51; // eax
  char v52; // bl
  _BYTE *v53; // rdi
  MPCHolographicInputManager *Instance; // rax
  __int64 v55; // rdx
  __int64 v56; // r8
  const char *v57; // r9
  __int64 v58; // rax
  _BYTE *v59; // rbx
  MPCHolographicInputManager *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  const char *v63; // r9
  __int64 v64; // rax
  unsigned int *v65; // r13
  unsigned int *i; // rbx
  MPCHolographicInputManager *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // r8
  const char *v70; // r9
  __int64 v71; // rax
  char v72; // cl
  int v73; // eax
  int v74; // eax
  float v75; // eax
  __int128 v76; // [rsp+B8h] [rbp-80h] BYREF
  float v77; // [rsp+C8h] [rbp-70h] BYREF
  float v78; // [rsp+CCh] [rbp-6Ch] BYREF
  float v79; // [rsp+D0h] [rbp-68h] BYREF
  float v80; // [rsp+D4h] [rbp-64h] BYREF
  float v81; // [rsp+D8h] [rbp-60h] BYREF
  float v82; // [rsp+E0h] [rbp-58h] BYREF
  float v83; // [rsp+E4h] [rbp-54h] BYREF
  float v84; // [rsp+E8h] [rbp-50h] BYREF
  float v85; // [rsp+F0h] [rbp-48h] BYREF
  float v86; // [rsp+F4h] [rbp-44h] BYREF
  float v87; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v88; // [rsp+100h] [rbp-38h]
  float v89; // [rsp+108h] [rbp-30h]
  _QWORD v90[22]; // [rsp+110h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+C8h]
  unsigned int v92; // [rsp+208h] [rbp+D0h] BYREF
  unsigned int v93; // [rsp+210h] [rbp+D8h] BYREF
  unsigned int v94; // [rsp+218h] [rbp+E0h] BYREF
  char v95; // [rsp+220h] [rbp+E8h] BYREF

  v4 = *((_DWORD *)this + 1073);
  v5 = (unsigned int *)((char *)a2 + 2280);
  v7 = *((_BYTE *)a2 + 2280) & 1;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *((_QWORD *)&v76 + 1) = 33LL;
  *(_QWORD *)&v76 = L"HomeCancelExceedThresholdMaxCount";
  v9 = MPCConstantManager::GetConstant<unsigned long>(
         (__int64)MPCConstantManager::s_instance,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         &v76);
  v10 = *((_QWORD *)a2 + 2);
  v11 = (MPCButtonHoldHelper *)*((_QWORD *)this + 513);
  LOBYTE(v93) = v4 >= v9;
  MPCButtonHoldHelper::UpdateState(v11, v7, v10);
  v13 = (MPCButtonHoldHelper **)((char *)this + 4096);
  v14 = *(_BYTE *)(*((_QWORD *)this + 513) + 8LL);
  if ( !v14 && *((_BYTE *)*v13 + 8) )
    v14 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v12) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
  MPCButtonHoldHelper::UpdateState(*v13, v14, *((_QWORD *)a2 + 2));
  v92 = *((_DWORD *)this + 1073);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
  *((_QWORD *)&v76 + 1) = 33LL;
  *(_QWORD *)&v76 = L"HomeCancelExceedThresholdMaxCount";
  v16 = MPCConstantManager::GetConstant<unsigned long>(
          (__int64)MPCConstantManager::s_instance,
          ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
          &v76);
  LOBYTE(v92) = v92 >= v16;
  v88 = 0LL;
  v89 = 0.0;
  v85 = 0.0;
  v86 = 0.0;
  v87 = 0.0;
  if ( *((_BYTE *)this + 10801) )
  {
    v18 = *((float *)a2 + 31);
    v19 = *((float *)a2 + 32);
    LODWORD(v88) = *((_DWORD *)a2 + 30);
    *((float *)&v88 + 1) = v18;
    v89 = v19;
    v20 = *(float *)&v88 - *((float *)this + 1086);
    v21 = v18 - *((float *)this + 1087);
    v22 = v19 - *((float *)this + 1088);
    v85 = v20;
    v86 = v21;
    v87 = v22;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v17);
    *((_QWORD *)&v76 + 1) = 18LL;
    *(_QWORD *)&v76 = L"HomeDistanceWeight";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
      &v76);
    v24 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1089);
    v25 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1090);
    v26 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1091);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v23);
    *((_QWORD *)&v76 + 1) = 18LL;
    *(_QWORD *)&v76 = L"HomeDistanceWeight";
    v27 = v76;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
      &v76);
    v28 = (__m128)v27;
    v29 = (__m128)v27;
    v28.m128_f32[0] = (float)(*(float *)&v27 * v20) + v24;
    v29.m128_f32[0] = (float)(*(float *)&v27 * v21) + v25;
    *((float *)&v76 + 2) = (float)(*(float *)&v27 * v22) + v26;
    *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
    *((float *)this + 1091) = (float)(*(float *)&v27 * v22) + v26;
  }
  if ( v7 || *(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
  {
    v30 = *((_QWORD *)a2 + 2);
    v79 = 0.0;
    v31 = v30 - *((_QWORD *)this + 538);
    v80 = 0.0;
    v81 = 0.0;
    v82 = 0.0;
    v83 = 0.0;
    v84 = 0.0;
    v32 = (double)(int)v31 / (double)(int)qword_180268898;
    if ( v32 > 0.0 )
    {
      if ( *((_BYTE *)a2 + 2440) )
      {
        v33 = *((float *)a2 + 603);
        *(_QWORD *)&v76 = *(_QWORD *)((char *)a2 + 2404);
        v34 = *(float *)&v76 - *((float *)this + 1080);
        v35 = *((float *)&v76 + 1) - *((float *)this + 1081);
        *((float *)&v76 + 2) = v33;
        v36 = (float)(v33 - *((float *)this + 1082)) * (float)(1.0 / v32);
        v79 = v34 * (float)(1.0 / v32);
        v80 = v35 * (float)(1.0 / v32);
        v81 = v36;
      }
      if ( *((_BYTE *)a2 + 2441) )
      {
        v37 = *((float *)a2 + 606);
        *(_QWORD *)&v76 = *((_QWORD *)a2 + 302);
        v38 = *(float *)&v76 - *((float *)this + 1083);
        v39 = *((float *)&v76 + 1) - *((float *)this + 1084);
        *((float *)&v76 + 2) = v37;
        v40 = (float)(v37 - *((float *)this + 1085)) * (float)(1.0 / v32);
        v82 = v38 * (float)(1.0 / v32);
        v83 = v39 * (float)(1.0 / v32);
        v84 = v40;
      }
    }
    v90[0] = (char *)a2 + 2340;
    v90[2] = &v82;
    v90[3] = &v79;
    v41 = *((_QWORD *)this + 513);
    v90[1] = this;
    if ( *(_BYTE *)(v41 + 10) )
    {
      v42 = (double)((int)v30 - *((_DWORD *)this + 1078)) / (double)(int)qword_180268898;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v17);
      *(_QWORD *)&v76 = L"HomeAllowTimeBetweenClicksInSec";
      *((_QWORD *)&v76 + 1) = 31LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
        &v76);
      if ( COERCE_FLOAT(L"HomeAllowTimeBetweenClicksInSec") <= v42 )
        goto LABEL_34;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v43);
      *((_QWORD *)&v76 + 1) = 32LL;
      *(_QWORD *)&v76 = L"HomeSecondClickAngularMultiplier";
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
        &v76);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v44);
      *((_QWORD *)&v76 + 1) = 31LL;
      *(_QWORD *)&v76 = L"HomeSecondClickLinearMultiplier";
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
        &v76);
      if ( lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(
             v90,
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
    if ( !*((_BYTE *)this + 4296) && lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(v90, 1.0, 1.0, v17) )
    {
      v48 = *((_DWORD *)this + 1073) + 1;
      *((_DWORD *)this + 1073) = v48;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v17);
      *((_QWORD *)&v76 + 1) = 33LL;
      *(_QWORD *)&v76 = L"HomeCancelExceedThresholdMaxCount";
      LOBYTE(v92) = v48 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                           (__int64)MPCConstantManager::s_instance,
                                           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                           &v76);
    }
    v49 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1, v17) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
    *((_BYTE *)this + 4297) |= v49;
    v94 = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      &v94,
      (bool *)&v92,
      (unsigned int *)this + 1073,
      (float *)a2 + 604,
      (float *)a2 + 605,
      (float *)a2 + 606,
      (float *)a2 + 601,
      (float *)a2 + 602,
      (float *)a2 + 603,
      &v82,
      &v83,
      &v84,
      &v79,
      &v80,
      &v81,
      &v85,
      &v86,
      &v87,
      (float *)this + 1089,
      (float *)this + 1090,
      (float *)this + 1091,
      v5);
  }
  if ( *((_BYTE *)*v13 + 8) || *((_BYTE *)*v13 + 12) )
  {
    v17 = (char *)this + 10816;
    v50 = (_BYTE *)*((_QWORD *)this + 1353);
    if ( ((unsigned __int64)&v50[-*((_QWORD *)this + 1352)] & 0xFFFFFFFFFFFFFFFCuLL) == 0
      || *(_DWORD *)(*((_QWORD *)this + 1353) - 4LL) != *v5 )
    {
      if ( *((_BYTE *)this + 10808) )
      {
        v51 = *v5;
        v94 = *v5;
        if ( v50 == *((_BYTE **)this + 1354) )
        {
          std::vector<unsigned long>::_Emplace_reallocate<unsigned long>((const void **)this + 1352, v50, &v94);
        }
        else
        {
          *(_DWORD *)v50 = v51;
          *((_QWORD *)this + 1353) += 4LL;
        }
        v94 = **((_DWORD **)this + 6);
        ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged<unsigned long,unsigned int const &>(&v94, v5);
      }
    }
  }
  v52 = v92;
  v53 = (char *)this + 10808;
  if ( *((_BYTE *)this + 10808) )
  {
    if ( !(_BYTE)v92 )
    {
      *((_DWORD *)a2 + 578) = 0;
      *v5 = 0;
      *((_DWORD *)a2 + 571) = 0;
      *((_BYTE *)a2 + 2256) = 0;
LABEL_67:
      *((_DWORD *)a2 + 17) = 6;
      goto LABEL_68;
    }
    if ( !(_BYTE)v93 && (*(_BYTE *)v5 & 0x3E) != 0 )
    {
      if ( *((_DWORD *)a2 + 17) == 3 )
      {
        *((_DWORD *)a2 + 17) = 2;
        Instance = MPCHolographicInputManager::GetInstance();
        LOBYTE(v93) = MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v55, v56, v57);
        v58 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        LOBYTE(v94) = 1;
        v95 = 1;
        v78 = **((float **)this + 6);
        v77 = (double)(int)v58 / (double)(int)qword_180268898;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int *)&v78,
          (bool *)&v95,
          (bool *)&v94,
          (bool *)this + 10808,
          (bool *)this + 4297,
          v5,
          (bool *)&v92,
          &v77,
          (bool *)&v93);
        goto LABEL_68;
      }
      if ( *((_DWORD *)a2 + 17) == 4 )
        goto LABEL_67;
    }
  }
LABEL_68:
  if ( !*((_BYTE *)*v13 + 12) )
    goto LABEL_80;
  if ( !v52 && *v53 )
  {
    v59 = (char *)this + 4297;
    if ( !*((_BYTE *)this + 4297) )
    {
      if ( !*(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x1B1,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
          v17);
      MPCSixDofProcessor::SendHomeEvent(this, a2);
      v60 = MPCHolographicInputManager::GetInstance();
      LOBYTE(v93) = MPCHolographicInputManager::IsExclusiveAppFocused(v60, v61, v62, v63);
      v64 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
      LOBYTE(v94) = 0;
      v95 = 1;
      v77 = **((float **)this + 6);
      v78 = (double)(int)v64 / (double)(int)qword_180268898;
      ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
        (unsigned int *)&v77,
        (bool *)&v95,
        (bool *)&v94,
        (bool *)this + 10808,
        (bool *)this + 4297,
        v5,
        (bool *)&v92,
        &v78,
        (bool *)&v93);
      *v5 |= 1u;
      goto LABEL_79;
    }
    v65 = (unsigned int *)*((_QWORD *)this + 1353);
    for ( i = (unsigned int *)*((_QWORD *)this + 1352); i != v65; ++i )
    {
      MPCManager::OnButtonsChangedDuringHomeGesture(
        MPCManager::s_instance,
        **((_DWORD **)this + 6),
        0x2000u,
        *i,
        *((_QWORD *)a2 + 2),
        *((_DWORD *)a2 + 567));
      v93 = **((_DWORD **)this + 6);
      ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned long &>(&v93, i);
    }
  }
  v67 = MPCHolographicInputManager::GetInstance();
  LOBYTE(v93) = MPCHolographicInputManager::IsExclusiveAppFocused(v67, v68, v69, v70);
  v59 = (char *)this + 4297;
  v71 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
  LOBYTE(v94) = 0;
  v95 = 0;
  v77 = **((float **)this + 6);
  v78 = (double)(int)v71 / (double)(int)qword_180268898;
  ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
    (unsigned int *)&v77,
    (bool *)&v95,
    (bool *)&v94,
    (bool *)this + 10808,
    (bool *)this + 4297,
    v5,
    (bool *)&v92,
    &v78,
    (bool *)&v93);
  ISMTracing::MPCSixDofProcessor_HomeButtonIgnored<>(v72);
LABEL_79:
  DWORD2(v76) = 0;
  *((_DWORD *)this + 1073) = 0;
  *((_BYTE *)this + 4296) = 0;
  *v59 = 0;
  *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1091) = 0;
  *v53 = 0;
  *((_QWORD *)this + 1353) = *((_QWORD *)this + 1352);
LABEL_80:
  if ( *((_BYTE *)a2 + 2440) )
  {
    v73 = *((_DWORD *)a2 + 603);
    *((_QWORD *)this + 540) = *(_QWORD *)((char *)a2 + 2404);
    *((_DWORD *)this + 1082) = v73;
  }
  if ( *((_BYTE *)a2 + 2441) )
  {
    v74 = *((_DWORD *)a2 + 606);
    *(_QWORD *)((char *)this + 4332) = *((_QWORD *)a2 + 302);
    *((_DWORD *)this + 1085) = v74;
  }
  if ( *((_BYTE *)this + 10801) )
  {
    v75 = v89;
    *((_QWORD *)this + 543) = v88;
    *((float *)this + 1088) = v75;
  }
  *((_QWORD *)this + 538) = *((_QWORD *)a2 + 2);
}
