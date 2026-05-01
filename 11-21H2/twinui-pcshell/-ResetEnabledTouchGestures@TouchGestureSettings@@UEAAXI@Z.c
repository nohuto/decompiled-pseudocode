/*
 * XREFs of ?ResetEnabledTouchGestures@TouchGestureSettings@@UEAAXI@Z @ 0x180039340
 * Callers:
 *     <none>
 * Callees:
 *     ?ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ @ 0x1800393F0 (-ResetEnabledTouchGestures@TouchGestureTelemetry@@SAXXZ.c)
 *     ?EnableTouchGestures@TouchGestureSettings@@AEAAXXZ @ 0x18003AC88 (-EnableTouchGestures@TouchGestureSettings@@AEAAXXZ.c)
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
