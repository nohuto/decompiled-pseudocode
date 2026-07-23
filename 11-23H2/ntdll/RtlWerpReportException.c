/*
 * XREFs of RtlWerpReportException @ 0x1800E8A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
// attributes: thunk
NTSTATUS __cdecl RtlWerpReportException(
        ULONG ProcessId,
        HANDLE CrashReportSharedMem,
        ULONG Flags,
        PHANDLE CrashVerticalProcessHandle)
{
  int v5; // [rsp+28h] [rbp+28h]
  _QWORD *v6; // [rsp+30h] [rbp+30h]

  return ReportExceptionInternal(
           ProcessId,
           (__int64)CrashReportSharedMem,
           *(const void **)&Flags,
           (unsigned int)CrashVerticalProcessHandle,
           v5,
           v6);
}
