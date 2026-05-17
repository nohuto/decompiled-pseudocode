/*
 * XREFs of EtwEventActivityIdControl @ 0x18005E5A0
 * Callers:
 *     EtwEventWriteStartScenario @ 0x180002EC0 (EtwEventWriteStartScenario.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x1800067C0 (RtlSetLastWin32Error.c)
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 *     NtTraceControl @ 0x1800A7A40 (NtTraceControl.c)
 */

__int64 __fastcall EtwEventActivityIdControl(int a1, _GUID *a2)
{
  ULONG v2; // ebx
  __int64 result; // rax
  int v4; // ecx
  int v5; // ecx
  NTSTATUS v6; // eax
  int v7; // ecx
  _GUID ActivityId; // xmm1
  ULONG v9; // eax

  if ( !a2 )
    return 87LL;
  if ( a1 == 2 )
  {
    NtCurrentTeb()->ActivityId = *a2;
    return 0;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    result = 0LL;
    *a2 = NtCurrentTeb()->ActivityId;
    return result;
  }
  v5 = v4 - 2;
  if ( !v5 )
    goto LABEL_9;
  v7 = v5 - 1;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v6 = -1073741811;
      goto LABEL_17;
    }
    *a2 = NtCurrentTeb()->ActivityId;
LABEL_9:
    v6 = NtTraceControl(12LL, 0LL, 0LL);
    if ( !v6 )
      return 0;
LABEL_17:
    v9 = RtlNtStatusToDosError(v6);
    v2 = v9;
    if ( v9 )
      RtlSetLastWin32Error(v9);
    return v2;
  }
  ActivityId = NtCurrentTeb()->ActivityId;
  NtCurrentTeb()->ActivityId = *a2;
  result = 0LL;
  *a2 = ActivityId;
  return result;
}
