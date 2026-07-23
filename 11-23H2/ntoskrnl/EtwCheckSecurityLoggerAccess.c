/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1407FC44C
 * Callers:
 *     NtSetInformationProcess @ 0x140774730 (NtSetInformationProcess.c)
 *     EtwpCheckNotificationAccess @ 0x140781CE8 (EtwpCheckNotificationAccess.c)
 *     EtwpQueryTrace @ 0x1407F8BF0 (EtwpQueryTrace.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B82BC (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(PS_PROTECTION *a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(a1[2170], (PS_PROTECTION)49) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
