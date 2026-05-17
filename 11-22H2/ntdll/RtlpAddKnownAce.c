/*
 * XREFs of RtlpAddKnownAce @ 0x18001ABE4
 * Callers:
 *     RtlDefaultNpAcl @ 0x1800019A0 (RtlDefaultNpAcl.c)
 *     RtlCheckTokenMembershipEx @ 0x180014560 (RtlCheckTokenMembershipEx.c)
 *     RtlCheckTokenCapability @ 0x180018740 (RtlCheckTokenCapability.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x18006C5B8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlAddAccessAllowedAce @ 0x18007AD70 (RtlAddAccessAllowedAce.c)
 *     RtlAddAccessAllowedAceEx @ 0x18007D620 (RtlAddAccessAllowedAceEx.c)
 *     RtlAddAccessDeniedAceEx @ 0x180087FB0 (RtlAddAccessDeniedAceEx.c)
 *     RtlAddAuditAccessAceEx @ 0x18008CE60 (RtlAddAuditAccessAceEx.c)
 *     RtlAddAccessDeniedAce @ 0x18008D000 (RtlAddAccessDeniedAce.c)
 *     RtlAddAuditAccessAce @ 0x18008D740 (RtlAddAuditAccessAce.c)
 *     RtlAddAccessAllowedObjectAce @ 0x1800F3D10 (RtlAddAccessAllowedObjectAce.c)
 *     RtlAddAccessDeniedObjectAce @ 0x1800F3D80 (RtlAddAccessDeniedObjectAce.c)
 *     RtlAddAuditAccessObjectAce @ 0x1800F4000 (RtlAddAuditAccessObjectAce.c)
 * Callees:
 *     RtlValidSid @ 0x18001B310 (RtlValidSid.c)
 *     RtlFirstFreeAce @ 0x18001B350 (RtlFirstFreeAce.c)
 *     RtlValidAcl @ 0x18001B3B0 (RtlValidAcl.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 */

__int64 __fastcall RtlpAddKnownAce(char *a1, unsigned int a2, int a3, int a4, unsigned __int8 *Src, char a6)
{
  unsigned __int8 v10; // bp
  __int64 v11; // r9
  unsigned __int16 v12; // r8
  __int64 result; // rax
  unsigned int v14; // eax
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned __int8)RtlValidSid(Src) )
    return 3221225592LL;
  if ( (unsigned __int8)*a1 > 4u || a2 > 4 )
    return 3221225561LL;
  v10 = *a1;
  if ( (unsigned __int8)*a1 <= (unsigned __int8)a2 )
    v10 = a2;
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
  if ( !(unsigned __int8)RtlValidAcl(a1) || !(unsigned __int8)RtlFirstFreeAce(a1, v15) )
    return 3221225591LL;
  v11 = v15[0];
  v12 = 4 * (Src[1] + 4);
  if ( !v15[0] || v15[0] + (unsigned __int64)v12 > (unsigned __int64)&a1[*((unsigned __int16 *)a1 + 1)] )
    return 3221225625LL;
  *(_WORD *)(v15[0] + 2LL) = v12;
  *(_BYTE *)(v11 + 1) = a3;
  *(_BYTE *)v11 = a6;
  *(_DWORD *)(v11 + 4) = a4;
  memmove((void *)(v11 + 8), Src, 4LL * Src[1] + 8);
  ++*((_WORD *)a1 + 2);
  result = 0LL;
  *a1 = v10;
  return result;
}
