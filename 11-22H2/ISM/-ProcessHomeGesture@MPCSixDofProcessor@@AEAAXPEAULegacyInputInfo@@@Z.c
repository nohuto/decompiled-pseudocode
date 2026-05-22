/*
 * XREFs of ?ProcessHomeGesture@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801ECC24
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801ECA90 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180026950 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180040ACC (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z @ 0x1800C2798 (-OnButtonsChangedDuringHomeGesture@MPCManager@@QEAAXIII_KI@Z.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800C6E6C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE0B8 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800D7B90 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801E8B14 (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 *     ??$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z @ 0x1801E8D70 (--$MPCSixDofProcessor_HomeEventUpdate@KAEAK@ISMTracing@@SAX$$QEAKAEAK@Z.c)
 *     ??$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z @ 0x1801E8DB4 (--$MPCSixDofProcessor_HomeHotkey_OnButtonsChanged@KAEBI@ISMTracing@@SAX$$QEAKAEBI@Z.c)
 *     ??$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEAMAEBI@ISMTracing@@SAX$$QEAKAEA_NAEAKAEBM33333AEAM44444444444AEBI@Z @ 0x1801E8DF8 (--$MPCSixDofProcessor_HomePressedEvent@KAEA_NAEAKAEBMAEBMAEBMAEBMAEBMAEBMAEAMAEAMAEAMAEAMAEAMAEA.c)
 *     ??$_Emplace_reallocate@K@?$vector@KV?$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z @ 0x1801E95B0 (--$_Emplace_reallocate@K@-$vector@KV-$allocator@K@std@@@std@@QEAAPEAKQEAK$$QEAK@Z.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator() @ 0x1801E9C3C (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--operator().c)
 *     ?AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z @ 0x1801EAF08 (-AreButtonsOrAxesActive@MPCSixDofProcessor@@AEAA_NPEAULegacyInputInfo@@I@Z.c)
 *     ?MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ @ 0x1801EBBB0 (-MPCSixDofProcessor_HomeButtonIgnored_@ISMTracing@@QEAAXXZ.c)
 *     ?SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801EDAC8 (-SendHomeEvent@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
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
  __int64 v72; // rcx
  __int64 v73; // rcx
  ISMTracing *v74; // rcx
  int v75; // eax
  int v76; // eax
  float v77; // eax
  __int128 v78; // [rsp+B8h] [rbp-80h] BYREF
  float v79; // [rsp+C8h] [rbp-70h] BYREF
  float v80; // [rsp+CCh] [rbp-6Ch] BYREF
  float v81; // [rsp+D0h] [rbp-68h] BYREF
  float v82; // [rsp+D4h] [rbp-64h] BYREF
  float v83; // [rsp+D8h] [rbp-60h] BYREF
  float v84; // [rsp+E0h] [rbp-58h] BYREF
  float v85; // [rsp+E4h] [rbp-54h] BYREF
  float v86; // [rsp+E8h] [rbp-50h] BYREF
  float v87; // [rsp+F0h] [rbp-48h] BYREF
  float v88; // [rsp+F4h] [rbp-44h] BYREF
  float v89; // [rsp+F8h] [rbp-40h] BYREF
  __int64 v90; // [rsp+100h] [rbp-38h]
  float v91; // [rsp+108h] [rbp-30h]
  _QWORD v92[22]; // [rsp+110h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+C8h]
  unsigned int v94; // [rsp+208h] [rbp+D0h] BYREF
  unsigned int v95; // [rsp+210h] [rbp+D8h] BYREF
  unsigned int v96; // [rsp+218h] [rbp+E0h] BYREF
  char v97; // [rsp+220h] [rbp+E8h] BYREF

  v4 = *((_DWORD *)this + 1073);
  v5 = (unsigned int *)((char *)a2 + 2280);
  v7 = *((_BYTE *)a2 + 2280) & 1;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      a4);
  *((_QWORD *)&v78 + 1) = 33LL;
  *(_QWORD *)&v78 = L"HomeCancelExceedThresholdMaxCount";
  v9 = MPCConstantManager::GetConstant<unsigned long>(
         (__int64)MPCConstantManager::s_instance,
         ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
         &v78);
  v10 = *((_QWORD *)a2 + 2);
  v11 = (MPCButtonHoldHelper *)*((_QWORD *)this + 513);
  LOBYTE(v95) = v4 >= v9;
  MPCButtonHoldHelper::UpdateState(v11, v7, v10);
  v13 = (MPCButtonHoldHelper **)((char *)this + 4096);
  v14 = *(_BYTE *)(*((_QWORD *)this + 513) + 8LL);
  if ( !v14 && *((_BYTE *)*v13 + 8) )
    v14 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 0, v12) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
  MPCButtonHoldHelper::UpdateState(*v13, v14, *((_QWORD *)a2 + 2));
  v94 = *((_DWORD *)this + 1073);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v15);
  *((_QWORD *)&v78 + 1) = 33LL;
  *(_QWORD *)&v78 = L"HomeCancelExceedThresholdMaxCount";
  v16 = MPCConstantManager::GetConstant<unsigned long>(
          (__int64)MPCConstantManager::s_instance,
          ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
          &v78);
  LOBYTE(v94) = v94 >= v16;
  v90 = 0LL;
  v91 = 0.0;
  v87 = 0.0;
  v88 = 0.0;
  v89 = 0.0;
  if ( *((_BYTE *)this + 10801) )
  {
    v18 = *((float *)a2 + 31);
    v19 = *((float *)a2 + 32);
    LODWORD(v90) = *((_DWORD *)a2 + 30);
    *((float *)&v90 + 1) = v18;
    v91 = v19;
    v20 = *(float *)&v90 - *((float *)this + 1086);
    v21 = v18 - *((float *)this + 1087);
    v22 = v19 - *((float *)this + 1088);
    v87 = v20;
    v88 = v21;
    v89 = v22;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v17);
    *((_QWORD *)&v78 + 1) = 18LL;
    *(_QWORD *)&v78 = L"HomeDistanceWeight";
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
      &v78);
    v24 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1089);
    v25 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1090);
    v26 = (float)(1.0 - COERCE_FLOAT(L"HomeDistanceWeight")) * *((float *)this + 1091);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v23);
    *((_QWORD *)&v78 + 1) = 18LL;
    *(_QWORD *)&v78 = L"HomeDistanceWeight";
    v27 = v78;
    MPCConstantManager::GetConstant<float>(
      (__int64)MPCConstantManager::s_instance,
      ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
      &v78);
    v28 = (__m128)v27;
    v29 = (__m128)v27;
    v28.m128_f32[0] = (float)(*(float *)&v27 * v20) + v24;
    v29.m128_f32[0] = (float)(*(float *)&v27 * v21) + v25;
    *((float *)&v78 + 2) = (float)(*(float *)&v27 * v22) + v26;
    *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps(v28, v29).m128_u64[0];
    *((float *)this + 1091) = (float)(*(float *)&v27 * v22) + v26;
  }
  if ( v7 || *(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
  {
    v30 = *((_QWORD *)a2 + 2);
    v81 = 0.0;
    v31 = v30 - *((_QWORD *)this + 538);
    v82 = 0.0;
    v83 = 0.0;
    v84 = 0.0;
    v85 = 0.0;
    v86 = 0.0;
    v32 = (double)(int)v31 / (double)(int)qword_1802778B0;
    if ( v32 > 0.0 )
    {
      if ( *((_BYTE *)a2 + 2440) )
      {
        v33 = *((float *)a2 + 603);
        *(_QWORD *)&v78 = *(_QWORD *)((char *)a2 + 2404);
        v34 = *(float *)&v78 - *((float *)this + 1080);
        v35 = *((float *)&v78 + 1) - *((float *)this + 1081);
        *((float *)&v78 + 2) = v33;
        v36 = (float)(v33 - *((float *)this + 1082)) * (float)(1.0 / v32);
        v81 = v34 * (float)(1.0 / v32);
        v82 = v35 * (float)(1.0 / v32);
        v83 = v36;
      }
      if ( *((_BYTE *)a2 + 2441) )
      {
        v37 = *((float *)a2 + 606);
        *(_QWORD *)&v78 = *((_QWORD *)a2 + 302);
        v38 = *(float *)&v78 - *((float *)this + 1083);
        v39 = *((float *)&v78 + 1) - *((float *)this + 1084);
        *((float *)&v78 + 2) = v37;
        v40 = (float)(v37 - *((float *)this + 1085)) * (float)(1.0 / v32);
        v84 = v38 * (float)(1.0 / v32);
        v85 = v39 * (float)(1.0 / v32);
        v86 = v40;
      }
    }
    v92[0] = (char *)a2 + 2340;
    v92[2] = &v84;
    v92[3] = &v81;
    v41 = *((_QWORD *)this + 513);
    v92[1] = this;
    if ( *(_BYTE *)(v41 + 10) )
    {
      v42 = (double)((int)v30 - *((_DWORD *)this + 1078)) / (double)(int)qword_1802778B0;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v17);
      *(_QWORD *)&v78 = L"HomeAllowTimeBetweenClicksInSec";
      *((_QWORD *)&v78 + 1) = 31LL;
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
        &v78);
      if ( COERCE_FLOAT(L"HomeAllowTimeBetweenClicksInSec") <= v42 )
        goto LABEL_34;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v43);
      *((_QWORD *)&v78 + 1) = 32LL;
      *(_QWORD *)&v78 = L"HomeSecondClickAngularMultiplier";
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
        &v78);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v44);
      *((_QWORD *)&v78 + 1) = 31LL;
      *(_QWORD *)&v78 = L"HomeSecondClickLinearMultiplier";
      MPCConstantManager::GetConstant<float>(
        (__int64)MPCConstantManager::s_instance,
        ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
        &v78);
      if ( lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(
             v92,
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
    if ( !*((_BYTE *)this + 4296) && lambda_00acc3e30bec0ac7fd9c7cd13d293566_::operator()(v92, 1.0, 1.0, v17) )
    {
      v48 = *((_DWORD *)this + 1073) + 1;
      *((_DWORD *)this + 1073) = v48;
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v17);
      *((_QWORD *)&v78 + 1) = 33LL;
      *(_QWORD *)&v78 = L"HomeCancelExceedThresholdMaxCount";
      LOBYTE(v94) = v48 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                           (__int64)MPCConstantManager::s_instance,
                                           ((unsigned __int64)this + 24) & -(__int64)(this != 0LL),
                                           &v78);
    }
    v49 = MPCSixDofProcessor::AreButtonsOrAxesActive(this, a2, 1, v17) || *(_BYTE *)(*((_QWORD *)this + 517) + 8LL);
    *((_BYTE *)this + 4297) |= v49;
    v96 = **((_DWORD **)this + 6);
    ISMTracing::MPCSixDofProcessor_HomePressedEvent<unsigned long,bool &,unsigned long &,float const &,float const &,float const &,float const &,float const &,float const &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,float &,unsigned int const &>(
      &v96,
      (bool *)&v94,
      (unsigned int *)this + 1073,
      (float *)a2 + 604,
      (float *)a2 + 605,
      (float *)a2 + 606,
      (float *)a2 + 601,
      (float *)a2 + 602,
      (float *)a2 + 603,
      &v84,
      &v85,
      &v86,
      &v81,
      &v82,
      &v83,
      &v87,
      &v88,
      &v89,
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
        v96 = *v5;
        if ( v50 == *((_BYTE **)this + 1354) )
        {
          std::vector<unsigned long>::_Emplace_reallocate<unsigned long>((const void **)this + 1352, v50, &v96);
        }
        else
        {
          *(_DWORD *)v50 = v51;
          *((_QWORD *)this + 1353) += 4LL;
        }
        v96 = **((_DWORD **)this + 6);
        ISMTracing::MPCSixDofProcessor_HomeHotkey_OnButtonsChanged<unsigned long,unsigned int const &>(&v96, v5);
      }
    }
  }
  v52 = v94;
  v53 = (char *)this + 10808;
  if ( *((_BYTE *)this + 10808) )
  {
    if ( !(_BYTE)v94 )
    {
      *((_DWORD *)a2 + 578) = 0;
      *v5 = 0;
      *((_DWORD *)a2 + 571) = 0;
      *((_BYTE *)a2 + 2256) = 0;
LABEL_67:
      *((_DWORD *)a2 + 17) = 6;
      goto LABEL_68;
    }
    if ( !(_BYTE)v95 && (*(_BYTE *)v5 & 0x3E) != 0 )
    {
      if ( *((_DWORD *)a2 + 17) == 3 )
      {
        *((_DWORD *)a2 + 17) = 2;
        Instance = MPCHolographicInputManager::GetInstance();
        LOBYTE(v95) = MPCHolographicInputManager::IsExclusiveAppFocused(Instance, v55, v56, v57);
        v58 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
        LOBYTE(v96) = 1;
        v97 = 1;
        v80 = **((float **)this + 6);
        v79 = (double)(int)v58 / (double)(int)qword_1802778B0;
        ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
          (unsigned int *)&v80,
          (bool *)&v97,
          (bool *)&v96,
          (bool *)this + 10808,
          (bool *)this + 4297,
          v5,
          (bool *)&v94,
          &v79,
          (bool *)&v95);
        goto LABEL_68;
      }
      if ( *((_DWORD *)a2 + 17) == 4 )
        goto LABEL_67;
    }
  }
LABEL_68:
  if ( !*((_BYTE *)*v13 + 12) )
    goto LABEL_81;
  if ( v52 || !*v53 )
    goto LABEL_78;
  v59 = (char *)this + 4297;
  if ( *((_BYTE *)this + 4297) )
  {
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
      v95 = **((_DWORD **)this + 6);
      ISMTracing::MPCSixDofProcessor_HomeEventUpdate<unsigned long,unsigned long &>(&v95, i);
    }
LABEL_78:
    v67 = MPCHolographicInputManager::GetInstance();
    LOBYTE(v95) = MPCHolographicInputManager::IsExclusiveAppFocused(v67, v68, v69, v70);
    v59 = (char *)this + 4297;
    v71 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
    LOBYTE(v96) = 0;
    v97 = 0;
    v79 = **((float **)this + 6);
    v80 = (double)(int)v71 / (double)(int)qword_1802778B0;
    ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
      (unsigned int *)&v79,
      (bool *)&v97,
      (bool *)&v96,
      (bool *)this + 10808,
      (bool *)this + 4297,
      v5,
      (bool *)&v94,
      &v80,
      (bool *)&v95);
    if ( ISMTracing::IsEnabled(v72) )
    {
      wil::details::static_lazy<ISMTracing>::get(v73, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
      ISMTracing::MPCSixDofProcessor_HomeButtonIgnored_(v74);
    }
    goto LABEL_80;
  }
  if ( !*(_BYTE *)(*((_QWORD *)this + 513) + 12LL) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1B1,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      v17);
  MPCSixDofProcessor::SendHomeEvent(this, a2);
  v60 = MPCHolographicInputManager::GetInstance();
  LOBYTE(v95) = MPCHolographicInputManager::IsExclusiveAppFocused(v60, v61, v62, v63);
  v64 = *((_QWORD *)a2 + 2) - *((_QWORD *)this + 539);
  LOBYTE(v96) = 0;
  v97 = 1;
  v79 = **((float **)this + 6);
  v80 = (double)(int)v64 / (double)(int)qword_1802778B0;
  ISMTracing::MPCSixDofProcessor_HomeEvent<unsigned long,bool,bool,bool &,bool &,unsigned int const &,bool &,float,bool>(
    (unsigned int *)&v79,
    (bool *)&v97,
    (bool *)&v96,
    (bool *)this + 10808,
    (bool *)this + 4297,
    v5,
    (bool *)&v94,
    &v80,
    (bool *)&v95);
  *v5 |= 1u;
LABEL_80:
  DWORD2(v78) = 0;
  *((_DWORD *)this + 1073) = 0;
  *((_BYTE *)this + 4296) = 0;
  *v59 = 0;
  *(_QWORD *)((char *)this + 4356) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
  *((_DWORD *)this + 1091) = 0;
  *v53 = 0;
  *((_QWORD *)this + 1353) = *((_QWORD *)this + 1352);
LABEL_81:
  if ( *((_BYTE *)a2 + 2440) )
  {
    v75 = *((_DWORD *)a2 + 603);
    *((_QWORD *)this + 540) = *(_QWORD *)((char *)a2 + 2404);
    *((_DWORD *)this + 1082) = v75;
  }
  if ( *((_BYTE *)a2 + 2441) )
  {
    v76 = *((_DWORD *)a2 + 606);
    *(_QWORD *)((char *)this + 4332) = *((_QWORD *)a2 + 302);
    *((_DWORD *)this + 1085) = v76;
  }
  if ( *((_BYTE *)this + 10801) )
  {
    v77 = v91;
    *((_QWORD *)this + 543) = v90;
    *((float *)this + 1088) = v77;
  }
  *((_QWORD *)this + 538) = *((_QWORD *)a2 + 2);
}
