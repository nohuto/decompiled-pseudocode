/*
 * XREFs of ?_ShowView@AccessibilityExperienceManager@@AEAAJPEBUAccessibilityViewInfo@@@Z @ 0x18053DA1C
 * Callers:
 *     ?_OnClientWindowReadyForPresentationChanged@AccessibilityExperienceManager@@AEAAJPEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@3456@@Z @ 0x18053D360 (-_OnClientWindowReadyForPresentationChanged@AccessibilityExperienceManager@@AEAAJPEAUIClientWind.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall AccessibilityExperienceManager::_ShowView(
        AccessibilityExperienceManager *this,
        const struct AccessibilityViewInfo *a2)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 1) + 112LL))(*((_QWORD *)a2 + 1));
  if ( v3 < 0 )
  {
    v4 = 248LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\accessibilityexperiencemanager\\lib\\accessibilityexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 1) + 128LL))(*((_QWORD *)a2 + 1), 0LL);
  if ( v3 < 0 )
  {
    v4 = 251LL;
    goto LABEL_3;
  }
  return 0LL;
}
