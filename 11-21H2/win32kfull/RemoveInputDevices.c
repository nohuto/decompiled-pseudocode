/*
 * XREFs of RemoveInputDevices @ 0x1C0123850
 * Callers:
 *     xxxRemoteDisconnect @ 0x1C0123098 (xxxRemoteDisconnect.c)
 *     xxxRemoteReconnect @ 0x1C01528E0 (xxxRemoteReconnect.c)
 * Callees:
 *     <none>
 */

__int64 RemoveInputDevices()
{
  int v0; // ebx
  _QWORD *v1; // rcx

  v0 = 0;
  while ( !v0 )
  {
    v1 = (_QWORD *)gpMouseSensor;
LABEL_6:
    CBaseInput::HandleTSRequest(*v1, 3LL);
    if ( (unsigned int)++v0 > 2 )
      goto LABEL_7;
  }
  if ( v0 != 2 )
  {
    v1 = (_QWORD *)gpKeyboardSensor;
    goto LABEL_6;
  }
  CBaseInput::HandleTSRequest(gpHidInput, 3LL);
LABEL_7:
  CBaseInput::HandleTSRequest(gpMouseSensor, 1LL);
  CBaseInput::HandleTSRequest(gpKeyboardSensor, 1LL);
  CBaseInput::HandleTSRequest(gpHidInput, 1LL);
  return ForceUpdatePointerDeviceSystemMetrics();
}
