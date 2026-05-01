/*
 * XREFs of ?ReturnForegroundToLockScreenCurtainIfNeeded@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804871C8
 * Callers:
 *     ?Hide@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180483A20 (-Hide@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ @ 0x180483F40 (-MinimizeToBoxMode@CortanaDesktopExperienceView@@UEAAJXZ.c)
 *     ?OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ @ 0x180485CF4 (-OnViewPropertiesChanging@CortanaDesktopExperienceView@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ @ 0x1804826A0 (-EnsureImmersiveShell@CortanaDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::ReturnForegroundToLockScreenCurtainIfNeeded(
        CortanaDesktopExperienceView *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64, GUID *, GUID *, __int64 *); // rbx
  int v7; // eax
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 247) )
  {
    v2 = CortanaDesktopExperienceView::EnsureImmersiveShell(this);
    v3 = v2;
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x64E,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v2);
      return v3;
    }
    v10 = 0LL;
    v5 = *((_QWORD *)this + 15);
    v6 = *(__int64 (__fastcall **)(__int64, GUID *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
    v7 = v6(v5, &IID_ILockScreenViewManager, &GUID_053bf212_5a22_4a75_87eb_dfca4ea90e02, &v10);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 1617LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
        (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
      return v3;
    }
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 80LL))(v10);
    v3 = v7;
    if ( v7 < 0 )
    {
      v8 = 1619LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
  }
  return 0LL;
}
