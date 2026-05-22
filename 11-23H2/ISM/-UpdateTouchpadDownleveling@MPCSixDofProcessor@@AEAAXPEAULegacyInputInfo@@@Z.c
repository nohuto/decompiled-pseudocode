/*
 * XREFs of ?UpdateTouchpadDownleveling@MPCSixDofProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E1E68
 * Callers:
 *     ?PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801DF620 (-PostHitTestProcessing@MPCSixDofProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputI.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _o_sqrtf_0 @ 0x180056634 (_o_sqrtf_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A872C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A8A3C (-GetLastScrollVelocityAvg@MPCGestureHandlerManager@@QEAAMV-$com_ptr_t@UIMPCInputProviderBase@@Ue.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A8C8C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ?IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A8D28 (-IsWorkspaceScrolling@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_.c)
 *     ??$?4U?$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800BD710 (--$-4U-$default_delete@VMPCButtonHoldHelper@@@std@@$0A@@-$unique_ptr@VMPCButtonHoldHelper@@U-$de.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD83C (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD890 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800BD8E4 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ??$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA?AV?$unique_ptr@VMPCButtonHoldHelper@@U?$default_delete@VMPCButtonHoldHelper@@@std@@@0@$$QEAM@Z @ 0x1800BDEC4 (--$make_unique@VMPCButtonHoldHelper@@M$0A@@std@@YA-AV-$unique_ptr@VMPCButtonHoldHelper@@U-$defau.c)
 *     ??R?$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z @ 0x1800BE6A0 (--R-$default_delete@VMPCButtonHoldHelper@@@std@@QEBAXPEAVMPCButtonHoldHelper@@@Z.c)
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x1800C8840 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     ?EndGesture@MPCSixDofProcessor@@AEAAXXZ @ 0x1801DDD18 (-EndGesture@MPCSixDofProcessor@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCSixDofProcessor::UpdateTouchpadDownleveling(MPCSixDofProcessor *this, struct LegacyInputInfo *a2)
{
  char v4; // r13
  MPCButtonHoldHelper *v5; // r14
  __int64 v6; // r15
  struct MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v8; // rax
  char v9; // dl
  __int64 v10; // rdx
  const char *v11; // r9
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  std::_Ref_count_base *v15; // r14
  struct MPCGestureHandlerManager *v16; // rbx
  unsigned __int64 *v17; // rax
  bool v18; // bl
  char v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  std::_Ref_count_base *v23; // rcx
  char v24; // bl
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct MPCGestureHandlerManager *v28; // rbx
  unsigned __int64 *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  const char *v32; // r9
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  std::_Ref_count_base *v36; // rcx
  char v37; // bl
  float v38; // xmm6_4
  const char *v39; // r9
  float v40; // xmm6_4
  const char *v41; // r9
  const char *v42; // r9
  float v43; // xmm6_4
  __int64 v44; // rdx
  __int64 v45; // rcx
  char v46; // r15
  float v47; // xmm0_4
  bool v48; // r14
  struct MPCGestureHandlerManager *v49; // rbx
  unsigned __int64 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  const char *v53; // r9
  __int64 *v54; // r15
  struct MPCGestureHandlerManager *v55; // rbx
  unsigned __int64 *v56; // rax
  const char *v57; // r9
  float v58; // xmm6_4
  const char *v59; // r9
  unsigned int v60; // ebx
  MPCGestureHandlerManager *v61; // rbx
  unsigned __int64 *v62; // rax
  const char *v63; // r9
  struct MPCGestureHandlerManager *v64; // rbx
  unsigned __int64 *v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  struct MPCGestureHandlerManager *v68; // rbx
  unsigned __int64 *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  struct MPCGestureHandlerManager *v72; // rbx
  unsigned __int64 *v73; // rax
  const char *v74; // r9
  float v75; // xmm6_4
  __int64 *v76; // rax
  __int64 v77; // rcx
  __int128 v78; // [rsp+28h] [rbp-99h] BYREF
  __int128 v79; // [rsp+38h] [rbp-89h] BYREF
  __int128 v80; // [rsp+48h] [rbp-79h] BYREF
  __int64 v81; // [rsp+58h] [rbp-69h] BYREF
  __int64 v82; // [rsp+60h] [rbp-61h] BYREF
  __int128 v83; // [rsp+68h] [rbp-59h] BYREF
  __int128 v84; // [rsp+78h] [rbp-49h]
  __int128 v85; // [rsp+88h] [rbp-39h]
  __int64 v86; // [rsp+A0h] [rbp-21h]
  std::_Ref_count_base *v87; // [rsp+A8h] [rbp-19h]
  __int128 v88; // [rsp+B8h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]
  std::_Ref_count_base *v90; // [rsp+128h] [rbp+67h]
  unsigned __int64 v91; // [rsp+130h] [rbp+6Fh] BYREF
  __int64 v92; // [rsp+138h] [rbp+77h] BYREF
  __int64 v93; // [rsp+140h] [rbp+7Fh] BYREF

  v4 = 0;
  v5 = (MPCButtonHoldHelper *)*((_QWORD *)this + 515);
  v6 = *((_QWORD *)a2 + 2);
  Instance = MPCGestureHandlerManager::GetInstance((__int64)this, (__int64)a2);
  v91 = ((unsigned __int64)this + 24) & -(__int64)(this != 0LL);
  v8 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
         &v92,
         v91);
  v9 = !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)Instance, v8) || *((_BYTE *)this + 3666);
  MPCButtonHoldHelper::UpdateState(v5, v9, v6);
  v12 = *((unsigned int *)a2 + 61);
  *((_DWORD *)a2 + 218) = v12;
  *((_DWORD *)a2 + 219) = *((_DWORD *)a2 + 62);
  *((_DWORD *)a2 + 214) = 0;
  v13 = *((_QWORD *)this + 519);
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 )
    _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
  v86 = *(_QWORD *)(v13 + 16);
  v15 = *(std::_Ref_count_base **)(v13 + 24);
  v87 = v15;
  v18 = 0;
  if ( *(_BYTE *)(v86 + 8) )
  {
    v16 = MPCGestureHandlerManager::GetInstance(v12, v10);
    v17 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v93,
            v91);
    if ( !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v16, v17) )
      v18 = 1;
  }
  v19 = 0;
  LODWORD(v90) = 0;
  if ( v15 )
    std::_Ref_count_base::_Decref(v15);
  if ( !v18 )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v11);
    *(_QWORD *)&v85 = L"IsTouchpadTouchScrollingEnabled";
    *((_QWORD *)&v85 + 1) = 31LL;
    v88 = v85;
    v25 = v91;
    if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)MPCConstantManager::s_instance, v91, &v88)
      && *((_BYTE *)this + 3676)
      && *((_DWORD *)this + 918) != 2 )
    {
      v33 = *((_QWORD *)this + 519);
      v34 = *(_QWORD *)(v33 + 24);
      if ( v34 )
        _InterlockedIncrement((volatile signed __int32 *)(v34 + 8));
      v35 = *(_QWORD *)(v33 + 16);
      v36 = *(std::_Ref_count_base **)(v33 + 24);
      v19 = 2;
      if ( !*(_BYTE *)(v35 + 12) )
      {
        v37 = 1;
LABEL_35:
        if ( (v19 & 2) != 0 && v36 )
          std::_Ref_count_base::_Decref(v36);
        if ( !v37 )
        {
          if ( !MPCConstantManager::s_instance )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0x29,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
              v32);
          *(_QWORD *)&v80 = L"IsTouchpadTouchScrollingEnabled";
          *((_QWORD *)&v80 + 1) = 31LL;
          if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                                  (__int64)MPCConstantManager::s_instance,
                                  v25,
                                  &v80) )
          {
            if ( !MPCConstantManager::s_instance )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0x29,
                (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                v53);
            *(_QWORD *)&v84 = L"IsTouchpadTouchScrollingStopEnabled";
            *((_QWORD *)&v84 + 1) = 35LL;
            v80 = v84;
            v54 = (__int64 *)((char *)this + 4120);
            if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                                    (__int64)MPCConstantManager::s_instance,
                                    (__int64)this + 24,
                                    &v80) )
            {
              if ( !*((_BYTE *)this + 3666) )
              {
                if ( *((_BYTE *)this + 3676) )
                {
                  if ( *(_BYTE *)(*v54 + 8) )
                  {
                    if ( !*(_BYTE *)(*v54 + 9) )
                    {
                      v55 = MPCGestureHandlerManager::GetInstance(v52, v51);
                      v56 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                              &v91,
                              (__int64)this + 24);
                      if ( !MPCGestureHandlerManager::IsInjecting((__int64)v55, v56) )
                      {
                        ++*((_DWORD *)this + 917);
                        v58 = (float)(int)o_sqrtf_0(
                                            (float)((float)(*((float *)this + 1049) - *((float *)this + 1055))
                                                  * (float)(*((float *)this + 1049) - *((float *)this + 1055)))
                                          + (float)((float)(*((float *)this + 1048) - *((float *)this + 1054))
                                                  * (float)(*((float *)this + 1048) - *((float *)this + 1054))));
                        if ( !MPCConstantManager::s_instance )
                          wil::details::in1diag3::_FailFast_Unexpected(
                            retaddr,
                            (void *)0x29,
                            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                            v57);
                        *(_QWORD *)&v79 = L"TouchpadStopMaxDelta";
                        *((_QWORD *)&v79 + 1) = 20LL;
                        v78 = v79;
                        MPCConstantManager::GetConstant<float>(
                          (__int64)MPCConstantManager::s_instance,
                          (__int64)this + 24,
                          &v78);
                        if ( v58 > COERCE_FLOAT(L"TouchpadStopMaxDelta") )
                          *((_DWORD *)this + 917) = 0;
                        v60 = *((_DWORD *)this + 917);
                        if ( !MPCConstantManager::s_instance )
                          wil::details::in1diag3::_FailFast_Unexpected(
                            retaddr,
                            (void *)0x29,
                            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                            v59);
                        *(_QWORD *)&v83 = L"TouchpadNumFramesStopScroll";
                        *((_QWORD *)&v83 + 1) = 27LL;
                        v78 = v83;
                        if ( v60 < (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                                                   (__int64)MPCConstantManager::s_instance,
                                                   (__int64)this + 24,
                                                   &v78) )
                          return;
                        *((_DWORD *)a2 + 214) = 1;
                        *((_BYTE *)this + 3666) = 1;
                        v4 = 1;
LABEL_83:
                        if ( v4 )
                        {
                          *((_OWORD *)a2 + 55) = *(_OWORD *)((char *)a2 + 252);
                          *((_DWORD *)a2 + 224) = *((_DWORD *)a2 + 68);
                          v61 = MPCGestureHandlerManager::GetInstance(v31, v30);
                          v62 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                                  &v82,
                                  v25);
                          MPCGestureHandlerManager::DownLevelTo2D(v61, (__int64)a2, v62, v63);
                          *((_BYTE *)this + 3677) = 1;
                        }
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          else
          {
            v54 = (__int64 *)((char *)this + 4120);
          }
          v64 = MPCGestureHandlerManager::GetInstance(v52, v51);
          v65 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                  &v82,
                  (__int64)this + 24);
          if ( MPCGestureHandlerManager::IsInjecting((__int64)v64, v65) || *((_BYTE *)this + 3677) )
          {
            v68 = MPCGestureHandlerManager::GetInstance(v67, v66);
            v69 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                    &v81,
                    (__int64)this + 24);
            LOBYTE(v68) = MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v68, v69);
            MPCSixDofProcessor::EndGesture(this);
            if ( (_BYTE)v68 )
            {
              v72 = MPCGestureHandlerManager::GetInstance(v71, v70);
              v73 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                      &v83,
                      (__int64)this + 24);
              LODWORD(v75) = MPCGestureHandlerManager::GetLastScrollVelocityAvg((__int64)v72, v73).m128_u32[0] & _xmm;
              if ( !MPCConstantManager::s_instance )
                wil::details::in1diag3::_FailFast_Unexpected(
                  retaddr,
                  (void *)0x29,
                  (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
                  v74);
              *(_QWORD *)&v78 = L"TouchpadNotScrollingMultiplier";
              *((_QWORD *)&v78 + 1) = 30LL;
              MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v78);
              *(float *)&v91 = COERCE_FLOAT(L"TouchpadNotScrollingMultiplier") * v75;
              v76 = std::make_unique<MPCButtonHoldHelper,float,0>(&v79, (float *)&v91);
              std::unique_ptr<MPCButtonHoldHelper>::operator=<std::default_delete<MPCButtonHoldHelper>,0>(v54, v76);
              if ( (_QWORD)v79 )
                std::default_delete<MPCButtonHoldHelper>::operator()(
                  v77,
                  (__int64 (__fastcall ***)(_QWORD, __int64))v79);
            }
          }
          return;
        }
        v38 = *((float *)this + 1056) + *((float *)this + 1071);
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x29,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v32);
        *(_QWORD *)&v79 = L"TouchpadScrollTouchSpeedFactor";
        *((_QWORD *)&v79 + 1) = 30LL;
        v78 = v79;
        MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v25, &v78);
        *((float *)a2 + 215) = COERCE_FLOAT(L"TouchpadScrollTouchSpeedFactor") * v38;
        v40 = *((float *)this + 1072) + *((float *)this + 1057);
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x29,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v39);
        *(_QWORD *)&v83 = L"TouchpadScrollTouchSpeedFactor";
        *((_QWORD *)&v83 + 1) = 30LL;
        v78 = v83;
        MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, v25, &v78);
        *((float *)a2 + 216) = COERCE_FLOAT(L"TouchpadScrollTouchSpeedFactor") * v40;
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x29,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v41);
        *(_QWORD *)&v84 = L"TouchpadScrollInvert";
        *((_QWORD *)&v84 + 1) = 20LL;
        v78 = v84;
        if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>(
                                (__int64)MPCConstantManager::s_instance,
                                (__int64)this + 24,
                                &v78) )
          *((float *)a2 + 216) = *((float *)a2 + 216) * -1.0;
        v43 = o_sqrtf_0(
                (float)((float)(*((float *)this + 1057) + *((float *)this + 1072))
                      * (float)(*((float *)this + 1057) + *((float *)this + 1072)))
              + (float)((float)(*((float *)this + 1056) + *((float *)this + 1071))
                      * (float)(*((float *)this + 1056) + *((float *)this + 1071))));
        if ( !MPCConstantManager::s_instance )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x29,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
            v42);
        *(_QWORD *)&v80 = L"TouchpadScrollTouchVelocityMin";
        *((_QWORD *)&v80 + 1) = 30LL;
        v78 = v80;
        MPCConstantManager::GetConstant<float>((__int64)MPCConstantManager::s_instance, (__int64)this + 24, &v78);
        if ( v43 <= COERCE_FLOAT(L"TouchpadScrollTouchVelocityMin") )
        {
          v46 = 0;
          v47 = *((float *)this + 1057) + *((float *)this + 1072);
          *((float *)this + 1071) = *((float *)this + 1056) + *((float *)this + 1071);
          *((float *)this + 1072) = v47;
        }
        else
        {
          v46 = 1;
        }
        v48 = v46
           && *((_DWORD *)this + 918) != 3
           && (float)((float)(*((float *)this + 1058) * *((float *)this + 1056))
                    + (float)(*((float *)this + 1059) * *((float *)this + 1057))) >= 0.0;
        v49 = MPCGestureHandlerManager::GetInstance(v45, v44);
        v50 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                &v81,
                (__int64)this + 24);
        if ( !MPCGestureHandlerManager::IsWorkspaceScrolling((__int64)v49, v50) || v46 )
        {
          if ( !v48 )
          {
LABEL_63:
            *((_DWORD *)a2 + 214) = 5;
            *((_DWORD *)this + 917) = 0;
            v25 = v91;
            goto LABEL_83;
          }
          *((_DWORD *)this + 1071) = 0;
          *((_DWORD *)this + 1072) = 0;
          *((_BYTE *)this + 3666) = 0;
        }
        else
        {
          *((_DWORD *)a2 + 215) = 0;
          *((_DWORD *)a2 + 216) = 0;
          *((_BYTE *)this + 3666) = 1;
        }
        v4 = 1;
        goto LABEL_63;
      }
    }
    else
    {
      v36 = v90;
    }
    v37 = 0;
    goto LABEL_35;
  }
  v20 = *((_QWORD *)this + 519);
  v21 = *(_QWORD *)(v20 + 24);
  if ( v21 )
    _InterlockedIncrement((volatile signed __int32 *)(v21 + 8));
  v22 = *(_QWORD *)(v20 + 16);
  v23 = *(std::_Ref_count_base **)(v20 + 24);
  v24 = *(_BYTE *)(v22 + 10);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v11);
  *(_QWORD *)&v79 = L"IsTouchpadClickingEnabled";
  *((_QWORD *)&v79 + 1) = 25LL;
  v78 = v79;
  v25 = v91;
  if ( (unsigned __int8)MPCConstantManager::GetConstant<bool>((__int64)MPCConstantManager::s_instance, v91, &v78)
    && (v24 || *(_BYTE *)(*((_QWORD *)this + 519) + 13LL)) )
  {
    v28 = MPCGestureHandlerManager::GetInstance(v27, v26);
    v29 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v91,
            (__int64)this + 24);
    v31 = MPCGestureHandlerManager::IsInjecting((__int64)v28, v29) != 0 ? 7 : 1;
    *((_DWORD *)a2 + 214) = v31;
    v4 = 1;
    *((_BYTE *)this + 3666) = 1;
    goto LABEL_83;
  }
}
