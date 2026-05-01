/*
 * XREFs of ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18077DA3C
 * Callers:
 *     ?ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1802AF9E0 (-ContextMenuInvoked@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@WBA@E$AAAXPE$AAU.c)
 * Callees:
 *     ?IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z @ 0x18001C170 (-IsEnabled@XamlSwitcherTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z @ 0x18001C194 (-get@-$static_lazy@VXamlSwitcherTelemetry@@@details@wil@@QEAAPEAVXamlSwitcherTelemetry@@P6AXXZ@Z.c)
 *     ?IsTabletMode@TabletModeHelpers@@YA_NXZ @ 0x1800F43A8 (-IsTabletMode@TabletModeHelpers@@YA_NXZ.c)
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18077D914 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitc.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780480 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780A8C (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780DE0 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z @ 0x180782540 (-TaskViewContextMenuInvoked_@XamlSwitcherTelemetry@@QEBAXI_N@Z.c)
 *     ?get@CommandId@ISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAIXZ @ 0x180785BF0 (-get@CommandId@ISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsIntern.c)
 */

__int64 __fastcall _ContextMenuInvoked__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        __int64 a1,
        __int64 (__fastcall ***a2)(_QWORD, void *, _QWORD *),
        __int64 a3)
{
  unsigned int v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // edi
  enum _TABLETMODESTATE *v9; // rdx
  TabletModeHelpers *v10; // rcx
  enum _TABLETMODESTATE *v11; // rdx
  TabletModeHelpers *v12; // rcx
  __int64 v13; // rcx
  char IsTabletMode; // bp
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  __int64 v22; // rcx
  XamlSwitcherTelemetry *v23; // rcx

  v5 = WindowsInternal::ComposableShell::Experiences::Switcher::ISwitchItemContextMenuMetadata::CommandId::get(a3);
  v8 = 3;
  if ( v5 != 1501 && v5 != 1502 )
  {
    if ( v5 == 1505 || v5 == 1506 )
    {
LABEL_13:
      XamlAllUpViewController::HandlePinningCommand(a1, a2, v5);
      goto LABEL_15;
    }
    if ( v5 != 1507 )
    {
      if ( v5 == 1508 )
      {
        _CloseSwitchItem__QIXamlMultitaskingViewController__XamlAllUpViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
          a1,
          a2,
          v6,
          v7);
        IsTabletMode = TabletModeHelpers::IsTabletMode(v12, v11);
        goto LABEL_12;
      }
      if ( v5 != 1509 && v5 != 1510 )
      {
        if ( v5 != 1515 )
        {
          XamlAllUpViewController::HandleMoveToCommand(a1, a2, v5);
          goto LABEL_15;
        }
        goto LABEL_13;
      }
    }
  }
  XamlAllUpViewController::HandleSnappingCommands(a1, a2, v5);
LABEL_15:
  IsTabletMode = TabletModeHelpers::IsTabletMode(v10, v9);
  v15 = v5 - 1501;
  if ( !v15 )
  {
    v8 = 4;
    goto LABEL_30;
  }
  v16 = v15 - 1;
  if ( !v16 )
  {
    v8 = 5;
    goto LABEL_30;
  }
  v17 = v16 - 3;
  if ( !v17 )
  {
    v8 = 7;
    goto LABEL_30;
  }
  v18 = v17 - 1;
  if ( !v18 )
  {
    v8 = 8;
    goto LABEL_30;
  }
  v19 = v18 - 1;
  if ( !v19 )
  {
    v8 = 6;
    goto LABEL_30;
  }
  v20 = v19 - 1;
  if ( !v20 )
  {
LABEL_12:
    v8 = 1;
    goto LABEL_30;
  }
  v21 = v20 - 1;
  if ( v21 )
  {
    if ( v21 != 1 )
      v8 = 9;
  }
  else
  {
    v8 = 2;
  }
LABEL_30:
  if ( XamlSwitcherTelemetry::IsEnabled(v13) )
  {
    wil::details::static_lazy<XamlSwitcherTelemetry>::get(
      v22,
      (void (__cdecl *)())_lambda_2520381e1860fe6008a618d103f3de1f_::_lambda_invoker_cdecl_);
    XamlSwitcherTelemetry::TaskViewContextMenuInvoked_(v23, v8, IsTabletMode);
  }
  return __abi_winrt_ptr_assign((_QWORD *)(a1 + 208), 0LL);
}
