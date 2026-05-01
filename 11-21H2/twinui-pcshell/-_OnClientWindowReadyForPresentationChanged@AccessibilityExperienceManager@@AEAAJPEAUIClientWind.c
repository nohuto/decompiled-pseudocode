/*
 * XREFs of ?_OnClientWindowReadyForPresentationChanged@AccessibilityExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x180488BF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_ShowView@AccessibilityExperienceManager@@AEAAJPEBUAccessibilityViewInfo@@@Z @ 0x1804892AC (-_ShowView@AccessibilityExperienceManager@@AEAAJPEBUAccessibilityViewInfo@@@Z.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_OnClientWindowReadyForPresentationChanged(
        AccessibilityExperienceManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *a2,
        struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *a3)
{
  int v5; // ebx
  __int64 v6; // rdx
  AccessibilityExperienceManager *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+40h] [rbp+18h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *, char *))(*(_QWORD *)a3 + 48LL))(
         a3,
         &v10);
  if ( v5 < 0 )
  {
    v6 = 725LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  if ( v10 )
  {
    (*(void (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *, _QWORD))(*(_QWORD *)a2 + 88LL))(
      a2,
      *((_QWORD *)this + 48));
    *((_QWORD *)this + 48) = 0LL;
    v5 = AccessibilityExperienceManager::_ShowView(v8, (AccessibilityExperienceManager *)((char *)this + 368));
    if ( v5 < 0 )
    {
      v6 = 734LL;
      goto LABEL_3;
    }
  }
  return 0LL;
}
