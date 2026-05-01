/*
 * XREFs of ?_RepositionAppViewsOnWorkAreaChange@SurfaceHubPositioner@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x1805A6074
 * Callers:
 *     ?DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x180073200 (-DisplaySettingsChange@SurfaceHubPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9808 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SurfaceHubPositioner::_RepositionAppViewsOnWorkAreaChange(
        SurfaceHubPositioner *this,
        struct IImmersiveMonitor *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  const char *v6; // r9
  __int64 v7; // rdi
  _OWORD *v8; // rax
  int v9; // ebx
  CCommonApplicationViewPosition *v10; // rax
  __int64 v11; // rcx
  void *v12; // rbx
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, __int64, struct IImmersiveMonitor *, __int64 *); // rbx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int i; // r15d
  __int64 v18; // rbx
  int (__fastcall *v19)(__int64, _QWORD, GUID *, _OWORD **); // rsi
  int v20; // eax
  _OWORD *v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+40h] [rbp-40h] BYREF
  void *v25; // [rsp+48h] [rbp-38h] BYREF
  int v26; // [rsp+50h] [rbp-30h] BYREF
  __int64 v27; // [rsp+58h] [rbp-28h] BYREF
  __int128 v28; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v28 = 0LL;
  v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v28);
  v5 = v4;
  if ( v4 >= 0 )
  {
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v27);
    v7 = v27;
    if ( !v27 )
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x215,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
        v6);
    v25 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
    v25 = 0LL;
    v8 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v22 = v8;
    if ( v8 )
    {
      v10 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v8);
      v22 = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v22, (__int64)v10);
      v11 = (__int64)v22;
      v22[1] = v28;
      v9 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
             v11,
             (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             &v25);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v22);
      v9 = -2147024882;
    }
    if ( v7 && v9 >= 0 )
    {
      v12 = v25;
      if ( *(void **)(v7 + 72) != v25 )
      {
        v22 = v25;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v22);
        v22 = *(_OWORD **)(v7 + 72);
        *(_QWORD *)(v7 + 72) = v12;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v22);
      }
      v23 = 0LL;
      v13 = *((_QWORD *)this + 23);
      v14 = *(__int64 (__fastcall **)(__int64, __int64, struct IImmersiveMonitor *, __int64 *))(*(_QWORD *)v13 + 64LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
      v15 = v14(v13, 2LL, a2, &v23);
      v5 = v15;
      if ( v15 < 0 )
      {
        v16 = 548LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v16,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
          (const char *)(unsigned int)v15);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
LABEL_26:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v25);
        Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v27);
        return v5;
      }
      v15 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v23 + 24LL))(v23, &v24);
      v5 = v15;
      if ( v15 < 0 )
      {
        v16 = 550LL;
        goto LABEL_16;
      }
      for ( i = 0; i < v24; ++i )
      {
        v22 = 0LL;
        v18 = v23;
        v19 = *(int (__fastcall **)(__int64, _QWORD, GUID *, _OWORD **))(*(_QWORD *)v23 + 32LL);
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
        if ( v19(v18, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v22) >= 0
          && (*(int (__fastcall **)(_OWORD *, int *))(*(_QWORD *)v22 + 216LL))(v22, &v26) >= 0 )
        {
          if ( v26 )
          {
            v20 = (*(__int64 (__fastcall **)(_OWORD *, __int64))(*(_QWORD *)v22 + 320LL))(v22, v7);
            if ( v20 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0x232,
                (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
                (const char *)(unsigned int)v20);
          }
        }
        Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease((__int64 *)&v22);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
    }
    v5 = 0;
    goto LABEL_26;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x213,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
