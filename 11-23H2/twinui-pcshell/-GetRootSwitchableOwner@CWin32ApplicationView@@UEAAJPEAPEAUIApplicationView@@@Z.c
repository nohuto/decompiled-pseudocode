/*
 * XREFs of ?GetRootSwitchableOwner@CWin32ApplicationView@@UEAAJPEAPEAUIApplicationView@@@Z @ 0x1800DF9E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x1800CB660 (-GetViewForHwnd@CApplicationViewManager@@UEAAJPEAUHWND__@@PEAPEAUIApplicationView@@@Z.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___ @ 0x1800E0294 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_ee3e0a0da20eb1cf2fabc.c)
 *     ?Get@?$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA?AV?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@XZ @ 0x1800E0430 (-Get@-$CGlobals@V0ApplicationViewManagement@@@GlobalsUtility@@SA-AV-$ComPtr@VCGlobals@Applicatio.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImmersiveShellComponentWithGITSite@@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIApplicationViewCollectionManagement@@UIApplicationViewCollection@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIApplicationViewCollectionTestHook@@UIApplicationViewSwitcher@@UIApplicationViewFlashingNotification@@UIWindowManagementConstraintsEvents@@UIImmersiveApplicationNotification@@UIEnterpriseIdChangeNotification@@UIApplicationViewStateControl@@UIWindowOccludedChangeListener@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801330E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCImm.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ @ 0x1801662E0 (-InternalRelease@-$ComPtr@VCGlobals@ApplicationViewManagement@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::GetRootSwitchableOwner(
        CWin32ApplicationView *this,
        struct IApplicationView **a2)
{
  __int64 (__fastcall ***v4)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v5)(_QWORD, GUID *, __int64 *); // rdi
  int v6; // eax
  int ViewForHwnd; // edi
  RTL_SRWLOCK *v9; // rbx
  volatile int *v10; // rdx
  RTL_SRWLOCK *v11; // rdi
  RTL_SRWLOCK *v12; // rsi
  __int64 v13; // r8
  RTL_SRWLOCK *v14; // r8
  int v15; // [rsp+20h] [rbp-10h]
  HWND v16; // [rsp+28h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+28h]
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp+40h] BYREF
  __int64 v20; // [rsp+78h] [rbp+48h] BYREF

  *a2 = 0LL;
  v19 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___(&v19);
  v4 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v19;
  if ( v19 )
  {
    v18 = 0LL;
    v5 = **v19;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    v6 = v5(v4, &GUID_9004b409_618f_4892_959c_26fcf2cbafa3, &v18);
    ViewForHwnd = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2D0,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)(unsigned int)v6,
        v15);
    }
    else
    {
      ViewForHwnd = (*(__int64 (__fastcall **)(__int64, _QWORD, HWND *))(*(_QWORD *)v18 + 24LL))(
                      v18,
                      *((_QWORD *)this + 27),
                      &v16);
      if ( ViewForHwnd >= 0 )
      {
        v9 = 0LL;
        GlobalsUtility::CGlobals<ApplicationViewManagement::CGlobals>::Get(&v20);
        v11 = 0LL;
        v12 = 0LL;
        if ( v20 )
        {
          v13 = *(_QWORD *)(v20 + 48);
          if ( v13 )
          {
            Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v13 + 228), v10);
            v9 = v14;
            v11 = v14;
            v12 = v14;
          }
        }
        Microsoft::WRL::ComPtr<ApplicationViewManagement::CGlobals>::InternalRelease(&v20);
        ViewForHwnd = CApplicationViewManager::GetViewForHwnd(v11 + 17, v16, a2);
        if ( v12 )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CImmersiveShellComponentWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IApplicationViewCollectionManagement,IApplicationViewCollection,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IApplicationViewCollectionTestHook,IApplicationViewSwitcher,IApplicationViewFlashingNotification,IWindowManagementConstraintsEvents,IImmersiveApplicationNotification,IEnterpriseIdChangeNotification,IApplicationViewStateControl,IWindowOccludedChangeListener>>::Release(v9);
        if ( ViewForHwnd >= 0 )
          ViewForHwnd = 0;
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
  }
  else
  {
    ViewForHwnd = -2144927145;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2CD,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x80270257LL,
      v15);
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v19);
  return (unsigned int)ViewForHwnd;
}
