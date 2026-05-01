/*
 * XREFs of ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsPPIEdition@@YA_NXZ @ 0x18009FF88 (-IsPPIEdition@@YA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18014E10C (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     _lambda_56ff75d53a674537046b1a84eafe37dc_::operator() @ 0x180597200 (_lambda_56ff75d53a674537046b1a84eafe37dc_--operator().c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059818C (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x18059826C (-_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1805982AC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x180598348 (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180598494 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x180598620 (-_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z.c)
 *     ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x180598740 (-_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x180598AA8 (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180598FD4 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1805993A0 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x18059960C (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOperation@@@Z @ 0x18059995C (-s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOp.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x180599ABC (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 */

__int64 __fastcall CAppTransitionManager::BeginAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  char *v8; // rbx
  bool v9; // r12
  int v11; // eax
  struct IUnknownVtbl *lpVtbl; // rdx
  int v13; // eax
  int v14; // edi
  __int64 v15; // rdx
  int v16; // eax
  char v17; // r14
  char v18; // r15
  unsigned int ImmediateStoryboardIDForAppArrangementAnimation; // edi
  struct _GUID *v20; // r8
  CAppTransitionManager *v21; // rcx
  struct ITemporaryAppVisual **v22; // rdx
  CAppTransitionManager *v23; // rcx
  CAppTransitionManager *v24; // rcx
  struct IAppLayoutOperation *v25; // rcx
  struct IAppLayoutOperation *v26; // [rsp+30h] [rbp-39h] BYREF
  int v27; // [rsp+38h] [rbp-31h] BYREF
  int v28; // [rsp+3Ch] [rbp-2Dh]
  struct IAppLayoutOperation **v29; // [rsp+40h] [rbp-29h] BYREF
  bool v30; // [rsp+48h] [rbp-21h]
  struct _GUID v31; // [rsp+50h] [rbp-19h] BYREF
  struct _GUID v32; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v8 = (char *)this - 88;
  v9 = IsPPIEdition();
  if ( v9 && CAppTransitionManager::_IsImmersiveShellIdle((CAppTransitionManager *)((char *)this - 88)) )
    return 0LL;
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(
          ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88),
          1);
  lpVtbl = a2->lpVtbl;
  v26 = 0LL;
  v28 = v11;
  v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))lpVtbl->QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v26);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v13 = CAppTransitionManager::_BeginAnimationStage((char *)this - 88, 2LL, v26, a3, a4);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 233LL;
      goto LABEL_11;
    }
    if ( !*((_BYTE *)this + 194) )
      goto LABEL_42;
    v13 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, int *))(*(_QWORD *)v26 + 24LL))(v26, &v27);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 238LL;
      goto LABEL_11;
    }
    if ( !v27 )
    {
LABEL_42:
      if ( *((_DWORD *)v8 + 73) == 2 )
        CAppTransitionManager::_ClearAnimationPassState((CAppTransitionManager *)((char *)this - 88));
      v14 = -2147019873;
      if ( *((_DWORD *)this + 53) )
        v14 = 0;
      goto LABEL_46;
    }
    v16 = *((_DWORD *)this + 49);
    if ( v16 == 2 )
    {
      v17 = 1;
    }
    else
    {
      v17 = 0;
      if ( v16 != 3
        && ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v26 + 80LL))(v26) & 0x200000) == 0 )
      {
        v18 = 1;
LABEL_16:
        ImmediateStoryboardIDForAppArrangementAnimation = CAppTransitionManager::s_GetImmediateStoryboardIDForAppArrangementAnimation(v26);
        CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(v26, &v31, &v32);
        v29 = &v26;
        v30 = v9;
        if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v26 + 80LL))(v26) & 0x400000) != 0 )
        {
          if ( v18 )
            goto LABEL_31;
        }
        else
        {
          v20 = &v31;
          if ( v17 )
            v20 = 0LL;
          v14 = CAppTransitionManager::_BeginDWMTransitionRequest(
                  (CAppTransitionManager *)((char *)this - 88),
                  ImmediateStoryboardIDForAppArrangementAnimation,
                  v20);
          if ( v14 < 0 )
            goto LABEL_46;
          if ( !v17 && !*((_BYTE *)this + 193) )
          {
            if ( !lambda_56ff75d53a674537046b1a84eafe37dc_::operator()(&v29) )
              CAppTransitionManager::_TagDividerBitmap(v21, v26);
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
          }
          CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 4LL);
          CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 2LL);
          CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v26);
          if ( v18 )
          {
            CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 0);
LABEL_31:
            v14 = CAppTransitionManager::_BeginDWMTransitionRequest(
                    (CAppTransitionManager *)((char *)this - 88),
                    0x44u,
                    &v32);
            if ( v14 < 0 )
              goto LABEL_46;
            if ( (*((_BYTE *)this + 200) & 4) != 0
              && (int)CAppTransitionManager::_FindPlaceModeVisual((CAppTransitionManager *)((char *)this - 88), v22) >= 0 )
            {
              CAppTransitionManager::_TagPlaceVisual((CAppTransitionManager *)((char *)this - 88));
              CAppTransitionManager::_ExcludeAllPresentedApps(v23, v26);
            }
            else
            {
              if ( !lambda_56ff75d53a674537046b1a84eafe37dc_::operator()(&v29) )
                CAppTransitionManager::_TagDividerBitmap(v24, v26);
              CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
              CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v26);
            }
            if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v26 + 80LL))(v26) & 0x400000) != 0 )
              CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 1);
          }
        }
        if ( !v17 )
          DwmFlush();
        goto LABEL_42;
      }
    }
    v18 = 0;
    goto LABEL_16;
  }
  v15 = 231LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_46:
  v25 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v25 + 16LL))(v25);
  }
  if ( v28 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)this + 32) & -(__int64)(v8 != 0LL)));
  return (unsigned int)v14;
}
