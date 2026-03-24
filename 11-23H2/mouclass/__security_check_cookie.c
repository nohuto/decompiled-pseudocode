/*
 * XREFs of __security_check_cookie @ 0x1C00029B0
 * Callers:
 *     MouseStart @ 0x1C00026C0 (MouseStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002A3C (__GSHandlerCheckCommon.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004820 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouCreateClassObject @ 0x1C000D790 (MouCreateClassObject.c)
 *     MouseClassFindMorePorts @ 0x1C000DD10 (MouseClassFindMorePorts.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000F0BC (MouseClassGetWaitWakeEnableState.c)
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 *     DriverEntry @ 0x1C00112E0 (DriverEntry.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
