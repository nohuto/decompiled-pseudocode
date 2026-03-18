/*
 * XREFs of ClearWindowState @ 0x1C0223BF8
 * Callers:
 *     NtUserClearWindowState @ 0x1C01CD8D0 (NtUserClearWindowState.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00F2594 (SetOrClrWF.c)
 *     ?ValidateState@@YAHK@Z @ 0x1C0223BC8 (-ValidateState@@YAHK@Z.c)
 */

__int64 __fastcall ClearWindowState(__int64 a1, __int16 a2)
{
  unsigned __int16 v2; // r10
  struct tagWND *v3; // r11

  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 424LL) == *(_QWORD *)(gptiCurrent + 424LL) && ValidateState(a2) )
    SetOrClrWF(0, v3, v2, 1);
  return 1LL;
}
