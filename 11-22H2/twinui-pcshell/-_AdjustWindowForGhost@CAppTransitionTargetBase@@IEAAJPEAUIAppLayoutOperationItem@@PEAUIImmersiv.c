/*
 * XREFs of ?_AdjustWindowForGhost@CAppTransitionTargetBase@@IEAAJPEAUIAppLayoutOperationItem@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@PEA_N@Z @ 0x18059B3D8
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059A9B0 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 *     ?PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x18059AD90 (-PrepareTaggingInfoForApp@CLauncherAndDefaultSwitchTransitionTarget@@UEAAJPEAUIAppLayoutOperatio.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800CA970 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionTargetBase::_AdjustWindowForGhost(
        CAppTransitionTargetBase *this,
        struct IAppLayoutOperationItem *a2,
        struct IImmersiveApplicationManagerSafeForSyncCallouts *a3,
        bool *a4)
{
  __int64 v7; // rax
  __int64 (__fastcall *v8)(struct IAppLayoutOperationItem *, GUID *, __int64 *); // rdi
  __int64 *v9; // rbx
  int v10; // eax
  unsigned int v11; // ebx
  struct IApplicationView *v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+48h] [rbp+10h] BYREF
  ApplicationViewHelpers *v16; // [rsp+50h] [rbp+18h] BYREF

  v16 = a3;
  if ( a4 )
    *a4 = 0;
  v7 = *(_QWORD *)a2;
  v16 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(v7 + 32);
  v9 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v15);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v9);
  v10 = v8(a2, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( *((_DWORD *)this + 10) != 4095 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(CAppTransitionTargetBase *, struct IAppLayoutOperationItem *))(*(_QWORD *)this + 80LL))(
             this,
             a2) )
      {
        *((_QWORD *)this + 7) = ApplicationViewHelpers::GetWindowForView(
                                  (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64))v16,
                                  v12);
        *((_DWORD *)this + 11) = *((_DWORD *)this + 11) & 0xDBBFFFFF | 0x4400000;
        if ( a4 )
          *a4 = 1;
      }
    }
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF0,
      (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitiontargetmanager.cpp",
      (const char *)(unsigned int)v10);
  }
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v16);
  return v11;
}
