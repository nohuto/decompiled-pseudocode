/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x18002ACE0
 * Callers:
 *     RtlCapabilityCheck @ 0x180011760 (RtlCapabilityCheck.c)
 * Callees:
 *     SHA256Update @ 0x18000C760 (SHA256Update.c)
 *     RtlFreeUnicodeString @ 0x18000E970 (RtlFreeUnicodeString.c)
 *     SHA256Final @ 0x18000EA2C (SHA256Final.c)
 *     RtlUpcaseUnicodeString @ 0x18000FF50 (RtlUpcaseUnicodeString.c)
 *     RtlInitializeSid @ 0x180012E40 (RtlInitializeSid.c)
 *     RtlPrefixUnicodeString @ 0x1800148B0 (RtlPrefixUnicodeString.c)
 *     RtlEqualUnicodeString @ 0x180029C70 (RtlEqualUnicodeString.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v7; // xmm0
  __int128 v8; // xmm0
  unsigned int v9; // edi
  unsigned int v10; // r14d
  __int128 v11; // xmm1
  _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-89h] BYREF
  __int128 v13; // [rsp+30h] [rbp-79h]
  _DWORD v14[28]; // [rsp+40h] [rbp-69h] BYREF
  __int128 v15; // [rsp+B0h] [rbp+7h] BYREF
  __int128 v16; // [rsp+C0h] [rbp+17h]

  if ( !UnicodeString || !CapabilityGroupSid || !CapabilitySid )
    __fastfail(5u);
  *(_OWORD *)CapabilitySid = 0LL;
  *((_OWORD *)CapabilitySid + 1) = 0LL;
  *((_OWORD *)CapabilitySid + 2) = 0LL;
  *(_OWORD *)CapabilityGroupSid = 0LL;
  *((_OWORD *)CapabilityGroupSid + 1) = 0LL;
  *((_QWORD *)CapabilityGroupSid + 4) = 0LL;
  *((_DWORD *)CapabilityGroupSid + 10) = 0;
  result = RtlUpcaseUnicodeString(&DestinationString, UnicodeString, 1u);
  if ( result >= 0 )
  {
    v14[8] = 0;
    v14[9] = 0;
    v14[0] = 1779033703;
    v14[1] = -1150833019;
    v14[2] = 1013904242;
    v14[3] = -1521486534;
    v14[4] = 1359893119;
    v14[5] = -1694144372;
    v14[6] = 528734635;
    v14[7] = 1541459225;
    SHA256Update((__int64)v14, (_OWORD *)DestinationString.Buffer, DestinationString.Length);
    SHA256Final(v14, (__int64)&v15);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&RtlpNtAuthority, 9u);
    v7 = v15;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v7;
    v13 = v7;
    v8 = v16;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v16;
    v9 = 0;
    v15 = v8;
    while ( 1 )
    {
      v10 = v9 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PUNICODE_STRING)&RtlpLegacyApplicationCapabilityNames + v9, 0) )
        break;
      ++v9;
      if ( v10 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v10;
LABEL_8:
    RtlFreeUnicodeString(&DestinationString);
    if ( v9 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&RtlpAppPackageAuthority, 0xAu);
      *((_DWORD *)CapabilitySid + 2) = 3;
      *((_DWORD *)CapabilitySid + 3) = RtlPrefixUnicodeString((PUNICODE_STRING)&String1, UnicodeString, 1u) != 0
                                     ? 0x10000
                                     : 1024;
      v11 = v15;
      *((_OWORD *)CapabilitySid + 1) = v13;
      *((_OWORD *)CapabilitySid + 2) = v11;
    }
    return 0;
  }
  return result;
}
