/*
 * XREFs of SepSetTokenCapabilities @ 0x1406BD618
 * Callers:
 *     SepGetAnonymousToken @ 0x140370BA8 (SepGetAnonymousToken.c)
 *     SepDuplicateToken @ 0x140729BF0 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1407F2180 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2AC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlSidHashInitialize @ 0x140228430 (RtlSidHashInitialize.c)
 *     SepFreeTokenCapabilities @ 0x14035EA64 (SepFreeTokenCapabilities.c)
 *     SeCaptureSidAndAttributesArray @ 0x1406BCC50 (SeCaptureSidAndAttributesArray.c)
 *     SepLengthSidAndAttributesArray @ 0x1406BD564 (SepLengthSidAndAttributesArray.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC348 (RtlIsParentOfChildAppContainer.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1409D189C (SepInsertOrReferenceSharedSidEntries.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSetTokenCapabilities(__int64 a1, void *a2, char *a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned int v8; // ebp
  char *Pool2; // rax
  _SID_AND_ATTRIBUTES *v10; // rsi
  int v11; // eax
  unsigned int v12; // ebp
  void *v13; // rcx
  int v14; // [rsp+28h] [rbp-50h]
  int v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+50h] [rbp-28h] BYREF
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  LODWORD(v17) = 0;
  v16 = 0LL;
  if ( *(_QWORD *)(a1 + 792) )
  {
    if ( !a2 )
      return 3221225506LL;
    v13 = *(void **)(a1 + 784);
    if ( v13 )
    {
      if ( !RtlIsParentOfChildAppContainer(v13, a2) )
        return 3221225506LL;
    }
  }
  if ( a4 )
  {
    if ( a4 > 0x1000 )
      return 3221225485LL;
    if ( SepTokenCapabilitySidSharingEnabled )
    {
      v8 = 32 * a4;
    }
    else
    {
      result = SepLengthSidAndAttributesArray(a3, a4, &v17);
      if ( (int)result < 0 )
        return result;
      v8 = v17;
    }
    Pool2 = (char *)ExAllocatePool2(256LL, v8, 1934845267LL);
    v10 = (_SID_AND_ATTRIBUTES *)Pool2;
    if ( Pool2 )
    {
      if ( SepTokenCapabilitySidSharingEnabled )
        v11 = SepInsertOrReferenceSharedSidEntries(a3, Pool2, a4);
      else
        v11 = SeCaptureSidAndAttributesArray(a3, a4, 0, Pool2, v8, v14, v15, (PVOID *)&v16, (unsigned int *)&v17);
      v12 = v11;
      if ( v11 < 0 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      else
      {
        if ( *(_QWORD *)(a1 + 792) )
          SepFreeTokenCapabilities(a1);
        *(_QWORD *)(a1 + 792) = v10;
        *(_DWORD *)(a1 + 800) = a4;
        RtlSidHashInitialize(v10, a4, (PSID_AND_ATTRIBUTES_HASH)(a1 + 808));
      }
      return v12;
    }
    else
    {
      return 3221225626LL;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 792) )
      SepFreeTokenCapabilities(a1);
    *(_QWORD *)(a1 + 792) = 0LL;
    *(_DWORD *)(a1 + 800) = 0;
    return 0LL;
  }
}
