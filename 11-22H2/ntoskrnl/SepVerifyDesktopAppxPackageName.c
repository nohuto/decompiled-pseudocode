/*
 * XREFs of SepVerifyDesktopAppxPackageName @ 0x1405B81D4
 * Callers:
 *     SepVerifyDesktopAppxImage @ 0x1405B8000 (SepVerifyDesktopAppxImage.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224D10 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14022BF60 (AuthzBasepEvaluateAceCondition.c)
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     SeSecurityAttributePresent @ 0x140297AC0 (SeSecurityAttributePresent.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8C20 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlFindAceByType @ 0x1402AD1C0 (RtlFindAceByType.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036A93C (AuthzBasepAllocateSecurityAttributesList.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x1406B7A00 (SeQuerySecurityAttributesToken.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepVerifyDesktopAppxPackageName(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  _BYTE *Pool2; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD *SecurityAttributesList; // rax
  _DWORD *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int16 v16; // ax
  ACL *v17; // rcx
  __int64 v18; // rax
  _DWORD *AceByType; // rax
  _DWORD *v20; // r14
  unsigned int v22; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Index; // [rsp+64h] [rbp-9Ch] BYREF
  int v24; // [rsp+68h] [rbp-98h] BYREF
  int v25; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  v25 = 2;
  Index = 0;
  v24 = 0;
  v22 = 0;
  *a3 = 0;
  SecurityAttributesToken = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent((__int64)a1, &DestinationString) )
    return (unsigned int)SecurityAttributesToken;
  Pool2 = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              (_DWORD)a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&v22);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v10 = v22;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v22, 538994003LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                (_DWORD)a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)Pool2,
                                v10,
                                (__int64)&v22);
  }
  if ( SecurityAttributesToken < 0 )
  {
    if ( Pool2 )
      goto LABEL_26;
    return (unsigned int)SecurityAttributesToken;
  }
  if ( !Pool2 )
    return (unsigned int)-1073739509;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v9, v8);
  v12 = SecurityAttributesList;
  if ( !SecurityAttributesList )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_26;
  }
  SecurityAttributesToken = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v25, (__int64)Pool2);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_24;
  do
  {
    v16 = *(_WORD *)(a2 + 2);
    if ( (v16 & 4) == 0 )
    {
LABEL_13:
      v17 = 0LL;
      goto LABEL_18;
    }
    if ( v16 >= 0 )
    {
      v17 = *(ACL **)(a2 + 32);
    }
    else
    {
      v18 = *(unsigned int *)(a2 + 16);
      if ( !(_DWORD)v18 )
        goto LABEL_13;
      v17 = (ACL *)(a2 + v18);
    }
LABEL_18:
    AceByType = RtlFindAceByType(v17, 9u, &Index);
    v15 = 0LL;
    v20 = AceByType;
    if ( AceByType )
    {
      SecurityAttributesToken = AuthzBasepEvaluateAceCondition(
                                  a1,
                                  v12,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  0LL,
                                  &AceByType[*((unsigned __int8 *)AceByType + 9) + 4],
                                  *((unsigned __int16 *)AceByType + 1)
                                - (4 * (unsigned int)*((unsigned __int8 *)AceByType + 9)
                                 + 8)
                                - 8,
                                  0,
                                  0,
                                  &v24);
      if ( SecurityAttributesToken < 0 )
        break;
      if ( v24 == 1 )
        goto LABEL_23;
    }
    ++Index;
  }
  while ( v20 );
  if ( v24 != 1 )
    goto LABEL_24;
LABEL_23:
  *a3 = 1;
LABEL_24:
  AuthzBasepFreeSecurityAttributesList(v12, v13, v14, v15);
LABEL_26:
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SecurityAttributesToken;
}
