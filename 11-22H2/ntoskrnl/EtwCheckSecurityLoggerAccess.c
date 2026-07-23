/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1407FC82C
 * Callers:
 *     NtSetInformationProcess @ 0x140774A50 (NtSetInformationProcess.c)
 *     EtwpCheckNotificationAccess @ 0x140782008 (EtwpCheckNotificationAccess.c)
 *     EtwpQueryTrace @ 0x1407F8FD4 (EtwpQueryTrace.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B828C (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(PS_PROTECTION *a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(a1[2170], (PS_PROTECTION)49) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
