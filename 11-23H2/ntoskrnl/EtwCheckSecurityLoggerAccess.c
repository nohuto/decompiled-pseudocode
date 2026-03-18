/*
 * XREFs of EtwCheckSecurityLoggerAccess @ 0x1407FC17C
 * Callers:
 *     NtSetInformationProcess @ 0x140774540 (NtSetInformationProcess.c)
 *     EtwpCheckNotificationAccess @ 0x140781AF8 (EtwpCheckNotificationAccess.c)
 *     EtwpQueryTrace @ 0x1407F8920 (EtwpQueryTrace.c)
 * Callees:
 *     RtlTestProtectedAccess @ 0x1406B828C (RtlTestProtectedAccess.c)
 */

__int64 __fastcall EtwCheckSecurityLoggerAccess(__int64 a1, char a2)
{
  if ( a2 )
    return RtlTestProtectedAccess(*(_BYTE *)(a1 + 2170), 0x31u) == 0 ? 0xC0000022 : 0;
  else
    return 0LL;
}
