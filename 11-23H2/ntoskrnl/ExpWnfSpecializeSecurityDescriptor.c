/*
 * XREFs of ExpWnfSpecializeSecurityDescriptor @ 0x14071186C
 * Callers:
 *     ExpWnfLookupPermanentName @ 0x140710B7C (ExpWnfLookupPermanentName.c)
 *     NtCreateWnfStateName @ 0x1407113B0 (NtCreateWnfStateName.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402978D0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlpApplyAclToObject @ 0x1407118FC (RtlpApplyAclToObject.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1407119B0 (RtlGetSaclSecurityDescriptor.c)
 */

NTSTATUS __fastcall ExpWnfSpecializeSecurityDescriptor(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax
  BOOLEAN DaclPresent; // [rsp+38h] [rbp+18h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+40h] [rbp+20h] BYREF
  PACL Dacl; // [rsp+48h] [rbp+28h] BYREF

  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent && Dacl )
    RtlpApplyAclToObject(Dacl, &ExpWnfNotificationMapping);
  result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( result >= 0 && DaclPresent )
  {
    if ( Dacl )
      return RtlpApplyAclToObject(Dacl, &ExpWnfNotificationMapping);
  }
  return result;
}
