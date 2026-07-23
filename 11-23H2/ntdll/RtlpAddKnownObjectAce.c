/*
 * XREFs of RtlpAddKnownObjectAce @ 0x1800F5C00
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800F5120 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F5190 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F5410 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18001B130 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x18001B170 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18001B1D0 (RtlValidAcl.c)
 *     RtlCopySid @ 0x1800691F0 (RtlCopySid.c)
 */

__int64 __fastcall RtlpAddKnownObjectAce(
        PACL Acl,
        int a2,
        int a3,
        int a4,
        _OWORD *a5,
        _OWORD *a6,
        unsigned __int8 *Sid,
        char a8)
{
  __int64 result; // rax
  unsigned __int8 AclRevision; // di
  ULONG v14; // r11d
  unsigned __int16 v15; // r8
  int v16; // r9d
  char *v17; // rdx
  _OWORD *v18; // rdx
  PVOID FirstFree; // [rsp+20h] [rbp-38h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  AclRevision = 4;
  if ( Acl->AclRevision > 4u )
    AclRevision = Acl->AclRevision;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v14 = 4 * Sid[1] + 8;
  v15 = 4 * Sid[1] + 8 + (a5 != 0LL ? 28 : 12);
  v16 = a5 != 0LL;
  if ( a6 )
  {
    v16 |= 2u;
    v15 += 16;
  }
  v17 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v15 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *v17 = a8;
  *((_WORD *)v17 + 1) = v15;
  *((_DWORD *)v17 + 1) = a4;
  *((_DWORD *)v17 + 2) = v16;
  v18 = v17 + 12;
  if ( a5 )
    *v18++ = *a5;
  if ( a6 )
    *v18++ = *a6;
  RtlCopySid(v14, v18, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = AclRevision;
  return result;
}
