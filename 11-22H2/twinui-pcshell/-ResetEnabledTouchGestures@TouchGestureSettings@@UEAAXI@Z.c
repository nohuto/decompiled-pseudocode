/*
 * XREFs of ?ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z @ 0x18006F050
 * Callers:
 *     <none>
 * Callees:
 *     ?EnableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x180067A08 (-EnableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
 *     ?ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ @ 0x18006F08C (-ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ.c)
 */

void __fastcall TouchGestureSettings::ResetEnabledTouchGestures(TouchGestureSettings *this, int a2)
{
  if ( a2 && *((_DWORD *)this + 29) == a2 )
  {
    if ( !*((_DWORD *)this + 8) )
      TouchGestureSettings::EnableTouchGestures(this);
    *((_DWORD *)this + 29) = 0;
    *((_DWORD *)this + 8) = 7;
    TouchGestureTelemetry::ResetEnabledTouchGestures();
  }
}
