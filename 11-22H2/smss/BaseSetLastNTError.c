/*
 * XREFs of BaseSetLastNTError @ 0x1400149C0
 * Callers:
 *     BasepGetFileNameInformation @ 0x1400125E0 (BasepGetFileNameInformation.c)
 *     BasepGetObjectNTName @ 0x1400126FC (BasepGetObjectNTName.c)
 *     DeviceIoControl @ 0x140012BA4 (DeviceIoControl.c)
 *     InternalGetFileAttributesW @ 0x140013184 (InternalGetFileAttributesW.c)
 *     CreateFileInternal @ 0x1400132DC (CreateFileInternal.c)
 *     SetErrorMode @ 0x1400138C0 (SetErrorMode.c)
 *     CloseHandle @ 0x140013968 (CloseHandle.c)
 *     SetStdHandleEx @ 0x140014130 (SetStdHandleEx.c)
 *     FindClose @ 0x14001435C (FindClose.c)
 *     InternalFindFirstFileExW @ 0x140014490 (InternalFindFirstFileExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BaseSetLastNTError(NTSTATUS a1)
{
  ULONG v1; // ebx

  v1 = RtlNtStatusToDosError(a1);
  RtlSetLastWin32Error(v1);
  return v1;
}
