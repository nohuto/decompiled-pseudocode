/*
 * XREFs of _VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor$2 @ 0x18060B462
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

void __fastcall VirtualDesktopSwitcherHost::RegisterKeyboardHook_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 80));
}
