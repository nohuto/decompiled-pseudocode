/*
 * XREFs of ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E0968
 * Callers:
 *     ?_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1804E02BC (-_BeginAnimationStage@CAppTransitionManager@@AEAAJW4AnimationPassStage@@PEAUIAppLayoutOperation@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@PEA_N@Z @ 0x1804DFA28 (-IsLauncherVisibleOnMonitor@ImmersiveMultimonHelpers@@YAJPEAUIUnknown@@PEAUIImmersiveLauncher@@P.c)
 *     ?_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ @ 0x1804E0B50 (-_IsFullscreenDesktopWindowForeground@CAppTransitionManager@@AEBA_NXZ.c)
 *     ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x1804E1F4C (-s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA-AW4AppArrangementSpecialTran.c)
 */

void __fastcall CAppTransitionManager::_InitAnimationPassState(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3)
{
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v3; // rax
  __int64 *v7; // rbx
  __int64 v8; // rcx
  void (__fastcall *v9)(struct IAppLayoutOperation *, char *); // rbp
  bool IsFullscreenDesktopWindowForeground; // al
  IUnknown *v11; // rcx
  bool *v12; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  struct IImmersiveApplicationManagerSafeForSyncCallouts *v14; // [rsp+48h] [rbp+10h] BYREF

  v3 = (struct IImmersiveApplicationManagerSafeForSyncCallouts *)*((_QWORD *)this + 25);
  if ( v3 != a3 )
  {
    if ( a3 )
    {
      (*(void (__fastcall **)(struct IImmersiveApplicationManagerSafeForSyncCallouts *))(*(_QWORD *)a3 + 8LL))(a3);
      v3 = (struct IImmersiveApplicationManagerSafeForSyncCallouts *)*((_QWORD *)this + 25);
    }
    v14 = v3;
    *((_QWORD *)this + 25) = a3;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v14);
  }
  v13 = 0LL;
  v7 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &v14);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v7);
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 22),
         (const GUID *const)&SID_ImmersiveLayout,
         &GUID_d770b2ad_8f5e_4b8e_b3df_f05a2ab5287c,
         (void **)v7) >= 0 )
    (*(void (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v13 + 56LL))(v13, 10LL, (char *)this + 264);
  v8 = *((_QWORD *)this + 26);
  v9 = *(void (__fastcall **)(struct IAppLayoutOperation *, char *))(*(_QWORD *)a2 + 72LL);
  if ( v8 )
  {
    *((_QWORD *)this + 26) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9(a2, (char *)this + 208);
  IsFullscreenDesktopWindowForeground = CAppTransitionManager::_IsFullscreenDesktopWindowForeground(this);
  v11 = (IUnknown *)*((_QWORD *)this + 22);
  *((_BYTE *)this + 280) = IsFullscreenDesktopWindowForeground;
  ImmersiveMultimonHelpers::IsLauncherVisibleOnMonitor(v11, 0LL, (CAppTransitionManager *)((char *)this + 281), v12);
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
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v13);
}
