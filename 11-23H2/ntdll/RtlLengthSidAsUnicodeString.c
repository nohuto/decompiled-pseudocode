/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x18001AD10
 * Callers:
 *     RtlFormatCurrentUserKeyPath @ 0x18001AB50 (RtlFormatCurrentUserKeyPath.c)
 *     WerEscalationLazyInit @ 0x1800E97F8 (WerEscalationLazyInit.c)
 * Callees:
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 */

NTSTATUS __cdecl RtlLengthSidAsUnicodeString(PSID Sid, PULONG StringLength)
{
  int v4; // edx

  if ( RtlValidSid(Sid) != 1 )
    return -1073741704;
  if ( *((_BYTE *)Sid + 2) || (v4 = 28, *((_BYTE *)Sid + 3)) )
    v4 = 36;
  *StringLength = v4 + 22 * *((unsigned __int8 *)Sid + 1);
  return 0;
}
