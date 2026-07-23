/*
 * XREFs of RtlUserThreadStart @ 0x18005AF90
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18005AFF0 (RtlExitUserThread.c)
 *     UserThreadStartXfgThunk @ 0x1800A0AE0 (UserThreadStartXfgThunk.c)
 *     NtQueryInformationProcess @ 0x1800A11D0 (NtQueryInformationProcess.c)
 *     ZwTerminateProcess @ 0x1800A1430 (ZwTerminateProcess.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlUnhandledExceptionFilter2 @ 0x18010EB30 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
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
