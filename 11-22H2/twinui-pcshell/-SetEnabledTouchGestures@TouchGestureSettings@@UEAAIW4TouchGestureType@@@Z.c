/*
 * XREFs of ?SetEnabledTouchGestures@TouchGestureSettings@@UEAAIW4TouchGestureType@@@Z @ 0x18006CDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x180067A3C (-DisableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     ??$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z @ 0x18006CE40 (--$SetEnabledTouchGestures@I@TouchGestureTelemetry@@SAX$$QEAI@Z.c)
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
      TouchGestureSettings::DisableTouchGestures(a1);
    v6 = *((_DWORD *)a1 + 8);
    TouchGestureTelemetry::SetEnabledTouchGestures<unsigned int>(&v6);
  }
  return v4;
}
