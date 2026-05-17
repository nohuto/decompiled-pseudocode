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
