/*
 * XREFs of EtwRegisterSecurityProvider @ 0x18008E2E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180053810 (RtlNtStatusToDosError.c)
 *     RtlSetLastWin32Error @ 0x1800539B0 (RtlSetLastWin32Error.c)
 *     NtTraceControl @ 0x1800A2840 (NtTraceControl.c)
 */

__int64 EtwRegisterSecurityProvider()
{
  NTSTATUS v0; // eax
  ULONG v1; // ebx
  ULONG v3; // eax
  char v4; // [rsp+40h] [rbp+8h] BYREF

  v0 = NtTraceControl(24LL, 0LL, 0LL, 0LL, 0, &v4);
  if ( v0 )
  {
    v3 = RtlNtStatusToDosError(v0);
    v1 = v3;
    if ( v3 )
      RtlSetLastWin32Error(v3);
  }
  else
  {
    return 0;
  }
  return v1;
}
