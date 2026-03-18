/*
 * XREFs of ?GetTimerId@CAccessibilityTimer@@CA?AW4_ACCESSIBILITY_TIMERS@@P6AXPEAUtagWND@@I_K_J@Z@Z @ 0x1C01E094C
 * Callers:
 *     ?SetTimer@CAccessibilityTimer@@SA?AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z @ 0x1C01E0A50 (-SetTimer@CAccessibilityTimer@@SA-AW4_ACCESSIBILITY_TIMERS@@KP6AXPEAUtagWND@@I_K_J@ZH@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CAccessibilityTimer::GetTimerId(void (__fastcall *a1)(struct tagWND *a1), __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx

  v3 = 1;
  if ( (char *)a1 != (char *)FKActivationTimer )
  {
    if ( (char *)a1 == (char *)xxxFKRepeatRateTimer )
    {
      return 2;
    }
    else if ( a1 == FKBounceKeyTimer )
    {
      return 3;
    }
    else if ( (char *)a1 == (char *)xxxFKAcceptanceDelayTimer )
    {
      return 4;
    }
    else if ( (char *)a1 == (char *)xxxMKMoveAccelCursorTimer )
    {
      return 5;
    }
    else if ( (char *)a1 == (char *)xxxMKMoveConstCursorTimer )
    {
      return 6;
    }
    else if ( (char *)a1 == (char *)xxxToggleKeysTimer )
    {
      return 7;
    }
    else if ( a1 == xxxAccessTimeOutTimer )
    {
      return 8;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
    }
  }
  return v3;
}
