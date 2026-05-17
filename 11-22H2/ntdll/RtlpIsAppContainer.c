/*
 * XREFs of RtlpIsAppContainer @ 0x1800F3070
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18000B7E8 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtQueryInformationToken @ 0x18009F210 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x18009F3D0 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x18009F3F0 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x18009F630 (NtDuplicateToken.c)
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
