/*
 * XREFs of RtlpValidFilterAclSubjectContext @ 0x18000F57C
 * Callers:
 *     RtlpSetSecurityObject @ 0x18000E648 (RtlpSetSecurityObject.c)
 *     RtlpNewSecurityObject @ 0x18000F5FC (RtlpNewSecurityObject.c)
 * Callees:
 *     RtlpValidTrustSubjectContext @ 0x18000B6FC (RtlpValidTrustSubjectContext.c)
 *     RtlFindAceByType @ 0x180010EE0 (RtlFindAceByType.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpValidFilterAclSubjectContext(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 AceByType; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  int v10; // ecx
  int v11; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v12; // [rsp+24h] [rbp-1Ch] BYREF
  int v13; // [rsp+28h] [rbp-18h]
  unsigned __int16 v14; // [rsp+2Ch] [rbp-14h]

  v12 = 0;
  v13 = 0;
  v11 = 0;
  v14 = 256;
  while ( 1 )
  {
    AceByType = RtlFindAceByType(a1, 21LL, &v11, a4);
    v8 = AceByType;
    if ( !AceByType )
      goto LABEL_3;
    if ( (*(_DWORD *)(AceByType + 4) & 0xFF000000) != 0 )
      return 3221225485LL;
    if ( (*(_BYTE *)(AceByType + 1) & 0x40) == 0 )
      break;
    if ( !RtlpValidTrustSubjectContext(a2, AceByType + 8, v7, &v12) )
      return 3221225506LL;
LABEL_3:
    ++v11;
    if ( !v8 )
      return v12;
  }
  v10 = *(_DWORD *)(AceByType + 10) - v13;
  if ( !v10 )
    v10 = *(unsigned __int16 *)(AceByType + 14) - v14;
  if ( !v10 && *(_BYTE *)(AceByType + 9) == 1 && !*(_DWORD *)(AceByType + 16) )
    goto LABEL_3;
  return 3221225485LL;
}
