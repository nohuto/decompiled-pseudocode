/*
 * XREFs of ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180463910
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x180458548 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x18045D6AC (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z @ 0x18045D9A0 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@QEAAJIUtagRECT@@AEBU2@@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z @ 0x180469C2C (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnStoryboardCompleted(
        TouchKeyboardExperienceManager *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v5; // al
  int v6; // eax
  char v7; // al
  _BYTE v8[8]; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v9[2]; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v10; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v12; // [rsp+78h] [rbp+28h] BYREF
  char v13; // [rsp+80h] [rbp+30h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF

  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetImpl'::`2'::impl,
    1u,
    a3,
    a4);
  v5 = *((_BYTE *)this + 946);
  *((_BYTE *)this + 946) = 0;
  if ( v5 )
  {
    *(_OWORD *)v9 = 0LL;
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo(
                (RTL_SRWLOCK *)this - 24,
                *((_DWORD *)this + 235),
                (__int64 *)v9) < 0 )
    {
      if ( v9[1] )
        std::_Ref_count_base::_Decref(v9[1]);
      return;
    }
    v10 = *(struct tagRECT *)((char *)v9[0] + 120);
    v6 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
           (KeyboardHosting::TabTipAdapter **)this - 24,
           *((_DWORD *)v9[0] + 26),
           &v10,
           (const struct tagRECT *)((char *)v9[0] + 136));
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x3F7,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v6);
    v12 = 0;
    v13 = 1;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
      (_DWORD *)this + 235,
      &v13,
      &v12);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)((char *)this - 192),
      *((_DWORD *)this + 235),
      L"Show",
      0);
    if ( v9[1] )
      std::_Ref_count_base::_Decref(v9[1]);
  }
  v7 = *((_BYTE *)this + 947);
  *((_BYTE *)this + 947) = 0;
  if ( v7 )
  {
    v14 = 0;
    v8[0] = 0;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
      (_DWORD *)this + 235,
      v8,
      &v14);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)((char *)this - 192),
      *((_DWORD *)this + 235),
      L"Hide",
      0);
  }
}
