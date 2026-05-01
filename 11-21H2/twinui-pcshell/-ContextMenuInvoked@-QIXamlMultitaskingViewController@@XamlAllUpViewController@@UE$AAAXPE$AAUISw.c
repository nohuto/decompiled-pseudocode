/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180441C28
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x180202AA0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800693F8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800A01A0 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_VpmUpdates@@@details@wil@@QEAAX_NW4Report.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ??$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z @ 0x180440100 (--$TaskViewContextMenuInvoked@I_N@XamlSwitcherTelemetry@@SAX$$QEAI$$QEA_N@Z.c)
 *     ?CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAA_NPE$AAUISwitchItem@2345@@Z @ 0x180441AA0 (-CanSwitchItemMoveDesktops@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windo.c)
 *     ?CreateDesktop@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAUIVirtualDesktop@2345@_K@Z @ 0x1804421A8 (-CreateDesktop@IVirtualDesktopController@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE.c)
 *     ?GetAt@?$IVectorView@PE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@Windows@@UE$AAAPE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@4@I@Z @ 0x180443094 (-GetAt@-$IVectorView@PE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Colle.c)
 *     ?GetContextMenuOptionChosen@XamlAllUpViewController@@AE$AAAII@Z @ 0x1804436B0 (-GetContextMenuOptionChosen@XamlAllUpViewController@@AE$AAAII@Z.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180443C38 (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180443CB4 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?get@CommandId@ISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAIXZ @ 0x18044761C (-get@CommandId@ISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 *     ?get@VirtualDesktops@IVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@Windows@@UE$AAAPE$AAU?$IVectorView@PE$AAUIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@@Collections@Foundation@6@XZ @ 0x18044777C (-get@VirtualDesktops@IVirtualDesktopPerMonitorCollection@Multitasking@ComposableShell@Internal@W.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  enum _TABLETMODESTATE *v7; // rdx
  TabletModeHelpers *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 Desktop; // rax
  __int64 v12; // r15
  int v13; // edi
  __int64 v14; // r13
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  __int64 v20; // [rsp+28h] [rbp-18h]
  __int64 v21; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v23; // [rsp+88h] [rbp+48h] BYREF

  v23 = 0;
  v5 = WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata::CommandId::get(a3);
  v6 = v5;
  if ( v5 >= 0x5DD )
  {
    if ( v5 <= 0x5DE )
      goto LABEL_13;
    if ( v5 > 0x5E0 )
    {
      if ( v5 <= 0x5E2 )
      {
        XamlAllUpViewController::HandlePinningCommand(a1, a2, v5);
        goto LABEL_30;
      }
      if ( v5 == 1507 )
        goto LABEL_13;
      if ( v5 == 1508 )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(a1[2] + 96LL))(a1 + 2, a2);
        goto LABEL_30;
      }
      if ( v5 <= 0x5E6 )
      {
LABEL_13:
        XamlAllUpViewController::HandleSnappingCommands(a1, a2, v5);
        goto LABEL_30;
      }
    }
  }
  if ( Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::CanSwitchItemMoveDesktops(
         a1[26],
         a2) )
  {
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_VpmUpdates>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_VpmUpdates>::GetImpl'::`2'::impl,
      0,
      v9,
      v10);
    if ( !a1[25] )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xCE,
        (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlallupviewcontroller.cpp",
        (const char *)0x8000FFFFLL,
        v19);
    if ( v6 == 1504 )
    {
      Desktop = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopController::CreateDesktop(a1[26], 0LL);
      v12 = Desktop;
      v20 = Desktop;
      v13 = 1;
      v14 = v19;
    }
    else
    {
      v14 = Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopPerMonitorCollection::VirtualDesktops::get();
      v19 = v14;
      v23 = 2;
      Desktop = Windows::Foundation::Collections::IVectorView<Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop __gc *>::GetAt(
                  v14,
                  v6);
      v20 = Desktop;
      v13 = 6;
      v12 = Desktop;
    }
    v23 = v13;
    v15 = __abi_winrt_ptr_ctor(Desktop);
    v21 = v15;
    if ( (v13 & 4) != 0 )
    {
      v13 &= ~4u;
      v23 = v13;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    if ( (v13 & 2) != 0 )
    {
      v13 &= ~2u;
      v23 = v13;
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( (v13 & 1) != 0 && v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)a1[26] + 88LL))(a1[26], a2, v15);
    if ( v16 < 0 )
      __abi_WinRTraiseException(v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
LABEL_30:
  LOBYTE(v23) = TabletModeHelpers::IsTabletMode(v8, v7);
  LODWORD(v19) = XamlAllUpViewController::GetContextMenuOptionChosen(v17, v6);
  XamlSwitcherTelemetry::TaskViewContextMenuInvoked<unsigned int,bool>((unsigned int *)&v19, (bool *)&v23);
  return __abi_winrt_ptr_assign(a1 + 27, 0LL);
}
