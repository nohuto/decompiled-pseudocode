/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C33F4
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C0BD0 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _o_sqrtf_0 @ 0x18004A8C4 (_o_sqrtf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009234C (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180092638 (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800A58F4 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A20 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5A74 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5AC8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800A6238 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800A6AB4 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800AF840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801BF588 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // r13
  MPCButtonHoldHelper *v5; // r15
  __int64 v6; // r12
  struct MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v8; // rax
  char v9; // dl
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  volatile signed __int32 *v14; // r15
  struct MPCGestureHandlerManager *v15; // rbx
  unsigned __int64 *v16; // rax
  bool v17; // bl
  char v18; // r12
  __int64 v19; // rax
  volatile signed __int32 *v20; // rcx
  char v21; // bl
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct MPCGestureHandlerManager *v24; // rbx
  unsigned __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const char *v28; // r9
  __int64 v29; // rax
  volatile signed __int32 *v30; // rcx
  char v31; // bl
  char v32; // r12
  float v33; // xmm6_4
  const char *v34; // r9
  float v35; // xmm6_4
  const char *v36; // r9
  const char *v37; // r9
  float v38; // xmm6_4
  __int64 v39; // rdx
  __int64 v40; // rcx
  char v41; // r15
  float v42; // xmm0_4
  struct MPCGestureHandlerManager *v43; // rbx
  unsigned __int64 *v44; // rax
  bool IsWorkspaceScrolling; // al
  __int64 v46; // rdx
  __int64 v47; // rcx
  const char *v48; // r9
  __int64 *v49; // r15
  struct MPCGestureHandlerManager *v50; // rbx
  unsigned __int64 *v51; // rax
  const char *v52; // r9
  float v53; // xmm2_4
  float v54; // xmm0_4
  MPCConstantManager *v55; // rbx
  float v56; // xmm0_4
  const char *v57; // r9
  unsigned int v58; // ebx
  MPCGestureHandlerManager *v59; // rbx
  unsigned __int64 *v60; // rax
  const char *v61; // r9
  struct MPCGestureHandlerManager *v62; // rbx
  unsigned __int64 *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  struct MPCGestureHandlerManager *v66; // rbx
  unsigned __int64 *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  struct MPCGestureHandlerManager *v70; // rbx
  unsigned __int64 *v71; // rax
  const char *v72; // r9
  float v73; // xmm6_4
  __int64 *v74; // rax
  __int64 v75; // rcx
  __int128 v76; // [rsp+28h] [rbp-A9h] BYREF
  __int128 v77; // [rsp+38h] [rbp-99h] BYREF
  _QWORD v78[2]; // [rsp+48h] [rbp-89h] BYREF
  __int128 v79; // [rsp+58h] [rbp-79h] BYREF
  __int128 v80; // [rsp+68h] [rbp-69h] BYREF
  __int128 v81; // [rsp+78h] [rbp-59h] BYREF
  __int128 v82; // [rsp+88h] [rbp-49h] BYREF
  __int128 v83; // [rsp+98h] [rbp-39h]
  __int64 v84; // [rsp+B0h] [rbp-21h]
  volatile signed __int32 *v85; // [rsp+B8h] [rbp-19h]
  __int128 v86; // [rsp+C8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+130h] [rbp+5Fh]
  std::_Ref_count_base *v88; // [rsp+138h] [rbp+67h]
  __int64 v89; // [rsp+140h] [rbp+6Fh] BYREF
  __int64 v90; // [rsp+148h] [rbp+77h] BYREF
  __int64 v91; // [rsp+150h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = (MPCButtonHoldHelper *)*((_QWORD *)this + 515);
  v6 = *((_QWORD *)a2 + 2);
  Instance = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
  v8 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
         &v90,
         (__int64)this + 24);
  v9 = !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)Instance, v8) || *((_BYTE *)this + 3666);
  MPCButtonHoldHelper::UpdateState(v5, v9, v6);
  v12 = *((unsigned int *)a2 + 61);
  *((_DWORD *)a2 + 218) = v12;
  *((_DWORD *)a2 + 219) = *((_DWORD *)a2 + 62);
  *((_DWORD *)a2 + 214) = 0;
  v13 = *((_QWORD *)this + 519);
  v14 = *(volatile signed __int32 **)(v13 + 24);
  if ( v14 )
  {
    _InterlockedIncrement(v14 + 2);
    v14 = *(volatile signed __int32 **)(v13 + 24);
  }
  v84 = *(_QWORD *)(v13 + 16);
  v85 = v14;
  v17 = 0;
  if ( *(_BYTE *)(v84 + 8) )
  {
    v15 = MPCGestureHandlerManager::GetInstance(v12, v10);
    v16 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v91,
            (__int64)this + 24);
    if ( !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v15, v16) )
      v17 = 1;
  }
  v18 = 0;
  LODWORD(v88) = 0;
  if ( v14 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v14);
  if ( v17 )
  {
    v19 = *((_QWORD *)this + 519);
    v20 = *(volatile signed __int32 **)(v19 + 24);
    if ( v20 )
    {
      _InterlockedIncrement(v20 + 2);
      v20 = *(volatile signed __int32 **)(v19 + 24);
    }
    v21 = *(_BYTE *)(*(_QWORD *)(v19 + 16) + 10LL);
    if ( v20 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v20);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v11);
    *(_QWORD *)&v77 = L"IsTouchpadClickingEnabled";
    *((_QWORD *)&v77 + 1) = 25LL;
    v76 = v77;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64)this + 24,
                            &v76)
      && (v21 || *(_BYTE *)(*((_QWORD *)this + 519) + 13LL)) )
    {
      v24 = MPCGestureHandlerManager::GetInstance(v23, v22);
      v25 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v89,
              (__int64)this + 24);
      v27 = MPCGestureHandlerManager::IsInjecting((__int64)v24, v25) != 0 ? 7 : 1;
      *((_DWORD *)a2 + 214) = v27;
