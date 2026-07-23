/*
 * XREFs of RtlQueryInformationAcl @ 0x180077F00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFirstFreeAce @ 0x18001B350 (RtlFirstFreeAce.c)
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int AclRevision; // ecx
  __int32 v7; // r9d
  BOOLEAN v8; // al
  int v9; // edx
  PVOID v10; // rcx
  int v11; // ecx
  PVOID FirstFree; // [rsp+30h] [rbp+8h] BYREF

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) <= 2u )
  {
    v7 = AclInformationClass - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return -1073741821;
      if ( AclInformationLength >= 0xC )
      {
        v8 = RtlFirstFreeAce(Acl, &FirstFree);
        v9 = 0;
        if ( v8 )
        {
          v10 = FirstFree;
          *(_DWORD *)AclInformation = Acl->AceCount;
          if ( v10 )
          {
            v11 = (_DWORD)v10 - (_DWORD)Acl;
            *((_DWORD *)AclInformation + 1) = v11;
            v9 = Acl->AclSize - v11;
          }
          else
          {
            *((_DWORD *)AclInformation + 1) = Acl->AclSize;
          }
          *((_DWORD *)AclInformation + 2) = v9;
          return 0;
        }
        return -1073741811;
      }
    }
    else if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  return -1073741811;
}
