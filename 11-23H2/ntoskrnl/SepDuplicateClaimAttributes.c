/*
 * XREFs of SepDuplicateClaimAttributes @ 0x1409D1644
 * Callers:
 *     SepConvertToOwnTokenClaims @ 0x140370C84 (SepConvertToOwnTokenClaims.c)
 *     SepDuplicateTokenClaims @ 0x1408A68EA (SepDuplicateTokenClaims.c)
 * Callees:
 *     AuthzBasepDuplicateSecurityAttributes @ 0x140225480 (AuthzBasepDuplicateSecurityAttributes.c)
 *     RtlSidHashInitialize @ 0x140228520 (RtlSidHashInitialize.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14036B12C (AuthzBasepAllocateSecurityAttributesList.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC80 (SeCaptureSidAndAttributesArray.c)
 *     SepLengthSidAndAttributesArray @ 0x1406BD594 (SepLengthSidAndAttributesArray.c)
 *     AuthzBasepAllocateClaimCollectionNoLists @ 0x140A5A014 (AuthzBasepAllocateClaimCollectionNoLists.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepDuplicateClaimAttributes(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  _DWORD *v6; // r15
  _DWORD *v7; // rdi
  char v8; // r13
  _SID_AND_ATTRIBUTES *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *ClaimCollectionNoLists; // rsi
  _QWORD *SecurityAttributesList; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  char *v18; // rcx
  unsigned int v19; // ebx
  char *Pool2; // rax
  ULONG v21; // edx
  int v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  char v24; // [rsp+A8h] [rbp+10h]
  __int64 v25; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v26; // [rsp+B8h] [rbp+20h] BYREF

  result = 0LL;
  v24 = 0;
  LODWORD(v25) = 0;
  v5 = 0;
  v26 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  v9 = 0LL;
  if ( !a2 )
    return 3221225485LL;
  *a2 = 0LL;
  if ( a1 )
  {
    ClaimCollectionNoLists = (_DWORD *)AuthzBasepAllocateClaimCollectionNoLists();
    if ( !ClaimCollectionNoLists )
      return (unsigned int)-1073741670;
    if ( *(_QWORD *)(a1 + 576) )
    {
      SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v6 = SecurityAttributesList;
      if ( !SecurityAttributesList )
      {
        v5 = -1073741670;
LABEL_24:
        ExFreePoolWithTag(ClaimCollectionNoLists, 0);
        return (unsigned int)v5;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 576), SecurityAttributesList, 0);
      if ( v5 < 0 )
        goto LABEL_17;
      v24 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 72) = v6;
    }
    if ( *(_QWORD *)(a1 + 584) )
    {
      v14 = AuthzBasepAllocateSecurityAttributesList(v11, v10);
      v7 = v14;
      if ( !v14 )
      {
LABEL_13:
        v5 = -1073741670;
LABEL_14:
        if ( !v6 )
        {
LABEL_18:
          if ( v7 )
          {
            if ( v8 )
              AuthzBasepFreeSecurityAttributesList(v7, v15, v16, v17);
            ExFreePoolWithTag(v7, 0);
          }
          if ( v9 )
            ExFreePoolWithTag(v9, 0);
          goto LABEL_24;
        }
        if ( v24 )
          AuthzBasepFreeSecurityAttributesList(v6, v15, v16, v17);
LABEL_17:
        ExFreePoolWithTag(v6, 0);
        goto LABEL_18;
      }
      v5 = AuthzBasepDuplicateSecurityAttributes(*(_QWORD *)(a1 + 584), v14, 0);
      if ( v5 < 0 )
        goto LABEL_14;
      v8 = 1;
      *((_QWORD *)ClaimCollectionNoLists + 73) = v7;
    }
    v18 = *(char **)(a1 + 8);
    if ( v18 && *(_DWORD *)a1 )
    {
      v5 = SepLengthSidAndAttributesArray(v18, *(_DWORD *)a1, &v25);
      if ( v5 < 0 )
        goto LABEL_14;
      v19 = v25;
      Pool2 = (char *)ExAllocatePool2(256LL, (unsigned int)v25, 1683252563LL);
      v9 = (_SID_AND_ATTRIBUTES *)Pool2;
      if ( !Pool2 )
        goto LABEL_13;
      v5 = SeCaptureSidAndAttributesArray(
             *(char **)(a1 + 8),
             *(_DWORD *)a1,
             0,
             Pool2,
             v19,
             v22,
             v23,
             (PVOID *)&v26,
             (unsigned int *)&v25);
      if ( v5 < 0 )
        goto LABEL_14;
      v21 = *(_DWORD *)a1;
      *ClaimCollectionNoLists = *(_DWORD *)a1;
      *((_QWORD *)ClaimCollectionNoLists + 1) = v9;
      RtlSidHashInitialize(v9, v21, (PSID_AND_ATTRIBUTES_HASH)(ClaimCollectionNoLists + 8));
    }
    *a2 = ClaimCollectionNoLists;
    return (unsigned int)v5;
  }
  return result;
}
