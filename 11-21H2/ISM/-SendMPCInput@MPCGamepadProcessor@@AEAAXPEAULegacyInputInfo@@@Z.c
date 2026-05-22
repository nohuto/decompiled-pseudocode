/*
 * XREFs of ?SendMPCInput@MPCGamepadProcessor@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1801C69E8
 * Callers:
 *     ?PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInputInfo@@@Z @ 0x1801C60D0 (-PostHitTestProcessing@MPCGamepadProcessor@@UEAAXPEAUMPCHolographicInputContext@@PEAULegacyInput.c)
 * Callees:
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800417B0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007FD5C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProviderBase@@@Z @ 0x180091CA8 (--0-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUIMPCInputProvid.c)
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18009205C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAULegacyInputInfo@@V-$com_ptr_t@UIMPCInputProvid.c)
 *     ?GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ @ 0x180092314 (-GetInstance@MPCGestureHandlerManager@@SAPEAV1@XZ.c)
 *     ?OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z @ 0x180099EC0 (-OnMenuPressed@MPCManager@@QEAAXW4MPCSourceKind@@I@Z.c)
 *     ?InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult3D@@PEAUIMPCTarget@@@Z @ 0x18009DF08 (-InjectInteractionState@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KAEBUHitTestResult.c)
 *     ?InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z @ 0x18009E1B8 (-InjectRightClick@MPCHolographicInputManager@@QEAAJW4InteractionState@1@KMM@Z.c)
 *     ?PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDownLevel2DType@@@Z @ 0x1800AEECC (-PopulateDownlevelDataFromHitTestResult@MPCInputProviderBase@@IEAAXPEAULegacyInputInfo@@W4MPCDow.c)
 *     ?StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z @ 0x1801CC010 (-StartTracking@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@M@Z.c)
 *     ?TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z @ 0x1801CC050 (-TrackPosition@MPCGestureCancelTracker@@QEAAXAEBUfloat3@Numerics@Foundation@Windows@@@Z.c)
 */