LABEL_85:
      *((_BYTE *)this + 3666) = 1;
LABEL_86:
      *((_OWORD *)a2 + 55) = *(_OWORD *)((char *)a2 + 252);
      *((_DWORD *)a2 + 224) = *((_DWORD *)a2 + 68);
      v59 = MPCGestureHandlerManager::GetInstance(v27, v26);
      v60 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              v78,
              (__int64)this + 24);
      MPCGestureHandlerManager::DownLevelTo2D(v59, (__int64)a2, v60, v61);
      *((_BYTE *)this + 3677) = 1;
      return;
    }
    return;
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
  *(_QWORD *)&v83 = L"IsTouchpadTouchScrollingEnabled";
  *((_QWORD *)&v83 + 1) = 31LL;
  v86 = v83;
  if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                          (__int64)MPCConstantManager::s_instance,
                          (__int64)this + 24,
                          &v86)
    && *((_BYTE *)this + 3676)
    && *((_DWORD *)this + 918) != 2 )
  {
    v29 = *((_QWORD *)this + 519);
    v30 = *(volatile signed __int32 **)(v29 + 24);
    if ( v30 )
    {
      _InterlockedIncrement(v30 + 2);
      v30 = *(volatile signed __int32 **)(v29 + 24);
    }
    v18 = 2;
    if ( !*(_BYTE *)(*(_QWORD *)(v29 + 16) + 12LL) )
    {
      v31 = 1;
      goto LABEL_35;
    }
  }
  else
  {
    v30 = (volatile signed __int32 *)v88;
  }
  v31 = 0;
LABEL_35:
  if ( (v18 & 2) != 0 )
  {
    v32 = 0;
    if ( v30 )
      std::_Ref_count_base::_Decref((std::_Ref_count_base *)v30);
  }
  else
  {
    v32 = 0;
  }
  if ( v31 )
  {
    v33 = *((float *)this + 1056) + *((float *)this + 1071);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v28);
    *(_QWORD *)&v77 = L"TouchpadScrollTouchSpeedFactor";
    *((_QWORD *)&v77 + 1) = 30LL;
    v76 = v77;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v76);
    *((float *)a2 + 215) = COERCE_FLOAT(L"TouchpadScrollTouchSpeedFactor") * v33;
    v35 = *((float *)this + 1072) + *((float *)this + 1057);
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v34);
    *(_QWORD *)&v79 = L"TouchpadScrollTouchSpeedFactor";
    *((_QWORD *)&v79 + 1) = 30LL;
    v76 = v79;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v76);
    *((float *)a2 + 216) = COERCE_FLOAT(L"TouchpadScrollTouchSpeedFactor") * v35;
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v36);
    *(_QWORD *)&v81 = L"TouchpadScrollInvert";
    *((_QWORD *)&v81 + 1) = 20LL;
    v76 = v81;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64)this + 24,
                            &v76) )
      *((float *)a2 + 216) = *((float *)a2 + 216) * -1.0;
    v38 = o_sqrtf_0(
            (float)((float)(*((float *)this + 1072) + *((float *)this + 1057))
                  * (float)(*((float *)this + 1072) + *((float *)this + 1057)))
          + (float)((float)(*((float *)this + 1056) + *((float *)this + 1071))
                  * (float)(*((float *)this + 1056) + *((float *)this + 1071))));
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v37);
    *(_QWORD *)&v80 = L"TouchpadScrollTouchVelocityMin";
    *((_QWORD *)&v80 + 1) = 30LL;
    v76 = v80;
    MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v76);
    if ( v38 <= COERCE_FLOAT(L"TouchpadScrollTouchVelocityMin") )
    {
      v41 = 0;
      v42 = *((float *)this + 1057) + *((float *)this + 1072);
      *((float *)this + 1071) = *((float *)this + 1056) + *((float *)this + 1071);
      *((float *)this + 1072) = v42;
    }
    else
    {
      v41 = 1;
    }
    if ( v41
      && *((_DWORD *)this + 918) != 3
      && (float)((float)(*((float *)this + 1059) * *((float *)this + 1057))
               + (float)(*((float *)this + 1058) * *((float *)this + 1056))) >= 0.0 )
    {
      v32 = 1;
    }
    v43 = MPCGestureHandlerManager::GetInstance(v40, v39);
    v44 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v89,
            (__int64)this + 24);
    IsWorkspaceScrolling = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v43, v44);
    v27 = 0LL;
    if ( !IsWorkspaceScrolling || v41 )
    {
      if ( !v32 )
        goto LABEL_63;
      *(_QWORD *)((char *)this + 4284) = 0LL;
      *((_BYTE *)this + 3666) = 0;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 860) = 0LL;
      *((_BYTE *)this + 3666) = 1;
    }
    v4 = 1;
