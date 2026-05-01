/*
 * XREFs of ?remove@SwitchItemContextMenuRequested@ISwitcherViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAXVEventRegistrationToken@Foundation@Windows@@@Z @ 0x180043D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::ISwitcherViewModel::SwitchItemContextMenuRequested::remove(
        __int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1);
  if ( (int)result < 0 )
  {
    __abi_WinRTraiseException(result);
    JUMPOUT(0x180043D7CLL);
  }
  return result;
}
