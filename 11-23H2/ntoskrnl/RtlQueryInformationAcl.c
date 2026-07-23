/*
 * XREFs of RtlQueryInformationAcl @ 0x140736330
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B39D0 (SepSetProcessTrustLabelAceForToken.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x14037060C (SepAppendAceToTokenDefaultDacl.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1406BD140 (SepAppendAceToTokenObjectAcl.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlQueryInformationAcl(
        PACL Acl,
        PVOID AclInformation,
        ULONG AclInformationLength,
        ACL_INFORMATION_CLASS AclInformationClass)
{
  int AclRevision; // r10d
  __int32 v6; // r9d
  unsigned int AceCount; // r10d
  PACL v8; // rdx
  int v9; // r8d
  unsigned int v10; // r9d
  ACL *v11; // rax
  int v12; // edx

  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)(AclRevision - 2) > 2u )
    return -1073741811;
  v6 = AclInformationClass - 1;
  if ( !v6 )
  {
    if ( AclInformationLength >= 4 )
    {
      *(_DWORD *)AclInformation = AclRevision;
      return 0;
    }
    return -1073741789;
  }
  if ( v6 == 1 )
  {
    if ( AclInformationLength >= 0xC )
    {
      AceCount = Acl->AceCount;
      v8 = Acl + 1;
      v9 = 0;
      v10 = 0;
      if ( Acl->AceCount )
      {
        while ( v8 < (PACL)((char *)Acl + Acl->AclSize) )
        {
          ++v10;
          v8 = (PACL)((char *)v8 + v8->AclSize);
          if ( v10 >= AceCount )
            goto LABEL_8;
        }
        return -1073741811;
      }
LABEL_8:
      v11 = (PACL)((char *)Acl + Acl->AclSize);
      *(_DWORD *)AclInformation = AceCount;
      if ( v8 > v11 )
        v8 = 0LL;
      if ( v8 )
      {
        v12 = (_DWORD)v8 - (_DWORD)Acl;
        *((_DWORD *)AclInformation + 1) = v12;
        v9 = Acl->AclSize - v12;
      }
      else
      {
        *((_DWORD *)AclInformation + 1) = Acl->AclSize;
      }
      *((_DWORD *)AclInformation + 2) = v9;
      return 0;
    }
    return -1073741789;
  }
  return -1073741821;
}
