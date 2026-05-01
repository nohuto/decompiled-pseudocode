/*
 * XREFs of ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x1802ED6CC
 * Callers:
 *     ?HostWindowActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAX_N_K@Z @ 0x1802ED714 (-HostWindowActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$.c)
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780DE0 (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ @ 0x18078D3A0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall XamlBaseViewController::DismissView(__int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
  if ( v1 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x77,
      (int)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v1);
}
