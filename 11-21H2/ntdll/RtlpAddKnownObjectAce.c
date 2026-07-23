/*
 * XREFs of RtlpAddKnownObjectAce @ 0x1800F4AB0
 * Callers:
 *     RtlAddAccessAllowedObjectAce @ 0x1800F3FD0 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F4040 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F42C0 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlCopySid @ 0x18000F120 (RtlCopySid.c)
 *     RtlFirstFreeAce @ 0x180048120 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x180048180 (RtlValidAcl.c)
 *     RtlValidSid @ 0x180048720 (RtlValidSid.c)
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
  ULONG v13; // r11d
  unsigned __int16 v14; // r8
  int v15; // r9d
  char *v16; // rdx
  _OWORD *v17; // rdx
  PVOID FirstFree; // [rsp+20h] [rbp-28h] BYREF

  if ( !RtlValidSid(Sid) )
    return 3221225592LL;
  if ( Acl->AclRevision > 4u || a2 != 4 )
    return 3221225561LL;
  if ( (a3 & 0xFFFFFFE0) != 0 && (a8 != 7 || (a3 & 0xFFFFFF20) != 0) )
    return 3221225485LL;
  if ( !RtlValidAcl(Acl) || !RtlFirstFreeAce(Acl, &FirstFree) )
    return 3221225591LL;
  v13 = 4 * Sid[1] + 8;
  v14 = 4 * Sid[1] + 8 + (a5 != 0LL ? 28 : 12);
  v15 = a5 != 0LL;
  if ( a6 )
  {
    v15 |= 2u;
    v14 += 16;
  }
  v16 = (char *)FirstFree;
  if ( !FirstFree || (char *)FirstFree + v14 > (char *)Acl + Acl->AclSize )
    return 3221225625LL;
  *((_BYTE *)FirstFree + 1) = a3;
  *v16 = a8;
  *((_WORD *)v16 + 1) = v14;
  *((_DWORD *)v16 + 1) = a4;
  *((_DWORD *)v16 + 2) = v15;
  v17 = v16 + 12;
  if ( a5 )
    *v17++ = *a5;
  if ( a6 )
    *v17++ = *a6;
  RtlCopySid(v13, v17, Sid);
  ++Acl->AceCount;
  result = 0LL;
  Acl->AclRevision = 4;
  return result;
}
