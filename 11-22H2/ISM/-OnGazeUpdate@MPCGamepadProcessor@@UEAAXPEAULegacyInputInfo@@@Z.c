/*
 * XREFs of ?OnGazeUpdate@MPCGamepadProcessor@@UEAAXPEAULegacyInputInfo@@@Z @ 0x1801F0F00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB00C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800BB2E4 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsHovering@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB430 (-IsHovering@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB56C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB7F0 (-OnGazeUpdate@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ @ 0x1800BC248 (-GetInstance@MPCGamepadInputHelper@@SAPEAV1@XZ.c)
 *     ?ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ @ 0x1800BC4A0 (-ShouldHandleMPCInput@MPCGamepadInputHelper@@QEAA_NXZ.c)
 *     ?ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BC4F0 (-ShouldUseGazeAndCommit@MPCGamepadInputHelper@@QEAA_NPEAULegacyInputInfo@@@Z.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE10C (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800D57C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800D720C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800D7990 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 *     ?ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z @ 0x1801F0918 (-ComputeTimeScale@MPCGamepadProcessor@@AEAAXPEAUInputInfo@@@Z.c)
 *     ?EndGesture@MPCGamepadProcessor@@AEAAXXZ @ 0x1801F09B8 (-EndGesture@MPCGamepadProcessor@@AEAAXXZ.c)
 *     ?OrientToGravity@MPCMath@@YA?AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z @ 0x1801F1AD8 (-OrientToGravity@MPCMath@@YA-AUfloat4x4@Numerics@Foundation@Windows@@AEBU2345@M@Z.c)
 *     ?UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2AE0 (-UpdateScroll@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801F2D8C (-UpdateZoom@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::OnGazeUpdate(unsigned __int64 this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  MPCGamepadInputHelper *Instance; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  MPCGamepadProcessor *v9; // rsi
  struct MPCGestureHandlerManager *v10; // rbx
  unsigned __int64 *v11; // rax
  MPCGamepadInputHelper *v12; // rax
  char ShouldUseGazeAndCommit; // al
  __int64 v14; // rdx
  __int64 v15; // rcx
  char *v16; // rsi
  __int64 v17; // r12
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  __int64 v20; // rdx
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct MPCGestureHandlerManager *v24; // rbx
  unsigned __int64 *v25; // rax
  char IsInjecting; // bl
  char *v27; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm1
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rax
  MPCGestureHandlerManager *v39; // rbx
  unsigned __int64 *v40; // rax
  const char *v41; // r9
  MPCGamepadProcessor *v42; // rsi
  struct MPCGestureHandlerManager *v43; // rbx
  unsigned __int64 *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  struct MPCGestureHandlerManager *v47; // rbx
  unsigned __int64 *v48; // rax
  float v49; // xmm2_4
  float v50; // xmm3_4
  float v51; // xmm5_4
  float v52; // xmm4_4
  float v53; // xmm1_4
  struct MPCHolographicInputManager *v54; // rax
  float v55; // xmm10_4
  float v56; // xmm11_4
  float v57; // xmm12_4
  float v58; // xmm13_4
  float v59; // xmm14_4
  float v60; // xmm15_4
  const char *v61; // r9
  float v62; // xmm6_4
  float v63; // xmm7_4
  unsigned __int64 v64; // rsi
  const char *v65; // r9
  float v66; // xmm7_4
  const char *v67; // r9
  float v68; // xmm2_4
  float v69; // xmm1_4
  float v70; // xmm0_4
  float v71; // xmm7_4
  float v72; // xmm7_4
  const char *v73; // r9
  float v74; // xmm7_4
  const char *v75; // r9
  float v76; // xmm2_4
  float v77; // xmm1_4
  float v78; // xmm0_4
  float v79; // xmm7_4
  float v80; // xmm7_4
  const char *v81; // r9
  float v82; // xmm7_4
  const char *v83; // r9
  float v84; // xmm2_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm7_4
  float v88; // xmm7_4
  __int64 v89; // rdx
  __int64 v90; // rcx
  const char *v91; // r9
  float v92; // xmm7_4
  int v93; // eax
  __int64 v94; // xmm1_8
  struct MPCGestureHandlerManager *v95; // rbx
  unsigned __int64 *v96; // rax
  _QWORD v97[2]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v98; // [rsp+40h] [rbp-C8h]
  _QWORD v99[2]; // [rsp+48h] [rbp-C0h] BYREF
  float v100[16]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v101[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v102[16]; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v103; // [rsp+E8h] [rbp-20h]
  __int128 v104; // [rsp+F8h] [rbp-10h]
  __int128 v105; // [rsp+108h] [rbp+0h]
  __int128 v106; // [rsp+118h] [rbp+10h]
  char v107; // [rsp+1C8h] [rbp+C0h] BYREF
  int v108; // [rsp+430h] [rbp+328h]
  int v109; // [rsp+440h] [rbp+338h]
  int v110; // [rsp+444h] [rbp+33Ch]
  wil::details::in1diag3 *retaddr; // [rsp+E80h] [rbp+D78h]

  *(_DWORD *)(*(_QWORD *)(this + 3664) + 8LL) = *((_DWORD *)a2 + 2);
  *(_QWORD *)(*(_QWORD *)(this + 3664) + 16LL) = *((_QWORD *)a2 + 2);
  MPCSlateDeadzoneHelper::UpdateState(
    *(MPCButtonHoldHelper ***)(this + 4256),
    (*(_DWORD *)(this + 3676) & 4) != 0,
    *((_QWORD *)a2 + 2),
    *((float *)a2 + 61),
    *((float *)a2 + 62),
    *((float *)a2 + 76));
  Instance = MPCGamepadInputHelper::GetInstance(v5, v4);
  if ( MPCGamepadInputHelper::ShouldHandleMPCInput(Instance) )
  {
    v12 = MPCGamepadInputHelper::GetInstance(v8, v7);
    ShouldUseGazeAndCommit = MPCGamepadInputHelper::ShouldUseGazeAndCommit(v12, a2);
    *(_BYTE *)(this + 4156) = ShouldUseGazeAndCommit;
    if ( !ShouldUseGazeAndCommit
      || (v16 = (char *)a2 + 240, !*((_BYTE *)a2 + 240))
      || !MPCInputProviderBase::IsPrimary(this) )
    {
      if ( !*(_DWORD *)(this + 4152) )
      {
        v42 = (MPCGamepadProcessor *)(this - 32);
        v43 = MPCGestureHandlerManager::GetInstance(v15, v14);
        v44 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                v99,
                this & -(__int64)(this != 32));
        if ( MPCGestureHandlerManager::IsInjecting((__int64)v43, v44) && (*(_BYTE *)(this + 3676) & 4) == 0
          || (v47 = MPCGestureHandlerManager::GetInstance(v46, v45),
              v48 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                      v99,
                      this & -(__int64)(this != 32)),
              MPCGestureHandlerManager::IsHovering((__int64)v47, v48)) )
        {
          MPCGamepadProcessor::EndGesture((MPCGamepadProcessor *)(this - 32));
        }
        goto LABEL_31;
      }
      v16 = (char *)a2 + 240;
    }
    v17 = 3LL;
    if ( *v16 )
    {
      v18 = (_OWORD *)(this + 3736);
      v19 = v16;
      v20 = 3LL;
      do
      {
        *v18 = *v19;
        v18[1] = v19[1];
        v18[2] = v19[2];
        v18[3] = v19[3];
        v18[4] = v19[4];
        v18[5] = v19[5];
        v18[6] = v19[6];
        v18 += 8;
        v21 = v19[7];
        v19 += 8;
        *(v18 - 1) = v21;
        --v20;
      }
      while ( v20 );
      *v18 = *v19;
      v18[1] = v19[1];
    }
    if ( *((_BYTE *)a2 + 242) || *(_DWORD *)(this + 4152) )
    {
      MPCGamepadProcessor::UpdateScroll((MPCGamepadProcessor *)(this - 32), a2);
      MPCGamepadProcessor::UpdateZoom((MPCGamepadProcessor *)(this - 32), a2);
      if ( !*(_DWORD *)(this + 4152) )
      {
        if ( *v16 )
        {
          v24 = MPCGestureHandlerManager::GetInstance(v23, v22);
          v25 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                  v99,
                  this & -(__int64)(this != 32));
          IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v24, v25);
          memset_0(v102, 0, 0xBC0uLL);
          v27 = &v107;
          DWORD2(v103) = 3008;
          do
          {
            v28 = *((_OWORD *)v16 + 1);
            *(_OWORD *)v27 = *(_OWORD *)v16;
            v29 = *((_OWORD *)v16 + 2);
            *((_OWORD *)v27 + 1) = v28;
            v30 = *((_OWORD *)v16 + 3);
            *((_OWORD *)v27 + 2) = v29;
            v31 = *((_OWORD *)v16 + 4);
            *((_OWORD *)v27 + 3) = v30;
            v32 = *((_OWORD *)v16 + 5);
            *((_OWORD *)v27 + 4) = v31;
            v33 = *((_OWORD *)v16 + 6);
            *((_OWORD *)v27 + 5) = v32;
            v34 = *((_OWORD *)v16 + 7);
            v16 += 128;
            *((_OWORD *)v27 + 6) = v33;
            v27 += 128;
            *((_OWORD *)v27 - 1) = v34;
            --v17;
          }
          while ( v17 );
          v35 = *((_OWORD *)v16 + 1);
          *(_OWORD *)v27 = *(_OWORD *)v16;
          *((_OWORD *)v27 + 1) = v35;
          MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)v27, (__int64)v102, 4);
          if ( IsInjecting )
          {
            v38 = *(_QWORD *)(this + 4256);
            v108 = 7;
            if ( !*(_BYTE *)(v38 + 13) )
            {
              v109 = *(_DWORD *)(v38 + 4);
              v110 = *(_DWORD *)(v38 + 8);
            }
          }
          v39 = MPCGestureHandlerManager::GetInstance(v37, v36);
          v40 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                  v99,
                  this & -(__int64)(this != 32));
          MPCGestureHandlerManager::DownLevelTo2D(v39, (__int64)v102, v40, v41);
        }
      }
    }
    v42 = (MPCGamepadProcessor *)(this - 32);
LABEL_31:
    v49 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x400) != 0 )
      v50 = FLOAT_N1_0;
    else
      v50 = 0.0;
    if ( (*(_DWORD *)(this + 3676) & 0x800) != 0 )
      v49 = FLOAT_1_0;
    v51 = (float)(*(float *)(this + 3688) + *(float *)(this + 4184)) * 0.5;
    v52 = (float)(*(float *)(this + 3692) + *(float *)(this + 4188)) * 0.5;
    v53 = (float)((float)(COERCE_FLOAT(*(_DWORD *)(this + 3684) ^ _xmm) + *(float *)(this + 3680))
                + *(float *)(this + 4192))
        * 0.5;
    *(float *)(this + 4196) = (float)((float)(v49 + v50) + *(float *)(this + 4196)) * 0.5;
    *(float *)(this + 4184) = v51;
    *(float *)(this + 4188) = v52;
    *(float *)(this + 4192) = v53;
    v54 = MPCHolographicInputManager::GetInstance();
    memcpy_0(v102, v54, 0xCD0uLL);
    v101[0] = v103;
    v101[1] = v104;
    v101[2] = v105;
    v101[3] = v106;
    MPCMath::OrientToGravity(v100, v101);
    v55 = v100[4];
    v56 = v100[5];
    v57 = v100[6];
    v58 = v100[8];
    v59 = v100[9];
    v60 = v100[10];
    MPCGamepadProcessor::ComputeTimeScale(v42, a2);
    v62 = *(float *)(this + 4232);
    LODWORD(v63) = *(_DWORD *)(this + 4184) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v61);
    v97[1] = L"ThumbstickDeadzone";
    v98 = 18LL;
    v64 = this & -(__int64)(v42 != 0LL);
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
    if ( v63 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v66 = *(float *)(this + 4184);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v65);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      v68 = COERCE_FLOAT(L"PointScaleFactor") * v66;
      v69 = (float)((float)(v68 * v100[1]) * v62) + *(float *)(this + 4176);
      v70 = (float)((float)(v68 * v100[2]) * v62) + *(float *)(this + 4180);
      *(float *)(this + 4172) = (float)((float)(v68 * v100[0]) * v62) + *(float *)(this + 4172);
      *(float *)(this + 4176) = v69;
      *(float *)(this + 4180) = v70;
      v71 = *(float *)(this + 4184);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v67);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      *(float *)(this + 4200) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v71) * v62)
                              + *(float *)(this + 4200);
    }
    LODWORD(v72) = *(_DWORD *)(this + 4188) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v65);
    v97[1] = L"ThumbstickDeadzone";
    v98 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
    if ( v72 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v74 = *(float *)(this + 4188);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v73);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      v76 = COERCE_FLOAT(L"PointScaleFactor") * v74;
      v77 = (float)((float)(v76 * v56) * v62) + *(float *)(this + 4176);
      v78 = (float)((float)(v76 * v57) * v62) + *(float *)(this + 4180);
      *(float *)(this + 4172) = (float)((float)(v76 * v55) * v62) + *(float *)(this + 4172);
      *(float *)(this + 4176) = v77;
      *(float *)(this + 4180) = v78;
      v79 = *(float *)(this + 4188);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v75);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      *(float *)(this + 4204) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v79) * v62)
                              + *(float *)(this + 4204);
    }
    LODWORD(v80) = *(_DWORD *)(this + 4192) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v73);
    v97[1] = L"ThumbstickDeadzone";
    v98 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
    if ( v80 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v82 = *(float *)(this + 4192);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v81);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      v84 = COERCE_FLOAT((unsigned int)L"PointScaleFactor" ^ _xmm) * v82;
      v85 = (float)((float)(v84 * v59) * v62) + *(float *)(this + 4176);
      v86 = (float)((float)(v84 * v60) * v62) + *(float *)(this + 4180);
      *(float *)(this + 4172) = (float)((float)(v84 * v58) * v62) + *(float *)(this + 4172);
      *(float *)(this + 4176) = v85;
      *(float *)(this + 4180) = v86;
      v87 = *(float *)(this + 4192);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v83);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      *(float *)(this + 4208) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v87) * v62)
                              + *(float *)(this + 4208);
    }
    LODWORD(v88) = *(_DWORD *)(this + 4196) & _xmm;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v81);
    v97[1] = L"ThumbstickDeadzone";
    v98 = 18LL;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
    if ( v88 >= COERCE_FLOAT(L"ThumbstickDeadzone") )
    {
      v92 = *(float *)(this + 4196);
      if ( !MPCConstantManager::s_instance )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x29,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
          v91);
      v97[1] = L"PointScaleFactor";
      v98 = 16LL;
      MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v64, (__int128 *)&v97[1]);
      *(float *)(this + 4212) = (float)((float)(COERCE_FLOAT(L"PointScaleFactor") * v92) * v62)
                              + *(float *)(this + 4212);
    }
    v93 = *(_DWORD *)(this + 3700);
    v94 = *(_QWORD *)(this + 3692);
    *(_OWORD *)(this + 3704) = *(_OWORD *)(this + 3676);
    *(_QWORD *)(this + 3720) = v94;
    *(_DWORD *)(this + 3728) = v93;
    v95 = MPCGestureHandlerManager::GetInstance(v90, v89);
    v96 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            v99,
            v64);
    MPCGestureHandlerManager::OnGazeUpdate((__int64)v95, v96);
    return;
  }
  if ( *(_DWORD *)(this + 4152) )
  {
    v9 = (MPCGamepadProcessor *)(this - 32);
  }
  else
  {
    v9 = (MPCGamepadProcessor *)(this - 32);
    v10 = MPCGestureHandlerManager::GetInstance(v8, v7);
    v11 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            v99,
            this & -(__int64)(this != 32));
    if ( !MPCGestureHandlerManager::IsHovering((__int64)v10, v11) )
      return;
  }
  MPCGamepadProcessor::EndGesture(v9);
}
