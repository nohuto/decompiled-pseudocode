/*
 * XREFs of ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8
 * Callers:
 *     ?Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z @ 0x180552180 (-Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     memset_0 @ 0x180188F60 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z @ 0x18022CC8A (-GetTrayWindowForMonitor@TaskbarHelpers@@YAPEAUHWND__@@PEAUHMONITOR__@@@Z.c)
 *     ??4?$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18030318C (--4-$ComPtr@UIWindowArrangementView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x1804A2F5C (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x1804A3024 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUtagRECT@@PEBUtagSIZE@@PEAPEAU3@@Z @ 0x1804C2140 (-CreateDesktopBackgroundThumbnail@DCompThumbnailHelpers@@YAJPEAUISwitchThumbnailFactory@@PEAUIDC.c)
 *     ??$As@UIVirtualDesktopThumbnail@@@?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVirtualDesktopThumbnail@@@WRL@Microsoft@@@Details@12@@Z @ 0x1804C7A14 (--$As@UIVirtualDesktopThumbnail@@@-$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x180551DC8 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEAV?$CCoSimpleArray@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIDCompThumbnail@@@WRL@Microsoft@@@@@@PEAPEAU2@@Z @ 0x180553ADC (-MakeBackgroundThumbnail@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEAV-$CCoSimpleA.c)
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180554C3C (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 *     ?SetDropShadowEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@@Z @ 0x18055551C (-SetDropShadowEffect@VirtualDesktopGestureWindow@@AEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall VirtualDesktopGestureWindow::Initialize(VirtualDesktopGestureWindow *this, int a2)
{
  _DWORD *v3; // r13
  const char *v4; // r9
  char v6; // r12
  __int64 v7; // rdi
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, char *); // rbx
  DCompThumbnailHelpers **v9; // rsi
  int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  void *v15; // r8
  _QWORD *v16; // r14
  __int64 v17; // rdx
  __int64 *v18; // rcx
  unsigned int v19; // esi
  __int64 v20; // rdi
  __int64 (__fastcall *v21)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  int v22; // r9d
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rdx
  void *v26; // r8
  __int64 v27; // rdx
  __int64 *v28; // rcx
  __int64 v29; // rdi
  __int64 (__fastcall *v30)(__int64, _QWORD, __int64, GUID *, char *); // rbx
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, _QWORD, unsigned __int64, GUID *, char *); // rbx
  __int64 v33; // rsi
  __int64 (__fastcall *v34)(__int64, _QWORD, unsigned __int64, GUID *, char *); // rdi
  VirtualDesktopGestureWindow *v35; // rcx
  VirtualDesktopGestureWindow *v36; // rcx
  __int64 v37; // rdi
  __int64 (__fastcall *v38)(__int64, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **); // rbx
  int v39; // eax
  __int64 v40; // rdx
  void *v41; // r8
  __int64 v42; // rdx
  __int64 *v43; // rcx
  DCompThumbnailHelpers *v44; // rdi
  __int64 (__fastcall *v45)(DCompThumbnailHelpers *, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *); // rbx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rdx
  void *v49; // r8
  __int64 v50; // rdx
  __int64 *v51; // rcx
  DCompThumbnailHelpers *v52; // rdi
  __int64 (__fastcall *v53)(DCompThumbnailHelpers *, struct IDCompThumbnail *, unsigned __int64, GUID *, int *); // rbx
  void *v54; // r8
  __int64 v55; // rdx
  __int64 *v56; // rcx
  __int64 *v57; // rcx
  DCompThumbnailHelpers *v58; // rdi
  __int64 (__fastcall *v59)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, struct tagSIZE *); // rbx
  int v60; // ecx
  DWORD SysColor; // eax
  void *v62; // r8
  __int64 v63; // rdx
  __int64 *v64; // rcx
  DCompThumbnailHelpers *v65; // rdi
  __int64 (__fastcall *v66)(DCompThumbnailHelpers *, _QWORD, __int64, GUID *, char *); // rbx
  __int64 v67; // r9
  int BackgroundThumbnail; // eax
  __int64 v69; // rdx
  void *v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 *v73; // rcx
  DCompThumbnailHelpers *v74; // rdi
  __int64 (__fastcall *v75)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int128 *, int *); // rbx
  int v76; // eax
  __int64 v77; // rdx
  DCompThumbnailHelpers *v78; // rdi
  __int64 (__fastcall *v79)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int128 *, int *); // rbx
  __int64 *v80; // r13
  void *v81; // r8
  __int64 v82; // rdx
  __int64 *v83; // rcx
  int v84; // eax
  __int64 v85; // rdx
  HMONITOR v86; // rdx
  HWND TrayWindowForMonitor; // rsi
  __int64 v88; // r9
  __int64 *v89; // rdx
  __int64 v90; // rdi
  __int64 (__fastcall *v91)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, struct tagSIZE *); // rbx
  int v92; // eax
  __int64 v93; // rdx
  void *v94; // r8
  __int64 v95; // rdx
  __int64 *v96; // rcx
  int v97; // eax
  struct tagSIZE v98; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v99; // [rsp+80h] [rbp-88h]
  unsigned __int64 v100; // [rsp+88h] [rbp-80h]
  __int64 v101; // [rsp+90h] [rbp-78h] BYREF
  struct IDCompThumbnail *v102; // [rsp+98h] [rbp-70h] BYREF
  int v103[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v104; // [rsp+A8h] [rbp-60h] BYREF
  int v105[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v106; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v107[2]; // [rsp+C0h] [rbp-48h] BYREF
  char v108; // [rsp+D0h] [rbp-38h]
  __int64 v109[2]; // [rsp+D8h] [rbp-30h] BYREF
  WNDCLASSW WndClass; // [rsp+E8h] [rbp-20h] BYREF
  struct tagRECT rc; // [rsp+138h] [rbp+30h] BYREF
  struct tagRECT v112; // [rsp+148h] [rbp+40h] BYREF
  __int128 v113; // [rsp+158h] [rbp+50h] BYREF
  _DWORD v114[4]; // [rsp+168h] [rbp+60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1C0h] [rbp+B8h]

  *((_DWORD *)this + 56) = a2;
  memset_0(&WndClass, 0, sizeof(WndClass));
  WndClass.lpszClassName = L"VirtualDesktopGestureSwitcher";
  WndClass.lpfnWndProc = (WNDPROC)CWRLImpWndProc<VirtualDesktopGestureWindow>::s_WndProcBase;
  WndClass.hInstance = &_ImageBase;
  WndClass.hCursor = LoadCursorW(0LL, (LPCWSTR)0x7F00);
  WndClass.cbWndExtra = 8;
  RegisterClassW(&WndClass);
  v3 = (_DWORD *)((char *)this + 184);
  if ( !CreateWindowInBand(
          136315008LL,
          L"VirtualDesktopGestureSwitcher",
          L"Virtual desktop switching preview",
          2415919104LL,
          *((_DWORD *)this + 46),
          *((_DWORD *)this + 47),
          *((_DWORD *)this + 48) - *((_DWORD *)this + 46),
          *((_DWORD *)this + 49) - *((_DWORD *)this + 47),
          0LL,
          0LL,
          &_ImageBase,
          this,
          2) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE9,
             (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
             v4);
  v107[1] = (__int64)this;
  v6 = 1;
  v108 = 1;
  v98 = (struct tagSIZE)*((_QWORD *)this + 5);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v98);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v109, (__int64 *)&v98, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v98);
  v7 = *((_QWORD *)this + 5);
  v8 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, char *))(*(_QWORD *)v7 + 56LL);
  v9 = (DCompThumbnailHelpers **)((char *)this + 56);
  Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 7);
  v10 = v8(v7, *((_QWORD *)this + 1), 1LL, (char *)this + 56);
  v12 = v10;
  if ( v10 >= 0 )
  {
    *(_QWORD *)&v112.left = 0LL;
    v112.right = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    v112.bottom = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
    *(_QWORD *)v103 = 0LL;
    if ( *((_DWORD *)this + 56) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v11);
      v98 = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v98);
      v13 = DCompThumbnailHelpers::CreateDesktopBackgroundThumbnail(
              *v9,
              0LL,
              (VirtualDesktopGestureWindow *)((char *)this + 184),
              0LL,
              &v98);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 299LL;
LABEL_15:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v13);
LABEL_73:
        v56 = (__int64 *)&v98;
LABEL_144:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v56);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v103);
        goto LABEL_145;
      }
      v13 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v98 + 24LL))(
              v98,
              &v112,
              0LL,
              0LL);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 300LL;
        goto LABEL_15;
      }
      v13 = VirtualDesktopGestureWindow::SetBackdropBlurEffect(
              this,
              *(struct IDCompThumbnail **)&v98,
              (const struct Geometry::CRect *)&v112,
              60.0);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 304LL;
        goto LABEL_15;
      }
      v16 = (_QWORD *)((char *)this + 128);
      v17 = *((_QWORD *)this + 17);
      if ( v17 == *((_QWORD *)this + 19) )
      {
        v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v17 + 1,
                v15);
        v12 = v13;
        if ( v13 < 0 )
        {
          v14 = 305LL;
          goto LABEL_15;
        }
      }
      v18 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v18 )
      {
        *v18 = (__int64)v98;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v18);
      }
      v101 = 0LL;
      v19 = (unsigned __int8)ShouldSystemUseDarkMode() != 0 ? 0xFF626263 : 0;
      v20 = *((_QWORD *)this + 7);
      v21 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)v20 + 112LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v101);
      v22 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      LODWORD(v100) = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
      HIDWORD(v100) = v22;
      v23 = v21(v20, 0LL, v19 + 13882323, v100, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v101);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 309LL;
LABEL_35:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v23);
LABEL_72:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v101);
        goto LABEL_73;
      }
      v23 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v101 + 24LL))(
              v101,
              &v112,
              0LL,
              0LL);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 310LL;
        goto LABEL_35;
      }
      ShouldSystemUseDarkMode();
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v101 + 32LL))(v101, v25, 0LL, 0LL);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 312LL;
        goto LABEL_35;
      }
      v27 = *((_QWORD *)this + 17);
      if ( v27 == *((_QWORD *)this + 19) )
      {
        v23 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v27 + 1,
                v26);
        v12 = v23;
        if ( v23 < 0 )
        {
          v24 = 313LL;
          goto LABEL_35;
        }
      }
      v28 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v28 )
      {
        *v28 = v101;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v28);
      }
      v29 = *((_QWORD *)this + 7);
      v30 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, char *))(*(_QWORD *)v29 + 120LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 20);
      v100 = 0x100000001LL;
      v23 = v30(v29, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 315LL;
        goto LABEL_35;
      }
      v31 = *((_QWORD *)this + 7);
      v32 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, char *))(*(_QWORD *)v31 + 120LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 21);
      v100 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *v3);
      v23 = v32(v31, *((_QWORD *)this + 20), v100, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 168);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 317LL;
        goto LABEL_35;
      }
      v33 = *((_QWORD *)this + 7);
      v34 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, char *))(*(_QWORD *)v33 + 120LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 22);
      v100 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *v3);
      v23 = v34(v33, *((_QWORD *)this + 20), v100, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 176);
      v12 = v23;
      if ( v23 < 0 )
      {
        v24 = 318LL;
        goto LABEL_35;
      }
      rc = v112;
      LODWORD(v100) = VirtualDesktopGestureWindow::GetScaleFactor(v35);
      InflateRect(&rc, v100, v100);
      VirtualDesktopGestureWindow::GetScaleFactor(v36);
      v102 = 0LL;
      v9 = (DCompThumbnailHelpers **)((char *)this + 56);
      v37 = *((_QWORD *)this + 7);
      v38 = *(__int64 (__fastcall **)(__int64, _QWORD, unsigned __int64, GUID *, struct IDCompThumbnail **))(*(_QWORD *)v37 + 120LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v102);
      LODWORD(v99) = rc.right - rc.left;
      HIDWORD(v99) = rc.bottom - rc.top;
      v39 = v38(v37, *((_QWORD *)this + 21), v99, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v102);
      v12 = v39;
      if ( v39 < 0 )
      {
        v40 = 329LL;
LABEL_45:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v40,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v39);
LABEL_71:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v102);
        goto LABEL_72;
      }
      v39 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v102
                                                                                                  + 24LL))(
              v102,
              &rc,
              0LL,
              0LL);
      v12 = v39;
      if ( v39 < 0 )
      {
        v40 = 330LL;
        goto LABEL_45;
      }
      v39 = VirtualDesktopGestureWindow::SetDropShadowEffect(this, v102, (const struct Geometry::CRect *)&rc);
      v12 = v39;
      if ( v39 < 0 )
      {
        v40 = 331LL;
        goto LABEL_45;
      }
      v42 = *((_QWORD *)this + 17);
      if ( v42 == *((_QWORD *)this + 19) )
      {
        v39 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v42 + 1,
                v41);
        v12 = v39;
        if ( v39 < 0 )
        {
          v40 = 332LL;
          goto LABEL_45;
        }
      }
      v43 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v43 )
      {
        *v43 = (__int64)v102;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v43);
      }
      v104 = 0LL;
      v44 = *v9;
      v45 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct IDCompThumbnail *, _QWORD, unsigned __int64, GUID *, __int64 *))(*(_QWORD *)*v9 + 112LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v104);
      LODWORD(v99) = rc.right - rc.left;
      HIDWORD(v99) = rc.bottom - rc.top;
      v46 = v45(v44, v102, 0LL, v99, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v104);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 335LL;
LABEL_70:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v47,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v46);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v104);
        goto LABEL_71;
      }
      v114[0] = 0;
      v114[1] = 0;
      v114[2] = rc.right - rc.left;
      v114[3] = rc.bottom - rc.top;
      v46 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, _QWORD))(*(_QWORD *)v104 + 24LL))(
              v104,
              v114,
              0LL,
              0LL);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 337LL;
        goto LABEL_70;
      }
      ShouldSystemUseDarkMode();
      v46 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v104 + 32LL))(v104, v48, 0LL, 0LL);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 339LL;
        goto LABEL_70;
      }
      v46 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v104 + 240LL))(v104);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 340LL;
        goto LABEL_70;
      }
      v50 = *((_QWORD *)this + 17);
      if ( v50 == *((_QWORD *)this + 19) )
      {
        v46 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v50 + 1,
                v49);
        v12 = v46;
        if ( v46 < 0 )
        {
          v47 = 341LL;
          goto LABEL_70;
        }
      }
      v51 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v51 )
      {
        *v51 = v104;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v51);
      }
      v52 = *v9;
      v53 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, struct IDCompThumbnail *, unsigned __int64, GUID *, int *))(*(_QWORD *)*v9 + 120LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v103);
      v99 = __PAIR64__(*((_DWORD *)this + 49) - *((_DWORD *)this + 47), *((_DWORD *)this + 48) - *v3);
      v46 = v53(v52, v102, v99, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, v103);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 344LL;
        goto LABEL_70;
      }
      LODWORD(v113) = v100;
      DWORD1(v113) = v100;
      DWORD2(v113) = v100 + v112.right - v112.left;
      HIDWORD(v113) = v112.bottom - v112.top + v100;
      v46 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**(_QWORD **)v103 + 24LL))(
              *(_QWORD *)v103,
              &v113,
              0LL,
              0LL);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 346LL;
        goto LABEL_70;
      }
      v46 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v103 + 240LL))(*(_QWORD *)v103);
      v12 = v46;
      if ( v46 < 0 )
      {
        v47 = 347LL;
        goto LABEL_70;
      }
      v55 = *((_QWORD *)this + 17);
      if ( v55 == *((_QWORD *)this + 19) )
      {
        v46 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v55 + 1,
                v54);
        v12 = v46;
        if ( v46 < 0 )
        {
          v47 = 348LL;
          goto LABEL_70;
        }
      }
      v57 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v57 )
      {
        *v57 = *(_QWORD *)v103;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v57);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v104);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v102);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v101);
    }
    else
    {
      v98 = 0LL;
      v58 = *v9;
      v59 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, unsigned __int64, GUID *, struct tagSIZE *))(*(_QWORD *)*v9 + 112LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v98);
      v60 = *((_DWORD *)this + 49) - *((_DWORD *)this + 47);
      LODWORD(v99) = *((_DWORD *)this + 48) - *v3;
      HIDWORD(v99) = v60;
      SysColor = GetSysColor(1);
      v13 = v59(v58, *((_QWORD *)this + 20), SysColor, v99, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v98);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 353LL;
        goto LABEL_15;
      }
      v13 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v98 + 24LL))(
              v98,
              &v112,
              0LL,
              0LL);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 354LL;
        goto LABEL_15;
      }
      v16 = (_QWORD *)((char *)this + 128);
      v63 = *((_QWORD *)this + 17);
      if ( v63 == *((_QWORD *)this + 19) )
      {
        v13 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)this + 128,
                v63 + 1,
                v62);
        v12 = v13;
        if ( v13 < 0 )
        {
          v14 = 355LL;
          goto LABEL_15;
        }
      }
      v64 = (__int64 *)(*((_QWORD *)this + 16) + 8 * (*((_QWORD *)this + 17))++);
      if ( v64 )
      {
        *v64 = (__int64)v98;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v64);
      }
      v65 = *v9;
      v66 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, __int64, GUID *, char *))(*(_QWORD *)*v9 + 120LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)this + 20);
      v99 = 0x100000001LL;
      v13 = v66(v65, 0LL, 0x100000001LL, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, (char *)this + 160);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 357LL;
        goto LABEL_15;
      }
    }
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v98);
    v106 = 0LL;
    if ( *((_DWORD *)this + 56) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v67);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v106);
      BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, *(_QWORD *)v103, v16, &v106);
      v12 = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v69 = 363LL;
LABEL_98:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v69,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)BackgroundThumbnail);
LABEL_143:
        v56 = &v106;
        goto LABEL_144;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v106);
      BackgroundThumbnail = VirtualDesktopGestureWindow::MakeBackgroundThumbnail(this, 0LL, v16, &v106);
      v12 = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v69 = 367LL;
        goto LABEL_98;
      }
    }
    BackgroundThumbnail = (*(__int64 (__fastcall **)(__int64, struct tagRECT *, _QWORD, _QWORD))(*(_QWORD *)v106 + 24LL))(
                            v106,
                            &v112,
                            0LL,
                            0LL);
    v12 = BackgroundThumbnail;
    if ( BackgroundThumbnail < 0 )
    {
      v69 = 369LL;
      goto LABEL_98;
    }
    v72 = v16[1];
    if ( v72 == v16[3] )
    {
      BackgroundThumbnail = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                              (__int64)v16,
                              v72 + 1,
                              v70);
      v12 = BackgroundThumbnail;
      if ( BackgroundThumbnail < 0 )
      {
        v69 = 370LL;
        goto LABEL_98;
      }
    }
    v73 = (__int64 *)(*v16 + 8 * v16[1]++);
    if ( v73 )
    {
      *v73 = v106;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v73);
    }
    *(_QWORD *)v105 = 0LL;
    if ( *((_DWORD *)this + 56) == 2 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
        1u,
        3u,
        v71);
      v74 = *v9;
      v75 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)*v9 + 96LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v105);
      v113 = *(_OWORD *)v3;
      v76 = v75(v74, *(_QWORD *)v103, 0LL, &v113, v105);
      v12 = v76;
      if ( v76 < 0 )
      {
        v77 = 375LL;
LABEL_112:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v77,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v76);
LABEL_142:
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v105);
        goto LABEL_143;
      }
      v80 = (__int64 *)((char *)this + 160);
    }
    else
    {
      v78 = *v9;
      v79 = *(__int64 (__fastcall **)(DCompThumbnailHelpers *, _QWORD, _QWORD, __int128 *, int *))(*(_QWORD *)*v9 + 96LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)v105);
      v113 = *(_OWORD *)v3;
      v80 = (__int64 *)((char *)this + 160);
      v76 = v79(v78, *((_QWORD *)this + 20), 0LL, &v113, v105);
      v12 = v76;
      if ( v76 < 0 )
      {
        v77 = 379LL;
        goto LABEL_112;
      }
    }
    v76 = (*(__int64 (__fastcall **)(_QWORD, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)v105 + 24LL))(
            *(_QWORD *)v105,
            &v112,
            0LL,
            0LL);
    v12 = v76;
    if ( v76 < 0 )
    {
      v77 = 381LL;
      goto LABEL_112;
    }
    v82 = v16[1];
    if ( v82 == v16[3] )
    {
      v76 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
              (__int64)v16,
              v82 + 1,
              v81);
      v12 = v76;
      if ( v76 < 0 )
      {
        v77 = 382LL;
        goto LABEL_112;
      }
    }
    v83 = (__int64 *)(*v16 + 8 * v16[1]++);
    if ( v83 )
    {
      *v83 = *(_QWORD *)v105;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v83);
    }
    v107[0] = 0LL;
    v84 = Microsoft::WRL::ComPtr<IDCompThumbnail>::As<IVirtualDesktopThumbnail>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v105,
            v107);
    v12 = v84;
    if ( v84 < 0 )
    {
      v85 = 385LL;
LABEL_119:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v85,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v84);
LABEL_141:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v107);
      goto LABEL_142;
    }
    v84 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v107[0] + 24LL))(
            v107[0],
            0LL,
            0LL,
            0LL,
            0);
    v12 = v84;
    if ( v84 < 0 )
    {
      v85 = 386LL;
      goto LABEL_119;
    }
    TrayWindowForMonitor = TaskbarHelpers::GetTrayWindowForMonitor(*((TaskbarHelpers **)this + 25), v86);
    if ( TrayWindowForMonitor )
    {
      v101 = 0LL;
      if ( !*((_BYTE *)this + 222) )
      {
        if ( *((_DWORD *)this + 56) == 2 )
        {
          wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
            `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
            1u,
            3u,
            v88);
          v89 = (__int64 *)v103;
        }
        else
        {
          v89 = v80;
        }
        Microsoft::WRL::ComPtr<IWindowArrangementView>::operator=(&v101, v89);
      }
      rc = 0LL;
      GetWindowRect(TrayWindowForMonitor, &rc);
      MapWindowPoints(0LL, *((HWND *)this + 1), (LPPOINT)&rc, 2u);
      *(_QWORD *)&v113 = 0LL;
      DWORD2(v113) = rc.right - rc.left;
      HIDWORD(v113) = rc.bottom - rc.top;
      v98 = 0LL;
      v90 = *((_QWORD *)this + 7);
      v91 = *(__int64 (__fastcall **)(__int64, __int64, HWND, _QWORD, _QWORD, __int128 *, GUID *, struct tagSIZE *))(*(_QWORD *)v90 + 64LL);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v98);
      v92 = v91(v90, v101, TrayWindowForMonitor, 0LL, 0LL, &v113, &GUID_47267895_a4f8_4012_9e98_087c619e7cfc, &v98);
      v12 = v92;
      if ( v92 < 0 )
      {
        v93 = 413LL;
LABEL_133:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v93,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
          (const char *)(unsigned int)v92);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v98);
        Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v101);
        goto LABEL_141;
      }
      v92 = (*(__int64 (__fastcall **)(struct tagSIZE, struct tagRECT *, _QWORD, _QWORD))(**(_QWORD **)&v98 + 24LL))(
              v98,
              &rc,
              0LL,
              0LL);
      v12 = v92;
      if ( v92 < 0 )
      {
        v93 = 414LL;
        goto LABEL_133;
      }
      v95 = v16[1];
      if ( v95 == v16[3] )
      {
        v92 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                (__int64)v16,
                v95 + 1,
                v94);
        v12 = v92;
        if ( v92 < 0 )
        {
          v93 = 415LL;
          goto LABEL_133;
        }
      }
      v96 = (__int64 *)(*v16 + 8 * v16[1]++);
      if ( v96 )
      {
        *v96 = (__int64)v98;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v96);
      }
      if ( !*((_BYTE *)this + 222) )
      {
        v97 = (*(__int64 (__fastcall **)(struct tagSIZE))(**(_QWORD **)&v98 + 168LL))(v98);
        if ( v97 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1A6,
            (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
            (const char *)(unsigned int)v97);
      }
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&v98);
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(&v101);
    }
    v6 = 0;
    v12 = 0;
    goto LABEL_141;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xEF,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v10);
LABEL_145:
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v109);
  if ( v6 )
    DestroyWindow(*((HWND *)this + 1));
  return v12;
}
