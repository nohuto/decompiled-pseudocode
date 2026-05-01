/*
 * XREFs of ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x1803EDA44
 * Callers:
 *     ?SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ @ 0x1800DF470 (-SwitchToNonFullScreenApp@FullScreenPositioner@@AEAAJXZ.c)
 *     ?DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801BCCB0 (-DisplaySettingsChange@FullScreenPositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIPresentationRequestedArgs@@0@Z @ 0x1803ECD70 (-ControlGainedHelper@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@P.c)
 *     ?FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x1803ED0C0 (-FullScreenViewGetsFocus@FullScreenPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z @ 0x1803EE590 (-TabletModeChanged@FullScreenPositioner@@UEAAJW4_TABLETMODESTATE@@@Z.c)
 *     ?UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z @ 0x1803EE6E0 (-UpdateLightweightFullScreenMode@FullScreenPositioner@@UEAAJPEAUIApplicationView@@@Z.c)
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
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180074D98 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x180148460 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801D9808 (-_Log_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x1803ED85C (-IsLightweightFullScreen@FullScreenPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ @ 0x1803EE630 (-TraceLoggingInfo@FullScreenPositionerLogging@@SAXPEBDZZ.c)
 *     ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1803EE8D8 (-CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApp.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall FullScreenPositioner::PositionView(
        __int64 a1,
        struct IApplicationView *a2,
        __int64 a3,
        unsigned __int8 a4)
{
  int v4; // r14d
  __int64 result; // rax
  const char *v8; // r9
  __int64 v9; // rbx
  CCommonApplicationViewPosition *v10; // rax
  CCommonApplicationViewPosition *v11; // rax
  __int64 v12; // rcx
  int v13; // esi
  bool IsLightweightFullScreen; // r15
  void *v15; // rsi
  struct IApplicationView *v16; // rdx
  struct IApplicationViewTitlebarConfiguration **v17; // r9
  int v18; // eax
  bool v19[8]; // [rsp+20h] [rbp-59h] BYREF
  __int64 v20; // [rsp+28h] [rbp-51h] BYREF
  void *v21; // [rsp+30h] [rbp-49h] BYREF
  __int64 v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23[3]; // [rsp+40h] [rbp-39h] BYREF
  __m256i v24; // [rsp+58h] [rbp-21h]
  __int128 v25; // [rsp+78h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v4 = a3;
  FullScreenPositionerLogging::TraceLoggingInfo(
    "FullScreenPositioner - Position view: %p with PositionViewShowOperation: %d and animation requested: %d",
    a2,
    a3,
    a4);
  v25 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**(_QWORD **)(a1 + 216) + 72LL))(*(_QWORD *)(a1 + 216), &v25);
  if ( (int)result >= 0 )
  {
    v23[0] = (__int64)a2;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v23);
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v22);
    v9 = v22;
    if ( v22 )
    {
      v21 = 0LL;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
      v21 = 0LL;
      v10 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
      v20 = (__int64)v10;
      if ( v10 )
      {
        v11 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v10);
        *(_QWORD *)v19 = 0LL;
        Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(v19, (__int64)v11);
        v12 = *(_QWORD *)v19;
        *(_OWORD *)(*(_QWORD *)v19 + 16LL) = v25;
        v13 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
                v12,
                (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
                &v21);
        Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)v19);
        if ( v13 >= 0 )
        {
          IsLightweightFullScreen = FullScreenPositioner::IsLightweightFullScreen((FullScreenPositioner *)a1, a2);
          v15 = v21;
          if ( *(void **)(v9 + 72) != v21 )
          {
            v20 = (__int64)v21;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
            v20 = *(_QWORD *)(v9 + 72);
            *(_QWORD *)(v9 + 72) = v15;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v20);
          }
          *(_QWORD *)(v9 + 116) = 255LL;
          *(_DWORD *)(v9 + 180) = IsLightweightFullScreen ? 1 : 8;
          *(_DWORD *)(v9 + 200) = 0;
          *(_QWORD *)(v9 + 204) = 0LL;
          *(_QWORD *)(v9 + 212) = 0LL;
          *(_BYTE *)(v9 + 236) = 1;
          *(_QWORD *)(v9 + 240) = 0LL;
          v20 = 0x100000001LL;
          *(_QWORD *)(v9 + 220) = 0x100000001LL;
          *(_QWORD *)(v9 + 228) = 0LL;
          v24.m256i_i64[3] = 0LL;
          *(__m128i *)((char *)v24.m256i_i64 + 4) = _mm_load_si128((const __m128i *)&_xmm);
          v24.m256i_i32[5] = 0;
          v24.m256i_i32[0] = 1;
          *(_OWORD *)(v9 + 132) = 0LL;
          *(__m256i *)(v9 + 148) = v24;
          *(_BYTE *)(v9 + 128) = 1;
          *(_QWORD *)v19 = 0LL;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
          LOBYTE(v16) = *(_BYTE *)(a1 + 392);
          FullScreenPositionerHelpers::CreateTitlebarConfiguration(a2, v16, (bool)v19, v17);
          Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=(
            (__int64 *)(v9 + 192),
            *(__int64 *)v19);
          *(_DWORD *)(v9 + 124) = 1;
          if ( v4 )
          {
            *(_BYTE *)(v9 + 112) = 1;
            *(_BYTE *)(v9 + 113) = v4 == 1;
          }
          FullScreenPositionerLogging::TraceLoggingInfo(
            "FullScreenPositioner - Applying positioning operation: %p for view: %p",
            (const void *)v9,
            a2);
          v18 = (*(__int64 (__fastcall **)(struct IApplicationView *, __int64))(*(_QWORD *)a2 + 320LL))(a2, v9);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x49A,
              (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
              (const char *)(unsigned int)v18);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v19);
        }
      }
      else
      {
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v20);
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v21);
    }
    else
    {
      wil::details::in1diag3::_Log_NullAlloc(
        retaddr,
        (void *)0x466,
        (__int64)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositioner.cpp",
        v8);
    }
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v22);
    return Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(v23);
  }
  return result;
}
