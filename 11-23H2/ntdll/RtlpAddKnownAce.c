/*
 * XREFs of RtlpAddKnownAce @ 0x18001AA04
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019D0 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenMembershipEx @ 0x180014350 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018530 (RtlCheckTokenCapability.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x18007B3E0 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007DC90 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x1800887B0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x18008D660 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x18008D800 (RtlAddAccessDeniedAce.c)
 *     RtlAddAuditAccessAce @ 0x18008DF40 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800F5120 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F5190 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F5410 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x18001B170 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(PACL Acl, unsigned int a2, int a3, int a4, unsigned __int8 *Sid, char a6)
{
  unsigned __int8 AclRevision; // bp
  char *v11; // r9
  unsigned __int16 v12; // r8
  __int64 result; // rax
  unsigned int v14; // eax
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 > 4 )
    return 3221225561LL;
  AclRevision = Acl->AclRevision;
  if ( Acl->AclRevision <= (unsigned __int8)a2 )
    AclRevision = a2;
  if ( (a3 & 0xFFFFFFE0) != 0 )
  {
    if ( a6 == 2 )
    {
      v14 = a3 & 0xFFFFFF20;
    }
    else
    {
      if ( a6 )
        return 3221225485LL;
      v14 = a3 & 0xFFFFFFC0;
    }
    if ( !v14 )
      goto LABEL_7;
    return 3221225485LL;
  }
LABEL_7:
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v11 = (char *)FirstFree;
  v12 = 4 * (Sid[1] + 4);
  if ( !FirstFree || (char *)FirstFree + v12 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_WORD *)FirstFree + 1) = v12;
  v11[1] = a3;
  *v11 = a6;
  *((_DWORD *)v11 + 1) = a4;
  memmove(v11 + 8, Sid, 4LL * Sid[1] + 8);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
