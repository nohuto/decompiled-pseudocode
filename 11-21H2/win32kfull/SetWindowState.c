/*
 * XREFs of SetWindowState @ 0x1C014FC00
 * Callers:
 *     NtUserSetWindowState @ 0x1C014FA80 (NtUserSetWindowState.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C014FCB4 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall SetWindowState(__int64 a1, unsigned int a2)
{
  unsigned __int16 v2; // r10
  struct tagWND *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL) && (unsigned int)ValidateState(a2) )
    SetOrClrWF(1, v3, v2, 1);
  return 1LL;
}
