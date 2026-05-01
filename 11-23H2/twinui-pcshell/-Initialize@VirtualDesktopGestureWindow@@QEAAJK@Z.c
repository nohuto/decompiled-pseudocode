/*
 * XREFs of ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x18060E180 (-Initialize@VirtualDesktopGestureContext@@QEAAJK@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802D5004 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ??1?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180396420 (--1-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18056C140 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$Co.c)
 *     ??B?$ComPtrRef@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIDCompThumbnail@@XZ @ 0x18056CABC (--B-$ComPtrRef@V-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUID.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAPEAPEAUISwitchThumbnailFactory@@XZ @ 0x18056EAB4 (-ReleaseAndGetAddressOf@-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAPEAPEAUISwitchThu.c)
 *     ?Inflate@CRect@Geometry@@QEAAXJJ@Z @ 0x180574AE0 (-Inflate@CRect@Geometry@@QEAAXJJ@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180578AA8 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x18057CB00 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x180582384 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     wil::details::ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___::_ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___ @ 0x18060AAF4 (wil--details--ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___--_ScopeExitFn__lambda_38f6.c)
 *     ??$_Add@AEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@V?$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WRL@Microsoft@@PEA_K@Z @ 0x18060B150 (--$_Add@AEBV-$ComPtr@V-$CRefCountedObject@ULauncherTipMenuCommand@CLauncherTipContextMenu@@@@@WR.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x18060DA88 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x18060FA94 (-IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18060FC40 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x180610AD0 (-RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z.c)
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180610E08 (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 *     ?SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x1806116E8 (-SetDropShadowEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall VirtualDesktopGestureWindow::Initialize(VirtualDesktopGestureWindow *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64 *); // rdi
  DCompThumbnailHelpers **v8; // rbx
  __int64 *AddressOf; // rax
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // r14d
  __int64 *v13; // rax
  int DesktopBackgroundThumbnail; // eax
  __int64 v15; // rdx
  void *v16; // r8
  _QWORD *v17; // r12
  unsigned int v18; // r14d
  DCompThumbnailHelpers *v19; // rsi
  __int64 (__fastcall *v20)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *); // rdi
  __int64 *v21; // rax
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  void *v26; // r8
  DCompThumbnailHelpers *v27; // r14
  __int64 (__fastcall *v28)(DCompThumbnailHelpers *, _QWORD, __int64, GUID *, __int64 *); // rsi
  _QWORD *v29; // rdi
  __int64 *v30; // rax
  DCompThumbnailHelpers *v31; // r15
  __int64 (__fastcall *v32)(DCompThumbnailHelpers *, _QWORD, unsigned __int64, GUID *, __int64 *); // r14
  __int64 *v33; // rax
  DCompThumbnailHelpers *v34; // r15
  __int64 (__fastcall *v35)(DCompThumbnailHelpers *, _QWORD, unsigned __int64, GUID *, __int64 *); // r14
  __int64 *v36; // rax
  VirtualDesktopGestureWindow *v37; // rcx
  VirtualDesktopGestureWindow *v38; // rcx
  DCompThumbnailHelpers *v39; // r14
  __int64 (__fastcall *v40)(DCompThumbnailHelpers *, _QWORD, unsigned __int64, GUID *, __int64 *); // rdi
  __int64 *v41; // rax
  int v42; // eax
  __int64 v43; // rdx
  void *v44; // r8
  DCompThumbnailHelpers *v45; // rsi
  __int64 (__fastcall *v46)(DCompThumbnailHelpers *, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *); // rdi
  __int64 *v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rdx
  void *v51; // r8
  DCompThumbnailHelpers *v52; // rsi
  __int64 (__fastcall *v53)(DCompThumbnailHelpers *, struct IDCompThumbnail *, unsigned __int64, GUID *, __int64 *); // rdi
  __int64 *v54; // rax
  __int128 *v55; // r15
  void *v56; // r8
  __int64 *v57; // rcx
  __int64 v58; // r9
  DCompThumbnailHelpers *v59; // r15
  __int64 (__fastcall *v60)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *); // r14
  __int64 *v61; // rsi
  int v62; // edx
  DWORD SysColor; // eax
  int v64; // eax
  __int64 v65; // rdx
  void *v66; // r8
  DCompThumbnailHelpers *v67; // r14
  __int64 (__fastcall *v68)(DCompThumbnailHelpers *, _QWORD, __int64, GUID *, __int64 *); // rsi
  __int64 *v69; // rax
  __int64 *v70; // rax
  int BackgroundThumbnail; // eax
  __int64 v72; // rdx
  __int64 *v73; // rax
  void *v74; // r8
  __int64 v75; // r9
  DCompThumbnailHelpers *v76; // rsi
  __int64 (__fastcall *v77)(DCompThumbnailHelpers *, __int64, _QWORD, __int128 *, __int64 *); // rdi
  __int64 *v78; // rax
  int v79; // eax
  __int64 v80; // rdx
  DCompThumbnailHelpers *v81; // rsi
  __int64 (__fastcall *v82)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int128 *, __int64 *); // rdi
  __int64 *v83; // rax
  void *v84; // r8
  int IsCurrentDesktopRemote; // eax
  __int64 v86; // rdx
  HMONITOR v87; // rdx
  HWND TrayWindowForMonitor; // rsi
  __int64 v89; // r9
  __int64 *v90; // rdx
  DCompThumbnailHelpers *v91; // rdi
  __int64 (__fastcall *v92)(DCompThumbnailHelpers *, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rbx
  __int64 *v93; // rax
  int v94; // eax
  __int64 v95; // rdx
  void *v96; // r8
  int v97; // eax
  unsigned __int64 v98; // [rsp+58h] [rbp-B0h] BYREF
  struct IDCompThumbnail *v99; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int64 v100; // [rsp+68h] [rbp-A0h]
  __int64 v101; // [rsp+70h] [rbp-98h] BYREF
  struct IDCompThumbnail *v102; // [rsp+78h] [rbp-90h] BYREF
  __int64 v103; // [rsp+80h] [rbp-88h] BYREF
  __int64 v104; // [rsp+88h] [rbp-80h] BYREF
  __int64 (__fastcall ***v105)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp-78h] BYREF
  int v106; // [rsp+98h] [rbp-70h] BYREF
  __int64 v107; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v108; // [rsp+A8h] [rbp-60h] BYREF
  VirtualDesktopGestureWindow *v109; // [rsp+B0h] [rbp-58h] BYREF
  char v110; // [rsp+B8h] [rbp-50h]
  __int64 v111[3]; // [rsp+C0h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+D8h] [rbp-30h] BYREF
  struct tagRECT v113; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v114; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v115[4]; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+160h] [rbp+58h]

  *((_DWORD *)this + 57) = a2;
  v3 = VirtualDesktopGestureWindow::RegisterWindow(
         this,
         L"VirtualDesktopGestureSwitcher",
         L"Virtual desktop switching preview");
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v3);
    return v4;
  }
  v109 = this;
  v110 = 1;
  v99 = (struct IDCompThumbnail *)*((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v99);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v111, (__int64 *)&v99, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v99);
  v6 = *((_QWORD *)this + 5);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 56LL);
  v8 = (DCompThumbnailHelpers **)((char *)this + 56);
  AddressOf = Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::ReleaseAndGetAddressOf((__int64 *)this + 7);
  v10 = v7(v6, *((_QWORD *)this + 1), 1LL, AddressOf);
  v12 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)&v113.left = 0LL;
    v113.right = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v113.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v103 = 0LL;
    if ( *((_DWORD *)this + 57) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v11);
      v99 = 0LL;
      v98 = (unsigned __int64)&v99;
      v13 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompThumbnail>>::operator IDCompThumbnail * *((__int64 **)&v98);
      DesktopBackgroundThumbnail = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
                                     *v8,
                                     0LL,
                                     (VirtualDesktopGestureWindow *)((char *)this + 184),
                                     0LL,
                                     (const struct tagSIZE *)v13);
      v12 = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v15 = 158LL;
LABEL_14:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)DesktopBackgroundThumbnail);
LABEL_60:
        v57 = (__int64 *)&v99;
LABEL_121:
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(v57);
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v103);
        goto LABEL_122;
      }
      DesktopBackgroundThumbnail = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v99 + 24LL))(
                                     v99,
                                     &v113,
                                     0LL,
                                     0LL);
      v12 = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v15 = 159LL;
        goto LABEL_14;
      }
      DesktopBackgroundThumbnail = VirtualDesktopGestureWindow::SetBackdropBlurEffect(
                                     this,
                                     v99,
                                     (const struct Geometry::CRect *)&v113,
                                     60.0);
      v12 = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v15 = 163LL;
        goto LABEL_14;
      }
      v17 = (_QWORD *)((char *)this + 128);
      DesktopBackgroundThumbnail = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
                                     (_QWORD *)this + 16,
                                     (__int64 *)&v99,
                                     v16);
      v12 = DesktopBackgroundThumbnail;
      if ( DesktopBackgroundThumbnail < 0 )
      {
        v15 = 164LL;
        goto LABEL_14;
      }
      v101 = 0LL;
      v18 = (unsigned __int8)ShouldSystemUseDarkMode() != 0 ? 0xFF626263 : 0;
      v19 = *v8;
      v20 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 112LL);
      v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v101);
      v22 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      LODWORD(v100) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      HIDWORD(v100) = v22;
      v23 = v20(v19, 0LL, v18 + 13882323, v100, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v21);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 168LL;
LABEL_29:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v23);
LABEL_59:
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v101);
        goto LABEL_60;
      }
      v23 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v101 + 24LL))(
              v101,
              &v113,
              0LL,
              0LL);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 169LL;
        goto LABEL_29;
      }
      ShouldSystemUseDarkMode();
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v101 + 32LL))(v101, v25, 0LL, 0LL);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 171LL;
        goto LABEL_29;
      }
      v23 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
              (_QWORD *)this + 16,
              &v101,
              v26);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 172LL;
        goto LABEL_29;
      }
      v27 = *v8;
      v28 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)*v8
                                                                                                  + 120LL);
      v29 = (_QWORD *)((char *)this + 160);
      v30 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)this + 20);
      v100 = 0x100000001LL;
      v23 = v28(v27, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v30);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 174LL;
        goto LABEL_29;
      }
      v31 = *v8;
      v32 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 120LL);
      v33 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)this + 21);
      v100 = __PAIR64__(
               *((_DWORD *)this + 49) - *((_DWORD *)this + 47),
               *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
      v23 = v32(v31, *v29, v100, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v33);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 176LL;
        goto LABEL_29;
      }
      v34 = *v8;
      v35 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 120LL);
      v36 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)this + 22);
      v100 = __PAIR64__(
               *((_DWORD *)this + 49) - *((_DWORD *)this + 47),
               *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
      v23 = v35(v34, *v29, v100, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v36);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 177LL;
        goto LABEL_29;
      }
      rc = v113;
      LODWORD(v100) = VirtualDesktopGestureWindow::GetScaleFactor(v37);
      Geometry::CRect::Inflate(&rc, v100, v100);
      VirtualDesktopGestureWindow::GetScaleFactor(v38);
      v102 = 0LL;
      v39 = *v8;
      v40 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 120LL);
      v41 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)&v102);
      LODWORD(v98) = rc.right - rc.left;
      HIDWORD(v98) = rc.bottom - rc.top;
      v42 = v40(v39, *((_QWORD *)this + 21), v98, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v41);
      v12 = v42;
      if ( v42 < 0 )
      {
        v43 = 188LL;
LABEL_38:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v43,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v42);
LABEL_58:
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v102);
        goto LABEL_59;
      }
      v42 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v102
                                                                                                  + 24LL))(
              v102,
              &rc,
              0LL,
              0LL);
      v12 = v42;
      if ( v42 < 0 )
      {
        v43 = 189LL;
        goto LABEL_38;
      }
      v42 = VirtualDesktopGestureWindow::SetDropShadowEffect(this, v102, (const struct Geometry::CRect *)&rc);
      v12 = v42;
      if ( v42 < 0 )
      {
        v43 = 190LL;
        goto LABEL_38;
      }
      v42 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
              (_QWORD *)this + 16,
              (__int64 *)&v102,
              v44);
      v12 = v42;
      if ( v42 < 0 )
      {
        v43 = 191LL;
        goto LABEL_38;
      }
      v104 = 0LL;
      v45 = *v8;
      v46 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 112LL);
      v47 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v104);
      LODWORD(v98) = rc.right - rc.left;
      HIDWORD(v98) = rc.bottom - rc.top;
      v48 = v46(v45, v102, 0LL, v98, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v47);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 194LL;
LABEL_57:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v49,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v48);
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v104);
        goto LABEL_58;
      }
      v115[0] = 0;
      v115[1] = 0;
      v115[2] = rc.right - rc.left;
      v115[3] = rc.bottom - rc.top;
      v48 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v104 + 24LL))(
              v104,
              v115,
              0LL,
              0LL);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 196LL;
        goto LABEL_57;
      }
      ShouldSystemUseDarkMode();
      v48 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v104 + 32LL))(v104, v50, 0LL, 0LL);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 198LL;
        goto LABEL_57;
      }
      v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 240LL))(v104);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 199LL;
        goto LABEL_57;
      }
      v48 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
              (_QWORD *)this + 16,
              &v104,
              v51);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 200LL;
        goto LABEL_57;
      }
      v52 = *v8;
      v53 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct IDCompThumbnail *, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 120LL);
      v54 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>(&v103);
      v55 = (__int128 *)((char *)this + 184);
      v98 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *((_DWORD *)this + 46));
      v48 = v53(v52, v102, v98, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v54);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 203LL;
        goto LABEL_57;
      }
      LODWORD(v114) = v100;
      DWORD1(v114) = v100;
      DWORD2(v114) = v100 + v113.right - v113.left;
      HIDWORD(v114) = v113.bottom - v113.top + v100;
      v48 = (*(__int64 (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v103 + 24LL))(
              v103,
              &v114,
              0LL,
              0LL);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 205LL;
        goto LABEL_57;
      }
      v48 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 240LL))(v103);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 206LL;
        goto LABEL_57;
      }
      v48 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
              (_QWORD *)this + 16,
              &v103,
              v56);
      v12 = v48;
      if ( v48 < 0 )
      {
        v49 = 207LL;
        goto LABEL_57;
      }
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v104);
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v102);
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v101);
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v99);
LABEL_72:
      v107 = 0LL;
      if ( *((_DWORD *)this + 57) == 2 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
          1u,
          3u,
          v58);
        v98 = (unsigned __int64)&v107;
        v70 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompThumbnail>>::operator IDCompThumbnail * *((__int64 **)&v98);
        BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, v103, v17, v70);
        v12 = BackgroundThumbnail;
        if ( BackgroundThumbnail < 0 )
        {
          v72 = 222LL;
LABEL_81:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v72,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)BackgroundThumbnail);
LABEL_120:
          v57 = &v107;
          goto LABEL_121;
        }
      }
      else
      {
        v98 = (unsigned __int64)&v107;
        v73 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompThumbnail>>::operator IDCompThumbnail * *((__int64 **)&v98);
        BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, 0LL, v17, v73);
        v12 = BackgroundThumbnail;
        if ( BackgroundThumbnail < 0 )
        {
          v72 = 226LL;
          goto LABEL_81;
        }
      }
      BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v107 + 24LL))(
                              v107,
                              &v113,
                              0LL,
                              0LL);
      v12 = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v72 = 228LL;
        goto LABEL_81;
      }
      BackgroundThumbnail = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
                              v17,
                              &v107,
                              v74);
      v12 = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v72 = 229LL;
        goto LABEL_81;
      }
      v105 = 0LL;
      if ( *((_DWORD *)this + 57) == 2 )
      {
        wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
          `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
          1u,
          3u,
          v75);
        v76 = *v8;
        v77 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, __int64, _QWORD, __int128 *, __int64 *))(*(_QWORD *)*v8 + 96LL);
        v98 = (unsigned __int64)&v105;
        v78 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompThumbnail>>::operator IDCompThumbnail * *((__int64 **)&v98);
        v114 = *v55;
        v79 = v77(v76, v103, 0LL, &v114, v78);
        v12 = v79;
        if ( v79 < 0 )
        {
          v80 = 234LL;
LABEL_91:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v80,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v79);
LABEL_119:
          Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v105);
          goto LABEL_120;
        }
      }
      else
      {
        v81 = *v8;
        v82 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int128 *, __int64 *))(*(_QWORD *)*v8 + 96LL);
        v98 = (unsigned __int64)&v105;
        v83 = Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IDCompThumbnail>>::operator IDCompThumbnail * *((__int64 **)&v98);
        v114 = *v55;
        v79 = v82(v81, *((_QWORD *)this + 20), 0LL, &v114, v83);
        v12 = v79;
        if ( v79 < 0 )
        {
          v80 = 238LL;
          goto LABEL_91;
        }
      }
      v79 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), struct tagRECT *, _QWORD, _QWORD))(*v105)[3])(
              v105,
              &v113,
              0LL,
              0LL);
      v12 = v79;
      if ( v79 < 0 )
      {
        v80 = 240LL;
        goto LABEL_91;
      }
      v79 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
              v17,
              (__int64 *)&v105,
              v84);
      v12 = v79;
      if ( v79 < 0 )
      {
        v80 = 241LL;
        goto LABEL_91;
      }
      v108 = 0LL;
      IsCurrentDesktopRemote = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v105, &v108);
      v12 = IsCurrentDesktopRemote;
      if ( IsCurrentDesktopRemote < 0 )
      {
        v86 = 244LL;
LABEL_98:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v86,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)IsCurrentDesktopRemote);
LABEL_118:
        Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v108);
        goto LABEL_119;
      }
      IsCurrentDesktopRemote = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v108
                                                                                                  + 24LL))(
                                 v108,
                                 0LL,
                                 0LL,
                                 0LL,
                                 0);
      v12 = IsCurrentDesktopRemote;
      if ( IsCurrentDesktopRemote < 0 )
      {
        v86 = 245LL;
        goto LABEL_98;
      }
      TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v87);
      v106 = 0;
      IsCurrentDesktopRemote = VirtualDesktopGestureWindow::IsCurrentDesktopRemote(this, &v106);
      v12 = IsCurrentDesktopRemote;
      if ( IsCurrentDesktopRemote < 0 )
      {
        v86 = 251LL;
        goto LABEL_98;
      }
      if ( !v106 && TrayWindowForMonitor )
      {
        v101 = 0LL;
        if ( !*((_BYTE *)this + 222) )
        {
          if ( *((_DWORD *)this + 57) == 2 )
          {
            wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
              `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
              1u,
              3u,
              v89);
            v90 = &v103;
          }
          else
          {
            v90 = (__int64 *)((char *)this + 160);
          }
          Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v101, v90);
        }
        rc = 0LL;
        GetWindowRect(TrayWindowForMonitor, &rc);
        MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&rc, 2u);
        *(_QWORD *)&v114 = 0LL;
        DWORD2(v114) = rc.right - rc.left;
        HIDWORD(v114) = rc.bottom - rc.top;
        v99 = 0LL;
        v91 = *v8;
        v92 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(*(_QWORD *)*v8 + 64LL);
        v93 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)&v99);
        v94 = v92(v91, v101, TrayWindowForMonitor, 0LL, 0LL, &v114, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v93);
        v12 = v94;
        if ( v94 < 0 )
        {
          v95 = 282LL;
LABEL_112:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v95,
            (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v94);
          Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v99);
          Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v101);
          goto LABEL_118;
        }
        v94 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v99 + 24LL))(
                v99,
                &rc,
                0LL,
                0LL);
        v12 = v94;
        if ( v94 < 0 )
        {
          v95 = 283LL;
          goto LABEL_112;
        }
        v94 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
                v17,
                (__int64 *)&v99,
                v96);
        v12 = v94;
        if ( v94 < 0 )
        {
          v95 = 284LL;
          goto LABEL_112;
        }
        if ( !*((_BYTE *)this + 222) )
        {
          v97 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *))(*(_QWORD *)v99 + 168LL))(v99);
          if ( v97 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x123,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
              (const char *)(unsigned int)v97);
        }
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v99);
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v101);
      }
      v12 = 0;
      v110 = 0;
      goto LABEL_118;
    }
    v99 = 0LL;
    v59 = *v8;
    v60 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 112LL);
    v61 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)&v99);
    v62 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    LODWORD(v98) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    HIDWORD(v98) = v62;
    SysColor = GetSysColor(1);
    v64 = v60(v59, *((_QWORD *)this + 20), SysColor, v98, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v61);
    v12 = v64;
    if ( v64 >= 0 )
    {
      v64 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v99 + 24LL))(
              v99,
              &v113,
              0LL,
              0LL);
      v12 = v64;
      if ( v64 >= 0 )
      {
        v17 = (_QWORD *)((char *)this + 128);
        v64 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>>>>::_Add<Microsoft::WRL::ComPtr<CRefCountedObject<CLauncherTipContextMenu::LauncherTipMenuCommand>> const &>(
                (_QWORD *)this + 16,
                (__int64 *)&v99,
                v66);
        v12 = v64;
        if ( v64 >= 0 )
        {
          v67 = *v8;
          v68 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)*v8 + 120LL);
          v69 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IDCompThumbnail>>((__int64 *)this + 20);
          v98 = 0x100000001LL;
          v64 = v68(v67, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v69);
          v12 = v64;
          if ( v64 >= 0 )
          {
            Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v99);
            v55 = (__int128 *)((char *)this + 184);
            goto LABEL_72;
          }
          v65 = 216LL;
        }
        else
        {
          v65 = 214LL;
        }
      }
      else
      {
        v65 = 213LL;
      }
    }
    else
    {
      v65 = 212LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v65,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v64);
    goto LABEL_60;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_122:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v111);
  wil::details::ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___::_ScopeExitFn__lambda_38f6256093b364ae43cafafab9903f3c___(&v109);
  return v12;
}
