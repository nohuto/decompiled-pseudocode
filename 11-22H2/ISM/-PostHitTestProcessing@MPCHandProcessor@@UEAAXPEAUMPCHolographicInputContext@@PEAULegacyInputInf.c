/*
 * XREFs of ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800D0020
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004673C (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memcpy_0 @ 0x1800793A0 (memcpy_0.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800BAC64 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB00C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800BB2E4 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800BB56C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE160 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800D57C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800D720C (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800D7990 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
 */

void __fastcall MPCHandProcessor::PostHitTestProcessing(
        unsigned __int64 this,
        struct MPCHolographicInputContext *a2,
        struct LegacyInputInfo *a3)
{
  char v3; // bl
  const char *v6; // r9
  unsigned int v7; // r15d
  __int64 v8; // rdx
  MPCSlateDeadzoneHelper *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  std::_Ref_count_base *v12; // rcx
  char v13; // di
  MPCSlateDeadzoneHelper *v14; // rcx
  __int64 v15; // rax
  char v16; // bl
  std::_Ref_count_base *v17; // rsi
  MPCSlateDeadzoneHelper *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  std::_Ref_count_base *v21; // rcx
  char v22; // di
  MPCSlateDeadzoneHelper *v23; // rax
  int v24; // xmm1_4
  MPCSlateDeadzoneHelper *v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  std::_Ref_count_base *v28; // rcx
  char v29; // bl
  int v30; // eax
  _DWORD *v31; // r12
  MPCSlateDeadzoneHelper *v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  std::_Ref_count_base *v35; // rcx
  char v36; // bl
  struct MPCGestureHandlerManager *v37; // rbx
  unsigned __int64 *v38; // rax
  MPCSlateDeadzoneHelper *v39; // rsi
  float v40; // xmm6_4
  float v41; // xmm7_4
  float v42; // xmm8_4
  unsigned __int64 v43; // rdi
  struct MPCGestureHandlerManager *v44; // rbx
  unsigned __int64 *v45; // rax
  char IsInjecting; // al
  const void *v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v51; // rax
  const char *v52; // r9
  __int128 v53; // [rsp+30h] [rbp-98h] BYREF
  __int128 v54; // [rsp+50h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  std::_Ref_count_base *v56; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v57; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 0;
  LODWORD(v56) = 0;
  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x29,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v6);
    *((_QWORD *)&v53 + 1) = 21LL;
    *(_QWORD *)&v53 = L"DisableInputInjection";
    v54 = v53;
    if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                             (__int64)MPCConstantManager::s_instance,
                             this & -(__int64)(this != 24),
                             &v54) )
    {
      v7 = 0;
      MPCSlateDeadzoneHelper::UpdateState(
        *(MPCSlateDeadzoneHelper **)(this + 3656),
        *((_BYTE *)a3 + 651) != 0,
        *((_QWORD *)a3 + 2),
        *((float *)a3 + 61),
        *((float *)a3 + 62),
        1.0);
      if ( *((_BYTE *)a3 + 650) && *((_BYTE *)a3 + 652) )
      {
        v9 = *(MPCSlateDeadzoneHelper **)(this + 3656);
        v10 = *((_QWORD *)v9 + 3);
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v11 = *((_QWORD *)v9 + 2);
        v3 = 1;
        v12 = (std::_Ref_count_base *)*((_QWORD *)v9 + 3);
        if ( !*(_BYTE *)(v11 + 12) )
        {
          v13 = 1;
LABEL_13:
          if ( (v3 & 1) != 0 )
          {
            v3 &= ~1u;
            if ( v12 )
              std::_Ref_count_base::_Decref(v12);
          }
          if ( v13 )
          {
            v7 = 4;
LABEL_52:
            v32 = *(MPCSlateDeadzoneHelper **)(this + 3656);
            v33 = *((_QWORD *)v32 + 3);
            if ( v33 )
              _InterlockedIncrement((volatile signed __int32 *)(v33 + 8));
            v34 = *((_QWORD *)v32 + 2);
            v35 = (std::_Ref_count_base *)*((_QWORD *)v32 + 3);
            v36 = *(_BYTE *)(v34 + 12);
            if ( v35 )
              std::_Ref_count_base::_Decref(v35);
            if ( v36 )
            {
              a3 = (struct LegacyInputInfo *)(this + 3672);
            }
            else if ( !*((_BYTE *)a3 + 240) && *(_DWORD *)(this + 7536) == 4 )
            {
              a3 = (struct LegacyInputInfo *)(this + 6680);
              v7 = 0;
            }
            if ( *(_QWORD *)(this + 3600) && *(_BYTE *)(this + 3624) && !*((_BYTE *)a3 + 240) )
            {
              a3 = (struct LegacyInputInfo *)(this + 6680);
              v7 = 7;
            }
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v35, a3, v7);
            if ( *((_BYTE *)a3 + 240) )
            {
              memcpy_0((void *)(this + 6680), v47, 0xBC0uLL);
              Instance = MPCGestureHandlerManager::GetInstance(v49, v48);
              v51 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                      &v53,
                      this & -(__int64)(this != 24));
              MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v51, v52);
            }
            return;
          }
          v14 = *(MPCSlateDeadzoneHelper **)(this + 3656);
          v15 = *((_QWORD *)v14 + 3);
          if ( v15 )
            _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
          v16 = v3 | 2;
          v17 = (std::_Ref_count_base *)*((_QWORD *)v14 + 3);
          if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 8LL) )
          {
            v21 = v56;
          }
          else
          {
            v18 = *(MPCSlateDeadzoneHelper **)(this + 3656);
            v19 = *((_QWORD *)v18 + 3);
            if ( v19 )
              _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
            v20 = *((_QWORD *)v18 + 2);
            v16 |= 4u;
            v21 = (std::_Ref_count_base *)*((_QWORD *)v18 + 3);
            if ( !*(_BYTE *)(v20 + 12) )
            {
              v22 = 0;
LABEL_27:
              if ( (v16 & 4) != 0 && v21 )
                std::_Ref_count_base::_Decref(v21);
              if ( v17 )
                std::_Ref_count_base::_Decref(v17);
              if ( v22 )
              {
                v23 = *(MPCSlateDeadzoneHelper **)(this + 3656);
                if ( !*((_BYTE *)v23 + 13) )
                {
                  v24 = *((_DWORD *)v23 + 2);
                  *((_DWORD *)a3 + 61) = *((_DWORD *)v23 + 1);
                  *((_DWORD *)a3 + 62) = v24;
                }
                v25 = *(MPCSlateDeadzoneHelper **)(this + 3656);
                v26 = *((_QWORD *)v25 + 3);
                if ( v26 )
                  _InterlockedIncrement((volatile signed __int32 *)(v26 + 8));
                v27 = *((_QWORD *)v25 + 2);
                v28 = (std::_Ref_count_base *)*((_QWORD *)v25 + 3);
                v29 = *(_BYTE *)(v27 + 8);
                if ( v28 )
                  std::_Ref_count_base::_Decref(v28);
                if ( v29 )
                {
                  memcpy_0((void *)(this + 3672), a3, 0xBC0uLL);
LABEL_41:
                  v7 = 7;
                  goto LABEL_52;
                }
              }
              else
              {
                if ( !*((_BYTE *)a3 + 240) )
                  goto LABEL_52;
                v30 = *(_DWORD *)a3 & 0x662600;
                if ( !*(_BYTE *)(this + 3640) )
                {
                  v31 = (_DWORD *)((char *)a3 + 64);
                  if ( !v30 )
                    goto LABEL_59;
                  if ( *v31 == 3 )
                  {
                    v7 = 2;
                    goto LABEL_52;
                  }
                  if ( *v31 != 2 )
                  {
LABEL_59:
                    v37 = MPCGestureHandlerManager::GetInstance((__int64)v21, v8);
                    v38 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                            &v56,
                            this & -(__int64)(this != 24));
                    if ( !MPCGestureHandlerManager::IsInjecting((__int64)v37, v38) )
                    {
                      if ( (*(_DWORD *)a3 & 0x662600) != 0 && *v31 == 6 )
                        v7 = 4;
                      goto LABEL_52;
                    }
                  }
                  v39 = *(MPCSlateDeadzoneHelper **)(this + 3648);
                  v40 = *((float *)a3 + 76);
                  v41 = *((float *)a3 + 62);
                  v42 = *((float *)a3 + 61);
                  v43 = *((_QWORD *)a3 + 2);
                  v44 = MPCGestureHandlerManager::GetInstance((__int64)v21, v8);
                  v45 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                          &v57,
                          this & -(__int64)(this != 24));
                  IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v44, v45);
                  MPCSlateDeadzoneHelper::UpdateState(v39, IsInjecting, v43, v42, v41, v40);
                  if ( ((*(_DWORD *)a3 & 0x662600) == 0 || *v31 != 2) && !*(_BYTE *)(*(_QWORD *)(this + 3648) + 13LL) )
                    goto LABEL_52;
                  goto LABEL_41;
                }
                if ( !v30 )
                  goto LABEL_52;
                if ( *((_DWORD *)a3 + 16) == 2 )
                {
                  v7 = 1;
                  goto LABEL_52;
                }
                if ( *((_DWORD *)a3 + 16) != 3 )
                  goto LABEL_52;
              }
              v7 = 2;
              goto LABEL_52;
            }
          }
          v22 = 1;
          goto LABEL_27;
        }
      }
      else
      {
        v12 = v56;
      }
      v13 = 0;
      goto LABEL_13;
    }
  }
}
