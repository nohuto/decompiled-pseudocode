/*
 * XREFs of sub_1406E7694 @ 0x1406E7694
 * Callers:
 *     sub_140751120 @ 0x140751120 (sub_140751120.c)
 * Callees:
 *     RtlDeriveCapabilitySidsFromName @ 0x1402E0B30 (RtlDeriveCapabilitySidsFromName.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwCreateWnfStateName @ 0x14041D180 (ZwCreateWnfStateName.c)
 *     RtlCreateAcl @ 0x1407244A0 (RtlCreateAcl.c)
 *     RtlCreateSecurityDescriptor @ 0x140724520 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140726330 (RtlSetDaclSecurityDescriptor.c)
 *     sub_1407B4900 @ 0x1407B4900 (sub_1407B4900.c)
 */

int __fastcall sub_1406E7694(PWNF_STATE_NAME StateName)
{
  int result; // eax
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v5; // [rsp+70h] [rbp-90h]
  _BYTE CapabilitySid[48]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE CapabilityGroupSid[56]; // [rsp+A8h] [rbp-58h] BYREF
  ACL Acl; // [rsp+E0h] [rbp-20h] BYREF

  *(_QWORD *)&UnicodeString.Length = 2752552LL;
  v5 = 0LL;
  UnicodeString.Buffer = L"lpacPnpNotifications";
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  RtlCreateAcl(&Acl, 0x148u, 2u);
  sub_1407B4900((int)&Acl, 2, 0, 2031619, Group, 0);
  sub_1407B4900((int)&Acl, 2, 0, 1179649, qword_140C5AFA8, 0);
  sub_1407B4900((int)&Acl, 2, 0, 1179649, qword_140C5AFB0, 0);
  result = RtlDeriveCapabilitySidsFromName(&UnicodeString, CapabilityGroupSid, CapabilitySid);
  if ( result >= 0 )
  {
    sub_1407B4900((int)&Acl, 2, 0, 1179649, CapabilitySid, 0);
    RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
    return ZwCreateWnfStateName(
             StateName,
             WnfTemporaryStateName,
             WnfDataScopeMachine,
             0,
             0LL,
             0x24u,
             SecurityDescriptor);
  }
  return result;
}
