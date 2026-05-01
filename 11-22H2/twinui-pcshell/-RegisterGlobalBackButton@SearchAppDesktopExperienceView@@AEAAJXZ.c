/*
 * XREFs of ?RegisterGlobalBackButton@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047BF4C
 * Callers:
 *     ?OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x18047B530 (-OnViewShown@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 *     ?Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x18047C8A0 (-Show@SearchAppDesktopExperienceView@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ @ 0x180478618 (-EnsureImmersiveShell@SearchAppDesktopExperienceView@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppDesktopExperienceView::RegisterGlobalBackButton(SearchAppDesktopExperienceView *this)
{
  char *v2; // rbp
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)this + 216;
  if ( !*((_DWORD *)this + 54) )
  {
    v3 = SearchAppDesktopExperienceView::EnsureImmersiveShell(this);
    v4 = v3;
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43B,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v3);
      return v4;
    }
    v11 = 0LL;
    v6 = *((_QWORD *)this + 12);
    v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(*(_QWORD *)v6 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
    v8 = v7(v6, &SID_ShellTargetingTracker, &GUID_c59a546b_412b_40f3_b151_9b3202e2835f, &v11);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = 1086LL;
LABEL_9:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
      return v4;
    }
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, unsigned __int64, char *))(*(_QWORD *)v11 + 24LL))(
           v11,
           3LL,
           1LL,
           ((unsigned __int64)this + 40) & -(__int64)(this != 0LL),
           v2);
    v4 = v8;
    if ( v8 < 0 )
    {
      v9 = 1088LL;
      goto LABEL_9;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  }
  return 0LL;
}
