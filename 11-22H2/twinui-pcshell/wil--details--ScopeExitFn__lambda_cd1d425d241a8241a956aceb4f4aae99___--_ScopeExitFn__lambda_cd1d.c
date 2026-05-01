/*
 * XREFs of wil::details::ScopeExitFn__lambda_cd1d425d241a8241a956aceb4f4aae99___::_ScopeExitFn__lambda_cd1d425d241a8241a956aceb4f4aae99___ @ 0x180675924
 * Callers:
 *     _HotkeyHandler::HandleHotkey_::_1_::dtor$1 @ 0x180676E0B (_HotkeyHandler--HandleHotkey_--_1_--dtor$1.c)
 * Callees:
 *     ?_ResetState@HotkeyHandler@@AEAAXXZ @ 0x180677C40 (-_ResetState@HotkeyHandler@@AEAAXXZ.c)
 */

void __fastcall wil::details::ScopeExitFn__lambda_cd1d425d241a8241a956aceb4f4aae99___::_ScopeExitFn__lambda_cd1d425d241a8241a956aceb4f4aae99___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    HotkeyHandler::_ResetState(*(HotkeyHandler **)a1);
  }
}
