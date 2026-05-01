/*
 * XREFs of ?_ExcludeAllPresentedApps@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180598494
 * Callers:
 *     ?BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1805972D0 (-BeginAppTransitionAnimationRequest@CAppTransitionManager@@UEAAJPEAUIUnknown@@PEAUIImmersiveMoni.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1801B3C50 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::_ExcludeAllPresentedApps(
        CAppTransitionManager *this,
        struct IAppLayoutOperation *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // r14d
  __int64 v7; // rax
  int (__fastcall *v8)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *); // rbx
  __int64 v9; // rbx
  int (__fastcall *v10)(__int64, GUID *, __int64 *); // rsi
  __int64 *v11; // rdi
  struct IApplicationView *v12; // rdx
  __int64 WindowForView; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  CAppTransitionManager *v16; // [rsp+70h] [rbp+38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+40h] BYREF
  ApplicationViewHelpers *v18; // [rsp+80h] [rbp+48h] BYREF
  __int64 v19; // [rsp+88h] [rbp+50h] BYREF

  v16 = this;
  v3 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, CAppTransitionManager **))(*(_QWORD *)a2 + 24LL))(
         a2,
         &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    for ( i = 0; i < (unsigned int)v16; ++i )
    {
      v7 = *(_QWORD *)a2;
      v17 = 0LL;
      v8 = *(int (__fastcall **)(struct IAppLayoutOperation *, _QWORD, GUID *, __int64 *))(v7 + 32);
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
      if ( v8(a2, i, &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e, &v17) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v17 + 88LL))(v17) )
      {
        v9 = v17;
        v18 = 0LL;
        v10 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v17 + 32LL);
        v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v18, &v19);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v11);
        if ( v10(v9, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v11) >= 0 )
        {
          WindowForView = ApplicationViewHelpers::GetWindowForView(
                            (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v18,
                            v12);
          if ( WindowForView )
          {
            v14 = DwmpTransitionWindow(WindowForView, 43LL);
            if ( v14 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x1CA,
                (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                (const char *)(unsigned int)v14);
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v18);
      }
      Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v17);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1B9,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
}
