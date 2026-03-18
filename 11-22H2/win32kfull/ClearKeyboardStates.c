/*
 * XREFs of ClearKeyboardStates @ 0x1C006CF0C
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1C0043D70 (xxxSystemParametersInfoWorker.c)
 *     xxxSwitchDesktop @ 0x1C006BB2C (xxxSwitchDesktop.c)
 * Callees:
 *     ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C006CF50 (-ClearCachedHotkeyModifiers@@YAXXZ.c)
 */

void __fastcall ClearKeyboardStates(__int64 a1)
{
  __int64 i; // rbx
  __int64 v2; // rax

  for ( i = 0LL; i < 64; ++i )
  {
    v2 = SGDGetUserSessionState(a1);
    *(_BYTE *)(v2 + i + 13992) &= 0xAAu;
  }
  ClearKeyboardToggleStates();
  ClearCachedHotkeyModifiers();
}
