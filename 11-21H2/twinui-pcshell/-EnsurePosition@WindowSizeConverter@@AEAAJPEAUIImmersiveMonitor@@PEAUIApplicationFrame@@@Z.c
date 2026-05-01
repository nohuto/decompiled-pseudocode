/*
 * XREFs of ?EnsurePosition@WindowSizeConverter@@AEAAJPEAUIImmersiveMonitor@@PEAUIApplicationFrame@@@Z @ 0x180137C08
 * Callers:
 *     ?DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x18003FC90 (-DisplaySettingsChange@WindowSizeConverter@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISP.c)
 *     _lambda_fd32c1b568db692c2b9aba787b88bf18_::operator() @ 0x180137A58 (_lambda_fd32c1b568db692c2b9aba787b88bf18_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJPEAPEAUIApplicationViewPosition@@AEAUtagRECT@@@Z @ 0x18007A3FC (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowSizeConverter::EnsurePosition(
        WindowSizeConverter *this,
        struct IImmersiveMonitor *a2,
        struct IApplicationFrame *a3)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  __int64 v8; // rdx
  void *v9; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a2 + 88LL))(a2, &v10);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x208,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  v9 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
         &v9,
         &v10);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = 524LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_5;
  }
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, void *))(*(_QWORD *)a3 + 32LL))(a3, v9);
  v5 = v6;
  if ( v6 < 0 )
  {
    v8 = 525LL;
    goto LABEL_10;
  }
  v5 = 0;
LABEL_5:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v9);
  return v5;
}
