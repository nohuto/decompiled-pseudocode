/*
 * XREFs of ?Initialize@VirtualDesktopGestureContext@@QEAAJPEAUHMONITOR__@@K@Z @ 0x180552180
 * Callers:
 *     ?InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z @ 0x1805538B4 (-InitializeContext@VirtualDesktopGestureHandler@@AEAAJI@Z.c)
 * Callees:
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180017ADC (--0Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Micr.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180017B0C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMon.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180017C30 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EEE10 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18031A2A4 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@UIPlaceModeButtonAcc@@@WRL@Microsoft@@$0PPPPPPPO@V-$C.c)
 *     ??$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDeviceManager@@PEAUIApplicationViewCollection@@PEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VVirtualDesktopGestureWindow@@@12@$$QEAPEAUIVirtualDesktopManagerInternal@@$$QEAPEAUISwitchThumbnailDeviceManager@@$$QEAPEAUIApplicationViewCollection@@$$QEAPEAUIImmersiveSettingsCache@@AEAUCRect@Geometry@@AEAPEAUHMONITOR__@@@Z @ 0x18054E708 (--$Make@VVirtualDesktopGestureWindow@@PEAUIVirtualDesktopManagerInternal@@PEAUISwitchThumbnailDe.c)
 *     ?Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z @ 0x1805526C8 (-Initialize@VirtualDesktopGestureWindow@@QEAAJK@Z.c)
 *     ?CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z @ 0x1805F3628 (-CreateHideWallpaperIconsObject@@YAJPEAPEAUIUnknown@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall VirtualDesktopGestureContext::Initialize(
        VirtualDesktopGestureContext *this,
        HMONITOR a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // r15d
  char v6; // r14
  __int64 v7; // r9
  __int64 v8; // rcx
  int HideWallpaperIconsObject; // eax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64 *); // rbx
  int v12; // eax
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rbx
  int v16; // eax
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  void *v21; // r8
  const char *v22; // r9
  __int64 v23; // rdx
  int v24; // eax
  VirtualDesktopGestureWindow **v25; // r8
  VirtualDesktopGestureWindow *v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  VirtualDesktopGestureWindow *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rsi
  VirtualDesktopGestureWindow *v34; // [rsp+40h] [rbp-79h] BYREF
  __int64 v35; // [rsp+48h] [rbp-71h] BYREF
  int v36; // [rsp+50h] [rbp-69h] BYREF
  int v37; // [rsp+54h] [rbp-65h] BYREF
  __int64 v38; // [rsp+58h] [rbp-61h] BYREF
  __int64 v39; // [rsp+60h] [rbp-59h] BYREF
  int v40; // [rsp+68h] [rbp-51h]
  unsigned int v41; // [rsp+70h] [rbp-49h] BYREF
  __int64 v42[2]; // [rsp+78h] [rbp-41h] BYREF
  HMONITOR v43; // [rsp+88h] [rbp-31h] BYREF
  int v44[2]; // [rsp+90h] [rbp-29h] BYREF
  struct IApplicationViewCollection *v45; // [rsp+98h] [rbp-21h] BYREF
  struct ISwitchThumbnailDeviceManager *v46; // [rsp+A0h] [rbp-19h] BYREF
  struct IVirtualDesktopManagerInternal *v47[2]; // [rsp+A8h] [rbp-11h] BYREF
  char v48; // [rsp+B8h] [rbp-1h]
  __int128 pvParam; // [rsp+C0h] [rbp+7h] BYREF
  __int64 v50; // [rsp+D0h] [rbp+17h]
  struct tagRECT v51; // [rsp+D8h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v4 = a3;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    a3,
    a4);
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 46) = v4;
  v6 = 1;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v7);
  v8 = *((_QWORD *)this + 24);
  *((_QWORD *)this + 24) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  HideWallpaperIconsObject = CreateHideWallpaperIconsObject((struct IUnknown **)this + 24);
  if ( HideWallpaperIconsObject < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x4B4,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)HideWallpaperIconsObject);
  v35 = 0LL;
  v10 = *((_QWORD *)this + 4);
  v11 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 112LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  v12 = v11(v10, &v35);
  v13 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B8,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_47;
  }
  v47[1] = this;
  v48 = 1;
  if ( v4 == 5 )
  {
    pvParam = 0LL;
    v50 = 0LL;
    if ( SystemParametersInfoW(0xAEu, 0x18u, &pvParam, 0) )
      *((_BYTE *)this + 74) = (unsigned __int8)(BYTE12(pvParam) & 8) >> 3;
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 184LL))(*((_QWORD *)this + 1), 2LL);
  v36 = 0;
  v14 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)this + 152LL))(*(_QWORD *)this, &v36);
  v13 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4D5,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v14);
    goto LABEL_43;
  }
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v39,
    v35);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&v41,
    (__int64)&v39,
    0);
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::Iterator(
    (__int64)&pvParam,
    (__int64)&v39,
    v40);
  while ( 1 )
  {
    if ( v41 == (_DWORD)pvParam && v42[1] == v50 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pvParam + 1);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v42);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
      v6 = 0;
      v13 = 0;
      goto LABEL_43;
    }
    v15 = v42[0];
    v38 = v42[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v38);
    v16 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 48LL))(v15, &v37);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4DA,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v16);
      goto LABEL_31;
    }
    if ( v37 )
      break;
LABEL_31:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
    ++v41;
    details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::Iterator::GetCurrentObject(&v41);
  }
  v17 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v15 + 40LL))(v15, &v43);
  v13 = v17;
  if ( v17 < 0 )
  {
    v30 = 1245LL;
    goto LABEL_41;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
    0,
    v18,
    v19);
  v51 = 0LL;
  v17 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v15 + 72LL))(v15, &v51);
  v13 = v17;
  if ( v17 < 0 )
  {
    v30 = 1260LL;
LABEL_41:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v30,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v17);
    goto LABEL_42;
  }
  *(_QWORD *)v44 = *((_QWORD *)this + 5);
  v45 = (struct IApplicationViewCollection *)*((_QWORD *)this + 2);
  v46 = (struct ISwitchThumbnailDeviceManager *)*((_QWORD *)this + 1);
  v47[0] = *(struct IVirtualDesktopManagerInternal **)this;
  Microsoft::WRL::Details::Make<VirtualDesktopGestureWindow,IVirtualDesktopManagerInternal *,ISwitchThumbnailDeviceManager *,IApplicationViewCollection *,IImmersiveSettingsCache *,Geometry::CRect &,HMONITOR__ * &>(
    (__int64)&v34,
    v47,
    &v46,
    &v45,
    (struct IImmersiveSettingsCache **)v44,
    &v51,
    &v43);
  if ( !v34 )
  {
    v13 = -2147024882;
    v27 = 2147942414LL;
    v28 = 1263LL;
    goto LABEL_36;
  }
  v20 = VirtualDesktopGestureWindow::Initialize(v34, v4);
  v13 = v20;
  if ( v20 >= 0 )
  {
    v22 = 0LL;
    v23 = *((_QWORD *)this + 11);
    if ( v23 == *((_QWORD *)this + 13)
      && (v24 = CTSimpleArray<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IPlaceModeButtonAcc>>>::_EnsureCapacity(
                  (__int64)this + 80,
                  v23 + 1,
                  v21),
          v22 = (const char *)(unsigned int)v24,
          v24 < 0)
      || (++*((_QWORD *)this + 11),
          (v25 = (VirtualDesktopGestureWindow **)(*((_QWORD *)this + 10) + 8 * (*((_QWORD *)this + 11) - 1LL))) == 0LL)
      || (*v25 = 0LL, v25 == &v34) )
    {
      v26 = v34;
    }
    else
    {
      *v25 = v34;
      v26 = 0LL;
      v34 = 0LL;
    }
    if ( (int)v22 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4F1,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        v22);
      DestroyWindow(*((HWND *)v34 + 1));
      v13 = -2147024882;
      goto LABEL_37;
    }
    if ( v26 )
    {
      v34 = 0LL;
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v26 + 4);
    }
    goto LABEL_31;
  }
  v27 = (unsigned int)v20;
  v28 = 1264LL;
LABEL_36:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)v27);
LABEL_37:
  v29 = v34;
  if ( v34 )
  {
    v34 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v29 + 4);
  }
LABEL_42:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pvParam + 1);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v42);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v39);
LABEL_43:
  if ( v6 )
  {
    v31 = *((_QWORD *)this + 10);
    v32 = v31 + 8LL * *((_QWORD *)this + 11);
    while ( v31 != v32 )
    {
      DestroyWindow(*(HWND *)(*(_QWORD *)v31 + 8LL));
      v31 += 8LL;
    }
  }
LABEL_47:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v35);
  return v13;
}
