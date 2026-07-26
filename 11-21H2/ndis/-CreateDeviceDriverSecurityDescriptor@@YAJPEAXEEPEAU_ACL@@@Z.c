/*
 * XREFs of ?CreateDeviceDriverSecurityDescriptor@@YAJPEAXEEPEAU_ACL@@@Z @ 0x1C01556F8
 * Callers:
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C0155598 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?AddAces@@YAJPEAU_ACL@@EEPEAPEAU1@@Z @ 0x1C01559EC (-AddAces@@YAJPEAU_ACL@@EEPEAPEAU1@@Z.c)
 */

NTSTATUS __fastcall CreateDeviceDriverSecurityDescriptor(void *a1, __int64 a2, unsigned __int8 a3, struct _ACL *a4)
{
  NTSTATUS result; // eax
  unsigned __int8 v7; // dl
  NTSTATUS DaclSecurityDescriptor; // ebx
  struct _ACL *v9; // rdi
  unsigned int v10; // r15d
  void *Pool2; // rsi
  __int64 AclSize; // rdx
  ACL *v13; // r14
  BOOLEAN MemoryAllocated; // [rsp+68h] [rbp-29h] BYREF
  BOOLEAN DaclDefaulted; // [rsp+69h] [rbp-28h] BYREF
  BOOLEAN OwnerDefaulted; // [rsp+6Ah] [rbp-27h] BYREF
  BOOLEAN GroupDefaulted; // [rsp+6Bh] [rbp-26h] BYREF
  BOOLEAN SaclDefaulted[4]; // [rsp+6Ch] [rbp-25h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+70h] [rbp-21h] BYREF
  ULONG PrimaryGroupSize; // [rsp+78h] [rbp-19h] BYREF
  ULONG OwnerSize; // [rsp+7Ch] [rbp-15h] BYREF
  ULONG SaclSize; // [rsp+80h] [rbp-11h] BYREF
  ULONG DaclSize; // [rsp+84h] [rbp-Dh] BYREF
  ULONG AbsoluteSecurityDescriptorSize; // [rsp+88h] [rbp-9h] BYREF
  PSID Group; // [rsp+90h] [rbp-1h] BYREF
  PSID Owner; // [rsp+98h] [rbp+7h] BYREF
  PACL Sacl; // [rsp+A0h] [rbp+Fh] BYREF
  PACL Dacl; // [rsp+A8h] [rbp+17h] BYREF
  BOOLEAN DaclPresent; // [rsp+100h] [rbp+6Fh] BYREF
  struct _ACL *SaclPresent; // [rsp+110h] [rbp+7Fh] BYREF

  MemoryAllocated = 0;
  SecurityDescriptor = 0LL;
  Dacl = 0LL;
  DaclPresent = 0;
  DaclDefaulted = 0;
  SaclPresent = 0LL;
  result = ObGetObjectSecurity(a1, &SecurityDescriptor, &MemoryAllocated);
  if ( result >= 0 )
  {
    DaclSecurityDescriptor = RtlGetDaclSecurityDescriptor(SecurityDescriptor, &DaclPresent, &Dacl, &DaclDefaulted);
    if ( DaclSecurityDescriptor >= 0 && DaclPresent )
    {
      if ( !Dacl )
        return -1073741823;
      DaclSecurityDescriptor = AddAces(Dacl, v7, a3, &SaclPresent);
      if ( DaclSecurityDescriptor >= 0 )
      {
        v9 = SaclPresent;
        if ( SaclPresent )
        {
          DaclSize = 0;
          v10 = 7;
          Sacl = 0LL;
          SaclSize = 0;
          Owner = 0LL;
          OwnerSize = 0;
          Group = 0LL;
          PrimaryGroupSize = 0;
          OwnerDefaulted = 0;
          GroupDefaulted = 0;
          LOBYTE(SaclPresent) = 0;
          SaclDefaulted[0] = 0;
          AbsoluteSecurityDescriptorSize = v9->AclSize + 40;
          Pool2 = (void *)ExAllocatePool2(256LL, AbsoluteSecurityDescriptorSize, 1685275726);
          if ( Pool2 )
          {
            AclSize = v9->AclSize;
            DaclSize = v9->AclSize;
            v13 = (ACL *)ExAllocatePool2(256LL, AclSize, 1633961038);
            if ( v13 )
            {
              DaclSecurityDescriptor = RtlGetOwnerSecurityDescriptor(SecurityDescriptor, &Owner, &OwnerDefaulted);
              if ( DaclSecurityDescriptor >= 0 )
              {
                if ( Owner )
                {
                  OwnerSize = RtlLengthSid(Owner);
                  DaclSecurityDescriptor = RtlGetGroupSecurityDescriptor(SecurityDescriptor, &Group, &GroupDefaulted);
                  if ( DaclSecurityDescriptor >= 0 )
                  {
                    DaclSecurityDescriptor = RtlGetSaclSecurityDescriptor(
                                               SecurityDescriptor,
                                               (PBOOLEAN)&SaclPresent,
                                               &Sacl,
                                               SaclDefaulted);
                    if ( DaclSecurityDescriptor >= 0 )
                    {
                      if ( (_BYTE)SaclPresent )
                      {
                        v10 = 15;
                        SaclSize = Sacl->AclSize;
                      }
                      PrimaryGroupSize = RtlLengthSid(Group);
                      DaclSecurityDescriptor = RtlSelfRelativeToAbsoluteSD(
                                                 SecurityDescriptor,
                                                 Pool2,
                                                 &AbsoluteSecurityDescriptorSize,
                                                 v13,
                                                 &DaclSize,
                                                 Sacl,
                                                 &SaclSize,
                                                 Owner,
                                                 &OwnerSize,
                                                 Group,
                                                 &PrimaryGroupSize);
                      if ( DaclSecurityDescriptor >= 0 )
                      {
                        DaclSecurityDescriptor = RtlSetDaclSecurityDescriptor(Pool2, 1u, v9, 0);
                        if ( DaclSecurityDescriptor >= 0 )
                          DaclSecurityDescriptor = ObSetSecurityObjectByPointer(a1, v10, Pool2);
                      }
                    }
                  }
                }
              }
            }
            ExFreePoolWithTag(Pool2, 0);
            if ( v13 )
              ExFreePoolWithTag(v13, 0);
          }
          ExFreePoolWithTag(v9, 0);
        }
      }
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated);
    return DaclSecurityDescriptor;
  }
  return result;
}
