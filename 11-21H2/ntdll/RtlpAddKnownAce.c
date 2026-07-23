/*
 * XREFs of RtlpAddKnownAce @ 0x180047FD8
 * Callers:
 *     RtlDefaultNpAcl @ 0x180001CB0 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenMembershipEx @ 0x180048FB0 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x18004A710 (RtlCheckTokenCapability.c)
 *     RtlAddAccessAllowedAce @ 0x18004A9A0 (RtlAddAccessAllowedAce.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x180071758 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAceEx @ 0x180081A90 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x18008D390 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x180090EA0 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x180092240 (RtlAddAccessDeniedAce.c)
 *     RtlAddAuditAccessAce @ 0x180092CC0 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800F3FD0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F4040 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F42C0 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlFirstFreeAce @ 0x180048120 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180048180 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180048720 (RtlValidSid.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
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
