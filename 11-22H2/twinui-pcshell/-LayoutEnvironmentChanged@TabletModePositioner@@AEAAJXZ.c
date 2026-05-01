/*
 * XREFs of ?LayoutEnvironmentChanged@TabletModePositioner@@AEAAJXZ @ 0x1805BDC4C
 * Callers:
 *     ?DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DISPLAY_CHANGE_FLAGS@@@Z @ 0x1801B93C0 (-DisplaySettingsChange@TabletModePositioner@@UEAAJPEAUIImmersiveMonitor@@W4IMMERSIVE_MONITOR_DIS.c)
 *     ?ScaleFactorChanged@TabletModePositioner@@UEAAXXZ @ 0x1805BE3D0 (-ScaleFactorChanged@TabletModePositioner@@UEAAXXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18016BE9C (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805B9BF0 (-ChangeLayoutEnvironmentHelper@TabletModePositioner@@AEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall TabletModePositioner::LayoutEnvironmentChanged(TabletModePositioner *this)
{
  int CurrentLayoutEnvironment; // ebx
  __int64 v3; // rdx
  _BYTE v5[40]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v6[40]; // [rsp+48h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  (*(void (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 31) + 24LL))(*((_QWORD *)this + 31), v6);
  CurrentLayoutEnvironment = TabletModePositioner::GetCurrentLayoutEnvironment(
                               (IUnknown **)this,
                               (struct LAYOUT_ENVIRONMENT_DETAILS *)v5);
  if ( CurrentLayoutEnvironment < 0 )
  {
    v3 = 1915LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CurrentLayoutEnvironment);
    return (unsigned int)CurrentLayoutEnvironment;
  }
  CurrentLayoutEnvironment = TabletModePositioner::ChangeLayoutEnvironmentHelper(
                               this,
                               (const struct LAYOUT_ENVIRONMENT_DETAILS *)v5);
  if ( CurrentLayoutEnvironment < 0 )
  {
    v3 = 1926LL;
    goto LABEL_3;
  }
  return 0LL;
}
