/*
 * XREFs of ?ndisCreateSecurityDescriptor@@YAJPEAU_DEVICE_OBJECT@@PEAPEAXK@Z @ 0x1C0031F74
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 *     ?ndisFdoInitializeSubsystem@@YAJXZ @ 0x1C0161B08 (-ndisFdoInitializeSubsystem@@YAJXZ.c)
 * Callees:
 *     ?ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z @ 0x1C0032110 (-ndisBuildDeviceAcl@@YAJPEAPEAU_ACL@@K@Z.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memmove @ 0x1C0038400 (memmove.c)
 */

__int64 __fastcall ndisCreateSecurityDescriptor(struct _DEVICE_OBJECT *a1, void **a2, unsigned int a3)
{
  NTSTATUS ObjectSecurity; // ebx
  ULONG v6; // ebx
  void *Pool2; // rax
  void *v8; // rsi
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN MemoryAllocated[8]; // [rsp+30h] [rbp-50h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+38h] [rbp-48h] BYREF
  PACL Dacl; // [rsp+40h] [rbp-40h] BYREF
  DWORD SecurityInformation; // [rsp+48h] [rbp-38h] BYREF
  _BYTE ModificationDescriptor[40]; // [rsp+50h] [rbp-30h] BYREF

  *a2 = 0LL;
  Dacl = 0LL;
  SecurityDescriptor = 0LL;
  MemoryAllocated[0] = 0;
  SecurityInformation = 4;
  ObjectSecurity = ObGetObjectSecurity(a1, &SecurityDescriptor, MemoryAllocated);
  if ( ObjectSecurity >= 0 && SecurityDescriptor )
  {
    ObjectSecurity = ndisBuildDeviceAcl(&Dacl, a3);
    if ( ObjectSecurity >= 0 )
    {
      RtlCreateSecurityDescriptor(ModificationDescriptor, 1u);
      RtlSetDaclSecurityDescriptor(ModificationDescriptor, 1u, Dacl, 0);
      v6 = RtlLengthSecurityDescriptor(SecurityDescriptor);
      Pool2 = (void *)ExAllocatePool2(66LL, v6, 1702052942);
      v8 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, SecurityDescriptor, v6);
        *a2 = v8;
        GenericMapping = IoGetFileObjectGenericMapping();
        ObjectSecurity = SeSetSecurityDescriptorInfo(
                           0LL,
                           &SecurityInformation,
                           ModificationDescriptor,
                           a2,
                           NonPagedPoolNx,
                           GenericMapping);
        if ( ObjectSecurity < 0 )
        {
          ExFreePoolWithTag(*a2, 0);
          *a2 = 0LL;
        }
        else
        {
          if ( *a2 != v8 )
            ExFreePoolWithTag(v8, 0);
          ObjectSecurity = 0;
        }
      }
      else
      {
        ObjectSecurity = -1073741670;
      }
    }
    ObReleaseObjectSecurity(SecurityDescriptor, MemoryAllocated[0]);
    if ( Dacl )
      ExFreePoolWithTag(Dacl, 0);
  }
  return (unsigned int)ObjectSecurity;
}
