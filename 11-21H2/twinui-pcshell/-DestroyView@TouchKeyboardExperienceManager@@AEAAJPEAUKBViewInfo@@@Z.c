/*
 * XREFs of ?DestroyView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18045D340
 * Callers:
 *     ?OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z @ 0x180462760 (-OnInputAppChangeApproved@TouchKeyboardExperienceManager@@QEAAJPEBG@Z.c)
 *     ?OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180463DA0 (-OnViewEvent@TouchKeyboardExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x180040860 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800B898C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_InputViewModernHostingAnimation@@@details.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800C1468 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFix.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z @ 0x18045D848 (-FireInputPaneHidingEvent@TouchKeyboardExperienceManager@@QEAAXI_N@Z.c)
 *     ?UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z @ 0x180469C2C (-UpdateShellRunningAnimationInShellPreference@TouchKeyboardExperienceManager@@QEAAXIPEBG_N@Z.c)
 *     ?SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z @ 0x1805F4A0C (-SendKeyboardSetVisible@IhmNotification@@YAX_N0@Z.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::DestroyView(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v4; // r14
  int v7; // eax
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // al
  char v12; // al
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (__int64 *)((char *)a2 + 8);
  if ( *((_QWORD *)a2 + 1) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 57) + 32LL))(*((_QWORD *)this + 57), *v4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFAF,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(v4);
  }
  if ( *(_QWORD *)a2 )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_GeneralCobaltDesktopKeyboardHostingBugFixes>::GetImpl'::`2'::impl,
      1u,
      a3,
      a4);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)a2);
  }
  *((_BYTE *)a2 + 32) = 1;
  v8 = *((_DWORD *)a2 + 26);
  if ( v8 == *((_DWORD *)this + 191) )
  {
    IhmNotification::SendKeyboardSetVisible(0LL, 0, a3);
    v8 = *((_DWORD *)a2 + 26);
  }
  TouchKeyboardExperienceManager::FireInputPaneHidingEvent(this, v8, 1);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_InputViewModernHostingAnimation>::GetImpl'::`2'::impl,
    1u,
    v9,
    v10);
  v11 = *((_BYTE *)this + 1138);
  *((_BYTE *)this + 1138) = 0;
  if ( v11 )
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      this,
      *((_DWORD *)this + 283),
      L"Show",
      0);
  v12 = *((_BYTE *)this + 1139);
  *((_BYTE *)this + 1139) = 0;
  if ( v12 )
    TouchKeyboardExperienceManager::UpdateShellRunningAnimationInShellPreference(
      this,
      *((_DWORD *)this + 283),
      L"Hide",
      0);
  _InterlockedExchange((volatile __int32 *)this + 283, 0);
  return 0LL;
}
