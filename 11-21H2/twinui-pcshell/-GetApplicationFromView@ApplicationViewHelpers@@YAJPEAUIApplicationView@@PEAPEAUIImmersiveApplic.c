/*
 * XREFs of ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180098FE0
 * Callers:
 *     ?GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180098D74 (-GetCoreWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z @ 0x180098E54 (-_IsViewManaged@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEA_N@Z.c)
 *     ?DelayedInitialization@CAppViewManager@@UEAAJXZ @ 0x1800D8540 (-DelayedInitialization@CAppViewManager@@UEAAJXZ.c)
 *     ?TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAAIPEAUHWND__@@PEAUIApplicationView@@_N@Z @ 0x180155C98 (-TryGetProcessIdForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ?CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z @ 0x1803D62F8 (-CloseView@PeoplePaneViewManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1804ED660 (-InitializePosition@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresenta.c)
 *     ?_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1804ED95C (-_GetMonitorForLaunch@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIImmersiveMonitor@.c)
 *     ?_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804EE60C (-_SetPositionerMonitor@SurfaceHubPositioner@@CAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1804F1CA4 (-SetPositionerMonitor@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ?_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804FCE30 (-_GetLaunchPositionForPeoplePane@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicat.c)
 *     ?GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180538330 (-GetApplication@CDropFeedbackItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x1805EFA6C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 *     ?GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180618F50 (-GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18061A1B0 (-GetApp@CAppLayoutOperationItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 * Callees:
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ApplicationViewHelpers::GetApplicationFromView(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64),
        struct IApplicationView *a2,
        struct IImmersiveApplication **a3)
{
  __int64 (__fastcall **v4)(ApplicationViewHelpers *, GUID *, __int64); // rax
  __int64 (__fastcall *v6)(ApplicationViewHelpers *, GUID *, __int64); // rdi
  __int64 v7; // rbx
  int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 v13; // [rsp+48h] [rbp+10h] BYREF

  *(_QWORD *)a2 = 0LL;
  v4 = *this;
  v12 = 0LL;
  v6 = *v4;
  v7 = *Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v12, &v13);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v7);
  v8 = v6((ApplicationViewHelpers *)this, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v7);
  if ( v8 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct IApplicationView *))(*(_QWORD *)v12 + 24LL))(v12, a2);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x6B,
        (__int64)"shell\\twinui\\applicationviewhelper\\applicationviewhelpers.cpp",
        (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  return (unsigned int)v8;
}
