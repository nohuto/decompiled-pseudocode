/*
 * XREFs of EtwEventWriteEndScenario @ 0x1800526C0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventWrite @ 0x180030140 (EtwEventWrite.c)
 *     EtwEventEnabled @ 0x1800527B0 (EtwEventEnabled.c)
 *     EtwpGetKmRegHandle @ 0x180052848 (EtwpGetKmRegHandle.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventWriteEndScenario(
        REGHANDLE RegHandle,
        PCEVENT_DESCRIPTOR EventDescriptor,
        ULONG UserDataCount,
        PEVENT_DATA_DESCRIPTOR UserData)
{
  ULONG result; // eax
  _GUID ActivityId; // xmm1
  ULONG ReturnLength; // [rsp+30h] [rbp-58h] BYREF
  _OWORD InputBuffer[3]; // [rsp+38h] [rbp-50h] BYREF

  ReturnLength = 0;
  if ( !EventDescriptor )
    return 87;
  if ( !EtwEventEnabled(RegHandle, EventDescriptor) )
    return 6;
  memset(InputBuffer, 0, sizeof(InputBuffer));
  result = EtwpGetKmRegHandle(RegHandle, InputBuffer);
  if ( !result )
  {
    *(EVENT_DESCRIPTOR *)((char *)InputBuffer + 8) = *EventDescriptor;
    ActivityId = NtCurrentTeb()->ActivityId;
    DWORD2(InputBuffer[2]) = 11;
    *(_GUID *)((char *)&InputBuffer[1] + 8) = ActivityId;
    NtTraceControl(EtwWdiScenarioCode, InputBuffer, 0x30u, 0LL, 0, &ReturnLength);
    return EtwEventWrite(RegHandle, EventDescriptor, UserDataCount, UserData);
  }
  return result;
}
