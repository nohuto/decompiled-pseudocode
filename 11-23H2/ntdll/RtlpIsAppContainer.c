/*
 * XREFs of RtlpIsAppContainer @ 0x1800F4480
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B5C8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtQueryInformationToken @ 0x1800A12D0 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x1800A1490 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x1800A14B0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1800A16F0 (NtDuplicateToken.c)
 */

__int64 __fastcall RtlpIsAppContainer(__int64 a1, bool *a2)
{
  int InformationToken; // ebx
  int v5; // [rsp+44h] [rbp+3h]
  HANDLE Handle; // [rsp+48h] [rbp+7h]

  *a2 = 0;
  if ( !a1 )
  {
    InformationToken = NtOpenThreadTokenEx();
    if ( InformationToken == -1073741700 )
    {
      InformationToken = NtOpenProcessTokenEx();
      if ( InformationToken < 0 )
        return (unsigned int)InformationToken;
      InformationToken = NtDuplicateToken();
      NtClose(Handle);
    }
    if ( InformationToken < 0 )
      return (unsigned int)InformationToken;
  }
  InformationToken = NtQueryInformationToken();
  if ( InformationToken >= 0 )
    *a2 = v5 != 0;
  return (unsigned int)InformationToken;
}
