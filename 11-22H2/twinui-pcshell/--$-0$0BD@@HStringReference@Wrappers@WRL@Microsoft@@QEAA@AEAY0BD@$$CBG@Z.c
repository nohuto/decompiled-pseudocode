/*
 * XREFs of ??$?0$0BD@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BD@$$CBG@Z @ 0x1803AAEAC
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x180528120 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *this,
        const WCHAR *a2)
{
  this[1].Reserved.Reserved1 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(this, a2, 0x13u, 0x12u);
  return this;
}
