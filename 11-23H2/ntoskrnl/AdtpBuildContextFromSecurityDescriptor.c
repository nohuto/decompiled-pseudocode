/*
 * XREFs of AdtpBuildContextFromSecurityDescriptor @ 0x1406711C0
 * Callers:
 *     AdtpBuildAccessReasonAuditString @ 0x1406702B0 (AdtpBuildAccessReasonAuditString.c)
 * Callees:
 *     RtlFindAceByType @ 0x1402AD480 (RtlFindAceByType.c)
 *     SeRmReferenceFindCapName @ 0x1405B9CA8 (SeRmReferenceFindCapName.c)
 *     RtlGetSaclSecurityDescriptor @ 0x1407119B0 (RtlGetSaclSecurityDescriptor.c)
 */

int __fastcall AdtpBuildContextFromSecurityDescriptor(void *a1, __int64 a2)
{
  int result; // eax
  void *v4; // rbp
  char *AceByType; // rax
  _QWORD *v6; // rsi
  _DWORD *v7; // rdi
  BOOLEAN v8; // [rsp+50h] [rbp+8h] BYREF
  BOOLEAN v9; // [rsp+58h] [rbp+10h] BYREF
  ULONG Index; // [rsp+60h] [rbp+18h] BYREF
  PACL Acl; // [rsp+68h] [rbp+20h] BYREF

  Acl = 0LL;
  Index = 0;
  *(_QWORD *)a2 = a1;
  v8 = 0;
  result = RtlGetSaclSecurityDescriptor(a1, &v8, &Acl, &v9);
  if ( result < 0 )
  {
    v7 = (_DWORD *)(a2 + 8);
    v6 = (_QWORD *)(a2 + 16);
LABEL_11:
    *v7 = 0;
    *v6 = 0LL;
    return result;
  }
  v4 = 0LL;
  if ( v8 )
  {
    while ( 1 )
    {
      AceByType = (char *)RtlFindAceByType(Acl, 0x13u, &Index);
      if ( AceByType )
      {
        if ( (AceByType[1] & 8) == 0 )
          break;
      }
      ++Index;
      if ( !AceByType )
        goto LABEL_8;
    }
    v4 = AceByType + 8;
  }
LABEL_8:
  v6 = (_QWORD *)(a2 + 16);
  v7 = (_DWORD *)(a2 + 8);
  result = SeRmReferenceFindCapName(v4, (_DWORD *)(a2 + 8), (__int64 *)(a2 + 16));
  if ( result < 0 )
    goto LABEL_11;
  return result;
}
