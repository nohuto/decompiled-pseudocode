/*
 * XREFs of RtlAddProcessTrustLabelAce @ 0x140736BC0
 * Callers:
 *     SepSetProcessTrustLabelAceForToken @ 0x1402B39D0 (SepSetProcessTrustLabelAceForToken.c)
 *     RtlpNewSecurityObject @ 0x14072A600 (RtlpNewSecurityObject.c)
 *     SeMakeSystemToken @ 0x140B53B60 (SeMakeSystemToken.c)
 * Callees:
 *     RtlIsValidProcessTrustLabelSid @ 0x1402B3CC0 (RtlIsValidProcessTrustLabelSid.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     RtlValidAcl @ 0x140736A70 (RtlValidAcl.c)
 */

NTSTATUS __cdecl RtlAddProcessTrustLabelAce(
        PACL Acl,
        ULONG AceRevision,
        ULONG AceFlags,
        PSID ProcessTrustLabelSid,
        UCHAR AceType,
        ACCESS_MASK AccessMask)
{
  __int16 v10; // r10
  ULONG AclRevision; // esi
  PACL v12; // rcx
  unsigned int v13; // edx
  ACL *v14; // r8
  USHORT v15; // dx
  NTSTATUS result; // eax

  if ( !Acl || !RtlValidAcl(Acl) )
    return -1073741705;
  if ( AceType != 20 )
    return -1073741811;
  if ( (unsigned __int64)ProcessTrustLabelSid <= 0x7FFFFFFF0000LL
    || (*(_BYTE *)ProcessTrustLabelSid & 0xF) != 1
    || *((_BYTE *)ProcessTrustLabelSid + 1) > 0xFu )
  {
    return -1073741704;
  }
  if ( !RtlIsValidProcessTrustLabelSid(ProcessTrustLabelSid) )
    return -1073741811;
  AclRevision = Acl->AclRevision;
  if ( (unsigned __int8)AclRevision > 4u || AceRevision > 4 )
    return -1073741735;
  if ( AclRevision <= AceRevision )
    LOBYTE(AclRevision) = AceRevision;
  if ( (AceFlags & 0xFFFFFFE0) != 0 || (AccessMask & 0xFF000000) != 0 )
    return -1073741811;
  v12 = Acl + 1;
  v13 = 0;
  if ( Acl->AceCount )
  {
    while ( v12 < (PACL)((char *)Acl + Acl->AclSize) )
    {
      ++v13;
      v12 = (PACL)((char *)v12 + v12->AclSize);
      if ( v13 >= Acl->AceCount )
        goto LABEL_17;
    }
    return -1073741705;
  }
LABEL_17:
  v14 = (PACL)((char *)Acl + Acl->AclSize);
  if ( v12 > v14 )
    v12 = 0LL;
  v15 = 4 * (v10 + 4);
  if ( !v12 || (PACL)((char *)v12 + v15) > v14 )
    return -1073741671;
  v12->AclSize = v15;
  v12->Sbz1 = AceFlags;
  v12->AclRevision = 20;
  *(_DWORD *)&v12->AceCount = AccessMask;
  memmove(&v12[1], ProcessTrustLabelSid, 4LL * *((unsigned __int8 *)ProcessTrustLabelSid + 1) + 8);
  ++Acl->AceCount;
  result = 0;
  Acl->AclRevision = AclRevision;
  return result;
}
