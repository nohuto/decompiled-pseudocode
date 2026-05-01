/*
 * XREFs of ?RuntimeClassInitialize@TouchKeyboardExperienceManager@@QEAAJXZ @ 0x18010BC90
 * Callers:
 *     ??$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTouchKeyboardExperienceManager@@@Z @ 0x18010B8D8 (--$MakeAndInitialize@VTouchKeyboardExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVTo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::RuntimeClassInitialize(TouchKeyboardExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), TouchKeyboardExperienceManager *, char *); // rdi
  __int64 v6; // rdx
  int v7; // [rsp+20h] [rbp-48h]
  GUID v8; // [rsp+30h] [rbp-38h] BYREF
  __int128 v9; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = IID_ITouchKeyboardExperienceManager;
  v9 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TouchKeyboardExperienceManager *)((char *)this + 48),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&v8,
         1u);
  if ( v2 < 0 )
  {
    v6 = 640LL;
  }
  else
  {
    v8 = GUID_c9969d8d_c814_50fd_9f55_84a54e9453fc;
    v9 = 0LL;
    v2 = CImmersiveShellComponent::RegisterServiceInformation(
           (TouchKeyboardExperienceManager *)((char *)this + 48),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&v8,
           1u);
    if ( v2 < 0 )
    {
      v6 = 641LL;
    }
    else
    {
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 100);
      v2 = CoreUICreate((char *)this + 800);
      if ( v2 < 0 )
      {
        v6 = 642LL;
      }
      else
      {
        v3 = *((_QWORD *)this + 100);
        v4 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(TouchKeyboardExperienceManager *), TouchKeyboardExperienceManager *, char *))(*(_QWORD *)v3 + 144LL);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)this + 101);
        v2 = v4(v3, TouchKeyboardExperienceManager::AnimationGapTimerCallback, this, (char *)this + 808);
        if ( v2 >= 0 )
          return 0LL;
        v6 = 646LL;
      }
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v7);
  return (unsigned int)v2;
}
