/*
 * XREFs of EtwpAccessCheckFromState @ 0x1406C03D4
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x1406BE860 (EtwpAddRegEntryToGroup.c)
 * Callees:
 *     SeAccessCheckFromState @ 0x1402286B0 (SeAccessCheckFromState.c)
 *     EtwpFreeSecurityDescriptor @ 0x1406C04DC (EtwpFreeSecurityDescriptor.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x1406C0FAC (EtwpGetSecurityDescriptorByGuid.c)
 */

__int64 __fastcall EtwpAccessCheckFromState(__int64 a1, __int64 a2, _TOKEN_ACCESS_INFORMATION *a3)
{
  PSECURITY_DESCRIPTOR SecurityDescriptor[3]; // [rsp+50h] [rbp-18h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+88h] [rbp+20h] BYREF

  AccessStatus = 0;
  GrantedAccess = 0;
  SecurityDescriptor[0] = 0LL;
  EtwpGetSecurityDescriptorByGuid(a1, SecurityDescriptor);
  SeAccessCheckFromState(
    SecurityDescriptor[0],
    a3,
    0LL,
    0x80u,
    0,
    0LL,
    (PGENERIC_MAPPING)&EtwpGenericMapping,
    1,
    &GrantedAccess,
    &AccessStatus);
  EtwpFreeSecurityDescriptor(SecurityDescriptor);
  return (unsigned int)AccessStatus;
}
