/*
 * XREFs of ?OnStoryboardCompleted@TouchKeyboardExperienceManager@@UEAAXXZ @ 0x180514E70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z @ 0x180172F30 (--4IUnknown@Foundation@Windows@winrt@@QEAAAEAU0123@$$QEAU0123@@Z.c)
 *     ?FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z @ 0x180209468 (-FireInputPaneShowingEvent@TouchKeyboardExperienceManager@@AEAAJIUtagRECT@@AEBU2@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV?$shared_ptr@UKBViewInfo@@@std@@@Z @ 0x1802DB1F8 (-FindViewInfo@TouchKeyboardExperienceManager@@AEAAJIAEAV-$shared_ptr@UKBViewInfo@@@std@@@Z.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ??$StoryboardCompleted@AEAU?$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU?$atomic@I@std@@$$QEA_N1@Z @ 0x180509104 (--$StoryboardCompleted@AEAU-$atomic@I@std@@_N_N@TouchKeyboardExperienceTelemetryLogger@@SAXAEAU-.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z @ 0x18051BBA4 (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@AEAAXIPEBG_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TouchKeyboardExperienceManager::OnStoryboardCompleted(TouchKeyboardExperienceManager *this)
{
  char v2; // al
  KeyboardHosting::TabTipAdapter **v3; // rsi
  int *v4; // r14
  __int64 v5; // rcx
  signed int v6; // eax
  int v7; // eax
  char v8; // al
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  std::_Ref_count_base *v10[2]; // [rsp+28h] [rbp-28h] BYREF
  struct tagRECT v11; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  char v13; // [rsp+80h] [rbp+30h] BYREF
  char v14; // [rsp+88h] [rbp+38h] BYREF
  char v15; // [rsp+90h] [rbp+40h] BYREF
  char v16; // [rsp+98h] [rbp+48h] BYREF

  v2 = *((_BYTE *)this + 752);
  *((_BYTE *)this + 752) = 0;
  if ( v2 )
  {
    *(_OWORD *)v10 = 0LL;
    v3 = (KeyboardHosting::TabTipAdapter **)((char *)this - 184);
    v4 = (int *)((char *)this + 748);
    if ( (int)TouchKeyboardExperienceManager::FindViewInfo(
                (RTL_SRWLOCK *)this - 23,
                *((_DWORD *)this + 187),
                (__int64)v10) < 0 )
    {
      if ( v10[1] )
        std::_Ref_count_base::_Decref(v10[1]);
      return;
    }
    v5 = *((_QWORD *)this + 81);
    if ( v5 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5);
      if ( v6 < 0 )
        winrt::throw_hresult(v6);
      v9 = 0LL;
      winrt::Windows::Foundation::IUnknown::operator=(
        (TouchKeyboardExperienceManager *)((char *)this + 648),
        (winrt::Windows::Foundation::IUnknown *)&v9);
      if ( v9 )
        winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v9);
    }
    v11 = *(struct tagRECT *)((char *)v10[0] + 120);
    v7 = TouchKeyboardExperienceManager::FireInputPaneShowingEvent(
           v3,
           (const struct tagRECT *)*((unsigned int *)v10[0] + 26),
           &v11,
           (struct tagRECT *)((char *)v10[0] + 136));
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x445,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    v13 = 0;
    v14 = 1;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(v4, &v14, &v13);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)v3,
      *v4,
      L"Show",
      0);
    if ( v10[1] )
      std::_Ref_count_base::_Decref(v10[1]);
  }
  v8 = *((_BYTE *)this + 753);
  *((_BYTE *)this + 753) = 0;
  if ( v8 )
  {
    v15 = 0;
    v16 = 0;
    TouchKeyboardExperienceTelemetryLogger::StoryboardCompleted<std::atomic<unsigned int> &,bool,bool>(
      (int *)this + 187,
      &v16,
      &v15);
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      (TouchKeyboardExperienceManager *)((char *)this - 184),
      *((_DWORD *)this + 187),
      L"Hide",
      0);
  }
}
