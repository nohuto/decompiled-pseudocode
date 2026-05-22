/*
 * XREFs of ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F3CD0
 * Callers:
 *     ?ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801F3AB0 (-ForwardInputReport@MPCMouseProcessor@@UEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800C2AA8 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ @ 0x1800C6290 (-GetFocusedTarget@MPCHolographicInputManager@@QEAAPEAUIMPCFocusTarget@@XZ.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800C6838 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ @ 0x1800C6E6C (-IsExclusiveAppFocused@MPCHolographicInputManager@@QEAA_NXZ.c)
 *     ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800C8144 (-Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800CE0B8 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@V-$basic_string_view@GU-$ch.c)
 *     ?IsPrimary@MPCInputProviderBase@@UEBA_NXZ @ 0x1800D57C0 (-IsPrimary@MPCInputProviderBase@@UEBA_NXZ.c)
 *     ?SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ @ 0x1800D75D8 (-SetRequestingPrimary@MPCInputProviderBase@@IEAAXXZ.c)
 *     ?ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputManager@@@Z @ 0x1801F377C (-ButtonToInteractionState@MPCMouseProcessor@@AEAA_NIIPEAW4InteractionState@MPCHolographicInputMa.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x1801F37B4 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801F7DAC (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801F7DEC (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCMouseProcessor::ForwardInputReportInternal(
        MPCMouseProcessor *this,
        const struct MouseProcessorState *a2,
        struct InputInfo *a3)
{
  int v6; // eax
  struct IMPCInputProviderBase *v7; // r14
  const char *v8; // r9
  unsigned int v9; // ebx
  MPCHolographicInputManager *Instance; // rbx
  int v11; // eax
  const char *v12; // r9
  unsigned int v13; // ebx
  wil::details::in1diag3 *v14; // rcx
  __int64 v15; // rdx
  char v16; // r12
  int v17; // r15d
  struct MPCHolographicInputManager *v18; // rax
  bool v20; // al
  unsigned int v21; // edx
  unsigned int v22; // ecx
  int v23; // r8d
  MPCHolographicInputManager *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  const char *v27; // r9
  MPCHolographicInputManager *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  const char *v31; // r9
  struct IMPCFocusTarget *FocusedTarget; // rax
  _DWORD v33[4]; // [rsp+30h] [rbp-D0h] BYREF
  struct IMPCTarget *v34[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v35[24]; // [rsp+50h] [rbp-B0h] BYREF
  int v36; // [rsp+68h] [rbp-98h]
  _BYTE v37[4]; // [rsp+140h] [rbp+40h] BYREF
  float v38; // [rsp+144h] [rbp+44h]
  float v39; // [rsp+148h] [rbp+48h]
  int v40; // [rsp+160h] [rbp+60h]
  __int64 v41; // [rsp+168h] [rbp+68h]
  char v42; // [rsp+188h] [rbp+88h]
  char v43; // [rsp+2CCh] [rbp+1CCh]
  bool v44; // [rsp+C09h] [rbp+B09h]
  wil::details::in1diag3 *retaddr; // [rsp+C58h] [rbp+B58h]

  if ( (*((_WORD *)a3 + 46) & 0xC00) != 0 )
    v6 = *((__int16 *)a3 + 47);
  else
    v6 = 0;
  *((_DWORD *)this + 1323) = v6;
  v7 = (MPCMouseProcessor *)((char *)this + 40);
  if ( MPCInputProviderBase::IsPrimary((unsigned __int64)this + 40) )
  {
    memset_0(v35, 0, 0xBC0uLL);
    v36 = 3008;
    v44 = *((_QWORD *)this + 456) && (*((_BYTE *)this + 5393) || !*((_DWORD *)a3 + 25) && !*((_DWORD *)a3 + 26));
    v34[0] = 0LL;
    Instance = MPCHolographicInputManager::GetInstance();
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v34);
    v11 = MPCHolographicInputManager::Process3DInput(Instance, (struct LegacyInputInfo *)v35, v7, v34);
    v13 = v11;
    v14 = retaddr;
    if ( v11 >= 0 )
    {
      if ( !v34[0] )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x107,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
          v12);
      if ( v42 )
      {
        v16 = 1;
        *((_QWORD *)a3 + 8) = v41;
        *((_DWORD *)a3 + 18) = 1;
      }
      else
      {
        v16 = 0;
      }
      if ( (*((_BYTE *)this + 5300) & 0x10) != 0 )
        MPCGestureCancelTracker::TrackPosition(
          (MPCMouseProcessor *)((char *)this + 5408),
          (MPCMouseProcessor *)((char *)this + 5316));
      if ( !MPCMouseProcessor::ButtonToInteractionState(
              this,
              *((_DWORD *)a2 + 4),
              16,
              (enum MPCHolographicInputManager::InteractionState *)v33) )
        goto LABEL_34;
      v17 = v33[0];
      if ( v33[0] == 1 )
        MPCGestureCancelTracker::StartTracking(
          (MPCMouseProcessor *)((char *)this + 5408),
          (MPCMouseProcessor *)((char *)this + 5316),
          0.0125);
      if ( *((_BYTE *)this + 5425) && *((_BYTE *)this + 5424) )
      {
        v17 = 2;
        *((_WORD *)this + 2712) = 0;
        *((_QWORD *)this + 679) = 0LL;
      }
      v18 = MPCHolographicInputManager::GetInstance();
      v11 = MPCHolographicInputManager::InjectInteractionState(
              (__int64)v18,
              v17,
              **((_DWORD **)this + 8),
              (__int64)v37,
              (__int64)v34[0]);
      v13 = v11;
      if ( v11 >= 0 )
      {
LABEL_34:
        v20 = v37[0] != 0;
        *((_BYTE *)this + 5352) = v37[0] != 0;
        if ( v20 )
        {
          v21 = (int)v38;
          *((_DWORD *)a3 + 25) = (int)v38;
          v22 = (int)v39;
          *((_DWORD *)a3 + 26) = (int)v39;
          *((_DWORD *)a3 + 10) = v40;
          *((_BYTE *)a3 + 122) = 1;
          MPCMouseProcessor::DownLevelInput(this, a2, a3, v21, v22, v43 != 0);
        }
        else if ( *((_BYTE *)this + 5353) && !*((_QWORD *)this + 455) )
        {
          *((_DWORD *)a3 + 10) = *((_DWORD *)this + 1339);
          *((_BYTE *)a3 + 122) = 1;
          MPCMouseProcessor::DownLevelInput(
            this,
            a2,
            a3,
            *((unsigned int *)this + 1340),
            *((_DWORD *)this + 1341),
            *((_DWORD *)this + 1342) != 0);
        }
        if ( MPCMouseProcessor::ButtonToInteractionState(
               this,
               *((_DWORD *)a2 + 4),
               32,
               (enum MPCHolographicInputManager::InteractionState *)v33)
          && !v33[0] )
        {
          MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, v23 - 29, v23 - 30);
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v34);
        if ( v16 )
          goto LABEL_49;
        goto LABEL_43;
      }
      v14 = retaddr;
      v15 = 299LL;
    }
    else
    {
      v15 = 261LL;
    }
    wil::details::in1diag3::Return_Hr(
      v14,
      (void *)v15,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmouseprocessor.cpp",
      (const char *)(unsigned int)v11);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v34);
    return v13;
  }
  if ( (*((_BYTE *)this + 5300) & 0x70) != 0 )
    goto LABEL_9;
  v9 = *((_DWORD *)this + 1322);
  if ( !MPCConstantManager::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x29,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcconstantmanager.cpp",
      v8);
  v34[0] = (struct IMPCTarget *)L"ActivationDelta";
  v34[1] = (struct IMPCTarget *)15;
  if ( v9 > (unsigned int)MPCConstantManager::GetConstant<unsigned long>(
                            (__int64)MPCConstantManager::s_instance,
                            (__int64)v7,
                            (__int128 *)v34) )
  {
LABEL_9:
    MPCInputProviderBase::SetRequestingPrimary((MPCMouseProcessor *)((char *)this + 16));
    *((_BYTE *)this + 5352) = 0;
    *((_DWORD *)this + 1343) = 1;
  }
LABEL_43:
  v24 = MPCHolographicInputManager::GetInstance();
  if ( (unsigned __int8)MPCHolographicInputManager::IsExclusiveAppFocused(v24, v25, v26, v27)
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
  {
    if ( *((_BYTE *)MPCHolographicInputManager::GetInstance() + 3366) )
    {
      *((_DWORD *)a3 + 29) = 1;
    }
    else
    {
      v28 = MPCHolographicInputManager::GetInstance();
      FocusedTarget = MPCHolographicInputManager::GetFocusedTarget(v28, v29, v30, v31);
      *((_DWORD *)a3 + 10) = (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)FocusedTarget + 56LL))(FocusedTarget);
      MPCMouseProcessor::DownLevelInput(this, a2, a3, *((unsigned int *)a3 + 25), *((_DWORD *)a3 + 26), 0);
    }
    *((_BYTE *)this + 5352) = 0;
  }
LABEL_49:
  *((_DWORD *)this + 1324) = *((_DWORD *)a2 + 4);
  return 0LL;
}
