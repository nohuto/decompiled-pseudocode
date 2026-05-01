/*
 * XREFs of ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x18011B170
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1800B0F0C (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18011AF94 (-GetCurrentLayoutEnvironment@TabletModePositioner@@AEAAJPEAULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z @ 0x18011B224 (-SetAppLayout@TabletModePositioner@@AEAAJPEAUIAppLayout@@@Z.c)
 *     ?CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout@@@Z @ 0x18011D308 (-CreateEmptyAppLayout@TabletModePositioner@@CAJAEBULAYOUT_ENVIRONMENT_DETAILS@@PEAPEAUIAppLayout.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ?CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z @ 0x180501508 (-CleanupBackgroundViews@TabletModePositioner@@AEAAJPEAUIObjectArray@@W4ViewOperationFlags@@@Z.c)
 *     ?ShowLauncher@TabletModePositioner@@AEAAJ_N@Z @ 0x180506A68 (-ShowLauncher@TabletModePositioner@@AEAAJ_N@Z.c)
 *     ?SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z @ 0x180509670 (-SwitchToSanitizedAppLayout@TabletModePositioner@@AEAAJW4ViewOperationFlags@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositioner::InitializeAppLayoutForStartup(IUnknown **this)
{
  int CurrentLayoutEnvironment; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  struct IAppLayout *v10; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[40]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  CurrentLayoutEnvironment = TabletModePositioner::GetCurrentLayoutEnvironment(
                               this,
                               (struct LAYOUT_ENVIRONMENT_DETAILS *)v11);
  v3 = CurrentLayoutEnvironment;
  if ( CurrentLayoutEnvironment < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x682,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)CurrentLayoutEnvironment);
    return v3;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  v4 = TabletModePositioner::CreateEmptyAppLayout((const struct LAYOUT_ENVIRONMENT_DETAILS *)v11, &v10);
  v3 = v4;
  if ( v4 < 0 )
  {
    v6 = 1670LL;
  }
  else
  {
    v4 = TabletModePositioner::SetAppLayout((TabletModePositioner *)this, v10);
    v3 = v4;
    if ( v4 >= 0 )
    {
      *((_DWORD *)this + 58) = 1;
      if ( *((_DWORD *)this + 59) == 1 )
      {
        v7 = TabletModePositioner::SwitchToSanitizedAppLayout(this, 0LL);
        if ( v7 < 0 )
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x690,
            (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
            (const char *)(unsigned int)v7);
          v8 = TabletModePositioner::CleanupBackgroundViews(this, 0LL, 0LL);
          if ( v8 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x693,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v8);
          v9 = TabletModePositioner::ShowLauncher((TabletModePositioner *)this, 0);
          if ( v9 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x694,
              (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
              (const char *)(unsigned int)v9);
        }
      }
      v3 = 0;
      goto LABEL_6;
    }
    v6 = 1671LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v4);
LABEL_6:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return v3;
}
