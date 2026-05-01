/*
 * XREFs of ?__abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x18077AC00
 * Callers:
 *     ?__abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@5WindowsInternal@@@Z @ 0x1802AF2A0 (-__abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked@-QIXamlMultitaskingViewControll.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ___abi_IXamlMultitaskingViewController____abi_ContextMenuInvoked__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAJPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows__PE_AAUISwitchItemContextMenuMetadata_Switcher_Experiences_5WindowsInternal___Z(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 136) )
    __abi_WinRTraiseObjectDisposedException();
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 112LL))(a1 + 8);
  }
  catch ( ... )
  {
    __abi_translateCurrentException();
  }
  return 0LL;
}
