/*
 * XREFs of ?Invoke@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXPE$AAUISwitchItem@Multitasking@4Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@2345@@Z @ 0x180786880
 * Callers:
 *     ?__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemContextMenuInvokedHandler___abi_IDelegate____abi_Invoke@?Q__abi_IDelegate@ItemContextMenuInvokedHandler@Switcher@Experiences@ComposableShell@WindowsInternal@@23456@UE$AAAJPE$AAUISwitchItem@Multitasking@5Internal@Windows@@PE$AAUISwitchItemContextMenuMetadata@3456@@Z @ 0x180787AF0 (-__abi_WindowsInternal_ComposableShell_Experiences_Switcher_ItemContextMenuInvokedHandler___abi_.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::Invoke(
        _QWORD **a1)
{
  __int64 result; // rax

  if ( *a1 == &WindowsInternal::ComposableShell::Experiences::Switcher::ItemContextMenuInvokedHandler::`vftable'{for `__abi_IUnknown'} )
    return (*(__int64 (__fastcall **)(_QWORD *))(*a1[37] + 8LL))(a1[37]);
  result = ((__int64 (__fastcall *)(_QWORD **))(*a1)[3])(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x1807868D6LL);
  }
  return result;
}
