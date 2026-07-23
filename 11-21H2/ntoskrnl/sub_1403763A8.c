/*
 * XREFs of sub_1403763A8 @ 0x1403763A8
 * Callers:
 *     sub_1403761D8 @ 0x1403761D8 (sub_1403761D8.c)
 * Callees:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 *     sub_14028AB90 @ 0x14028AB90 (sub_14028AB90.c)
 *     SeSecurityAttributePresent @ 0x140300420 (SeSecurityAttributePresent.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     RtlFindAceByType @ 0x140349610 (RtlFindAceByType.c)
 *     sub_140389ED0 @ 0x140389ED0 (sub_140389ED0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     SeQuerySecurityAttributesToken @ 0x140671A80 (SeQuerySecurityAttributesToken.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403763A8(_DWORD *a1, __int64 a2, _BYTE *a3)
{
  int SecurityAttributesToken; // ebx
  __int64 v7; // r8
  _BYTE *Pool2; // rdi
  __int64 v9; // rax
  _DWORD *v10; // rsi
  __int16 v11; // ax
  __int64 v12; // rax
  ACL *v13; // rcx
  _DWORD *AceByType; // rax
  _DWORD *v15; // r14
  unsigned int v17; // ebx
  unsigned int v18; // [rsp+60h] [rbp-A0h] BYREF
  ULONG Index; // [rsp+64h] [rbp-9Ch] BYREF
  int v20; // [rsp+68h] [rbp-98h] BYREF
  int v21; // [rsp+6Ch] [rbp-94h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  _BYTE P[512]; // [rsp+80h] [rbp-80h] BYREF

  v21 = 2;
  Index = 0;
  v20 = 0;
  v18 = 0;
  *a3 = 0;
  SecurityAttributesToken = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"WIN://SYSAPPID");
  if ( !SeSecurityAttributePresent((__int64)a1, (__int64)&DestinationString, v7) )
    return (unsigned int)SecurityAttributesToken;
  Pool2 = P;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              (_DWORD)a1,
                              (unsigned int)&DestinationString,
                              1,
                              (unsigned int)P,
                              512,
                              (__int64)&v18);
  if ( SecurityAttributesToken == -1073741789 )
  {
    v17 = v18;
    Pool2 = (_BYTE *)ExAllocatePool2(256LL, v18, 538994003LL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                (_DWORD)a1,
                                (unsigned int)&DestinationString,
                                1,
                                (_DWORD)Pool2,
                                v17,
                                (__int64)&v18);
  }
  if ( SecurityAttributesToken < 0 )
  {
    if ( Pool2 )
      goto LABEL_20;
    return (unsigned int)SecurityAttributesToken;
  }
  if ( !Pool2 )
    return (unsigned int)-1073739509;
  v9 = sub_140389ED0();
  v10 = (_DWORD *)v9;
  if ( !v9 )
  {
    SecurityAttributesToken = -1073741670;
    goto LABEL_20;
  }
  SecurityAttributesToken = sub_140204870(v9, &v21, (__int64)Pool2);
  if ( SecurityAttributesToken < 0 )
    goto LABEL_16;
  do
  {
    v11 = *(_WORD *)(a2 + 2);
    if ( (v11 & 4) == 0 )
      goto LABEL_28;
    if ( v11 < 0 )
    {
      v12 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v12 )
      {
        v13 = (ACL *)(a2 + v12);
        goto LABEL_11;
      }
LABEL_28:
      v13 = 0LL;
      goto LABEL_11;
    }
    v13 = *(ACL **)(a2 + 32);
LABEL_11:
    AceByType = RtlFindAceByType(v13, 9u, &Index);
    v15 = AceByType;
    if ( AceByType )
    {
      SecurityAttributesToken = sub_140219130(
                                  a1,
                                  v10,
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
                                  &v20);
      if ( SecurityAttributesToken < 0 )
        break;
      if ( v20 == 1 )
        goto LABEL_18;
    }
    ++Index;
  }
  while ( v15 );
  if ( v20 != 1 )
    goto LABEL_16;
LABEL_18:
  *a3 = 1;
LABEL_16:
  sub_14028AB90(v10);
LABEL_20:
  if ( Pool2 != P )
    ExFreePoolWithTag(Pool2, 0);
  return (unsigned int)SecurityAttributesToken;
}
