/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801C51E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092460 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092820 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x180093404 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x18009365C (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800936AC (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801C4C00 (-ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801C4C98 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801C5DA8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C6D90 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C7028 (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  MPCGamepadInputHelper *Instance; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct MPCGestureHandlerManager *v9; // rbx
  unsigned __int64 *v10; // rax
  MPCGamepadInputHelper *v11; // rax
  char ShouldUseGazeAndCommit; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r12
  _OWORD *v16; // rsi
  _OWORD *v17; // rax
  _OWORD *v18; // rcx
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct MPCGestureHandlerManager *v23; // rbx
  unsigned __int64 *v24; // rax
  char IsInjecting; // bl
  char *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm1
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  MPCGestureHandlerManager *v38; // rbx
  unsigned __int64 *v39; // rax
  const char *v40; // r9
  struct MPCGestureHandlerManager *v41; // rbx
  unsigned __int64 *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  struct MPCGestureHandlerManager *v45; // rbx
  unsigned __int64 *v46; // rax
  float v47; // xmm2_4
  float v48; // xmm3_4
  float v49; // xmm5_4
  float v50; // xmm4_4
  float v51; // xmm1_4
  struct MPCHolographicInputManager *v52; // rax
  float v53; // xmm10_4
  float v54; // xmm11_4
  float v55; // xmm12_4
  float v56; // xmm13_4
  float v57; // xmm14_4
  float v58; // xmm15_4
  __int64 v59; // rcx
  const char *v60; // r9
  float v61; // xmm6_4
  float v62; // xmm7_4
  unsigned __int64 v63; // rsi
  const char *v64; // r9
  float v65; // xmm7_4
  const char *v66; // r9
  float v67; // xmm0_4
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm7_4
  float v71; // xmm7_4
  const char *v72; // r9
  float v73; // xmm7_4
  const char *v74; // r9
  float v75; // xmm0_4
  float v76; // xmm2_4
  float v77; // xmm1_4
  float v78; // xmm7_4
  float v79; // xmm7_4
  const char *v80; // r9
  float v81; // xmm7_4
  const char *v82; // r9
  float v83; // xmm2_4
  float v84; // xmm1_4
  float v85; // xmm0_4
  float v86; // xmm7_4
  float v87; // xmm7_4
  __int64 v88; // rdx
  __int64 v89; // rcx
  const char *v90; // r9
  float v91; // xmm7_4
  int v92; // eax
  __int64 v93; // xmm1_8
  struct MPCGestureHandlerManager *v94; // rbx
  unsigned __int64 *v95; // rax
  _QWORD v96[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+40h] [rbp-C8h]
  _QWORD v98[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v99[16]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v100[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v101[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v102; // [rsp+E8h] [rbp-20h]
  __int128 v103; // [rsp+F8h] [rbp-10h]
  __int128 v104; // [rsp+108h] [rbp+0h]
  __int128 v105; // [rsp+118h] [rbp+10h]
  char v106; // [rsp+1C8h] [rbp+C0h] BYREF
  int v107; // [rsp+430h] [rbp+328h]
  int v108; // [rsp+440h] [rbp+338h]
  int v109; // [rsp+444h] [rbp+33Ch]
  wil::details::in1diag3 *retaddr; // [rsp+E80h] [rbp+D78h]

  *(_DWORD *)(*(_QWORD *)(this + 3664) + 8LL) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(*(_QWORD *)(this + 3664) + 16LL) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCSlateDeadzoneHelper **)(this + 4256),
    (*(_DWORD *)(this + 3676) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  Instance = MPCGamepadInputHelper::GetInstance(v5, v4);
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v11 = MPCGamepadInputHelper::GetInstance(v8, v7);
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v11, a2);
    *(_BYTE *)(this + 4156) = ShouldUseGazeAndCommit;
    if ( ShouldUseGazeAndCommit && *((_BYTE *)a2 + 240) && MPCInputProviderBase::IsPrimary(this)
      || *(_DWORD *)(this + 4152) )
    {
      v15 = 3LL;
      v16 = (_OWORD *)((char *)a2 + 240);
      if ( *((_BYTE *)a2 + 240) )
      {
        v17 = (_OWORD *)(this + 3736);
        v18 = (_OWORD *)((char *)a2 + 240);
        v19 = 3LL;
        do
        {
          *v17 = *v18;
          v17[1] = v18[1];
          v17[2] = v18[2];
          v17[3] = v18[3];
          v17[4] = v18[4];
          v17[5] = v18[5];
          v17[6] = v18[6];
          v17 += 8;
          v20 = v18[7];
          v18 += 8;
          *(v17 - 1) = v20;
          --v19;
        }
        while ( v19 );
        *v17 = *v18;
        v17[1] = v18[1];
      }
      if ( *((_BYTE *)a2 + 242) || *(_DWORD *)(this + 4152) )
      {
        MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
        MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
        if ( !*(_DWORD *)(this + 4152) )
        {
          if ( *(_BYTE *)v16 )
          {
            v23 = MPCGestureHandlerManager::GetInstance(v22, v21);
            v24 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                    v98,
                    this & -(__int64)(this != 32));
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v23, v24);
            memset_0(v101, 0, 0xBC0uLL);
            v26 = &v106;
            DWORD2(v102) = 3008;
            do
            {
              v27 = v16[1];
              *(_OWORD *)v26 = *v16;
              v28 = v16[2];
              *((_OWORD *)v26 + 1) = v27;
              v29 = v16[3];
              *((_OWORD *)v26 + 2) = v28;
              v30 = v16[4];
              *((_OWORD *)v26 + 3) = v29;
              v31 = v16[5];
              *((_OWORD *)v26 + 4) = v30;
              v32 = v16[6];
              *((_OWORD *)v26 + 5) = v31;
              v33 = v16[7];
              v16 += 8;
              *((_OWORD *)v26 + 6) = v32;
              v26 += 128;
              *((_OWORD *)v26 - 1) = v33;
              --v15;
            }
            while ( v15 );
            v34 = v16[1];
            *(_OWORD *)v26 = *v16;
            *((_OWORD *)v26 + 1) = v34;
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v26, (__int64)v101, 4);
            if ( IsInjecting )
            {
              v37 = *(_QWORD *)(this + 4256);
              v107 = 7;
              if ( !*(_BYTE *)(v37 + 13) )
              {
                v108 = *(_DWORD *)(v37 + 4);
                v109 = *(_DWORD *)(v37 + 8);
              }
            }
            v38 = MPCGestureHandlerManager::GetInstance(v36, v35);
            v39 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                    v98,
                    this & -(__int64)(this != 32));
            MPCGestureHandlerManager::DownLevelTo2D(v38, (__int64)v101, v39, v40);
          }
        }
      }
    }
    else
    {
      v41 = MPCGestureHandlerManager::GetInstance(v14, v13);
      v42 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              v98,
              this & -(__int64)(this != 32));
      if ( MPCGestureHandlerManager::IsInjecting((__int64)v41, v42) && (*(_BYTE *)(this + 3676) & 4) == 0
        || (v45 = MPCGestureHandlerManager::GetInstance(v44, v43),
            v46 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                    v98,
                    this & -(__int64)(this != 32)),
            MPCGestureHandlerManager::IsHovering((__int64)v45, v46)) )
      {
        MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
      }
    }
    v47 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x400) != 0 )
      v48 = FLOAT_N1_0;
    else
      v48 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x800) != 0 )
      v47 = FLOAT_1_0;
    v49 = (float)(*(float *)(this + 3688) + *(float *)(this + 4184)) * 0.5;
    v50 = (float)(*(float *)(this + 3692) + *(float *)(this + 4188)) * 0.5;
    v51 = (float)((float)(COERCE_FLOAT(*(_DWORD *)(this + 3684) ^ _xmm) + *(float *)(this + 3680))
                + *(float *)(this + 4192))
        * 0.5;
    *(float *)(this + 4196) = (float)((float)(v47 + v48) + *(float *)(this + 4196)) * 0.5;
    *(float *)(this + 4184) = v49;
    *(float *)(this + 4188) = v50;
    *(float *)(this + 4192) = v51;
    v52 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v101, v52, 0xCD0uLL);
    v100[0] = v102;
    v100[1] = v103;
    v100[2] = v104;
    v100[3] = v105;
    MPCMath::OrientToGravity(v99, v100);
    v53 = v99[4];
    v54 = v99[5];
    v55 = v99[6];
    v56 = v99[8];
    v57 = v99[9];
    v58 = v99[10];
    MPCGamepadProcessor::ComputeTimeScale((MPCGamepadProcessor *)(this - 32), a2);
    v61 = *(float *)(this + 4232);
    LODWORD(v62) = *(_DWORD *)(this + 4184) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v60);
    v96[1] = L"ThumbstickDeadzone";
    v97 = 18LL;
    v63 = this & -(__int64)(v59 != 0);
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
    if ( v62 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v65 = *(float *)(this + 4184);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v64);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      v67 = COERCE_FLOAT(L"PointScaleFactor") * v65;
      v68 = (float)((float)(v67 * v99[1]) * v61) + *(float *)(this + 4176);
      v69 = (float)((float)(v67 * v99[2]) * v61) + *(float *)(this + 4180);
      *(float *)(this + 4172) = (float)((float)(v67 * v99[0]) * v61) + *(float *)(this + 4172);
      *(float *)(this + 4176) = v68;
      *(float *)(this + 4180) = v69;
      v70 = *(float *)(this + 4184);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v66);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      *(float *)(this + 4200) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v70) * v61)
                              + *(float *)(this + 4200);
    }
    LODWORD(v71) = *(_DWORD *)(this + 4188) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v64);
    v96[1] = L"ThumbstickDeadzone";
    v97 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
    if ( v71 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v73 = *(float *)(this + 4188);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v72);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      v75 = COERCE_FLOAT(L"PointScaleFactor") * v73;
      v76 = (float)((float)(v75 * v54) * v61) + *(float *)(this + 4176);
      v77 = (float)((float)(v75 * v55) * v61) + *(float *)(this + 4180);
      *(float *)(this + 4172) = (float)((float)(v75 * v53) * v61) + *(float *)(this + 4172);
      *(float *)(this + 4176) = v76;
      *(float *)(this + 4180) = v77;
      v78 = *(float *)(this + 4188);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v74);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      *(float *)(this + 4204) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v78) * v61)
                              + *(float *)(this + 4204);
    }
    LODWORD(v79) = *(_DWORD *)(this + 4192) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v72);
    v96[1] = L"ThumbstickDeadzone";
    v97 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
    if ( v79 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v81 = *(float *)(this + 4192);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v80);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      v83 = COERCE_FLOAT((unsigned int)L"PointScaleFactor" ^ _xmm) * v81;
      v84 = (float)((float)(v83 * v57) * v61) + *(float *)(this + 4176);
      v85 = (float)((float)(v83 * v58) * v61) + *(float *)(this + 4180);
      *(float *)(this + 4172) = (float)((float)(v83 * v56) * v61) + *(float *)(this + 4172);
      *(float *)(this + 4176) = v84;
      *(float *)(this + 4180) = v85;
      v86 = *(float *)(this + 4192);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v82);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      *(float *)(this + 4208) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v86) * v61)
                              + *(float *)(this + 4208);
    }
    LODWORD(v87) = *(_DWORD *)(this + 4196) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v80);
    v96[1] = L"ThumbstickDeadzone";
    v97 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
    if ( v87 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v91 = *(float *)(this + 4196);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          41LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v90);
      v96[1] = L"PointScaleFactor";
      v97 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v63, (__int128 *)&v96[1]);
      *(float *)(this + 4212) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v91) * v61)
                              + *(float *)(this + 4212);
    }
    v92 = *(_DWORD *)(this + 3700);
    v93 = *(_QWORD *)(this + 3692);
    *(_OWORD *)(this + 3704) = *(_OWORD *)(this + 3676);
    *(_QWORD *)(this + 3720) = v93;
    *(_DWORD *)(this + 3728) = v92;
    v94 = MPCGestureHandlerManager::GetInstance(v89, v88);
    v95 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            v98,
            v63);
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v94, v95);
  }
  else if ( *(_DWORD *)(this + 4152)
         || (v9 = MPCGestureHandlerManager::GetInstance(v8, v7),
             v10 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                     v98,
                     this & -(__int64)(this != 32)),
             MPCGestureHandlerManager::IsHovering((__int64)v9, v10)) )
  {
    MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
  }
}
