/*
 * XREFs of ?Commit@VirtualDesktopGestureWindow@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@IM_N@Z @ 0x18060BD28
 * Callers:
 *     ?Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z @ 0x18060B7D4 (-Commit@VirtualDesktopGestureContext@@QEAAJPEAUIVirtualDesktopGestureHandlerPrivate@@H_N@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18014F710 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GTGTest@@@details@wil@@QEAAX_NW4Reporting.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___ @ 0x1802160B0 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242___ @ 0x18021614C (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc2.c)
 *     DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed___ @ 0x1802161E8 (DCompThumbnailHelpers--DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28.c)
 *     _lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_ @ 0x180216B24 (_lambda_c0d8e1709f705684b7fc3b88b56d28ed_--_lambda_c0d8e1709f705684b7fc3b88b56d28ed_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBCC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ @ 0x18060DA88 (-GetScaleFactor@VirtualDesktopGestureWindow@@QEAAIXZ.c)
 *     ?ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ @ 0x180611CE0 (-ShowAndAnimateCustomWallpapers@VirtualDesktopGestureWindow@@IEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VirtualDesktopGestureWindow::Commit(
        VirtualDesktopGestureWindow *this,
        struct IVirtualDesktopGestureHandlerPrivate *a2,
        int a3,
        float a4,
        bool a5)
{
  VirtualDesktopGestureWindow *v6; // rcx
  __int64 v7; // r9
  int v8; // eax
  unsigned int v9; // r14d
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdi
  int v15; // ebx
  VirtualDesktopGestureWindow *v16; // rcx
  int v17; // eax
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // r8
  int v25; // [rsp+30h] [rbp-50h] BYREF
  struct IVirtualDesktopGestureHandlerPrivate *v26; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v27[16]; // [rsp+40h] [rbp-40h] BYREF
  int v28; // [rsp+50h] [rbp-30h] BYREF
  int v29; // [rsp+54h] [rbp-2Ch]
  int v30; // [rsp+58h] [rbp-28h]
  int v31; // [rsp+5Ch] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v25 = a3;
  v26 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v26);
  v8 = *((_DWORD *)this + 57);
  if ( v8 != 2 )
  {
    if ( v8 == 5 && VirtualDesktopGestureWindow::ShowAndAnimateCustomWallpapers(v6) )
    {
      v20 = lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_(
              (__int64)v27,
              &v26,
              &v25);
      v28 = (int)(float)((float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) * a4);
      v29 = 0;
      v30 = v28 + 1;
      v31 = 1;
      v17 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_b380b0a81cd678091ab35ee1fc3cc242___(
              *((_QWORD *)this + 20),
              (int)&v28,
              v21,
              v20);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 481LL;
        goto LABEL_14;
      }
    }
    else
    {
      v22 = lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_(
              (__int64)v27,
              &v26,
              &v25);
      v28 = (int)(float)((float)(*((_DWORD *)this + 48) - *((_DWORD *)this + 46)) * a4);
      v29 = 0;
      v30 = v28 + 1;
      v31 = 1;
      v17 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_3f2017e679634d121ef035a0678ae2ba___(
              *((_QWORD *)this + 20),
              (int)&v28,
              v23,
              v22);
      v18 = v17;
      if ( v17 < 0 )
      {
        v19 = 491LL;
        goto LABEL_14;
      }
    }
LABEL_15:
    v18 = 0;
    goto LABEL_16;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GTGTest>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GTGTest>::GetImpl'::`2'::impl,
    1u,
    3u,
    v7);
  v9 = a5 + 35;
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 21) + 184LL))(
          *((_QWORD *)this + 21),
          v10,
          v9);
  if ( v11 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CE,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v11);
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 22) + 184LL))(
          *((_QWORD *)this + 22),
          v12,
          v9);
  if ( v13 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CF,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
      (const char *)(unsigned int)v13);
  v14 = lambda_c0d8e1709f705684b7fc3b88b56d28ed_::_lambda_c0d8e1709f705684b7fc3b88b56d28ed_((__int64)v27, &v26, &v25);
  v15 = *((_DWORD *)this + 48) - *((_DWORD *)this + 46);
  v28 = (int)(float)((float)((float)((float)(int)VirtualDesktopGestureWindow::GetScaleFactor(v16) * 28.0) + (float)v15)
                   * a4);
  v29 = 0;
  v30 = v28 + 1;
  v31 = 1;
  v17 = DCompThumbnailHelpers::DCompThumbnail_SetRectWithCallback__lambda_c0d8e1709f705684b7fc3b88b56d28ed___(
          *((_QWORD *)this + 20),
          (int)&v28,
          v9,
          v14);
  v18 = v17;
  if ( v17 >= 0 )
    goto LABEL_15;
  v19 = 471LL;
LABEL_14:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v19,
    (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopgesturehandler.cpp",
    (const char *)(unsigned int)v17);
LABEL_16:
  Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v26);
  return v18;
}
