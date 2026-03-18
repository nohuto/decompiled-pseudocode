/*
 * XREFs of ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C00FDC68
 * Callers:
 *     ?OnPointerCursorOperation@@YAXXZ @ 0x1C00FDC20 (-OnPointerCursorOperation@@YAXXZ.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C0097DC0 (TransitionCursorSuppressionState.c)
 *     ?xxxEnsureAllDpiCursors@@YAXXZ @ 0x1C00FDD1C (-xxxEnsureAllDpiCursors@@YAXXZ.c)
 *     ?xxxRestoreMouseCursors@Feedback@@YAXXZ @ 0x1C01D530C (-xxxRestoreMouseCursors@Feedback@@YAXXZ.c)
 *     ?xxxSwitchCursors@@YAXHH@Z @ 0x1C01D53B0 (-xxxSwitchCursors@@YAXHH@Z.c)
 */

void HandlePointerCursorSideOp(void)
{
  signed __int32 v0; // eax
  signed __int32 v1; // ett
  __int16 v2; // bx
  unsigned int v3; // ecx
  __int64 v4; // rcx
  __int64 v5; // rcx
  Feedback *v6; // rcx
  __int64 v7; // rcx
  BOOL v8; // ecx
  int v9; // edx
  __int64 v10; // rcx

  _m_prefetchw(&Feedback::gdwPointerCursorOps);
  v0 = Feedback::gdwPointerCursorOps;
  do
  {
    v1 = v0;
    v0 = _InterlockedCompareExchange((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0, v0);
  }
  while ( v1 != v0 );
  v2 = v0;
  if ( (v0 & 1) != 0 )
  {
    EnterCrit(1LL, 0LL);
    Feedback::xxxRestoreMouseCursors(v6);
    UserSessionSwitchLeaveCrit(v7);
  }
  if ( (v2 & 0x700) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( (v2 & 0x100) != 0 )
    {
      v8 = 1;
      v9 = 1;
    }
    else
    {
      v8 = (v2 & 0x400) != 0;
      v9 = 0;
    }
    xxxSwitchCursors(v8, v9);
    Feedback::gfInRange = 0;
    UserSessionSwitchLeaveCrit(v10);
  }
  if ( (v2 & 2) != 0 )
  {
    EnterCrit(1LL, 0LL);
    if ( gCursorSuppressionState == 4 )
    {
      v3 = 8;
    }
    else if ( gCursorSuppressionState == 5 )
    {
      v3 = 1;
    }
    else
    {
      v4 = (unsigned int)(gCursorSuppressionState - 6);
      if ( gCursorSuppressionState == 6 )
      {
        v3 = 2;
      }
      else
      {
        if ( gCursorSuppressionState != 7 )
          goto LABEL_10;
        v3 = 3;
      }
    }
    TransitionCursorSuppressionState(v3, 0);
LABEL_10:
    UserSessionSwitchLeaveCrit(v4);
  }
  if ( (v2 & 4) != 0 )
  {
    EnterCrit(1LL, 0LL);
    xxxEnsureAllDpiCursors();
    UserSessionSwitchLeaveCrit(v5);
  }
}
