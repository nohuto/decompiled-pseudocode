/*
 * XREFs of IsDwmMonitorExtDwmProcessCreatedPresent @ 0x180002B50
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000A7C0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x18000CA60 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ApiSetQueryApiSetPresence_0 @ 0x1800033A0 (ApiSetQueryApiSetPresence_0.c)
 */

char IsDwmMonitorExtDwmProcessCreatedPresent()
{
  char result; // al
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( dword_180016978 == 1 )
    return 1;
  if ( dword_180016978 == 2 )
    return 0;
  v1 = 0;
  if ( (int)ApiSetQueryApiSetPresence_0(L"JL", &v1) < 0 )
    return 0;
  result = v1;
  dword_180016978 = 2 - (v1 != 0);
  return result;
}
