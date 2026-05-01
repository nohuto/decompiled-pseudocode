/*
 * XREFs of ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180598838
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059818C (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1805978F8 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ @ 0x180598A1C (-_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ.c)
 *     ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x180599E14 (-s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA-AW4AppArrangementSpecialTran.c)
 */

void __fastcall CAppTransitionManager::_InitAnimationPassState(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3)
{
  __int64 *v6; // rbx
  __int64 v7; // rcx
  void (__fastcall *v8)(struct IAppLayoutOperation *, char *); // rbp
  bool IsFullscreenDesktopWindowForeground; // al
  IUnknown *v10; // rcx
  bool *v11; // r9
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  if ( *((struct IImmersiveApplicationManagerSafeForSyncCallouts **)this + 25) != a3 )
  {
    if ( a3 )
      (*(void (__fastcall **)(struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)a3 + 8LL))(a3);
    v13 = *((_QWORD *)this + 25);
    *((_QWORD *)this + 25) = a3;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
  }
  v12 = 0LL;
  v6 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v12, &v13);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v6);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 22),
         (const GUID *const)&SID_ImmersiveLayout,
         &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
         (void **)v6) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v12 + 56LL))(v12, 10LL, (char *)this + 264);
  v7 = *((_QWORD *)this + 26);
  v8 = *(void (__fastcall **)(struct IAppLayoutOperation *, char *))(*(_QWORD *)a2 + 72LL);
  if ( v7 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v8(a2, (char *)this + 208);
  IsFullscreenDesktopWindowForeground = CAppTransitionManager::_IsFullscreenDesktopWindowForeground(this);
  v10 = (IUnknown *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 280) = IsFullscreenDesktopWindowForeground;
  ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(v10, 0LL, (CAppTransitionManager *)((char *)this + 281), v11);
  if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x100000) != 0 )
  {
    *((_DWORD *)this + 71) = 0;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x10000) != 0 )
  {
    *((_DWORD *)this + 72) = CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(a2);
    *((_DWORD *)this + 71) = 1;
  }
  else if ( ((*(__int64 (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)a2 + 80LL))(a2) & 0x1020000) != 0 )
  {
    *((_DWORD *)this + 71) = 2;
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v12);
}
