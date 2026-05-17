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
 *     RtlUnhandledExceptionFilter2 @ 0x18010EB60 (RtlUnhandledExceptionFilter2.c)
 *     RtlRaiseStatus @ 0x1801106D0 (RtlRaiseStatus.c)
 */

__int64 __fastcall RtlUserThreadStart(__int64 a1, __int64 a2)
{
  unsigned int started; // eax

  if ( !Kernel32ThreadInitThunkFunction )
  {
    started = UserThreadStartXfgThunk(a2, a1);
    RtlExitUserThread(started);
  }
  return Kernel32ThreadInitThunkFunction(0LL, a1, a2);
}
