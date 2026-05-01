/*
 * XREFs of ?_OnViewDestroyed@SearchAppExperienceManager@@AEAAJXZ @ 0x18045FC9C
 * Callers:
 *     ?_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUIShellExperienceViewChangedArg@3456@@Z @ 0x18045FA60 (-_OnViewChangedHandler@SearchAppExperienceManager@@AEAAJPEAUIShellExperienceView@Experience@Shel.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVSearchAppExperienceManager@@$$T@Z @ 0x18045CA9C (--$InvokeAll@PEAVSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCortana.c)
 *     ?_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ @ 0x18045EF28 (-_CancelDeferredSuspensionTimer@SearchAppExperienceManager@@AEAAJXZ.c)
 *     ?_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ @ 0x180460838 (-_UnregisterViewPresentationChanged@SearchAppExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall SearchAppExperienceManager::_OnViewDestroyed(struct _TP_TIMER **this)
{
  int v2; // eax
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = SearchAppExperienceManager::_CancelDeferredSuspensionTimer(this);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x403,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
  v3 = SearchAppExperienceManager::_UnregisterViewPresentationChanged((SearchAppExperienceManager *)this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x404,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v3);
  Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<SearchAppExperienceManager *,std::nullptr_t>(
    (__int64)(this + 12),
    (__int64)this);
  return 0LL;
}
