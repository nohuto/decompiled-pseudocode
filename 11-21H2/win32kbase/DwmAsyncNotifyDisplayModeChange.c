/*
 * XREFs of DwmAsyncNotifyDisplayModeChange @ 0x1C0078C18
 * Callers:
 *     xxxResetDisplayDevice @ 0x1C005D650 (xxxResetDisplayDevice.c)
 *     UserNotifyDisplayChange @ 0x1C0078BB0 (UserNotifyDisplayChange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 DwmAsyncNotifyDisplayModeChange()
{
  if ( qword_1C029CAB8 )
    return qword_1C029CAB8();
  else
    return 3221225659LL;
}
