/*
 * XREFs of DbgUiConvertStateChangeStructureEx @ 0x1800D7DE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl DbgUiConvertStateChangeStructureEx(PDBGUI_WAIT_STATE_CHANGE StateChange, LPDEBUG_EVENT DebugEvent)
{
  char v2; // r8

  v2 = 1;
  return DbgUiConvertStateChangeStructureWorker(StateChange, DebugEvent, v2);
}
