/*
 * XREFs of RtlCapabilityCheck @ 0x140660AF0
 * Callers:
 *     sub_1405C9FA8 @ 0x1405C9FA8 (sub_1405C9FA8.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409B8F60 (RtlCapabilityCheckForSingleSessionSku.c)
 *     sub_1409F8350 @ 0x1409F8350 (sub_1409F8350.c)
 *     sub_1409FB924 @ 0x1409FB924 (sub_1409FB924.c)
 * Callees:
 *     RtlCheckTokenCapability @ 0x140201400 (RtlCheckTokenCapability.c)
 *     PsIsCurrentThreadInServerSilo @ 0x1402DF580 (PsIsCurrentThreadInServerSilo.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembership @ 0x1402E0C80 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenMembershipEx @ 0x1402E0CA0 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x1402EF430 (RtlSubAuthoritySid.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B9A0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     sub_140660E0C @ 0x140660E0C (sub_140660E0C.c)
 *     sub_140660EF4 @ 0x140660EF4 (sub_140660EF4.c)
 *     RtlInitializeSid @ 0x14078DDC0 (RtlInitializeSid.c)
 *     RtlIsMultiSessionSku @ 0x1407F4B80 (RtlIsMultiSessionSku.c)
 */

NTSTATUS __cdecl RtlCapabilityCheck(HANDLE TokenHandle, PUNICODE_STRING CapabilityName, PBOOLEAN HasCapability)
{
  BOOLEAN v4; // di
  BOOLEAN v5; // si
  BOOLEAN v6; // r12
  int v9; // ebx
  PULONG v10; // r13
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  int v14; // r8d
  int v15; // r9d
  PULONG v17; // r13
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  BOOLEAN v20; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v21; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v22; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN IsMember; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v25; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  PCUNICODE_STRING Source; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  Source = CapabilityName;
  ResultLength = 0;
  KeyHandle = 0LL;
  v25 = 0;
  DestinationString = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v4 = 0;
  memset(&ObjectAttributes, 0, 44);
  HasCapabilitya = 0;
  v5 = 0;
  v20 = 0;
  v6 = 0;
  KeyValueInformation = 0LL;
  v21 = 0;
  v22 = 0;
  IsMember = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( !CapabilityName || !HasCapability )
  {
    v9 = -1073741811;
    goto LABEL_21;
  }
  *HasCapability = 0;
  v9 = RtlDeriveCapabilitySidsFromName(CapabilityName, CapabilityGroupSid, CapabilitySid);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( RtlIsMultiSessionSku() )
  {
    RtlInitUnicodeString(
      &DestinationString,
      L"\\Registry\\Machine\\Software\\Microsoft\\SecurityManager\\AdminCapabilities");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes) >= 0
      && ZwQueryValueKey(
           KeyHandle,
           CapabilityName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x10u,
           &ResultLength) >= 0 )
    {
      v25 = 1;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v17 = RtlSubAuthoritySid(Sid, 0);
      *v17 = 18;
      v18 = RtlCheckTokenMembership(TokenHandle, Sid, &v21);
      v5 = v21;
      v9 = v18;
      if ( v18 < 0 )
        goto LABEL_21;
      if ( !v21 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *v17 = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v19 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
        v4 = v20;
        v9 = v19;
        if ( v19 < 0 )
          goto LABEL_21;
        if ( !v20 )
          goto LABEL_17;
      }
      goto LABEL_15;
    }
  }
  v9 = RtlCheckTokenMembershipEx(TokenHandle, CapabilityGroupSid, 2u, &IsMember);
  if ( v9 < 0 )
    goto LABEL_21;
  if ( IsMember )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  v10 = RtlSubAuthoritySid(Sid, 0);
  *v10 = 18;
  v11 = RtlCheckTokenMembership(TokenHandle, Sid, &v21);
  v5 = v21;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v21 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *v10 = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v12 = RtlCheckTokenMembership(TokenHandle, Sid, &v20);
  v4 = v20;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v20 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  *v10 = 4;
  v13 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v22);
  v6 = v22;
  v9 = v13;
  if ( v13 < 0 )
    goto LABEL_21;
  if ( v22 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_21;
    *HasCapability = HasCapabilitya;
  }
LABEL_17:
  if ( *HasCapability && !v4 && !v5 )
    v9 = sub_140660EF4(TokenHandle, Source);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  Source = (PCUNICODE_STRING)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo() )
  {
    LOBYTE(v15) = v6;
    LOBYTE(v14) = v4;
    sub_140660E0C((unsigned int)&PerformanceCounter, (unsigned int)&Source, v14, v15, v25, *HasCapability);
  }
  return v9;
}
