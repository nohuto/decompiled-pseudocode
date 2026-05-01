/*
 * XREFs of ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x180550300
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18054FF7C (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180119284 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x18054E2C0 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18054E34C (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc2.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x18054E3D8 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x180551DC8 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@AEAA_NXZ @ 0x180555B14 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@AEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VirtualDesktopGestureWindow::Commit(
        VirtualDesktopGestureWindow *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3,
        float a4,
        bool a5)
{
  VirtualDesktopGestureWindow *v8; // rcx
  __int64 v9; // r9
  int v10; // eax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  int v16; // ebx
  VirtualDesktopGestureWindow *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  struct IVirtualDesktopGestureHandlerPrivate *v24; // [rsp+30h] [rbp-40h] BYREF
  struct IVirtualDesktopGestureHandlerPrivate *v25; // [rsp+38h] [rbp-38h] BYREF
  int v26; // [rsp+40h] [rbp-30h]
  int v27; // [rsp+44h] [rbp-2Ch]
  struct IVirtualDesktopGestureHandlerPrivate *v28; // [rsp+48h] [rbp-28h] BYREF
  int v29; // [rsp+50h] [rbp-20h]
  int v30; // [rsp+54h] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v24 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v24);
  v10 = *((_DWORD *)this + 56);
  if ( v10 == 2 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
      1u,
      3u,
      v9);
    v11 = a5 + 35;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 21) + 184LL))(
            *((_QWORD *)this + 21),
            v12,
            v11);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21A,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v13);
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 22) + 184LL))(
            *((_QWORD *)this + 22),
            v14,
            v11);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x21B,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v15);
    v25 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v25);
    v26 = a3;
    v16 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
    LODWORD(v28) = (int)(float)((float)((float)((float)(int)VirtualDesktopGestureWindow::GetScaleFactor(v17) * 28.0)
                                      + (float)v16)
                              * a4);
    HIDWORD(v28) = 0;
    v29 = (_DWORD)v28 + 1;
    v30 = 1;
    v18 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
            *((_QWORD *)this + 20),
            (int)&v28,
            v11,
            (__int64 *)&v25);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 547LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
        (const char *)(unsigned int)v18);
      goto LABEL_16;
    }
  }
  else if ( v10 == 5 && VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(v8) )
  {
    v28 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    v29 = a3;
    LODWORD(v25) = (int)(float)((float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) * a4);
    HIDWORD(v25) = 0;
    v26 = (_DWORD)v25 + 1;
    v27 = 1;
    v18 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242___(
            *((_QWORD *)this + 20),
            (int)&v25,
            v21,
            (__int64 *)&v28);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 557LL;
      goto LABEL_14;
    }
  }
  else
  {
    v28 = a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v28);
    v29 = a3;
    LODWORD(v25) = (int)(float)((float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) * a4);
    HIDWORD(v25) = 0;
    v26 = (_DWORD)v25 + 1;
    v27 = 1;
    v18 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___(
            *((_QWORD *)this + 20),
            (int)&v25,
            v22,
            (__int64 *)&v28);
    v19 = v18;
    if ( v18 < 0 )
    {
      v20 = 567LL;
      goto LABEL_14;
    }
  }
  v19 = 0;
LABEL_16:
  if ( a2 )
    (*(void (__fastcall **)(struct IVirtualDesktopGestureHandlerPrivate *))(*(_QWORD *)a2 + 16LL))(a2);
  return v19;
}
