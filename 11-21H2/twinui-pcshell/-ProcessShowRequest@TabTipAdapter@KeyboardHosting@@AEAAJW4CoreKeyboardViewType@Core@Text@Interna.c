/*
 * XREFs of ?ProcessShowRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x180477DC8
 * Callers:
 *     ?OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@W4CoreKeyboardModality@45678@W4ShellRequestedStateChangeReason@2@@Z @ 0x180477A10 (-OnShellRequestedStateChange@TabTipAdapter@KeyboardHosting@@AEAAJW4CoreKeyboardViewType@Core@Tex.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z @ 0x18011F150 (-SetTrackSelectionPosition@TabTipAdapter@KeyboardHosting@@AEAAJ_N@Z.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180157D9C (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z @ 0x18045DCAC (-GetApplicationViewIdIfExists@TouchKeyboardExperienceManager@@QEAA_NIAEAI@Z.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18046A010 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessShowRequest(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // ebx
  KeyboardHosting::TabTipAdapterPolicy *v8; // rbx
  int ShellState; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned __int8 IsViewShown; // al
  int v16; // [rsp+20h] [rbp-30h]
  unsigned int v17; // [rsp+40h] [rbp-10h] BYREF
  __int64 v18; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  int v20; // [rsp+78h] [rbp+28h] BYREF
  char v21; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+88h] [rbp+38h] BYREF

  v3 = a2;
  if ( !(_DWORD)a2 )
  {
    v5 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAB8,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v5);
  }
  LOBYTE(a2) = 1;
  v6 = KeyboardHosting::TabTipAdapter::SetTrackSelectionPosition((KeyboardHosting::TabTipAdapter *)a1, a2, a3);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v21 = 0;
    LOBYTE(v20) = 0;
    v17 = 0;
    v18 = 0LL;
    v8 = *(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 112);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v8, v3, &v21, (__int64)&v20, &v17, &v18);
    v7 = ShellState;
    if ( ShellState >= 0 )
    {
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
        1u,
        v10,
        v11);
      v22 = 0;
      if ( TouchKeyboardExperienceManager::GetApplicationViewIdIfExists(*(RTL_SRWLOCK **)(a1 + 64), v3, &v22) )
      {
        IsViewShown = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
                        *(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 112),
                        v22);
        TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
          *(TouchKeyboardExperienceManager **)(a1 + 64),
          v22,
          IsViewShown);
      }
      LOBYTE(v16) = v20;
      LOBYTE(v13) = v21;
      ShellState = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 24) + 544LL))(
                     *(_QWORD *)(a1 + 24),
                     v18,
                     v17,
                     v13,
                     v16,
                     1,
                     v3);
      v7 = ShellState;
      if ( ShellState >= 0 )
      {
        v7 = 0;
        goto LABEL_14;
      }
      v12 = 2787LL;
    }
    else
    {
      v12 = 2754LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ShellState);
LABEL_14:
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v18);
    return v7;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xABC,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
    (const char *)(unsigned int)v6);
  return v7;
}
