/*
 * XREFs of sub_14066FDE8 @ 0x14066FDE8
 * Callers:
 *     sub_14066F980 @ 0x14066F980 (sub_14066F980.c)
 *     sub_14075A12C @ 0x14075A12C (sub_14075A12C.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x140203DD0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x14066FE80 (RtlGetSaclSecurityDescriptor.c)
 *     sub_140727F00 @ 0x140727F00 (sub_140727F00.c)
 */

NTSTATUS __fastcall sub_14066FDE8(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  NTSTATUS result; // eax
  BOOLEAN DaclPresent; // [rsp+38h] [rbp+18h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+40h] [rbp+20h] BYREF
  PACL Dacl; // [rsp+48h] [rbp+28h] BYREF

  Dacl = 0LL;
  DaclPresent = 0;
  if ( RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted) >= 0 && DaclPresent && Dacl )
    sub_140727F00(Dacl, &stru_140A37F80);
  result = RtlGetSaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
  if ( result >= 0 && DaclPresent )
  {
    if ( Dacl )
      return sub_140727F00(Dacl, &stru_140A37F80);
  }
  return result;
}
