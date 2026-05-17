/*
 * XREFs of EtwEventActivityIdControl @ 0x180061C10
 * Callers:
 *     EtwEventWriteStartScenario @ 0x1800525C0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x1800536B0 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x180053850 (RtlSetLastWin32Error.c)
 *     NtTraceControl @ 0x1800A4900 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *p_ActivityId)
{
  int v2; // ecx
  int v3; // ecx
  ULONG v4; // ebx
  int v6; // ecx
  NTSTATUS v7; // eax
  int v8; // ecx
  _GUID ActivityId; // xmm1
  ULONG v10; // eax
  char v11; // [rsp+48h] [rbp+10h] BYREF

  if ( p_ActivityId )
  {
    v2 = a1 - 1;
    if ( !v2 )
    {
      *p_ActivityId = NtCurrentTeb()->ActivityId;
      return 0;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      NtCurrentTeb()->ActivityId = *p_ActivityId;
      return 0;
    }
    v6 = v3 - 1;
    if ( v6 )
    {
      v8 = v6 - 1;
      if ( !v8 )
      {
        ActivityId = NtCurrentTeb()->ActivityId;
        NtCurrentTeb()->ActivityId = *p_ActivityId;
        *p_ActivityId = ActivityId;
        return 0;
      }
      if ( v8 != 1 )
      {
        v7 = -1073741811;
        goto LABEL_17;
      }
      *p_ActivityId = NtCurrentTeb()->ActivityId;
      p_ActivityId = &NtCurrentTeb()->ActivityId;
    }
    v7 = NtTraceControl(12LL, 0LL, 0LL, p_ActivityId, 16, &v11);
    if ( !v7 )
      return 0;
LABEL_17:
    v10 = RtlNtStatusToDosError(v7);
    v4 = v10;
    if ( v10 )
      RtlSetLastWin32Error(v10);
    return v4;
  }
  return 87LL;
}
