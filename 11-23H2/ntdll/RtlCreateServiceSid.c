/*
 * XREFs of RtlCreateServiceSid @ 0x1800100C0
 * Callers:
 *     RtlAppxIsFileOwnedByTrustedInstaller @ 0x1800D66B0 (RtlAppxIsFileOwnedByTrustedInstaller.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     A_SHAFinal @ 0x18000EB60 (A_SHAFinal.c)
 *     A_SHAUpdate @ 0x18000ECD0 (A_SHAUpdate.c)
 *     RtlUpcaseUnicodeString @ 0x18000FF50 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlCreateServiceSid(PUNICODE_STRING ServiceName, PSID ServiceSid, PULONG ServiceSidLength)
{
  ULONG v4; // eax
  NTSTATUS result; // eax
  int v6; // eax
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _DWORD v8[24]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v9[6]; // [rsp+90h] [rbp+37h] BYREF

  if ( !ServiceName || !ServiceSidLength )
    return -1073741811;
  v4 = *ServiceSidLength;
  *ServiceSidLength = 32;
  if ( v4 < 0x20 )
    return -1073741789;
  result = RtlUpcaseUnicodeString(&DestinationString, ServiceName, 1u);
  if ( result >= 0 )
  {
    v8[21] = 0;
    v8[22] = 0;
    v8[16] = 1732584193;
    v8[17] = -271733879;
    v8[18] = -1732584194;
    v8[19] = 271733878;
    v8[20] = -1009589776;
    A_SHAUpdate((__int64)v8, (char *)DestinationString.Buffer, DestinationString.Length);
    A_SHAFinal(v8, (__int64)v9);
    RtlFreeUnicodeString(&DestinationString);
    RtlInitializeSid(ServiceSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 6u);
    v6 = v9[0];
    *((_DWORD *)ServiceSid + 2) = 80;
    *((_DWORD *)ServiceSid + 3) = v6;
    *((_DWORD *)ServiceSid + 4) = v9[1];
    *((_DWORD *)ServiceSid + 5) = v9[2];
    *((_DWORD *)ServiceSid + 6) = v9[3];
    *((_DWORD *)ServiceSid + 7) = v9[4];
    return 0;
  }
  return result;
}
