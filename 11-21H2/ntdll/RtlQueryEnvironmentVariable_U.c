/*
 * XREFs of RtlQueryEnvironmentVariable_U @ 0x18000CE60
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x18000B3FC (RtlpCheckRelativeDrive.c)
 *     _IsProgramFilesPath @ 0x18000C0B8 (_IsProgramFilesPath.c)
 *     RtlpWow64ThunkEnvironmentTo64 @ 0x18000CD80 (RtlpWow64ThunkEnvironmentTo64.c)
 *     RtlGetFullPathName_Ustr @ 0x180046BD0 (RtlGetFullPathName_Ustr.c)
 *     LdrpInitializeExecutionOptions @ 0x1800DD27C (LdrpInitializeExecutionOptions.c)
 *     RtlpLookupSafeCurDirList @ 0x1800EA470 (RtlpLookupSafeCurDirList.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180036CE0 (RtlQueryEnvironmentVariable.c)
 */

__int64 __fastcall RtlQueryEnvironmentVariable_U(__int64 a1, unsigned __int16 *a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // cx
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  result = RtlQueryEnvironmentVariable(
             a1,
             *((_QWORD *)a2 + 1),
             (unsigned __int64)*a2 >> 1,
             *(_QWORD *)(a3 + 8),
             (unsigned __int64)*(unsigned __int16 *)(a3 + 2) >> 1,
             &v6);
  v5 = v6;
  if ( v6 > 0x7FFF )
    return 3221225495LL;
  if ( (_DWORD)result == -1073741789 )
    v5 = v6 - 1;
  *(_WORD *)a3 = 2 * v5;
  return result;
}
