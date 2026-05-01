/*
 * XREFs of ?Initialize@VirtualDesktopHotKeyWindow@@QEAAJXZ @ 0x180619924
 * Callers:
 *     ?AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitchDirection@@W4VirtualDesktopSwitchType@@@Z @ 0x18061684C (-AnimateOperation2@VirtualDesktopSwitchAnimator@@AEAAJPEAUIVirtualDesktop@@W4VirtualDesktopSwitc.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x1802D5004 (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ??1?$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ @ 0x180396420 (--1-$ComPtr@UITabletModeInputSource@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x180562760 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x180562828 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEAAPEAPEAUIDCompThumbnail@@XZ @ 0x18056EA94 (-ReleaseAndGetAddressOf@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEAAPEAPEAUIDCompThumbnail@@X.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAPEAPEAUISwitchThumbnailFactory@@XZ @ 0x18056EAB4 (-ReleaseAndGetAddressOf@-$ComPtr@UISwitchThumbnailFactory@@@WRL@Microsoft@@QEAAPEAPEAUISwitchThu.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180578AA8 (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x180582384 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z @ 0x18060FA94 (-IsCurrentDesktopRemote@VirtualDesktopGestureWindow@@IEAAJPEAH@Z.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x18060FC40 (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ?RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z @ 0x180610AD0 (-RegisterWindow@VirtualDesktopGestureWindow@@IEAAJPEBG0@Z.c)
 *     wil::details::ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___::_ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___ @ 0x180618D0C (wil--details--ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___--_ScopeExitFn__lambda_ebae.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall VirtualDesktopHotKeyWindow::Initialize(VirtualDesktopHotKeyWindow *this)
{
  int v2; // eax
  int v3; // ebx
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, _QWORD, __int64, __int64 *); // rbx
  char *v6; // r13
  __int64 *AddressOf; // rax
  int v8; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *); // rbx
  int v11; // ecx
  DWORD SysColor; // eax
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // r8
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 *v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdi
  __int64 (__fastcall *v22)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  __int64 *v23; // rax
  int BackgroundThumbnail; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  void *v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 *v31; // rcx
  __int64 v32; // rdi
  __int64 (__fastcall *v33)(__int64, _QWORD, _QWORD, __int128 *, __int64 *); // rbx
  __int64 *v34; // rax
  int v35; // eax
  unsigned __int64 v36; // r9
  __int64 v37; // rdx
  int v38; // eax
  void *v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 *v42; // rcx
  int IsCurrentDesktopRemote; // eax
  __int64 v44; // rdx
  HMONITOR v45; // rdx
  HWND TrayWindowForMonitor; // r12
  __int64 v47; // rbx
  __int64 v48; // rsi
  __int64 (__fastcall *v49)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *); // rdi
  int v50; // eax
  unsigned __int64 v51; // r9
  __int64 v52; // rdx
  int v53; // eax
  void *v54; // r8
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 *v57; // rcx
  int v58; // eax
  __int64 v60; // [rsp+58h] [rbp-69h] BYREF
  __int64 v61; // [rsp+60h] [rbp-61h] BYREF
  int v62; // [rsp+68h] [rbp-59h] BYREF
  __int64 (__fastcall ***v63)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-51h] BYREF
  __int64 v64; // [rsp+78h] [rbp-49h] BYREF
  __int64 v65; // [rsp+80h] [rbp-41h] BYREF
  __int64 v66; // [rsp+88h] [rbp-39h] BYREF
  VirtualDesktopHotKeyWindow *v67; // [rsp+90h] [rbp-31h] BYREF
  char v68; // [rsp+98h] [rbp-29h]
  __int64 v69[2]; // [rsp+A0h] [rbp-21h] BYREF
  struct tagRECT Rect; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v71; // [rsp+C0h] [rbp-1h] BYREF
  int v72; // [rsp+C8h] [rbp+7h]
  int v73; // [rsp+CCh] [rbp+Bh]
  __int128 v74; // [rsp+D8h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v2 = VirtualDesktopGestureWindow::RegisterWindow(
         this,
         L"VirtualDesktopHotkeySwitcher",
         L"Virtual desktop hotkey switching preview");
  v3 = v2;
  if ( v2 >= 0 )
  {
    v67 = this;
    v68 = 1;
    v60 = *((_QWORD *)this + 5);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v60);
    DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v69, &v60, (__int64)&GUID_NULL, 0LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v60);
    v4 = *((_QWORD *)this + 5);
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v4 + 56LL);
    v6 = (char *)this + 56;
    AddressOf = Microsoft::WRL::ComPtr<ISwitchThumbnailFactory>::ReleaseAndGetAddressOf((__int64 *)this + 7);
    v8 = v5(v4, *((_QWORD *)this + 1), 1LL, AddressOf);
    v3 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x3B,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)v8);
LABEL_73:
      DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v69);
      wil::details::ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___::_ScopeExitFn__lambda_ebaee64c5eb606435877d909d4d156fa___(&v67);
      return (unsigned int)v3;
    }
    v71 = 0LL;
    v72 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v73 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    v64 = 0LL;
    v9 = *(_QWORD *)v6;
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, GUID *, __int64 *))(**(_QWORD **)v6 + 112LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v64);
    v11 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    LODWORD(v60) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    HIDWORD(v60) = v11;
    SysColor = GetSysColor(1);
    v13 = v10(v9, *((_QWORD *)this + 20), SysColor, v60, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v64);
    v3 = v13;
    if ( v13 < 0 )
    {
      v14 = 64LL;
LABEL_17:
      v20 = (unsigned int)v13;
      goto LABEL_18;
    }
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v64 + 24LL))(v64, &v71, 0LL, 0LL);
    v3 = v13;
    if ( v13 < 0 )
    {
      v14 = 65LL;
      goto LABEL_17;
    }
    v16 = (_QWORD *)((char *)this + 128);
    v3 = 0;
    v17 = *((_QWORD *)this + 17);
    if ( v17 != *((_QWORD *)this + 19)
      || (v3 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)this + 128,
                 v17 + 1,
                 v15),
          v3 >= 0) )
    {
      v18 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v18 + 1;
      v19 = (__int64 *)(*v16 + 8 * v18);
      if ( !v19 )
        goto LABEL_15;
      *v19 = v64;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
    }
    if ( v3 < 0 )
    {
      v20 = (unsigned int)v3;
      v14 = 66LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)v20);
LABEL_72:
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v64);
      goto LABEL_73;
    }
LABEL_15:
    v21 = *(_QWORD *)v6;
    v22 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(**(_QWORD **)v6 + 120LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 20);
    v60 = 0x100000001LL;
    v13 = v22(v21, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
    v3 = v13;
    if ( v13 < 0 )
    {
      v14 = 67LL;
      goto LABEL_17;
    }
    v65 = 0LL;
    v23 = Microsoft::WRL::ComPtr<IDCompThumbnail>::ReleaseAndGetAddressOf(&v65);
    BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(
                            (__int64)this,
                            0LL,
                            (__int64)this + 128,
                            v23);
    v3 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v25 = (unsigned int)BackgroundThumbnail;
      v26 = 70LL;
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v26,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)v25);
LABEL_71:
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v65);
      goto LABEL_72;
    }
    v27 = (*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v65 + 24LL))(v65, &v71, 0LL, 0LL);
    v3 = v27;
    if ( v27 < 0 )
    {
      v25 = (unsigned int)v27;
      v26 = 71LL;
      goto LABEL_29;
    }
    v3 = 0;
    v29 = *((_QWORD *)this + 17);
    if ( v29 != *((_QWORD *)this + 19)
      || (v3 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)this + 128,
                 v29 + 1,
                 v28),
          v3 >= 0) )
    {
      v30 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v30 + 1;
      v31 = (__int64 *)(*v16 + 8 * v30);
      if ( !v31 )
        goto LABEL_30;
      *v31 = v65;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v31);
    }
    if ( v3 < 0 )
    {
      v25 = (unsigned int)v3;
      v26 = 72LL;
      goto LABEL_29;
    }
LABEL_30:
    v63 = 0LL;
    v32 = *(_QWORD *)v6;
    v33 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int128 *, __int64 *))(**(_QWORD **)v6 + 96LL);
    v34 = Microsoft::WRL::ComPtr<IDCompThumbnail>::ReleaseAndGetAddressOf((__int64 *)&v63);
    v74 = *(_OWORD *)((char *)this + 184);
    v35 = v33(v32, *((_QWORD *)this + 20), 0LL, &v74, v34);
    v3 = v35;
    if ( v35 < 0 )
    {
      v36 = (unsigned int)v35;
      v37 = 75LL;
LABEL_40:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v37,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)v36);
LABEL_70:
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>((__int64 *)&v63);
      goto LABEL_71;
    }
    v38 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *), __int64 *, _QWORD, _QWORD))(*v63)[3])(
            v63,
            &v71,
            0LL,
            0LL);
    v3 = v38;
    if ( v38 < 0 )
    {
      v36 = (unsigned int)v38;
      v37 = 76LL;
      goto LABEL_40;
    }
    v3 = 0;
    v40 = *((_QWORD *)this + 17);
    if ( v40 != *((_QWORD *)this + 19)
      || (v3 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)this + 128,
                 v40 + 1,
                 v39),
          v3 >= 0) )
    {
      v41 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v41 + 1;
      v42 = (__int64 *)(*v16 + 8 * v41);
      if ( !v42 )
        goto LABEL_41;
      *v42 = (__int64)v63;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v42);
    }
    if ( v3 < 0 )
    {
      v36 = (unsigned int)v3;
      v37 = 77LL;
      goto LABEL_40;
    }
LABEL_41:
    v66 = 0LL;
    IsCurrentDesktopRemote = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(&v63, &v66);
    v3 = IsCurrentDesktopRemote;
    if ( IsCurrentDesktopRemote < 0 )
    {
      v44 = 80LL;
LABEL_47:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v44,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)(unsigned int)IsCurrentDesktopRemote);
LABEL_69:
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v66);
      goto LABEL_70;
    }
    IsCurrentDesktopRemote = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v66 + 24LL))(
                               v66,
                               0LL,
                               0LL,
                               0LL,
                               0);
    v3 = IsCurrentDesktopRemote;
    if ( IsCurrentDesktopRemote < 0 )
    {
      v44 = 81LL;
      goto LABEL_47;
    }
    v62 = 0;
    IsCurrentDesktopRemote = VirtualDesktopGestureWindow::IsCurrentDesktopRemote(this, &v62);
    v3 = IsCurrentDesktopRemote;
    if ( IsCurrentDesktopRemote < 0 )
    {
      v44 = 85LL;
      goto LABEL_47;
    }
    if ( v62 )
    {
      v68 = 0;
      v3 = 0;
      goto LABEL_69;
    }
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v45);
    if ( !TrayWindowForMonitor )
    {
LABEL_68:
      v68 = 0;
      v3 = 0;
      goto LABEL_69;
    }
    v47 = 0LL;
    v60 = 0LL;
    if ( !*((_BYTE *)this + 222) )
    {
      Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v60, (__int64 *)this + 20);
      v47 = v60;
    }
    Rect = 0LL;
    GetWindowRect(TrayWindowForMonitor, &Rect);
    MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&Rect, 2u);
    *(_QWORD *)&v74 = 0LL;
    DWORD2(v74) = Rect.right - Rect.left;
    HIDWORD(v74) = Rect.bottom - Rect.top;
    v61 = 0LL;
    v48 = *(_QWORD *)v6;
    v49 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, __int64 *))(**(_QWORD **)v6 + 64LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v61);
    v50 = v49(v48, v47, TrayWindowForMonitor, 0LL, 0LL, &v74, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v61);
    v3 = v50;
    if ( v50 < 0 )
    {
      v51 = (unsigned int)v50;
      v52 = 111LL;
LABEL_63:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v52,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
        (const char *)v51);
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v61);
      Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v60);
      goto LABEL_69;
    }
    v53 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v61 + 24LL))(
            v61,
            &Rect,
            0LL,
            0LL);
    v3 = v53;
    if ( v53 < 0 )
    {
      v51 = (unsigned int)v53;
      v52 = 112LL;
      goto LABEL_63;
    }
    v3 = 0;
    v55 = *((_QWORD *)this + 17);
    if ( v55 != *((_QWORD *)this + 19)
      || (v3 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                 (__int64)this + 128,
                 v55 + 1,
                 v54),
          v3 >= 0) )
    {
      v56 = *((_QWORD *)this + 17);
      *((_QWORD *)this + 17) = v56 + 1;
      v57 = (__int64 *)(*v16 + 8 * v56);
      if ( !v57 )
      {
LABEL_64:
        if ( !*((_BYTE *)this + 222) )
        {
          v58 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v61 + 168LL))(v61);
          if ( v58 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x78,
              (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
              (const char *)(unsigned int)v58);
        }
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v61);
        Microsoft::WRL::ComPtr<ITabletModeInputSource>::~ComPtr<ITabletModeInputSource>(&v60);
        goto LABEL_68;
      }
      *v57 = v61;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v57);
    }
    if ( v3 < 0 )
    {
      v51 = (unsigned int)v3;
      v52 = 113LL;
      goto LABEL_63;
    }
    goto LABEL_64;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x32,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktophotkeywindow.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v3;
}
