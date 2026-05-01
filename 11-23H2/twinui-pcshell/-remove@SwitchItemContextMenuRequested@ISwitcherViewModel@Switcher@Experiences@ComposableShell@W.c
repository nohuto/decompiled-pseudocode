/*
 * XREFs of ?remove@SwitchItemContextMenuRequested@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180073510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuRequested::remove(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x18007353CLL);
  }
  return result;
}
