/*
 * XREFs of RtlDeriveCapabilitySidsFromName @ 0x1402E0B30
 * Callers:
 *     RtlCapabilityCheck @ 0x140660AF0 (RtlCapabilityCheck.c)
 *     sub_1406E7694 @ 0x1406E7694 (sub_1406E7694.c)
 *     sub_14078DAB0 @ 0x14078DAB0 (sub_14078DAB0.c)
 *     sub_140834D0C @ 0x140834D0C (sub_140834D0C.c)
 *     sub_14084ED68 @ 0x14084ED68 (sub_14084ED68.c)
 *     sub_140B1F3C0 @ 0x140B1F3C0 (sub_140B1F3C0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1403FB308 @ 0x1403FB308 (sub_1403FB308.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 */

NTSTATUS __cdecl RtlDeriveCapabilitySidsFromName(
        PUNICODE_STRING UnicodeString,
        PSID CapabilityGroupSid,
        PSID CapabilitySid)
{
  NTSTATUS result; // eax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  unsigned int v8; // edi
  unsigned int v9; // esi
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-58h] BYREF
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF
  __int128 v14; // [rsp+40h] [rbp-38h]

  DestinationString = 0LL;
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
    sub_1403FB308(DestinationString.Buffer, DestinationString.Length, &v13);
    RtlInitializeSid(CapabilityGroupSid, (PSID_IDENTIFIER_AUTHORITY)&IdentifierAuthority, 9u);
    v6 = v13;
    *((_DWORD *)CapabilityGroupSid + 2) = 32;
    v7 = v14;
    *(_OWORD *)((char *)CapabilityGroupSid + 12) = v6;
    *(_OWORD *)((char *)CapabilityGroupSid + 28) = v7;
    v8 = 0;
    while ( 1 )
    {
      v9 = v8 + 1;
      if ( RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)&qword_140A3D1F0[2 * v8], 0) )
        break;
      ++v8;
      if ( v9 >= 0xC )
        goto LABEL_8;
    }
    RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 2u);
    *((_DWORD *)CapabilitySid + 2) = 3;
    *((_DWORD *)CapabilitySid + 3) = v9;
LABEL_8:
    RtlFreeUnicodeString(&DestinationString);
    if ( v8 == 12 )
    {
      RtlInitializeSid(CapabilitySid, (PSID_IDENTIFIER_AUTHORITY)&Source2, 0xAu);
      v10 = v13;
      *((_DWORD *)CapabilitySid + 2) = 3;
      v11 = v14;
      *((_DWORD *)CapabilitySid + 3) = 1024;
      *((_OWORD *)CapabilitySid + 1) = v10;
      *((_OWORD *)CapabilitySid + 2) = v11;
    }
    return 0;
  }
  return result;
}
