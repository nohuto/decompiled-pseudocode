/*
 * XREFs of ?PrepareForAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804DFFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x1800C27AC (-IsPPIEdition@@YA_NXZ.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180141840 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z @ 0x1804DFB8C (-IsLayoutOperationCrossFadeOnly@CAppTransitionManager@@AEAA_NPEAUIAppLayoutOperationItem@@@Z.c)
 *     ?PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@@PEAUIAppLayout@@1@Z @ 0x1804DFDFC (-PrepareAppLayoutOperationForTransition@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperationItem@.c)
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E02BC (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 *     ?_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ @ 0x1804E03DC (-_ClearAnimationPassState@CAppTransitionManager@@AEAAXXZ.c)
 *     ?_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ @ 0x1804E0BDC (-_IsImmersiveShellIdle@CAppTransitionManager@@AEAA_NXZ.c)
 */

__int64 __fastcall CAppTransitionManager::PrepareForAppTransitionAnimationRequest(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        struct IImmersiveMonitor *a3,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a4)
{
  CAppTransitionManager *v5; // r14
  int v10; // eax
  struct IUnknownVtbl *lpVtbl; // rcx
  int v12; // r15d
  int v13; // eax
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 (__fastcall *v17)(__int64, __int64 *); // rsi
  __int64 *v18; // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64 *); // rsi
  __int64 *v23; // rdi
  char IsLayoutOperationCrossFadeOnly; // si
  unsigned int i; // r15d
  __int64 v26; // rbx
  int (__fastcall *v27)(__int64, _QWORD, GUID *, struct IAppLayoutOperationItem **); // rdi
  int v28; // eax
  __int64 v29; // rcx
  unsigned int v30; // [rsp+30h] [rbp-30h] BYREF
  int v31; // [rsp+34h] [rbp-2Ch]
  __int64 v32; // [rsp+38h] [rbp-28h] BYREF
  struct IAppLayoutOperationItem *v33; // [rsp+40h] [rbp-20h] BYREF
  struct IAppLayout *v34; // [rsp+48h] [rbp-18h] BYREF
  struct IAppLayout *v35[2]; // [rsp+50h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]

  v5 = (CAppTransitionManager *)((char *)this - 88);
  if ( IsPPIEdition() && CAppTransitionManager::_IsImmersiveShellIdle(v5) )
    return 0LL;
  v10 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(((unsigned __int64)this + 32) & -(__int64)(v5 != 0LL), 1);
  lpVtbl = a2->lpVtbl;
  v12 = v10;
  v32 = 0LL;
  v31 = v10;
  v13 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
          a2,
          &GUID_c28f3b94_b47f_4211_8f2c_88d0b2d975bb,
          &v32);
  v14 = v13;
  if ( v13 >= 0 )
  {
    v13 = CAppTransitionManager::_BeginAnimationStage(v5, 1LL, v32, a3, a4);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 81LL;
      goto LABEL_10;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v32 + 24LL))(v32, &v30);
    v14 = v13;
    if ( v13 < 0 )
    {
      v15 = 84LL;
      goto LABEL_10;
    }
    v16 = v32;
    v35[0] = 0LL;
    v34 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 40LL);
    v18 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)v35, &v33);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v18);
    v19 = v17(v16, v18);
    v14 = v19;
    if ( v19 >= 0 )
    {
      v21 = v32;
      v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL);
      v23 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v34, &v33);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v23);
      v19 = v22(v21, v23);
      v14 = v19;
      if ( v19 >= 0 )
      {
        IsLayoutOperationCrossFadeOnly = *((_DWORD *)this + 49) == 1;
        for ( i = 0; i < v30; ++i )
        {
          v26 = v32;
          v33 = 0LL;
          v27 = *(int (__fastcall **)(__int64, _QWORD, GUID *, struct IAppLayoutOperationItem **))(*(_QWORD *)v32 + 32LL);
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v33);
          if ( v27(v26, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v33) >= 0 )
          {
            v28 = CAppTransitionManager::PrepareAppLayoutOperationForTransition(v5, v33, v35[0], v34);
            if ( v28 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x63,
                (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v28);
            if ( IsLayoutOperationCrossFadeOnly )
              IsLayoutOperationCrossFadeOnly = CAppTransitionManager::IsLayoutOperationCrossFadeOnly(v5, v33);
          }
          Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v33);
        }
        if ( IsLayoutOperationCrossFadeOnly )
          *((_BYTE *)this + 194) = 0;
        if ( *((_DWORD *)v5 + 73) == 2 )
          CAppTransitionManager::_ClearAnimationPassState(v5);
        v12 = v31;
        v14 = 0;
        goto LABEL_28;
      }
      v20 = 89LL;
    }
    else
    {
      v20 = 88LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v19);
LABEL_28:
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)v35);
    goto LABEL_29;
  }
  v15 = 79LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_29:
  v29 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  }
  if ( v12 >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(((unsigned __int64)this + 32) & -(__int64)(v5 != 0LL)));
  return v14;
}
