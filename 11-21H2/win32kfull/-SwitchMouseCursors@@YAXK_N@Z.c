/*
 * XREFs of ?SwitchMouseCursors@@YAXK_N@Z @ 0x1C01D51F8
 * Callers:
 *     ?ContactVisualizationWorker@@YAHKPEAX_KHK@Z @ 0x1C01D4A20 (-ContactVisualizationWorker@@YAHKPEAX_KHK@Z.c)
 *     ?ForceHidePenCursor@Feedback@@YAXH@Z @ 0x1C01D4DDC (-ForceHidePenCursor@Feedback@@YAXH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall SwitchMouseCursors(int a1, unsigned __int8 a2)
{
  int v2; // ecx
  int v3; // ecx

  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
      else
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0x100u);
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 0xFFFFF8FF);
    _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, (a2 + 1) << 9);
  }
}