LABEL_63:
    *((_DWORD *)a2 + 214) = 5;
    *((_DWORD *)this + 917) = 0;
    if ( !v4 )
      return;
    goto LABEL_86;
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v28);
  *(_QWORD *)&v80 = L"IsTouchpadTouchScrollingEnabled";
  *((_QWORD *)&v80 + 1) = 31LL;
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           (__int64)MPCConstantManager::s_instance,
                           (__int64)this + 24,
                           &v80) )
  {
    v49 = (__int64 *)((char *)this + 4120);
LABEL_88:
    v62 = MPCGestureHandlerManager::GetInstance(v47, v46);
    v63 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            v78,
            (__int64)this + 24);
    if ( MPCGestureHandlerManager::IsInjecting((__int64)v62, v63) || *((_BYTE *)this + 3677) )
    {
      v66 = MPCGestureHandlerManager::GetInstance(v65, v64);
      v67 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
              &v81,
              (__int64)this + 24);
      LOBYTE(v66) = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v66, v67);
      MPCSixDofProcessor::EndGesture(this);
      if ( (_BYTE)v66 )
      {
        v70 = MPCGestureHandlerManager::GetInstance(v69, v68);
        v71 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                &v79,
                (__int64)this + 24);
        LODWORD(v73) = MPCGestureHandlerManager::GetLastScrollVelocityAvg((__int64)v70, v71).m128_u32[0] & _xmm;
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            41LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v72);
        *(_QWORD *)&v76 = L"TouchpadNotScrollingMultiplier";
        *((_QWORD *)&v76 + 1) = 30LL;
        MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v76);
        *(float *)&v89 = COERCE_FLOAT(L"TouchpadNotScrollingMultiplier") * v73;
        v74 = std::make_unique<MPCButtonHoldHelper,float,0>(&v77, (float *)&v89);
        std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(v49, v74);
        if ( (_QWORD)v77 )
          std::default_delete<MPCButtonHoldHelper>::operator()(v75, (void (__fastcall ***)(_QWORD, __int64))v77);
      }
    }
    return;
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v48);
  *(_QWORD *)&v82 = L"IsTouchpadTouchScrollingStopEnabled";
  *((_QWORD *)&v82 + 1) = 35LL;
  v49 = (__int64 *)((char *)this + 4120);
  if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                           (__int64)MPCConstantManager::s_instance,
                           (__int64)this + 24,
                           &v82) )
    goto LABEL_88;
  if ( *((_BYTE *)this + 3666) )
    goto LABEL_88;
  if ( !*((_BYTE *)this + 3676) )
    goto LABEL_88;
  if ( !*(_BYTE *)(*v49 + 8) )
    goto LABEL_88;
  if ( *(_BYTE *)(*v49 + 9) )
    goto LABEL_88;
  v50 = MPCGestureHandlerManager::GetInstance(v47, v46);
  v51 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
          &v89,
          (__int64)this + 24);
  if ( MPCGestureHandlerManager::IsInjecting((__int64)v50, v51) )
    goto LABEL_88;
  ++*((_DWORD *)this + 917);
  v53 = *((float *)this + 1048) - *((float *)this + 1054);
  v54 = *((float *)this + 1049) - *((float *)this + 1055);
  v55 = MPCConstantManager::s_instance;
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v52);
  *(_QWORD *)&v77 = L"TouchpadStopMaxDelta";
  *((_QWORD *)&v77 + 1) = 20LL;
  v76 = v77;
  v56 = o_sqrtf_0((float)(v54 * v54) + (float)(v53 * v53));
  MPCConstantManager::GetConstant<float>((__int64)v55, (__int64)this + 24, &v76);
  if ( (float)(int)v56 <= v56 )
  {
    v58 = *((_DWORD *)this + 917);
  }
  else
  {
    *((_DWORD *)this + 917) = 0;
    v58 = 0;
  }
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      41LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v57);
  *(_QWORD *)&v79 = L"TouchpadNumFramesStopScroll";
  *((_QWORD *)&v79 + 1) = 27LL;
  v76 = v79;
  if ( v58 >= (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                              (__int64)MPCConstantManager::s_instance,
                              (__int64)this + 24,
                              &v76) )
  {
    *((_DWORD *)a2 + 214) = 1;
    goto LABEL_85;
  }
}
