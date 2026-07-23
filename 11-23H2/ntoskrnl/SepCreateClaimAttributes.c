/*
 * XREFs of SepCreateClaimAttributes @ 0x1407CF704
 * Callers:
 *     SepSetTokenClaims @ 0x1407CF688 (SepSetTokenClaims.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140224DF8 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlSidHashInitialize @ 0x140228520 (RtlSidHashInitialize.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036B12C (AuthzBasepAllocateSecurityAttributesList.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC80 (SeCaptureSidAndAttributesArray.c)
 *     SepLengthSidAndAttributesArray @ 0x1406BD594 (SepLengthSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5A014 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepCreateClaimAttributes(unsigned int **a1, __int64 a2, __int64 a3, unsigned int a4, char *Src)
{
  __int64 result; // rax
  int v8; // ebx
  _DWORD *v9; // r14
  _DWORD *v10; // rsi
  char v11; // r12
  _SID_AND_ATTRIBUTES *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int *ClaimCollectionNoLists; // rdi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned int v21; // ebx
  char *Pool2; // rax
  int v23; // [rsp+28h] [rbp-80h]
  int v24; // [rsp+30h] [rbp-78h]
  int v25; // [rsp+54h] [rbp-54h] BYREF
  __int64 v26; // [rsp+58h] [rbp-50h] BYREF
  __int64 v27; // [rsp+60h] [rbp-48h] BYREF
  char v28; // [rsp+B0h] [rbp+8h]

  v25 = 1;
  v28 = 0;
  result = a2;
  LODWORD(v26) = 0;
  v8 = 0;
  v27 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0;
  v12 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  *a1 = 0LL;
  if ( a2 || a3 || a4 )
  {
    ClaimCollectionNoLists = (unsigned int *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( a2 )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v9 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v8 = -1073741670;
LABEL_37:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v8;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v25, a2);
      if ( v8 < 0 )
        goto LABEL_30;
      v28 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v9;
    }
    if ( a3 )
    {
      v17 = AuthzBasepAllocateSecurityAttributesList(v14, v13);
      v10 = v17;
      if ( !v17 )
      {
LABEL_26:
        v8 = -1073741670;
        goto LABEL_27;
      }
      v8 = AuthzBasepSetSecurityAttributesToken((__int64)v17, &v25, a3);
      if ( v8 < 0 )
      {
LABEL_27:
        if ( !v9 )
        {
LABEL_31:
          if ( v10 )
          {
            if ( v11 )
              AuthzBasepFreeSecurityAttributesList(v10, v18, v19, v20);
            ExFreePoolWithTag(v10, 0);
          }
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_37;
        }
        if ( v28 )
          AuthzBasepFreeSecurityAttributesList(v9, v18, v19, v20);
LABEL_30:
        ExFreePoolWithTag(v9, 0);
        goto LABEL_31;
      }
      v11 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v10;
    }
    if ( !Src || !a4 )
      goto LABEL_24;
    v8 = SepLengthSidAndAttributesArray(Src, a4, &v26);
    if ( v8 < 0 )
      goto LABEL_27;
    v21 = v26;
    Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v26, 1683252563LL);
    v12 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      v8 = SeCaptureSidAndAttributesArray(Src, a4, 0, Pool2, v21, v23, v24, (PVOID *)&v27, (unsigned int *)&v26);
      if ( v8 >= 0 )
      {
        *ClaimCollectionNoLists = a4;
        *((_QWORD *)ClaimCollectionNoLists + 1) = v12;
        RtlSidHashInitialize(v12, a4, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
LABEL_24:
        *a1 = ClaimCollectionNoLists;
        return (unsigned int)v8;
      }
      goto LABEL_27;
    }
    goto LABEL_26;
  }
  return result;
}
