/*
 * XREFs of ?SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z @ 0x180039380
 * Callers:
 *     <none>
 * Callees:
 *     ??$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x180039458 (--$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z.c)
 *     ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x18003ACBC (-DisableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 */

__int64 __fastcall TouchGestureSettings::SetEnabledTouchGestures(TouchGestureSettings *a1, int a2)
{
  unsigned int v4; // ebx
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  if ( !*((_DWORD *)a1 + 29) )
  {
    v4 = std::_Random_device();
    *((_DWORD *)a1 + 29) = v4;
    *((_DWORD *)a1 + 8) = a2;
    if ( !a2 )
    {
      TouchGestureSettings::DisableTouchGestures(a1);
      a2 = *((_DWORD *)a1 + 8);
    }
    v6 = a2;
    TouchGestureTelemetry::SetEnabledTouchGestures<unsigned int>(&v6);
  }
  return v4;
}
