/*
 * XREFs of RaidUnitAddAclToVmDevices @ 0x1C008FCF4
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C001EEC0 (RaidUnitRegisterInterfaces.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 */

NTSTATUS __fastcall RaidUnitAddAclToVmDevices(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  NTSTATUS Acl; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  struct _ACL *Pool; // rax
  struct _ACL *v8; // rdi
  _OWORD SecurityDescriptor[2]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-18h]
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  Handle = 0LL;
  v2 = *(void **)(a1 + 8);
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v10 = 0LL;
  result = ObOpenObjectByPointer(v2, 0x200u, 0LL, 0x40000u, 0LL, 0, &Handle);
  if ( result >= 0 )
  {
    Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( Acl >= 0 )
    {
      v5 = RtlLengthSid(SeExports->SeAliasAdminsSid);
      v6 = RtlLengthSid(SeExports->SeLocalSystemSid) + 32 + v5;
      Pool = (struct _ACL *)RaidAllocatePool(256LL, v6, 1818452292LL, *(_QWORD *)(a1 + 8));
      v8 = Pool;
      if ( Pool )
      {
        Acl = RtlCreateAcl(Pool, v6, 2u);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAccessAllowedAce(v8, 2u, 0x1F01FFu, SeExports->SeAliasAdminsSid);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v8, 2u, 0x1F01FFu, SeExports->SeLocalSystemSid);
            if ( Acl >= 0 )
            {
              Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v8, 0);
              if ( Acl >= 0 )
                Acl = ZwSetSecurityObject(Handle, 4u, SecurityDescriptor);
            }
          }
        }
        ExFreePoolWithTag(v8, 0x6C636144u);
      }
      else
      {
        Acl = -1073741670;
      }
    }
    ZwClose(Handle);
    return Acl;
  }
  return result;
}
