/*
 * XREFs of ?_GetViewWrapper@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@XZ @ 0x18042F944
 * Callers:
 *     ?GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z @ 0x18042B9D0 (-GetWindowHandle@CortanaSharedExperienceManager@@UEAAJPEA_K@Z.c)
 *     ?_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18042EF8C (-_ApplyPriorityBoostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ @ 0x18042F0A4 (-_ApplyPriorityUnboostIfNeeded@CortanaSharedExperienceManager@@AEAAJXZ.c)
 *     ?_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ @ 0x180430AC0 (-_ResetActivationTimeoutPolicy@CortanaSharedExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall CortanaSharedExperienceManager::_GetViewWrapper(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  v3 = *(_QWORD *)(a1 + 504);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v3 + 56LL);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a2);
  v5 = v4(v3, a2);
  if ( v5 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x406,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanasharedexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  return a2;
}
