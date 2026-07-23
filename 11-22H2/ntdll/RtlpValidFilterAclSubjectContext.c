/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x1800136C4
 * Callers:
 *     RtlpNewSecurityObject @ 0x180016E10 (RtlpNewSecurityObject.c)
 *     RtlpSetSecurityObject @ 0x180079E78 (RtlpSetSecurityObject.c)
 * Callees:
 *     RtlFindAceByType @ 0x180015720 (RtlFindAceByType.c)
 *     RtlpValidTrustSubjectContext @ 0x180068748 (RtlpValidTrustSubjectContext.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(PACL Acl, __int64 a2)
{
  _DWORD *AceByType; // rax
  __int64 v5; // r8
  _DWORD *v6; // rbx
  int v8; // ecx
  ULONG Index; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-1Ch] BYREF
  int v11; // [rsp+28h] [rbp-18h]
  unsigned __int16 v12; // [rsp+2Ch] [rbp-14h]

  v10 = 0;
  v11 = 0;
  Index = 0;
  v12 = 256;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(Acl, 0x15u, &Index);
    v6 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (AceByType[1] & 0xFF000000) != 0 )
      return 3221225485LL;
    if ( (*((_BYTE *)AceByType + 1) & 0x40) == 0 )
      break;
    if ( !(unsigned __int8)RtlpValidTrustSubjectContext(a2, AceByType + 2, v5, &v10) )
      return 3221225506LL;
LABEL_3:
    ++Index;
    if ( !v6 )
      return v10;
  }
  v8 = *(_DWORD *)((char *)AceByType + 10) - v11;
  if ( !v8 )
    v8 = *((unsigned __int16 *)AceByType + 7) - v12;
  if ( !v8 && *((_BYTE *)AceByType + 9) == 1 && !AceByType[4] )
    goto LABEL_3;
  return 3221225485LL;
}
