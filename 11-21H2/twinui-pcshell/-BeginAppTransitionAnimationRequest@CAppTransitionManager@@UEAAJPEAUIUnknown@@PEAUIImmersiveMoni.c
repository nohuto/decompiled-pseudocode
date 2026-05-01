/*
 * XREFs of ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DF460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E02BC (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z @ 0x1804E039C (-_BeginDWMTransitionRequest@CAppTransitionManager@@AEAAJKPEBU_GUID@@@Z.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1804E03DC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z @ 0x1804E0478 (-_EndDWMTransitionRequest@CAppTransitionManager@@AEAAJ_N@Z.c)
 *     ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E05C4 (-_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z @ 0x1804E0750 (-_ExcludeVisualType@CAppTransitionManager@@AEAAXW4TEMPORARY_APP_VISUAL_TYPE@@@Z.c)
 *     ?_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z @ 0x1804E0870 (-_FindPlaceModeVisual@CAppTransitionManager@@AEBAJPEAPEAUITemporaryAppVisual@@@Z.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x1804E0BDC (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 *     ?_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E1108 (-_TagApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E14D4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 *     ?_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ @ 0x1804E173C (-_TagPlaceVisual@CAppTransitionManager@@AEAAJXZ.c)
 *     ?s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOperation@@@Z @ 0x1804E1A8C (-s_GetImmediateStoryboardIDForAppArrangementAnimation@CAppTransitionManager@@CAKPEAUIAppLayoutOp.c)
 *     ?s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@PEAU_GUID@@1@Z @ 0x1804E1BFC (-s_GetScenarioGUIDForAppArrangementAnimation@CAppTransitionManager@@CAXPEAUIAppLayoutOperation@@.c)
 */

__int64 __fastcall CAppTransitionManager::BeginAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  int v9; // eax
  struct IUnknownVtbl *lpVtbl; // rdx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  char v16; // r14
  char v17; // r15
  unsigned int ImmediateStoryboardIDForAppArrangementAnimation; // ebx
  struct _GUID *v19; // r8
  CAppTransitionManager *v20; // rcx
  struct ITemporaryAppVisual **v21; // rdx
  CAppTransitionManager *v22; // rcx
  CAppTransitionManager *v23; // rcx
  struct IAppLayoutOperation *v24; // rcx
  struct IAppLayoutOperation *v25; // [rsp+30h] [rbp-48h] BYREF
  int v26; // [rsp+38h] [rbp-40h] BYREF
  int v27; // [rsp+3Ch] [rbp-3Ch]
  struct _GUID v28; // [rsp+40h] [rbp-38h] BYREF
  struct _GUID v29; // [rsp+50h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle((CAppTransitionManager *)((char *)this - 88)) )
    return 0LL;
  v9 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(
         ((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88),
         1);
  lpVtbl = a2->lpVtbl;
  v25 = 0LL;
  v27 = v9;
  v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IAppLayoutOperation **))lpVtbl->QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v25);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v13 = CAppTransitionManager::_BeginAnimationStage((char *)this - 88, 2LL, v25, a3, a4);
    v12 = v13;
    if ( v13 < 0 )
    {
      v14 = 230LL;
LABEL_11:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
        (const char *)(unsigned int)v13);
      goto LABEL_41;
    }
    if ( !*((_BYTE *)this + 194) )
      goto LABEL_37;
    v13 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, int *))(*(_QWORD *)v25 + 24LL))(v25, &v26);
    v12 = v13;
    if ( v13 < 0 )
    {
      v14 = 235LL;
      goto LABEL_11;
    }
    if ( !v26 )
    {
LABEL_37:
      if ( *((_DWORD *)this + 51) == 2 )
        CAppTransitionManager::_ClearAnimationPassState((CAppTransitionManager *)((char *)this - 88));
      v12 = -2147019873;
      if ( *((_DWORD *)this + 53) )
        v12 = 0;
      goto LABEL_41;
    }
    v15 = *((_DWORD *)this + 49);
    if ( v15 == 2 )
    {
      v16 = 1;
    }
    else
    {
      v16 = 0;
      if ( v15 != 3 )
      {
        v17 = 1;
        if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v25 + 80LL))(v25) & 0x200000) == 0 )
        {
LABEL_18:
          ImmediateStoryboardIDForAppArrangementAnimation = CAppTransitionManager::s_GetImmediateStoryboardIDForAppArrangementAnimation(v25);
          CAppTransitionManager::s_GetScenarioGUIDForAppArrangementAnimation(v25, &v28, &v29);
          if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v25 + 80LL))(v25) & 0x400000) != 0 )
          {
            if ( v17 )
              goto LABEL_28;
          }
          else
          {
            v19 = &v28;
            if ( v16 )
              v19 = 0LL;
            v12 = CAppTransitionManager::_BeginDWMTransitionRequest(
                    (CAppTransitionManager *)((char *)this - 88),
                    ImmediateStoryboardIDForAppArrangementAnimation,
                    v19);
            if ( v12 < 0 )
              goto LABEL_41;
            if ( !v16 && !*((_BYTE *)this + 193) )
            {
              CAppTransitionManager::_TagDividerBitmap(v20, v25);
              CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
            }
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 4LL);
            CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 2LL);
            CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v25);
            if ( v17 )
            {
              CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 0);
LABEL_28:
              v12 = CAppTransitionManager::_BeginDWMTransitionRequest(
                      (CAppTransitionManager *)((char *)this - 88),
                      0x44u,
                      &v29);
              if ( v12 < 0 )
                goto LABEL_41;
              if ( (*((_BYTE *)this + 200) & 4) != 0
                && (int)CAppTransitionManager::_FindPlaceModeVisual((CAppTransitionManager *)((char *)this - 88), v21) >= 0 )
              {
                CAppTransitionManager::_TagPlaceVisual((CAppTransitionManager *)((char *)this - 88));
                CAppTransitionManager::_ExcludeAllPresentedApps(v23, v25);
              }
              else
              {
                CAppTransitionManager::_TagDividerBitmap(v22, v25);
                CAppTransitionManager::_ExcludeVisualType((char *)this - 88, 7LL);
                CAppTransitionManager::_TagApps((CAppTransitionManager *)((char *)this - 88), v25);
              }
              if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v25 + 80LL))(v25) & 0x400000) != 0 )
                CAppTransitionManager::_EndDWMTransitionRequest((CAppTransitionManager *)((char *)this - 88), 1);
            }
          }
          if ( !v16 )
            DwmFlush();
          goto LABEL_37;
        }
      }
    }
    v17 = 0;
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xE4,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v11);
LABEL_41:
  v24 = v25;
  if ( v25 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v24 + 16LL))(v24);
  }
  if ( v27 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)this + 32) & -(__int64)(this != (CAppTransitionManager *)88)));
  return (unsigned int)v12;
}