void __fastcall MPCGamepadProcessor::SendMPCInput(MPCGamepadProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  volatile signed __int32 *v6; // rcx
  char v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rax
  volatile signed __int32 *v10; // rbx
  char v11; // r8
  volatile signed __int32 *v12; // rcx
  char v13; // r14
  __int64 v14; // rax
  volatile signed __int32 *v15; // rcx
  char v16; // bl
  int v17; // ebx
  struct MPCHolographicInputManager *Instance; // rax
  __int64 v19; // rcx
  MPCGestureHandlerManager *v20; // rbx
  unsigned __int64 *v21; // rax
  const char *v22; // r9
  struct MPCHolographicInputManager *v23; // rax
  const char *v24; // r9
  int v25; // eax
  struct MPCHolographicInputManager *v26; // rax
  const char *v27; // r9
  int v28; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  std::_Ref_count_base *v30; // [rsp+70h] [rbp+8h] BYREF

  LODWORD(v30) = 0;
  MPCInputProviderBase::PopulateDownlevelDataFromHitTestResult((__int64)this, (__int64)a2, 0);
  v5 = *(_QWORD *)(v4 + 4288);
  v6 = *(volatile signed __int32 **)(v5 + 24);
  if ( v6 )
  {
    _InterlockedAdd(v6 + 2, 1u);
    v6 = *(volatile signed __int32 **)(v5 + 24);
  }
  v7 = *(_BYTE *)(*(_QWORD *)(v5 + 16) + 10LL);
  if ( v6 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v6);
  v8 = *((_QWORD *)this + 536);
  v9 = v8 + 16;
  v10 = *(volatile signed __int32 **)(v8 + 24);
  if ( v10 )
  {
    _InterlockedAdd(v10 + 2, 1u);
    v10 = *(volatile signed __int32 **)(v8 + 24);
    v8 = *((_QWORD *)this + 536);
  }
  v11 = 1;
  if ( *(_BYTE *)(*(_QWORD *)v9 + 10LL) )
  {
    v12 = (volatile signed __int32 *)v30;
    goto LABEL_13;
  }
  v12 = *(volatile signed __int32 **)(v8 + 24);
  if ( v12 )
  {
    _InterlockedAdd(v12 + 2, 1u);
    v12 = *(volatile signed __int32 **)(v8 + 24);
  }
  v11 = 3;
  if ( *(_BYTE *)(*(_QWORD *)(v8 + 16) + 12LL) )
  {
LABEL_13:
    v13 = 1;
    if ( (v11 & 2) == 0 )
      goto LABEL_16;
    goto LABEL_14;
  }
  v13 = 0;
LABEL_14:
  if ( v12 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v12);
LABEL_16:
  if ( v10 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v10);
  v14 = *((_QWORD *)this + 536);
  v15 = *(volatile signed __int32 **)(v14 + 24);
  if ( v15 )
  {
    _InterlockedAdd(v15 + 2, 1u);
    v15 = *(volatile signed __int32 **)(v14 + 24);
  }
  v16 = *(_BYTE *)(*(_QWORD *)(v14 + 16) + 8LL);
  if ( v15 )
    std::_Ref_count_base::_Decref((std::_Ref_count_base *)v15);
  if ( v16 )
    MPCGestureCancelTracker::TrackPosition(
      (MPCGamepadProcessor *)((char *)this + 4296),
      (MPCGamepadProcessor *)((char *)this + 4204));
  if ( v13 )
  {
    v17 = v7 != 0;
    if ( v7 )
    {
      MPCGestureCancelTracker::StartTracking(
        (MPCGamepadProcessor *)((char *)this + 4296),
        (MPCGamepadProcessor *)((char *)this + 4204),
        0.025);
    }
    else if ( *((_BYTE *)this + 4313) && *((_BYTE *)this + 4312) )
    {
      v17 = 2;
      *((_WORD *)this + 2156) = 0;
      *((_QWORD *)this + 540) = 0LL;
    }
    Instance = MPCHolographicInputManager::GetInstance();
    v19 = *((_QWORD *)this + 455);
    if ( !v19 )
      v19 = *((_QWORD *)this + 456);
    MPCHolographicInputManager::InjectInteractionState(
      (__int64)Instance,
      v17,
      **((_DWORD **)this + 7),
      (__int64)a2 + 240,
      v19);
  }
  if ( (*((_BYTE *)this + 3708) & 1) == 0 && (*((_BYTE *)this + 3704) & 1) != 0 )
    MPCManager::OnMenuPressed((__int64)MPCManager::s_instance, 4u, 1u);
  if ( *((_BYTE *)a2 + 240) && *((_BYTE *)a2 + 242) && !*((_DWORD *)this + 1046) && v13 )
  {
    *((_DWORD *)a2 + 214) = 2 - (v7 != 0);
    v20 = MPCGestureHandlerManager::GetInstance((__int64)v15, v8);
    v21 = wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(
            &v30,
            (__int64)this + 32);
    MPCGestureHandlerManager::DownLevelTo2D(v20, (__int64)a2, v21, v22);
  }
  if ( *(_BYTE *)(*((_QWORD *)this + 535) + 12LL) )
  {
    v23 = MPCHolographicInputManager::GetInstance();
    v25 = MPCHolographicInputManager::InjectRightClick((__int64)v23, 1, *((_DWORD *)a2 + 68), v24, *((float *)a2 + 62));
    if ( v25 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        696LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v25);
    v26 = MPCHolographicInputManager::GetInstance();
    v28 = MPCHolographicInputManager::InjectRightClick((__int64)v26, 0, *((_DWORD *)a2 + 68), v27, *((float *)a2 + 62));
    if ( v28 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        704LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgamepadprocessor.cpp",
        (const char *)(unsigned int)v28);
  }
}
