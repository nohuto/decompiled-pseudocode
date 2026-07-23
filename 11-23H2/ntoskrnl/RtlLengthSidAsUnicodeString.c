/*
 * XREFs of RtlLengthSidAsUnicodeString @ 0x1407FAEA8
 * Callers:
 *     ExpWnfGetPermanentPerUserDataStoreHandle @ 0x1407E2C28 (ExpWnfGetPermanentPerUserDataStoreHandle.c)
 *     RtlFormatCurrentUserKeyPath @ 0x1407FADA0 (RtlFormatCurrentUserKeyPath.c)
 *     AdtpBuildSidListString @ 0x140A5B420 (AdtpBuildSidListString.c)
 * Callees:
 *     RtlValidSid @ 0x140737590 (RtlValidSid.c)
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
