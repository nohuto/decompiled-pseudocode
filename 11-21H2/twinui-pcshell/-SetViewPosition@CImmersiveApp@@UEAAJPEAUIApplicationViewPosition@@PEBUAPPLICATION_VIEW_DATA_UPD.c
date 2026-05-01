/*
 * XREFs of ?SetViewPosition@CImmersiveApp@@UEAAJPEAUIApplicationViewPosition@@PEBUAPPLICATION_VIEW_DATA_UPDATE@@PEAUIApplicationViewTitlebarConfiguration@@W4SET_IMM_APP_POS@@W4SESSION_IDLE_STATE@@PEAPEAXPEAUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@W4APPLICATION_VIEW_CLOAK_TYPE@@W4ZBID@@@Z @ 0x180076880
 * Callers:
 *     <none>
 * Callees:
 *     ??1Completer@?$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ @ 0x180017530 (--1Completer@-$static_lazy@VDelayAllocateTLSLogging@@@details@wil@@QEAA@XZ.c)
 *     ?_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@W4PROCESS_HIDE_OPTION_HOW@1@@Z @ 0x1800212CC (-_SetPos_HideApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x18002E340 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@_N@Z @ 0x180039C18 (-_SetPos_ShowApplication@CImmersiveApp@@AEAAXPEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_.c)
 *     ?ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VIEW_DATA_UPDATE@@@Z @ 0x18003B0AC (-ReconcileApplicationViewState@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUAPPLICATION_VI.c)
 *     ?RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z @ 0x180070364 (-RemoveSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_N@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x180072110 (-reset@-$shared_object@V-$ActivityData@VCAppManagerLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@@Z @ 0x1800746A0 (-IsReportingEnabled@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveMonitor@@PEAUIImmersiveAp.c)
 *     ?_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x1800749B8 (-_AddGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_UpdateApplication@CImmersiveApp@@AEAA?AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4POSITION_APP_WINDOWS@@@Z @ 0x180074BD4 (-_UpdateApplication@CImmersiveApp@@AEAA-AW4UPDATE_APP_RESULT@1@PEAUIApplicationViewPosition@@QEB.c)
 *     ?CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x18007518C (-CanRemoveGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?ComputePAW@@YA?AW4POSITION_APP_WINDOWS@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@_N222@Z @ 0x180076748 (-ComputePAW@@YA-AW4POSITION_APP_WINDOWS@@QEBUAPPLICATION_VIEW_DATA_UPDATE@@W4SET_IMM_APP_POS@@_N.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800767C0 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x1800793C4 (-StartActivity@SetViewPosition@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18007C118 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x1800C6E0C (-HideFrame@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800C6E68 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800F21C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationView.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x1800F2244 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180126700 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18015DFA8 (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     atexit @ 0x18018879C (atexit.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     ?ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core_0000_0325_0001@@W4GHOST_STATUS@@@Z @ 0x180190A58 (-ShowSystemVisual@CImmersiveWindowCollection@CImmersiveApp@@QEAAXW4__MIDL___MIDL_itf_shpriv_core.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z @ 0x1802DEE4C (--$_tlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_tlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ?IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E5814 (-IsOverrideImmuneApplication@CReportWindowVisibilityChange@@QEBA_NPEAUIImmersiveApplicationInter.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardCompareHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@V?$CSimpleArrayStandardMergeHelper@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@@@@@QEAAJ_K0@Z @ 0x1802EF690 (-_EnsureCapacity@-$CTSimpleArray@W4REPORT_VISIBILITY_STATE@CReportWindowVisibilityChange@@$0PPPP.c)
 *     ?SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z @ 0x1803078A0 (-SendVisibilityChanged@CImmersiveWindowCollection@CImmersiveApp@@QEAAX_J@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CImmersiveApp::SetViewPosition(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        __int64 a7,
        _QWORD *a8,
        unsigned int a9,
        int a10)
{
  __int128 *v13; // r14
  __int64 *v14; // rax
  char v15; // r13
  LPCWSTR *v16; // rcx
  struct IApplicationPresentationLayer *v17; // rdx
  unsigned int v18; // edi
  unsigned __int8 v19; // r12
  __int16 v20; // ax
  __int16 v21; // r15
  unsigned int v22; // r12d
  void (__fastcall *v23)(__int64, __int64); // rdi
  __int64 AddressOf; // rax
  PSRWLOCK v25; // rdi
  char *Ptr; // rdx
  _DWORD *v27; // rdx
  unsigned int v28; // edi
  bool IsApplicationWindowGhost; // al
  __int64 v30; // rcx
  int v31; // eax
  unsigned int v32; // eax
  __int128 *v33; // r8
  __int64 v34; // r14
  int updated; // eax
  void (__fastcall *v36)(__int64, __int64); // rdi
  __int64 v37; // rax
  int v38; // edx
  int v39; // r8d
  void (__fastcall *v40)(__int64, __int64); // rdi
  __int64 v41; // rax
  char *v42; // rax
  void *v43; // rbx
  HANDLE ProcessHeap; // rax
  void *v45; // rbx
  HANDLE v46; // rax
  __int64 v47; // rdx
  void (*v48)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // r8
  int v50; // [rsp+20h] [rbp-E0h]
  char v51; // [rsp+30h] [rbp-D0h]
  char v52; // [rsp+30h] [rbp-D0h]
  char v53; // [rsp+30h] [rbp-D0h]
  char v54; // [rsp+31h] [rbp-CFh]
  WINBOOL fPending; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v56; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v58; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  LPINIT_ONCE v60; // [rsp+58h] [rbp-A8h] BYREF
  int v61; // [rsp+60h] [rbp-A0h]
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int128 v63; // [rsp+90h] [rbp-70h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h]
  void **v66; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v67[3]; // [rsp+C8h] [rbp-38h] BYREF
  int v68; // [rsp+E0h] [rbp-20h]
  int *v69; // [rsp+E8h] [rbp-18h]
  int *v70; // [rsp+F0h] [rbp-10h]
  int v71; // [rsp+F8h] [rbp-8h] BYREF
  char v72; // [rsp+FCh] [rbp-4h]
  _BYTE v73[32]; // [rsp+100h] [rbp+0h] BYREF
  int v74; // [rsp+120h] [rbp+20h] BYREF
  const char *v75; // [rsp+128h] [rbp+28h]
  LPVOID v76; // [rsp+130h] [rbp+30h]
  char v77; // [rsp+138h] [rbp+38h]
  __int64 v78; // [rsp+140h] [rbp+40h]
  _BYTE v79[152]; // [rsp+148h] [rbp+48h] BYREF
  _BYTE lpMem[24]; // [rsp+1E0h] [rbp+E0h]
  volatile signed __int32 *v81; // [rsp+1F8h] [rbp+F8h] BYREF
  _OWORD v82[2]; // [rsp+200h] [rbp+100h] BYREF
  __int64 v83; // [rsp+220h] [rbp+120h]
  int v84; // [rsp+228h] [rbp+128h]
  _BYTE v85[8]; // [rsp+260h] [rbp+160h] BYREF
  int v86; // [rsp+268h] [rbp+168h]
  int v87; // [rsp+284h] [rbp+184h]
  int v88; // [rsp+288h] [rbp+188h]
  wil::details::in1diag3 *retaddr; // [rsp+2D8h] [rbp+1D8h]

  v56 = a2;
  v58 = a8;
  v67[0] = 0LL;
  v67[1] = &v66;
  v67[2] = 0LL;
  v68 = 0;
  v69 = &v74;
  v70 = &v71;
  v71 = 0;
  v72 = 0;
  v77 = 0;
  v74 = 0;
  v75 = "SetViewPosition";
  v76 = 0LL;
  v78 = 1LL;
  *(_QWORD *)lpMem = 0LL;
  memset_0(v79, 0, sizeof(v79));
  *(_OWORD *)&lpMem[8] = 0LL;
  v81 = 0LL;
  v66 = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  CImmersiveAppTelemetry::SetViewPosition::StartActivity(
    (CImmersiveAppTelemetry::SetViewPosition *)&v66,
    *(const unsigned __int16 **)(a1 + 472));
  v63 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  if ( a3 )
  {
    v63 = *a3;
    v64 = a3[1];
    v65 = a3[2];
  }
  v13 = (__int128 *)((unsigned __int64)&v63 & -(__int64)(a3 != 0LL));
  if ( (*(int (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)a1 + 344LL))(a1, v82) >= 0 )
  {
    if ( a3 )
    {
      DWORD2(v63) = DWORD2(v82[0]);
      DWORD1(v65) = HIDWORD(v83);
    }
    else
    {
      v63 = v82[0];
      v64 = v82[1];
      *(_QWORD *)&v65 = v83;
      v13 = &v63;
    }
    DWORD2(v65) = v84;
  }
  if ( (a5 & 0xFFFFF000) != 0
    || (a5 & 0x48) == 0x48
    || (a5 & 0x600) == 0x600
    || (a5 & 0x180) == 0x180
    || a9 && ((a9 - 1LL) & a9) != 0
    || (a5 & 0x800) != 0 && (a5 & 2) == 0 )
  {
    v18 = -2147024809;
    goto LABEL_126;
  }
  if ( !*(_BYTE *)(a1 + 616) && ((*(_DWORD *)(a1 + 464) & 1) != 0 || (*(_DWORD *)(a1 + 464) & 8) != 0)
    || (v51 = 1, (a5 & 3) == 0) )
  {
    v51 = 0;
  }
  v62 = a4;
  if ( a4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 8LL))(a4);
  }
  else if ( (a5 & 0x780) != 0 )
  {
    v14 = (__int64 *)Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v59);
    a4 = *v14;
    *v14 = 0LL;
    v60 = 0LL;
    v62 = a4;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v60);
    if ( v59 )
    {
      v59 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>::Release();
    }
    if ( a4 )
    {
      if ( (a5 & 0x180) != 0 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a4 + 24LL))(a4, (a5 >> 7) & 1);
      if ( (a5 & 0x600) != 0 )
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a4 + 40LL))(a4, 1LL, (a5 >> 9) & 1);
    }
  }
  v15 = 0;
  if ( a9 != 2 && v51 )
    goto LABEL_39;
  if ( (a5 & 1) != 0 )
  {
    v16 = (LPCWSTR *)(a1 + 512);
    v17 = *(struct IApplicationPresentationLayer **)(a1 + 328);
    *(_DWORD *)(a1 + 512) &= ~a9;
  }
  else
  {
    if ( (a5 & 2) == 0 )
      goto LABEL_38;
    v16 = (LPCWSTR *)(a1 + 512);
    v17 = *(struct IApplicationPresentationLayer **)(a1 + 328);
    *(_DWORD *)(a1 + 512) |= a9;
  }
  CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer(v16, v17);
LABEL_38:
  if ( !v51 )
  {
    fPending = 0;
    if ( !*(_BYTE *)(a1 + 376) || *(_BYTE *)(a1 + 377) )
    {
      v19 = 0;
      if ( (a5 & 2) != 0 )
      {
        v54 = 1;
        if ( a9 )
        {
LABEL_46:
          if ( a6 != 1
            || (v52 = 1,
                CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                  (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                  (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64)))) )
          {
            v52 = 0;
          }
          if ( *(_DWORD *)(a1 + 732) != *(_DWORD *)(a1 + 716)
            || *(_DWORD *)(a1 + 736) != *(_DWORD *)(a1 + 720)
            || *(_DWORD *)(a1 + 740) != *(_DWORD *)(a1 + 724)
            || *(_DWORD *)(a1 + 744) != *(_DWORD *)(a1 + 728)
            || *(_DWORD *)(a1 + 764) != *(_DWORD *)(a1 + 748)
            || *(_DWORD *)(a1 + 768) != *(_DWORD *)(a1 + 752)
            || *(_DWORD *)(a1 + 772) != *(_DWORD *)(a1 + 756)
            || *(_DWORD *)(a1 + 776) != *(_DWORD *)(a1 + 760) )
          {
            v15 = 1;
          }
          *(_QWORD *)(a1 + 732) = *(_QWORD *)(a1 + 716);
          *(_QWORD *)(a1 + 740) = *(_QWORD *)(a1 + 724);
          *(_QWORD *)(a1 + 764) = *(_QWORD *)(a1 + 748);
          *(_QWORD *)(a1 + 772) = *(_QWORD *)(a1 + 756);
          if ( v15 )
          {
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 296LL))(*(_QWORD *)(a1 + 328));
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 304LL))(
              *(_QWORD *)(a1 + 328),
              *(_QWORD *)(a1 + 748),
              *(_QWORD *)(a1 + 756));
          }
          v20 = a5 & (v19 - 3);
          if ( ((unsigned __int8)a5 & (unsigned __int8)(v19 - 3) & 1) != 0 && *(_DWORD *)(a1 + 512) )
            v20 &= ~1u;
          if ( v19 )
          {
            if ( (v20 & 2) == 0 )
              goto LABEL_67;
          }
          else if ( (v20 & 1) != 0 )
          {
LABEL_67:
            v20 &= 0xFFF3u;
          }
          v21 = v20 & 0xFFFB;
          if ( !v52 )
            v21 = v20;
          v22 = ComputePAW((__int64)v13, v21, v56 != 0, v19, v52, v15);
          Context = 0LL;
          v23 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL);
          AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&Context);
          v23(a1, AddressOf);
          if ( (v22 & 1) == 0
            || CReportWindowVisibilityChange::IsReportingEnabled(
                 (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                 (struct IUnknown *)Context,
                 (struct IUnknown *)(a1 & -(__int64)(a1 != 112))) )
          {
            v53 = 0;
          }
          else
          {
            v53 = 1;
            v25 = CApplicationManagerUtility::g_pIAMGlobals;
            Ptr = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
            if ( Ptr != CApplicationManagerUtility::g_pIAMGlobals[4].Ptr
              || (int)CTSimpleArray<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE,4294967294,CTPolicyCoTaskMem<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardCompareHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>,CSimpleArrayStandardMergeHelper<enum CReportWindowVisibilityChange::REPORT_VISIBILITY_STATE>>::_EnsureCapacity(
                        &CApplicationManagerUtility::g_pIAMGlobals[1],
                        Ptr + 1) >= 0 )
            {
              v27 = (char *)v25[1].Ptr + 4 * (__int64)v25[2].Ptr++;
              if ( v27 )
                *v27 = 1;
            }
          }
          if ( *(_QWORD *)(a1 + 352) && (v21 & 1) != 0 )
          {
            v28 = 0;
            if ( a6 == 1
              && !CReportWindowVisibilityChange::IsOverrideImmuneApplication(
                    (CReportWindowVisibilityChange *)&CApplicationManagerUtility::g_pIAMGlobals[1],
                    (struct IImmersiveApplicationInternal *)(a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 - 112) >> 64))) )
            {
              v28 = 2;
            }
            IsApplicationWindowGhost = CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
            v30 = a1 + 176;
            if ( IsApplicationWindowGhost )
              CImmersiveApp::CImmersiveWindowCollection::_AddGhostStatus(v30, v28);
            else
              CImmersiveApp::CImmersiveWindowCollection::ShowSystemVisual(v30, 0LL, v28);
          }
          if ( v58 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 328) + 152LL))(*(_QWORD *)(a1 + 328), *v58);
            if ( v13 )
            {
              v31 = CImmersiveApp::CImmersiveWindowCollection::ReconcileApplicationViewState(
                      (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                      (struct APPLICATION_VIEW_DATA_UPDATE *)v85);
              if ( v31 >= 0 )
              {
                *((_DWORD *)v13 + 2) = v86;
                *((_DWORD *)v13 + 9) = v87;
                *((_DWORD *)v13 + 10) = v88;
              }
              else
              {
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x158B,
                  (unsigned int)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
                  (const char *)(unsigned int)v31,
                  v50);
              }
            }
          }
          if ( a4 )
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 328) + 168LL))(*(_QWORD *)(a1 + 328), a4);
          if ( (v21 & 3) != 0 )
          {
            if ( (v21 & 1) != 0 )
            {
              CImmersiveApp::_SetPos_ShowApplication(a1 - 112, v56, (__int64)v13, v22, v53);
            }
            else
            {
              v32 = 0;
              if ( (v21 & 4) != 0 )
                v32 = (v53 != 0) + 1;
              CImmersiveApp::_SetPos_HideApplication(a1 - 112, v56, (__int64)v13, v22, v32);
            }
            LOBYTE(v22) = 0;
          }
          if ( v54 && *(_BYTE *)(a1 + 376) )
          {
            *(_BYTE *)(a1 + 376) = 0;
            CImmersiveApp::CImmersiveWindowCollection::HideFrame((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
          }
          if ( (v21 & 0x800) != 0 )
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 600LL))(a1, 0LL);
          if ( (v22 & 3) != 0 )
          {
            v33 = v13;
            v34 = v56;
            updated = CImmersiveApp::_UpdateApplication(a1 - 112, v56, v33, v22);
            if ( v53 && updated == 1 )
            {
              v56 = 0LL;
              v36 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL);
              v37 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v56);
              v36(a1, v37);
              CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                9LL);
              CImmersiveApp::CImmersiveWindowCollection::SendVisibilityChanged(
                (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                10LL);
              Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
            }
          }
          else
          {
            v34 = v56;
          }
          if ( (v22 & 8) != 0 )
            (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 328) + 112LL))(*(_QWORD *)(a1 + 328), v34);
          if ( a10 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 256LL))(*(_QWORD *)(a1 + 328));
          if ( (*(_BYTE *)(a1 + 464) & 1) != 0
            && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 328) + 56LL))(*(_QWORD *)(a1 + 328))
            && CImmersiveApp::CImmersiveWindowCollection::CanRemoveGhost(
                 (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176),
                 v38,
                 v39) )
          {
            CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual((CImmersiveApp::CImmersiveWindowCollection *)(a1 + 176));
          }
          if ( v53 )
          {
            v58 = 0LL;
            v40 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 464LL);
            v41 = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(&v58);
            v40(a1, v41);
            v42 = (char *)CApplicationManagerUtility::g_pIAMGlobals[2].Ptr;
            if ( v42 )
              CApplicationManagerUtility::g_pIAMGlobals[2].Ptr = v42 - 1;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v58);
          }
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&Context);
          v18 = fPending;
          goto LABEL_122;
        }
      }
    }
    else
    {
      v19 = 1;
    }
    v54 = 0;
    goto LABEL_46;
  }
LABEL_39:
  v18 = -2147019873;
LABEL_122:
  if ( a4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a4 + 16LL))(a4);
LABEL_126:
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(&v66, v18);
  v66 = &CImmersiveAppTelemetry::SetViewPosition::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v66);
  wil::details::shared_object<wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<CAppManagerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(&v81);
  if ( *(_QWORD *)lpMem )
  {
    if ( _InterlockedExchangeAdd(*(volatile signed __int32 **)lpMem, 0xFFFFFFFF) == 1 )
    {
      v43 = *(void **)lpMem;
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v43);
    }
    *(_OWORD *)lpMem = 0LL;
  }
  if ( v77 )
  {
    v45 = v76;
    v46 = GetProcessHeap();
    HeapFree(v46, 0, v45);
    v77 = 0;
  }
  v76 = 0LL;
  if ( v71 == 1 )
  {
    v71 = 2;
    Context = 0LL;
    if ( __std_init_once_begin_initialize(&`CAppManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
      && fPending )
    {
      v60 = &`CAppManagerLogging::Instance'::`2'::wrapper;
      Context = &qword_1807B3D58;
      qword_1807B3D58 = (__int64)&ShellScreenClippingLogging::`vftable';
      qword_1807B3D70 = (__int64)&`CAppManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
      atexit(_lambda_cadbad287469a7d6ee344248b165db13_::_lambda_invoker_cdecl_);
      v61 = 0;
      wil::details::static_lazy<DelayAllocateTLSLogging>::Completer::~Completer(&v60, v47, v48);
    }
    _tlgWriteActivityAutoStop<0,5>(*((_QWORD *)Context + 1), v73);
  }
  v71 = 3;
  if ( v68 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v67);
  return v18;
}
