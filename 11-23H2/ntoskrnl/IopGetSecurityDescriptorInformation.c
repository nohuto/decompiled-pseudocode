/*
 * XREFs of IopGetSecurityDescriptorInformation @ 0x14083B584
 * Callers:
 *     IopQuerySecureDeviceClassState @ 0x14083B17C (IopQuerySecureDeviceClassState.c)
 *     IoCreateDeviceSecure @ 0x14083B330 (IoCreateDeviceSecure.c)
 * Callees:
 *     RtlGetDaclSecurityDescriptor @ 0x1402978D0 (RtlGetDaclSecurityDescriptor.c)
 *     RtlGetOwnerSecurityDescriptor @ 0x14069E340 (RtlGetOwnerSecurityDescriptor.c)
 *     RtlGetGroupSecurityDescriptor @ 0x14069E380 (RtlGetGroupSecurityDescriptor.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1407119B0 (RtlGetSaclSecurityDescriptor.c)
 */

__int64 __fastcall IopGetSecurityDescriptorInformation(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        BOOLEAN *a2,
        _DWORD *a3)
{
  NTSTATUS OwnerSecurityDescriptor; // ecx
  int v7; // ebx
  PSID Owner[2]; // [rsp+20h] [rbp-10h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+58h] [rbp+28h] BYREF
  BOOLEAN SaclPresent; // [rsp+68h] [rbp+38h] BYREF

  Owner[0] = 0LL;
  *a3 = 0;
  *a2 = 0;
  SaclPresent = 0;
  OwnerDefaulted = 0;
  OwnerSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, Owner, &OwnerDefaulted);
  if ( OwnerSecurityDescriptor >= 0 )
  {
    v7 = Owner[0] != 0LL;
    OwnerSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, Owner, &OwnerDefaulted);
    if ( OwnerSecurityDescriptor >= 0 )
    {
      if ( Owner[0] )
        v7 |= 2u;
      OwnerSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                  SecurityDescriptor,
                                  &SaclPresent,
                                  (PACL *)Owner,
                                  &OwnerDefaulted);
      if ( OwnerSecurityDescriptor >= 0 )
      {
        if ( SaclPresent )
          v7 |= 8u;
        OwnerSecurityDescriptor = RtlGetDaclSecurityDescriptor(
                                    SecurityDescriptor,
                                    &SaclPresent,
                                    (PACL *)Owner,
                                    &OwnerDefaulted);
        if ( OwnerSecurityDescriptor >= 0 )
        {
          if ( SaclPresent )
            v7 |= 4u;
          *a2 = OwnerDefaulted;
          *a3 = v7;
        }
      }
    }
  }
  return (unsigned int)OwnerSecurityDescriptor;
}
