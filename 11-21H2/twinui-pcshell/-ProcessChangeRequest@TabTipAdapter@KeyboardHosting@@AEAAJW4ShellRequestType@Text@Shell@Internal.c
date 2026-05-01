/*
 * XREFs of ?ProcessChangeRequest@TabTipAdapter@KeyboardHosting@@AEAAJW4ShellRequestType@Text@Shell@Internal@Windows@@I@Z @ 0x180477C4C
 * Callers:
 *     ?UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B8B98 (-UpdateAllowInputPanelMdmPolicy@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 *     ?OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@Internal@UI@Windows@@@Z @ 0x18022F548 (-OnModalityInfoChanged@TabTipAdapter@KeyboardHosting@@QEAAJUCoreKeyboardModalityInfo@Core@Text@I.c)
 *     ?OnOnScreenKeyboardVisibilityChanged@TouchKeyboardExperienceManager@@AEAAX_N@Z @ 0x1804632B4 (-OnOnScreenKeyboardVisibilityChanged@TouchKeyboardExperienceManager@@AEAAX_N@Z.c)
 *     ?OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z @ 0x180475F94 (-OnLightDismiss@TabTipAdapter@KeyboardHosting@@QEAAJI@Z.c)
 *     ?OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ @ 0x180477260 (-OnShellRequestedHide@TabTipAdapter@KeyboardHosting@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180157D9C (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@PEAE1PEAW4CoreKeyboardModality@45678@PEAPEAU?$IVectorView@UCoreKeyboardPositionAndSizeOption@Core@Text@Internal@UI@Windows@@@Collections@Foundation@8@@Z @ 0x18022FC80 (-GetShellState@TabTipAdapterPolicy@KeyboardHosting@@UEAAJW4CoreKeyboardViewType@Core@Text@Intern.c)
 *     ?UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18046A010 (-UpdateViewVisibilityInShellPreference@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z @ 0x180482488 (-IsViewShown@TabTipAdapterPolicy@KeyboardHosting@@QEAA_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapter::ProcessChangeRequest(
        __int64 a1,
        int a2,
        unsigned int a3,
        const char *a4)
{
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  KeyboardHosting::TabTipAdapterPolicy *v10; // rbx
  int ShellState; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // r9
  unsigned __int8 IsViewShown; // al
  int v19; // [rsp+20h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  unsigned int v21; // [rsp+70h] [rbp+30h] BYREF
  int v22; // [rsp+78h] [rbp+38h] BYREF
  char v23; // [rsp+80h] [rbp+40h] BYREF
  __int64 v24; // [rsp+88h] [rbp+48h] BYREF

  if ( a3 == *(_DWORD *)(a1 + 528) )
  {
    v7 = KeyboardHosting::TabTipAdapter::SetOverrideMonitorSizeForSIP((KeyboardHosting::TabTipAdapter *)a1);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB66,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        (const char *)(unsigned int)v7);
  }
  v8 = a2 - 2;
  if ( v8 )
  {
    if ( v8 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0xB73,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
        a4);
    v9 = 3;
  }
  else
  {
    v9 = 2;
  }
  v23 = 0;
  LOBYTE(v22) = 0;
  v21 = 0;
  v24 = 0LL;
  v10 = *(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 112);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  ShellState = KeyboardHosting::TabTipAdapterPolicy::GetShellState(v10, 11LL, &v23, (__int64)&v22, &v21, &v24);
  v14 = ShellState;
  if ( ShellState < 0 )
  {
    v15 = 2938LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)ShellState);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
    return v14;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
    1u,
    v12,
    v13);
  if ( v9 == 2 )
  {
    IsViewShown = KeyboardHosting::TabTipAdapterPolicy::IsViewShown(
                    *(KeyboardHosting::TabTipAdapterPolicy **)(a1 + 112),
                    a3);
    TouchKeyboardExperienceManager::UpdateViewVisibilityInShellPreference(
      *(TouchKeyboardExperienceManager **)(a1 + 64),
      a3,
      IsViewShown);
  }
  LOBYTE(v19) = v22;
  LOBYTE(v16) = v23;
  ShellState = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64, int, int, unsigned int))(**(_QWORD **)(a1 + 24) + 544LL))(
                 *(_QWORD *)(a1 + 24),
                 v24,
                 v21,
                 v16,
                 v19,
                 v9,
                 a3);
  v14 = ShellState;
  if ( ShellState < 0 )
  {
    v15 = 2968LL;
    goto LABEL_15;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v24);
  return 0LL;
}
