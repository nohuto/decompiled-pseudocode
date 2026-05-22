/*
 * XREFs of ?Process3DInput@MPCHolographicInputManager@@QEAAJPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x18009F804
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800A81B0 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801BCB60 (-Process3DInput@MPCVoiceProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C0E10 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801C6360 (-Process3DInput@MPCGamepadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z @ 0x1801C7F88 (-ForwardInputReportInternal@MPCMouseProcessor@@AEAAJPEBUMouseProcessorState@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801CA750 (-Process3DInput@MPCEyeGazeProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801CAC30 (-Process3DInput@MPCHeadProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801CB720 (-Process3DInput@MPCClickerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180014738 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ??4?$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z @ 0x1800489DC (--4-$ComPtr@UIInputProcessorHost@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputProcessorHost@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x18004E993 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180090CA0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV?$function@$$A6AXPEAUIMPCInputProviderBase@@@Z@std@@@Z @ 0x18009D43C (-ForEachActiveProvider@MPCHolographicInputManager@@AEAAXV-$function@$$A6AXPEAUIMPCInputProviderB.c)
 *     ?IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@@Z @ 0x18009E560 (-IsMultiplePrimariesWithGazeCommit@MPCHolographicInputManager@@AEAA_NPEAUIMPCInputProviderBase@@.c)
 *     ?IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z @ 0x18009E5C4 (-IsProviderPrimary@MPCHolographicInputManager@@QEBA_NPEBUIMPCInputProviderBase@@@Z.c)
 *     ?MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x18009EDD4 (-MPCHolographicInputManager_Process3DInput_HitTestResult_@ISMTracing@@QEAAXPEAULegacyInputInfo@@.c)
 *     ?MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z @ 0x18009F154 (-MPCHolographicInputManager_SendPoints_@ISMTracing@@QEAAX_KK@Z.c)
 *     ?PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@@Z @ 0x18009F62C (-PrepAndStabilizeTargetingRay@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInpu.c)
 *     ?ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@@PEAPEAUIMPCTarget@@@Z @ 0x1800A0018 (-ProcessCapture@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@PEAUIMPCInputProviderBase@.c)
 *     ?ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult3D@@W4MPCCursorId@@AEAUCursor3DHitData@@@Z @ 0x1800A023C (-ProcessCursorData@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@AEBUHitTestResult.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A08E4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor@@@details@wil@@QE.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800A0C1C (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z @ 0x1800A1128 (-UpdateGazeDrivenProviders@MPCHolographicInputManager@@AEAAXPEAULegacyInputInfo@@@Z.c)
 *     ?UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ @ 0x1800A12BC (-UpdatePrimary@MPCHolographicInputManager@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCHolographicInputManager::Process3DInput(
        MPCHolographicInputManager *this,
        struct LegacyInputInfo *a2,
        struct IMPCInputProviderBase *a3,
        struct IMPCTarget **a4)
{
  __int64 v8; // rax
  struct ISystemInputRouter *v9; // rax
  const char *v10; // r9
  __int64 v11; // rax
  struct IMPCTarget *v12; // rbx
  const char *v13; // r9
  _OWORD *v14; // rax
  _OWORD *v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _OWORD *v18; // rax
  _OWORD *v19; // rcx
  const char *v20; // r9
  _OWORD *v21; // rax
  _OWORD *v22; // rcx
  __int64 v23; // r8
  struct IMPCTarget *v24; // rbx
  __int64 v25; // rdi
  void (__fastcall *v26)(__int64, struct LegacyInputInfo *, __int64, struct IMPCTarget **); // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  ISMTracing *v30; // rcx
  unsigned int v31; // ebx
  char *v32; // r12
  MPCHolographicInputManager *v33; // rcx
  char v34; // di
  MPCHolographicInputManager *v35; // rcx
  int v36; // r15d
  struct IMPCInputProviderBase *v37; // rdx
  const char *v38; // r9
  int v39; // eax
  int v40; // edi
  unsigned __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rcx
  ISMTracing *v44; // rcx
  int v46; // [rsp+28h] [rbp-E0h]
  __int64 (__fastcall **v47)(); // [rsp+40h] [rbp-C8h] BYREF
  __int64 *v48; // [rsp+48h] [rbp-C0h]
  __int64 (__fastcall ***v49)(); // [rsp+78h] [rbp-90h]
  _BYTE v50[424]; // [rsp+80h] [rbp-88h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+250h] [rbp+148h]
  struct IMPCTarget *v52; // [rsp+258h] [rbp+150h] BYREF

  if ( !*((_BYTE *)this + 3364) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      342LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      (const char *)a4);
  if ( !*((_QWORD *)this + 412) )
  {
    v8 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 264LL))(a3);
    Microsoft::WRL::ComPtr<IInputProcessorHost>::operator=((__int64 *)this + 412, v8);
    v9 = (struct ISystemInputRouter *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 412) + 64LL))(*((_QWORD *)this + 412));
    MPCHolographicInputManager::SetMPCInputRouter(this, v9);
  }
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 224LL))(a3, a2);
  if ( !*((_QWORD *)this + 410) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      353LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
      v10);
  MPCHolographicInputManager::UpdatePrimary(this);
  v11 = *(_QWORD *)a3;
  if ( *((_BYTE *)a2 + 3001) )
  {
    v12 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(v11 + 240))(a3);
    v52 = v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v52);
    if ( !v12 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        363LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v52);
    *a4 = v12;
    v14 = (_OWORD *)(*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 248LL))(a3);
    v15 = v50;
    v16 = 3LL;
    v17 = 3LL;
    do
    {
      *v15 = *v14;
      v15[1] = v14[1];
      v15[2] = v14[2];
      v15[3] = v14[3];
      v15[4] = v14[4];
      v15[5] = v14[5];
      v15[6] = v14[6];
      v15 += 8;
      *(v15 - 1) = v14[7];
      v14 += 8;
      --v17;
    }
    while ( v17 );
    *v15 = *v14;
    v15[1] = v14[1];
    v18 = (_OWORD *)((char *)a2 + 240);
    v19 = v50;
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
      *(v18 - 1) = v19[7];
      v19 += 8;
      --v16;
    }
    while ( v16 );
    *v18 = *v19;
    v18[1] = v19[1];
LABEL_21:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v52);
    goto LABEL_24;
  }
  if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(v11 + 72))(a3) )
  {
    if ( !*((_QWORD *)this + 418) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        371LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
        v20);
    v21 = (_OWORD *)((char *)a2 + 240);
    v22 = (_OWORD *)((char *)this + 504);
    v23 = 3LL;
    do
    {
      *v21 = *v22;
      v21[1] = v22[1];
      v21[2] = v22[2];
      v21[3] = v22[3];
      v21[4] = v22[4];
      v21[5] = v22[5];
      v21[6] = v22[6];
      v21 += 8;
      *(v21 - 1) = v22[7];
      v22 += 8;
      --v23;
    }
    while ( v23 );
    *v21 = *v22;
    v21[1] = v22[1];
    v24 = (struct IMPCTarget *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 418) + 232LL))(*((_QWORD *)this + 418));
    v52 = v24;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v52);
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v52);
    *a4 = v24;
    goto LABEL_21;
  }
  *((_OWORD *)a2 + 180) = *((_OWORD *)this + 1);
  *((_OWORD *)a2 + 181) = *((_OWORD *)this + 2);
  *((_OWORD *)a2 + 182) = *((_OWORD *)this + 3);
  *((_OWORD *)a2 + 183) = *((_OWORD *)this + 4);
  MPCHolographicInputManager::PrepAndStabilizeTargetingRay(this, a2, a3);
  v25 = *((_QWORD *)this + 411);
  v26 = *(void (__fastcall **)(__int64, struct LegacyInputInfo *, __int64, struct IMPCTarget **))(*(_QWORD *)v25 + 64LL);
  v27 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 232LL))(a3);
  v26(v25, a2, v27, a4);
  if ( ISMTracing::IsEnabled(v28) )
  {
    wil::details::static_lazy<ISMTracing>::get(v29, _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    ISMTracing::MPCHolographicInputManager_Process3DInput_HitTestResult_(v30, a2);
  }
LABEL_24:
  v31 = 1;
  if ( *((_DWORD *)a2 + 16) == 4 )
    *((_BYTE *)a2 + 3000) = 1;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 200LL))(a3, *a4);
  v32 = (char *)a2 + 240;
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, char *))(*(_QWORD *)a3 + 216LL))(a3, (char *)a2 + 240);
  if ( *((_DWORD *)a2 + 16) == 8 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_UseEyeGazeForGazeCursor>::GetImpl'::`2'::impl,
      0LL);
    v46 = (_DWORD)this + 3400;
    MPCHolographicInputManager::ProcessCursorData(this, *((_QWORD *)this + 418), (char *)a2 + 240, 0LL);
    memcpy_0((char *)this + 264, a2, 0xBC0uLL);
  }
  MPCHolographicInputManager::UpdateGazeDrivenProviders(this, a2);
  MPCHolographicInputManager::ProcessCapture(v33, a2, a3, a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, _QWORD))(*(_QWORD *)a3 + 208LL))(a3, *a4);
  (*(void (__fastcall **)(struct IMPCInputProviderBase *, MPCHolographicInputManager *, struct LegacyInputInfo *))(*(_QWORD *)a3 + 128LL))(
    a3,
    this,
    a2);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 272LL))(**((_QWORD **)this + 450))
    || !(*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 72LL))(**((_QWORD **)this + 450))
    || (v34 = 1, a3 != *((struct IMPCInputProviderBase **)this + 418)) )
  {
    v34 = 0;
  }
  if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) || v34 )
  {
    if ( MPCHolographicInputManager::IsProviderPrimary(this, a3) )
      *((_BYTE *)this + 3272) = *((_BYTE *)a2 + 636) != 0;
    LOBYTE(v52) = 0;
    v47 = off_1801E4C48;
    v48 = (__int64 *)&v52;
    v49 = &v47;
    MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v47);
    if ( !*((_BYTE *)a2 + 3000) )
    {
      v36 = (_DWORD)a2 + 656;
      if ( !MPCHolographicInputManager::IsMultiplePrimariesWithGazeCommit(v35, a3) )
        v31 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 328LL))(a3);
      if ( v34 )
      {
        v32 = (char *)this + 504;
        v37 = (struct IMPCInputProviderBase *)**((_QWORD **)this + 450);
      }
      else
      {
        v37 = a3;
      }
      v46 = v36;
      MPCHolographicInputManager::ProcessCursorData(this, v37, v32, v31);
    }
    if ( (*(unsigned __int8 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 360LL))(a3)
      && (((*((_QWORD *)this + 451) - *((_QWORD *)this + 450)) & 0xFFFFFFFFFFFFFFF8uLL) == 8
       || (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 328LL))(a3) != 2) )
    {
      if ( *((_QWORD *)this + 462) != *((_QWORD *)this + 463) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          462LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v38);
      if ( *((_QWORD *)this + 465) != *((_QWORD *)this + 466) )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          463LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          v38);
      v47 = off_1801E4C18;
      v48 = (__int64 *)this;
      v49 = &v47;
      MPCHolographicInputManager::ForEachActiveProvider((__int64)this, (__int64)&v47);
      v39 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 422) + 80LL))(
              *((_QWORD *)this + 422),
              0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 463) - *((_QWORD *)this + 462)) >> 3));
      if ( v39 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1DD,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcholographicinputmanager.cpp",
          (const char *)(unsigned int)v39,
          v46);
      v40 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a3 + 48LL))(a3);
      v41 = 0xD37A6F4DE9BD37A7uLL * ((__int64)(*((_QWORD *)this + 463) - *((_QWORD *)this + 462)) >> 3);
      if ( ISMTracing::IsEnabled(v42) )
      {
        wil::details::static_lazy<ISMTracing>::get(
          v43,
          _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
        ISMTracing::MPCHolographicInputManager_SendPoints_(v44, (unsigned int)v41, v40);
      }
      *((_QWORD *)this + 463) = *((_QWORD *)this + 462);
    }
  }
  return 0LL;
}
