/*
 * XREFs of RtlCapabilityCheck @ 0x1407ED020
 * Callers:
 *     PopCapabilityCheck @ 0x140587648 (PopCapabilityCheck.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x1409BC1B0 (RtlCapabilityCheckForSingleSessionSku.c)
 *     NtSetSystemTime @ 0x1409F8520 (NtSetSystemTime.c)
 *     ExpCapabilityCheck @ 0x1409FBCC4 (ExpCapabilityCheck.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E2C0 (RtlInitUnicodeString.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140287700 (PsIsCurrentThreadInServerSilo.c)
 *     RtlSubAuthoritySid @ 0x140297D60 (RtlSubAuthoritySid.c)
 *     KeQueryPerformanceCounter @ 0x1402C3500 (KeQueryPerformanceCounter.c)
 *     RtlDeriveCapabilitySidsFromName @ 0x14031D300 (RtlDeriveCapabilitySidsFromName.c)
 *     RtlCheckTokenMembershipEx @ 0x14031D480 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenMembership @ 0x140370230 (RtlCheckTokenMembership.c)
 *     RtlCheckTokenCapability @ 0x1403707D0 (RtlCheckTokenCapability.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     ZwOpenKey @ 0x14041B330 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14041B3D0 (ZwQueryValueKey.c)
 *     RtlInitializeSid @ 0x140782240 (RtlInitializeSid.c)
 *     RtlpLogCapabilityCheckLatency @ 0x1407ECEA0 (RtlpLogCapabilityCheckLatency.c)
 *     RtlIsMultiSessionSku @ 0x1407ECFF0 (RtlIsMultiSessionSku.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x1407EF1F0 (RtlpCapabilityCheckSystemCapability.c)
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
  PULONG v15; // r13
  NTSTATUS v16; // eax
  NTSTATUS v17; // eax
  BOOLEAN v18; // [rsp+30h] [rbp-D0h] BYREF
  BOOLEAN v19; // [rsp+31h] [rbp-CFh] BYREF
  BOOLEAN v20; // [rsp+32h] [rbp-CEh] BYREF
  BOOLEAN IsMember; // [rsp+33h] [rbp-CDh] BYREF
  BOOLEAN HasCapabilitya; // [rsp+34h] [rbp-CCh] BYREF
  char v23; // [rsp+35h] [rbp-CBh]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  PUNICODE_STRING QuadPart; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  __int128 KeyValueInformation; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE Sid[16]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE CapabilityGroupSid[48]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE CapabilitySid[48]; // [rsp+F0h] [rbp-10h] BYREF

  QuadPart = CapabilityName;
  ResultLength = 0;
  KeyHandle = 0LL;
  v23 = 0;
  DestinationString = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  v4 = 0;
  memset(&ObjectAttributes, 0, 44);
  HasCapabilitya = 0;
  v5 = 0;
  v18 = 0;
  v6 = 0;
  KeyValueInformation = 0LL;
  v19 = 0;
  v20 = 0;
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
      v23 = 1;
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      v15 = RtlSubAuthoritySid(Sid, 0);
      *v15 = 18;
      v16 = RtlCheckTokenMembership(TokenHandle, Sid, &v19);
      v5 = v19;
      v9 = v16;
      if ( v16 < 0 )
        goto LABEL_21;
      if ( !v19 )
      {
        RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
        *v15 = 32;
        *RtlSubAuthoritySid(Sid, 1u) = 544;
        v17 = RtlCheckTokenMembership(TokenHandle, Sid, &v18);
        v4 = v18;
        v9 = v17;
        if ( v17 < 0 )
          goto LABEL_21;
        if ( !v18 )
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
  v11 = RtlCheckTokenMembership(TokenHandle, Sid, &v19);
  v5 = v19;
  v9 = v11;
  if ( v11 < 0 )
    goto LABEL_21;
  if ( v19 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
  *v10 = 32;
  *RtlSubAuthoritySid(Sid, 1u) = 544;
  v12 = RtlCheckTokenMembership(TokenHandle, Sid, &v18);
  v4 = v18;
  v9 = v12;
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v18 )
    goto LABEL_15;
  RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
  *v10 = 4;
  v13 = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &v20);
  v6 = v20;
  v9 = v13;
  if ( v13 < 0 )
    goto LABEL_21;
  if ( v20 )
  {
LABEL_15:
    v9 = RtlCheckTokenCapability(TokenHandle, CapabilitySid, &HasCapabilitya);
    if ( v9 < 0 )
      goto LABEL_21;
    *HasCapability = HasCapabilitya;
  }
LABEL_17:
  if ( *HasCapability && !v4 && !v5 )
    v9 = RtlpCapabilityCheckSystemCapability(TokenHandle);
LABEL_21:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  QuadPart = (PUNICODE_STRING)KeQueryPerformanceCounter(0LL).QuadPart;
  if ( !v5 && !PsIsCurrentThreadInServerSilo() )
    RtlpLogCapabilityCheckLatency(&PerformanceCounter, &QuadPart, v4, v6, v23, *HasCapability);
  return v9;
}
