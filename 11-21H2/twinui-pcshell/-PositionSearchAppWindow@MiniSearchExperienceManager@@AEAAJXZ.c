/*
 * XREFs of ?PositionSearchAppWindow@MiniSearchExperienceManager@@AEAAJXZ @ 0x1803A30C8
 * Callers:
 *     ?Uncloak@MiniSearchExperienceManager@@AEAAJXZ @ 0x1801A8200 (-Uncloak@MiniSearchExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ??0?$shared_ptr@V?$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z @ 0x180016DE4 (--0-$shared_ptr@V-$test_merged_data@U_tip_SmartFillTest@@@details@tip@@@std@@QEAA@AEBV01@@Z.c)
 *     ??1?$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ @ 0x18004319C (--1-$test_watcher@U_tip_SwipeDashboard@@@tip@@QEAA@XZ.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800467B0 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x18007BE14 (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800C912C (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ??$?8UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@01@$$T@Z @ 0x180179DFC (--$-8UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComPtr@U.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18038E02C (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18038E02C.c)
 *     ?Stop@?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18038F87C (-Stop@-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsP.c)
 *     ??1MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAA@XZ @ 0x1803A0FFC (--1MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetr.c)
 *     ?StartActivity@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803A3820 (-StartActivity@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceMan.c)
 *     ?Stop@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAAXAEBUMiniSearchAppSizeAndBorderInfo@@@Z @ 0x1803A3CD8 (-Stop@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelem.c)
 *     ?ViewNotAvailable@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperienceManagerTelemetry@@QEAAXXZ @ 0x1803A4A20 (-ViewNotAvailable@MiniSearchAppExperienceManager_PositionSearchAppWindow@MiniSearchAppExperience.c)
 *     ?ensure_data@?$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV?$shared_ptr@V?$test_merged_data@U_tip_MiniSearchActivationTest@@@details@tip@@@std@@XZ @ 0x1803A4B94 (-ensure_data@-$tip_test@U_tip_MiniSearchActivationTest@@@tip@@AEBAAEAV-$shared_ptr@V-$test_merge.c)
 */

// Hidden C++ exception states: #wind=3 #try_helpers=1
__int64 __fastcall MiniSearchExperienceManager::PositionSearchAppWindow(MiniSearchExperienceManager *this)
{
  _QWORD *v2; // rbx
  int v3; // edx
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v5; // rdx
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10[2]; // [rsp+20h] [rbp-1B8h] BYREF
  void **v11; // [rsp+30h] [rbp-1A8h] BYREF
  _BYTE v12[40]; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v13; // [rsp+60h] [rbp-178h] BYREF
  _BYTE v14[16]; // [rsp+70h] [rbp-168h] BYREF
  volatile signed __int32 *v15[40]; // [rsp+80h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v2 = (_QWORD *)tip::tip_test<_tip_MiniSearchActivationTest>::ensure_data((char *)this + 256);
  v11 = &tip::test_watcher<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::`vftable';
  wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
    (wil::details::ThreadFailureCallbackHolder *)v12,
    (struct wil::details::IFailureCallback *)&v11,
    0LL,
    *v2 != 0LL);
  std::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>::shared_ptr<tip::details::test_merged_data<_tip_SmartFillTest>>(
    &v13,
    v2);
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v15,
    (__int64)"MiniSearchAppExperienceManager_PositionSearchAppWindow");
  v15[0] = (volatile signed __int32 *)&MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::`vftable';
  MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::StartActivity((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow *)v15);
  if ( Microsoft::WRL::operator==<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>((_QWORD *)this + 5) )
  {
    MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::ViewNotAvailable((MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow *)v15);
    wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v15,
      v3);
    MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::~MiniSearchAppExperienceManager_PositionSearchAppWindow(v15);
    tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v11);
    return 0LL;
  }
  else
  {
    (*(void (__fastcall **)(_QWORD, _BYTE *, char *))(**((_QWORD **)this + 10) + 8LL))(
      *((_QWORD *)this + 10),
      v14,
      (char *)this + 88);
    if ( ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 5), v5) )
    {
      v10[0] = 0LL;
      v6 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 5,
             v10);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10[0] + 32LL))(v10[0], v14);
        v9 = v8;
        if ( v8 >= 0 )
        {
          MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::Stop(
            (MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow *)v15,
            (const struct MiniSearchAppSizeAndBorderInfo *)v14);
          Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(v10);
          MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::~MiniSearchAppExperienceManager_PositionSearchAppWindow(v15);
          tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v11);
          return 0LL;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x3A0,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(v10);
          MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::~MiniSearchAppExperienceManager_PositionSearchAppWindow(v15);
          tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v11);
          return v9;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x39F,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\minisearchexperiencemanager.cpp",
          (const char *)(unsigned int)v6);
        Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>(v10);
        MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::~MiniSearchAppExperienceManager_PositionSearchAppWindow(v15);
        tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v11);
        return v7;
      }
    }
    else
    {
      MiniSearchAppExperienceManagerTelemetry::MiniSearchAppExperienceManager_PositionSearchAppWindow::~MiniSearchAppExperienceManager_PositionSearchAppWindow(v15);
      tip::test_watcher<_tip_SwipeDashboard>::~test_watcher<_tip_SwipeDashboard>((__int64)&v11);
      return 2147947423LL;
    }
  }
}
