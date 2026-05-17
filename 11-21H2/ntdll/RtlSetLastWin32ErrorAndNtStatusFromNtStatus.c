/*
 * XREFs of RtlSetLastWin32ErrorAndNtStatusFromNtStatus @ 0x1800067A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlNtStatusToDosError @ 0x180006840 (RtlNtStatusToDosError.c)
 */

__int64 __fastcall RtlSetLastWin32ErrorAndNtStatusFromNtStatus(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return RtlSetLastWin32Error(v1);
}
