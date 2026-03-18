/*
 * XREFs of ApiSetEditionIsGpqForegroundAccessibleCurrent @ 0x1C0070C58
 * Callers:
 *     NtUserGetKeyState @ 0x1C004E960 (NtUserGetKeyState.c)
 *     NtUserGetKeyboardState @ 0x1C00708C0 (NtUserGetKeyboardState.c)
 *     NtUserGetAsyncKeyState @ 0x1C0070AB0 (NtUserGetAsyncKeyState.c)
 *     xxxProcessKeyEvent @ 0x1C00C90C0 (xxxProcessKeyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ApiSetEditionIsGpqForegroundAccessibleCurrent(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( qword_1C02964E0 && (int)qword_1C02964E0() >= 0 && qword_1C02964E8 )
    return (unsigned int)qword_1C02964E8(a1);
  return v1;
}
