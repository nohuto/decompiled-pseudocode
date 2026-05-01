/*
 * XREFs of ?HandleForegroundChangeEvent@TouchKeyboardExperienceManager@@CAXQEAUHWINEVENTHOOK__@@KPEAUHWND__@@JJKK@Z @ 0x18008B730
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequestType@Text@Shell@Internal@Windows@@@Z @ 0x18008B7B0 (-HandleForegroundChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHWND__@@PEAW4ShellRequest.c)
 *     ?IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ @ 0x18008D1B0 (-IsSessionShuttingDown@TouchKeyboardExperienceManager@@SA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B9BA4 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_CacheForegroundAppId@@@details@wil@@QEAAX.c)
 */

void __fastcall TouchKeyboardExperienceManager::HandleForegroundChangeEvent(
        HWINEVENTHOOK hWinEventHook,
        DWORD event,
        HWND hwnd,
        LONG idObject)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( !TouchKeyboardExperienceManager::IsSessionShuttingDown()
    && event == 3
    && TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager )
  {
    v7 = *((_QWORD *)TouchKeyboardExperienceManager::s_currentTouchKeyboardExperienceManager + 92);
    LOBYTE(v6) = 1;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_CacheForegroundAppId>::ReportUsage(
      &`wil::Feature<__WilFeatureTraits_Feature_CacheForegroundAppId>::GetImpl'::`2'::impl,
      v6);
    v8 = *(_QWORD *)(v7 + 112);
    v11[0] = 0;
    v9 = KeyboardHosting::TabTipAdapterPolicy::HandleForegroundChanged(
           (KeyboardHosting::TabTipAdapterPolicy *)(v8 + 16),
           hwnd,
           (enum Windows::Internal::Shell::Text::ShellRequestType *)v11);
    v10 = v9;
    if ( v9 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD41,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v9,
        v11[0]);
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1914,
        (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v10,
        v11[0]);
    }
  }
}
