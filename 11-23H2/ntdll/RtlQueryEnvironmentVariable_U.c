/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x180058DC0
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001C0C0 (RtlGetFullPathName_Ustr.c)
 *     RtlpCheckRelativeDrive @ 0x1800577B8 (RtlpCheckRelativeDrive.c)
 *     _IsProgramFilesPath @ 0x180057B48 (_IsProgramFilesPath.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x180058CEC (RtlpWow64ThunkEnvironmentTo64.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD3AC (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EAB00 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x18001EB90 (RtlQueryEnvironmentVariable.c)
 */

NTSTATUS __cdecl RtlQueryEnvironmentVariable_U(PVOID Environment, PUNICODE_STRING Name, PUNICODE_STRING Value)
{
  NTSTATUS result; // eax
  __int16 v5; // cx
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             Environment,
             Name->Buffer,
             (unsigned __int64)Name->Length >> 1,
             Value->Buffer,
             (unsigned __int64)Value->MaximumLength >> 1,
             &ReturnLength);
  v5 = ReturnLength;
  if ( ReturnLength > 0x7FFF )
    return -1073741801;
  if ( result == -1073741789 )
    v5 = ReturnLength - 1;
  Value->Length = 2 * v5;
  return result;
}
