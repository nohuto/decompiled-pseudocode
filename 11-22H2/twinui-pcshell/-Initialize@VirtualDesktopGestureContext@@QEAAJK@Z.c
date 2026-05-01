/*
 * XREFs of ?Initialize@VirtualDesktopGestureContext@@QEAAJK@Z @ 0x18060E180
 * Callers:
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x18060F670 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180060D40 (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180060D70 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180060DF8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x1802D0AA0 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x180609EE8 (--$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDe.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x18060E688 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x180749868 (-CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall VirtualDesktopGestureContext::Initialize(
        VirtualDesktopGestureContext *this,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  char v6; // r14
  __int64 v7; // rcx
  int HideWallpaperIconsObject; // eax
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rbx
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // r8
  const char *v18; // r9
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rdx
  VirtualDesktopGestureWindow **v22; // r8
  VirtualDesktopGestureWindow *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdx
  VirtualDesktopGestureWindow *v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rsi
  VirtualDesktopGestureWindow *v31; // [rsp+40h] [rbp-79h] BYREF
  int v32; // [rsp+48h] [rbp-71h] BYREF
  __int64 v33; // [rsp+50h] [rbp-69h] BYREF
  __int64 v34; // [rsp+58h] [rbp-61h] BYREF
  __int64 v35; // [rsp+60h] [rbp-59h] BYREF
  int v36; // [rsp+68h] [rbp-51h]
  unsigned int v37; // [rsp+70h] [rbp-49h] BYREF
  __int64 v38[2]; // [rsp+78h] [rbp-41h] BYREF
  HMONITOR v39; // [rsp+88h] [rbp-31h] BYREF
  int v40[2]; // [rsp+90h] [rbp-29h] BYREF
  struct IApplicationViewCollection *v41; // [rsp+98h] [rbp-21h] BYREF
  struct ISwitchThumbnailDeviceManager *v42; // [rsp+A0h] [rbp-19h] BYREF
  struct IVirtualDesktopManagerInternal *v43[2]; // [rsp+A8h] [rbp-11h] BYREF
  char v44; // [rsp+B8h] [rbp-1h]
  __int128 pvParam; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v46; // [rsp+D0h] [rbp+17h]
  struct tagRECT v47; // [rsp+D8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  *((_DWORD *)this + 44) = a2;
  v6 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    a4);
  v7 = *((_QWORD *)this + 23);
  *((_QWORD *)this + 23) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  HideWallpaperIconsObject = CreateHideWallpaperIconsObject((struct IUnknown **)this + 23);
  if ( HideWallpaperIconsObject < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x50C,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)HideWallpaperIconsObject);
  v33 = 0LL;
  v9 = *((_QWORD *)this + 4);
  v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v9 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  v11 = v10(v9, &v33);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x510,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_46;
  }
  v43[1] = this;
  v44 = 1;
  if ( a2 == 5 )
  {
    pvParam = 0LL;
    v46 = 0LL;
    if ( SystemParametersInfoW(0xAEu, 0x18u, &pvParam, 0) )
      *((_BYTE *)this + 66) = (unsigned __int8)(BYTE12(pvParam) & 8) >> 3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 184LL))(*((_QWORD *)this + 1), 2LL);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v35,
    v33);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v37,
    (__int64)&v35,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&pvParam,
    (__int64)&v35,
    v36);
  while ( 1 )
  {
    if ( v37 == (_DWORD)pvParam && v38[1] == v46 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pvParam + 1);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v38);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
      v6 = 0;
      v12 = 0;
      goto LABEL_42;
    }
    v13 = v38[0];
    v34 = v38[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v34);
    v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v32);
    if ( v14 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x52F,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v14);
      goto LABEL_29;
    }
    if ( v32 )
      break;
LABEL_29:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
    ++v37;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v37);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v13 + 40LL))(v13, &v39);
  v12 = v15;
  if ( v15 < 0 )
  {
    v27 = 1330LL;
    goto LABEL_40;
  }
  v47 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v13 + 72LL))(v13, &v47);
  v12 = v15;
  if ( v15 < 0 )
  {
    v27 = 1334LL;
LABEL_40:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v15);
    goto LABEL_41;
  }
  *(_QWORD *)v40 = *((_QWORD *)this + 5);
  v41 = (struct IApplicationViewCollection *)*((_QWORD *)this + 2);
  v42 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 1);
  v43[0] = *(struct IVirtualDesktopManagerInternal **)this;
  Microsoft::WRL::Details::Make<VirtualDesktopGestureWindow,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
    (__int64)&v31,
    v43,
    &v42,
    &v41,
    (struct IImmersiveSettingsCache **)v40,
    &v47,
    &v39);
  if ( !v31 )
  {
    v12 = -2147024882;
    v24 = 2147942414LL;
    v25 = 1338LL;
    goto LABEL_34;
  }
  v16 = VirtualDesktopGestureWindow::Initialize(v31, a2);
  v12 = v16;
  if ( v16 >= 0 )
  {
    v18 = 0LL;
    v19 = *((_QWORD *)this + 10);
    if ( v19 == *((_QWORD *)this + 12)
      && (v20 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 72,
                  v19 + 1,
                  v17),
          v18 = (const char *)(unsigned int)v20,
          v20 < 0)
      || (v21 = *((_QWORD *)this + 10),
          *((_QWORD *)this + 10) = v21 + 1,
          (v22 = (VirtualDesktopGestureWindow **)(*((_QWORD *)this + 9) + 8 * v21)) == 0LL)
      || (*v22 = 0LL, v22 == &v31) )
    {
      v23 = v31;
    }
    else
    {
      *v22 = v31;
      v23 = 0LL;
      v31 = 0LL;
    }
    if ( (int)v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x53C,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        v18);
      DestroyWindow(*((HWND *)v31 + 1));
      v12 = -2147024882;
      goto LABEL_35;
    }
    if ( v23 )
    {
      v31 = 0LL;
      (*(void (__fastcall **)(__int64))(*((_QWORD *)v23 + 2) + 16LL))((__int64)v23 + 16);
    }
    goto LABEL_29;
  }
  v24 = (unsigned int)v16;
  v25 = 1339LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v25,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v24);
LABEL_35:
  v26 = v31;
  if ( v31 )
  {
    v31 = 0LL;
    (*(void (__fastcall **)(__int64))(*((_QWORD *)v26 + 2) + 16LL))((__int64)v26 + 16);
  }
LABEL_41:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pvParam + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
LABEL_42:
  if ( v6 )
  {
    v28 = *((_QWORD *)this + 9);
    v29 = v28 + 8LL * *((_QWORD *)this + 10);
    while ( v28 != v29 )
    {
      DestroyWindow(*(HWND *)(*(_QWORD *)v28 + 8LL));
      v28 += 8LL;
    }
  }
LABEL_46:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v33);
  return v12;
}
