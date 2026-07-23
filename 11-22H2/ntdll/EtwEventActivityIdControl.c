/*
 * XREFs of EtwEventActivityIdControl @ 0x18005C440
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180052720 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
 */

ULONG __cdecl EtwEventActivityIdControl(ULONG ControlCode, LPGUID ActivityId)
{
  ULONG v2; // ecx
  ULONG v3; // ecx
  ULONG v4; // ebx
  ULONG v6; // ecx
  NTSTATUS v7; // eax
  ULONG v8; // ecx
  _GUID v9; // xmm1
  LONG v10; // eax
  ULONG ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  if ( ActivityId )
  {
    v2 = ControlCode - 1;
    if ( !v2 )
    {
      *ActivityId = NtCurrentTeb()->ActivityId;
      return 0;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      NtCurrentTeb()->ActivityId = *ActivityId;
      return 0;
    }
    v6 = v3 - 1;
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( !v8 )
      {
        v9 = NtCurrentTeb()->ActivityId;
        NtCurrentTeb()->ActivityId = *ActivityId;
        *ActivityId = v9;
        return 0;
      }
      if ( v8 != 1 )
      {
        v7 = -1073741811;
        goto LABEL_17;
      }
      *ActivityId = NtCurrentTeb()->ActivityId;
      ActivityId = &NtCurrentTeb()->ActivityId;
    }
    v7 = NtTraceControl(EtwActivityIdCreate, 0LL, 0, ActivityId, 0x10u, &ReturnLength);
    if ( !v7 )
      return 0;
LABEL_17:
    v10 = RtlNtStatusToDosError(v7);
    v4 = v10;
    if ( v10 )
      RtlSetLastWin32Error(v10);
    return v4;
  }
  return 87;
}
