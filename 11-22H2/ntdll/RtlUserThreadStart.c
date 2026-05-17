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
