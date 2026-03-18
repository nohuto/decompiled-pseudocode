/*
 * XREFs of IsDwmAsyncNotifyDisplayModeChangeSupported @ 0x1C0078CB4
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0078BB0 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 IsDwmAsyncNotifyDisplayModeChangeSupported()
{
  if ( qword_1C029CAB0 )
    return qword_1C029CAB0();
  else
    return 3221225659LL;
}
