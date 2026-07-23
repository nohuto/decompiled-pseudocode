/*
 * XREFs of RtlUserThreadStart @ 0x18005DF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005DFF0 (RtlExitUserThread.c)
 *     UserThreadStartXfgThunk @ 0x18009EA20 (UserThreadStartXfgThunk.c)
 *     NtQueryInformationProcess @ 0x18009F110 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x18009F370 (ZwTerminateProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010D6B0 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x18010F220 (RtlRaiseStatus.c)
 */

void __cdecl RtlUserThreadStart(PTHREAD_START_ROUTINE Function, PVOID Parameter)
{
  NTSTATUS started; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    started = UserThreadStartXfgThunk(Parameter, Function);
    RtlExitUserThread(started);
  }
  ((void (__fastcall *)(_QWORD, PTHREAD_START_ROUTINE, PVOID))Kernel32ThreadInitThunkFunction)(0LL, Function, Parameter);
}
