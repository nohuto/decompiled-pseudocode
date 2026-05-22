/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801E5608
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801E4D00 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180045DDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096C94 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x1800A8378 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800A872C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x1800A8A04 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x1800B0958 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x1800B5128 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x1800B53D8 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800C7ECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801EB07C (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801EB0BC (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rax
  std::_Ref_count_base *v8; // rcx
  char v9; // r12
  __int64 v10; // rcx
  __int64 *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  std::_Ref_count_base *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  std::_Ref_count_base *v18; // rcx
  char v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  std::_Ref_count_base *v23; // rcx
  char v24; // bl
  int v25; // ebx
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v27; // rcx
  _BYTE *v28; // rsi
  MPCGestureHandlerManager *v29; // rbx
  unsigned __int64 *v30; // rax
  const char *v31; // r9
  struct MPCHolographicInputManager *v32; // rax
  const char *v33; // r9
  int v34; // eax
  struct MPCHolographicInputManager *v35; // rax
  const char *v36; // r9
  int v37; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  std::_Ref_count_base *v39; // [rsp+70h] [rbp+8h]
  __int64 v40; // [rsp+78h] [rbp+10h] BYREF

  LODWORD(v39) = 0;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)this, (__int64)a2, 0);
  v5 = *(_QWORD *)(v4 + 4288);
  v6 = *(_QWORD *)(v5 + 24);
  if ( v6 )
    _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  v7 = *(_QWORD *)(v5 + 16);
  v8 = *(std::_Ref_count_base **)(v5 + 24);
  v9 = *(_BYTE *)(v7 + 10);
  if ( v8 )
    std::_Ref_count_base::_Decref(v8);
  v10 = *((_QWORD *)this + 536);
  v11 = (__int64 *)(v10 + 16);
  v12 = *(_QWORD *)(v10 + 24);
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u);
    v10 = *((_QWORD *)this + 536);
  }
  v13 = *v11;
  v14 = (std::_Ref_count_base *)v11[1];
  v15 = 1LL;
  if ( *(_BYTE *)(v13 + 10) )
  {
    v18 = v39;
    goto LABEL_13;
  }
  v16 = *(_QWORD *)(v10 + 24);
  if ( v16 )
    _InterlockedAdd((volatile signed __int32 *)(v16 + 8), 1u);
  v17 = *(_QWORD *)(v10 + 16);
  v15 = 3LL;
  v18 = *(std::_Ref_count_base **)(v10 + 24);
  if ( *(_BYTE *)(v17 + 12) )
  {
LABEL_13:
    v19 = 1;
    if ( (v15 & 2) == 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v19 = 0;
LABEL_14:
  if ( v18 )
    std::_Ref_count_base::_Decref(v18);
LABEL_16:
  if ( v14 )
    std::_Ref_count_base::_Decref(v14);
  v20 = *((_QWORD *)this + 536);
  v21 = *(_QWORD *)(v20 + 24);
  if ( v21 )
    _InterlockedAdd((volatile signed __int32 *)(v21 + 8), 1u);
  v22 = *(_QWORD *)(v20 + 16);
  v23 = *(std::_Ref_count_base **)(v20 + 24);
  v24 = *(_BYTE *)(v22 + 8);
  if ( v23 )
    std::_Ref_count_base::_Decref(v23);
  if ( v24 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 4296),
      (MPCGamepadProcessor *)((char *)this + 4204));
  if ( v19 )
  {
    v25 = v9 != 0;
    if ( v9 )
    {
      MPCGestureCancelTracker::StartTracking(
        (MPCGamepadProcessor *)((char *)this + 4296),
        (MPCGamepadProcessor *)((char *)this + 4204),
        0.025);
    }
    else if ( *((_BYTE *)this + 4313) && *((_BYTE *)this + 4312) )
    {
      v25 = 2;
      *((_WORD *)this + 2156) = 0;
      *((_QWORD *)this + 540) = 0LL;
    }
    Instance = MPCHolographicInputManager::GetInstance();
    v27 = *((_QWORD *)this + 455);
    if ( !v27 )
      v27 = *((_QWORD *)this + 456);
    v28 = (char *)a2 + 240;
    MPCHolographicInputManager::InjectInteractionState(
      (__int64)Instance,
      v25,
      **((_DWORD **)this + 7),
      (__int64)a2 + 240,
      v27);
  }
  else
  {
    v28 = (char *)a2 + 240;
  }
  if ( (*((_BYTE *)this + 3708) & 1) == 0 && (*((_BYTE *)this + 3704) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 4u, 1u);
  if ( *v28 && *((_BYTE *)a2 + 242) && !*((_DWORD *)this + 1046) && v19 )
  {
    *((_DWORD *)a2 + 214) = 2 - (v9 != 0);
    v29 = MPCGestureHandlerManager::GetInstance((__int64)v23, v15);
    v30 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v40,
            ((unsigned __int64)this + 32) & -(__int64)(this != 0LL));
    MPCGestureHandlerManager::DownLevelTo2D(v29, (__int64)a2, v30, v31);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 535) + 12LL) )
  {
    v32 = MPCHolographicInputManager::GetInstance();
    v34 = MPCHolographicInputManager::InjectRightClick((__int64)v32, 1, *((_DWORD *)a2 + 68), v33, *((float *)a2 + 62));
    if ( v34 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        696LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v34);
    v35 = MPCHolographicInputManager::GetInstance();
    v37 = MPCHolographicInputManager::InjectRightClick((__int64)v35, 0, *((_DWORD *)a2 + 68), v36, *((float *)a2 + 62));
    if ( v37 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        704LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v37);
  }
}
