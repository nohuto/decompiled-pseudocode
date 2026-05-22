/*
 * XREFs of ?PostHitTestProcessing@MPCHandProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1800A7D40
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?IsInjecting@MPCGestureHandlerManager@@QEAA_NV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009259C (-IsInjecting@MPCGestureHandlerManager@@QEAA_NV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A5AC8 (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800AD480 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z @ 0x1800AF640 (-UpdateState@MPCSlateDeadzoneHelper@@QEAAX_N_KMMM@Z.c)
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
  MPCSlateDeadzoneHelper *v9; // rax
  volatile signed __int32 *v10; // rcx
  char v11; // di
  MPCSlateDeadzoneHelper *v12; // rax
  volatile signed __int32 *v13; // rdi
  char v14; // bl
  MPCSlateDeadzoneHelper *v15; // rax
  volatile signed __int32 *v16; // rcx
  char v17; // si
  MPCSlateDeadzoneHelper *v18; // rax
  int v19; // xmm1_4
  volatile signed __int32 *v20; // rcx
  char v21; // bl
  int v22; // eax
  struct MPCGestureHandlerManager *v23; // rbx
  unsigned __int64 *v24; // rax
  MPCSlateDeadzoneHelper *v25; // rsi
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  unsigned __int64 v29; // rdi
  struct MPCGestureHandlerManager *v30; // rbx
  unsigned __int64 *v31; // rax
  char IsInjecting; // al
  MPCSlateDeadzoneHelper *v33; // rax
  volatile signed __int32 *v34; // rcx
  char v35; // bl
  const void *v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  MPCGestureHandlerManager *Instance; // rbx
  unsigned __int64 *v40; // rax
  const char *v41; // r9
  __int128 v42; // [rsp+30h] [rbp-98h] BYREF
  __int128 v43; // [rsp+50h] [rbp-78h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+0h]
  std::_Ref_count_base *v45; // [rsp+D0h] [rbp+8h] BYREF
  __int64 v46; // [rsp+E8h] [rbp+20h] BYREF

  v3 = 0;
  LODWORD(v45) = 0;
  if ( MPCInputProviderBase::IsPrimary((MPCInputProviderBase *)this) )
  {
    if ( !MPCConstantManager::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        41LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
        v6);
    *((_QWORD *)&v42 + 1) = 21LL;
    *(_QWORD *)&v42 = L"DisableInputInjection";
    v43 = v42;
    if ( !(unsigned __int8)MPCConstantManager::GetConstant<bool>(
                             (__int64)MPCConstantManager::s_instance,
                             this & -(__int64)(this != 24),
                             &v43) )
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
        v10 = (volatile signed __int32 *)*((_QWORD *)v9 + 3);
        if ( v10 )
        {
          _InterlockedIncrement(v10 + 2);
          v10 = (volatile signed __int32 *)*((_QWORD *)v9 + 3);
        }
        v3 = 1;
        if ( !*(_BYTE *)(*((_QWORD *)v9 + 2) + 12LL) )
        {
          v11 = 1;
LABEL_13:
          if ( (v3 & 1) != 0 )
          {
            v3 &= ~1u;
            if ( v10 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
          }
          if ( v11 )
            goto LABEL_54;
          v12 = *(MPCSlateDeadzoneHelper **)(this + 3656);
          v13 = (volatile signed __int32 *)*((_QWORD *)v12 + 3);
          if ( v13 )
          {
            _InterlockedIncrement(v13 + 2);
            v13 = (volatile signed __int32 *)*((_QWORD *)v12 + 3);
          }
          v14 = v3 | 2;
          if ( *(_BYTE *)(*((_QWORD *)v12 + 2) + 8LL) )
          {
            v16 = (volatile signed __int32 *)v45;
          }
          else
          {
            v15 = *(MPCSlateDeadzoneHelper **)(this + 3656);
            v16 = (volatile signed __int32 *)*((_QWORD *)v15 + 3);
            if ( v16 )
            {
              _InterlockedIncrement(v16 + 2);
              v16 = (volatile signed __int32 *)*((_QWORD *)v15 + 3);
            }
            v14 |= 4u;
            if ( !*(_BYTE *)(*((_QWORD *)v15 + 2) + 12LL) )
            {
              v17 = 0;
              goto LABEL_26;
            }
          }
          v17 = 1;
LABEL_26:
          if ( (v14 & 4) != 0 && v16 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v16);
          if ( v13 )
            std::_Ref_count_base::_Decref((std::_Ref_count_base *)v13);
          if ( v17 )
          {
            v18 = *(MPCSlateDeadzoneHelper **)(this + 3656);
            if ( !*((_BYTE *)v18 + 13) )
            {
              v19 = *((_DWORD *)v18 + 2);
              *((_DWORD *)a3 + 61) = *((_DWORD *)v18 + 1);
              *((_DWORD *)a3 + 62) = v19;
              v18 = *(MPCSlateDeadzoneHelper **)(this + 3656);
            }
            v20 = (volatile signed __int32 *)*((_QWORD *)v18 + 3);
            if ( v20 )
            {
              _InterlockedIncrement(v20 + 2);
              v20 = (volatile signed __int32 *)*((_QWORD *)v18 + 3);
            }
            v21 = *(_BYTE *)(*((_QWORD *)v18 + 2) + 8LL);
            if ( v20 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v20);
            if ( v21 )
            {
              memcpy_0((void *)(this + 3672), a3, 0xBC0uLL);
LABEL_58:
              v7 = 7;
              goto LABEL_59;
            }
            goto LABEL_49;
          }
          if ( !*((_BYTE *)a3 + 240) )
            goto LABEL_59;
          v22 = *(_DWORD *)a3 & 0x662600;
          if ( *(_BYTE *)(this + 3640) )
          {
            if ( v22 )
            {
              if ( *((_DWORD *)a3 + 16) == 2 )
              {
                v7 = 1;
                goto LABEL_59;
              }
              if ( *((_DWORD *)a3 + 16) != 3 )
                goto LABEL_59;
LABEL_49:
              v7 = 2;
            }
LABEL_59:
            v33 = *(MPCSlateDeadzoneHelper **)(this + 3656);
            v34 = (volatile signed __int32 *)*((_QWORD *)v33 + 3);
            if ( v34 )
            {
              _InterlockedIncrement(v34 + 2);
              v34 = (volatile signed __int32 *)*((_QWORD *)v33 + 3);
            }
            v35 = *(_BYTE *)(*((_QWORD *)v33 + 2) + 12LL);
            if ( v34 )
              std::_Ref_count_base::_Decref((std::_Ref_count_base *)v34);
            if ( v35 )
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
            MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult(v34, a3, v7);
            if ( *((_BYTE *)a3 + 240) )
            {
              memcpy_0((void *)(this + 6680), v36, 0xBC0uLL);
              Instance = MPCGestureHandlerManager::GetInstance(v38, v37);
              v40 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                      &v42,
                      this & -(__int64)(this != 24));
              MPCGestureHandlerManager::DownLevelTo2D(Instance, (__int64)a3, v40, v41);
            }
            return;
          }
          if ( v22 )
          {
            if ( *((_DWORD *)a3 + 16) == 3 )
              goto LABEL_49;
            if ( *((_DWORD *)a3 + 16) == 2 )
              goto LABEL_55;
          }
          v23 = MPCGestureHandlerManager::GetInstance((__int64)v16, v8);
          v24 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                  &v45,
                  this & -(__int64)(this != 24));
          if ( MPCGestureHandlerManager::IsInjecting((__int64)v23, v24) )
          {
LABEL_55:
            v25 = *(MPCSlateDeadzoneHelper **)(this + 3648);
            v26 = *((float *)a3 + 76);
            v27 = *((float *)a3 + 62);
            v28 = *((float *)a3 + 61);
            v29 = *((_QWORD *)a3 + 2);
            v30 = MPCGestureHandlerManager::GetInstance((__int64)v16, v8);
            v31 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
                    &v46,
                    this & -(__int64)(this != 24));
            IsInjecting = MPCGestureHandlerManager::IsInjecting((__int64)v30, v31);
            MPCSlateDeadzoneHelper::UpdateState(v25, IsInjecting, v29, v28, v27, v26);
            if ( ((*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 2)
              && !*(_BYTE *)(*(_QWORD *)(this + 3648) + 13LL) )
            {
              goto LABEL_59;
            }
            goto LABEL_58;
          }
          if ( (*(_DWORD *)a3 & 0x662600) == 0 || *((_DWORD *)a3 + 16) != 6 )
            goto LABEL_59;
LABEL_54:
          v7 = 4;
          goto LABEL_59;
        }
      }
      else
      {
        v10 = (volatile signed __int32 *)v45;
      }
      v11 = 0;
      goto LABEL_13;
    }
  }
}
