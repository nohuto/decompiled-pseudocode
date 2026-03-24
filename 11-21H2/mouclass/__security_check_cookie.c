/*
 * XREFs of __security_check_cookie @ 0x1C0002D60
 * Callers:
 *     MouseStart @ 0x1C0002AB0 (MouseStart.c)
 *     __GSHandlerCheckCommon @ 0x1C0002DEC (__GSHandlerCheckCommon.c)
 *     MouClassTraceLoggingDeniedCreateForReadWithSFAC @ 0x1C0004A04 (MouClassTraceLoggingDeniedCreateForReadWithSFAC.c)
 *     MouseClassFindMorePorts @ 0x1C000C3B0 (MouseClassFindMorePorts.c)
 *     MouCreateClassObject @ 0x1C000CA40 (MouCreateClassObject.c)
 *     MouseClassGetWaitWakeEnableState @ 0x1C000CF10 (MouseClassGetWaitWakeEnableState.c)
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 *     DriverEntry @ 0x1C000F2D0 (DriverEntry.c)
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
