/*
 * XREFs of ?_OnViewEvent@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18053D800
 * Callers:
 *     <none>
 * Callees:
 *     ?RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ @ 0x1800F52D0 (-RelaunchWithDelay@AccessibilityExperienceManager@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z @ 0x1801B1458 (-_DismissView@AccessibilityExperienceManager@@AEAAJPEAUAccessibilityViewInfo@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@UEventRegistrationToken@@@Z @ 0x18053D41C (-_OnViewCreated@AccessibilityExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@I.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_OnViewEvent(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *a3)
{
  int v5; // eax
  struct EventRegistrationToken v6; // r8
  unsigned int v7; // edi
  int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+40h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgs *, int *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v12);
  v7 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B4,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
  if ( v12 )
  {
    if ( v12 == 4 )
    {
      AccessibilityExperienceManager::_DismissView(this, (AccessibilityExperienceManager *)((char *)this + 368));
      if ( *((_BYTE *)this + 456) )
      {
        *((_BYTE *)this + 456) = 0;
        v9 = AccessibilityExperienceManager::RelaunchWithDelay(this);
        if ( v9 < 0 )
        {
          v10 = 709LL;
          goto LABEL_6;
        }
      }
    }
  }
  else
  {
    v9 = AccessibilityExperienceManager::_OnViewCreated(this, a2, v6);
    if ( v9 < 0 )
    {
      v10 = 697LL;
LABEL_6:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v10,
        (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
        (const char *)(unsigned int)v9);
      return (unsigned int)v9;
    }
  }
  return 0LL;
}
