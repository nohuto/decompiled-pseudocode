/*
 * XREFs of SepTokenDeleteMethod @ 0x140729790
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402A8FD0 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExDeleteResourceLite @ 0x1402A9050 (ExDeleteResourceLite.c)
 *     SepDereferenceLuidToIndexEntry @ 0x140349EFC (SepDereferenceLuidToIndexEntry.c)
 *     SepFreeTokenCapabilities @ 0x14035F254 (SepFreeTokenCapabilities.c)
 *     SepDeReferenceLogonSession @ 0x14076CFF0 (SepDeReferenceLogonSession.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1407EF49C (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceCachedHandlesEntry @ 0x1407EF5EC (SepDereferenceCachedHandlesEntry.c)
 *     SepModifyTokenPolicyCounter @ 0x1409C9B58 (SepModifyTokenPolicyCounter.c)
 *     SepDeleteTokenUserAndGroups @ 0x1409CF8CC (SepDeleteTokenUserAndGroups.c)
 *     SepRemoveTokenLogonSession @ 0x1409D0534 (SepRemoveTokenLogonSession.c)
 *     SepDeleteClaimAttributes @ 0x1409D15BC (SepDeleteClaimAttributes.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall SepTokenDeleteMethod(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  __int64 v6; // rdx
  signed __int64 v7; // rax
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rtt
  void *v11; // rcx
  void *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  void *v15; // rcx
  struct _ERESOURCE *v16; // rcx
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  if ( HIDWORD(NlsMbOemCodePageTag) )
  {
    SepRemoveTokenLogonSession(a1);
    v20 = *(void **)(a1 + 1144);
    if ( v20 )
      ExFreePoolWithTag(v20, 0);
  }
  v5 = *(void **)(a1 + 1096);
  if ( v5 )
  {
    if ( (*(_DWORD *)(a1 + 200) & 0x8000) != 0 )
      SepDeleteClaimAttributes(v5);
    *(_QWORD *)(a1 + 1096) = 0LL;
  }
  if ( SepTokenSidSharingEnabled )
    SepDeleteTokenUserAndGroups(a1);
  if ( (*(_DWORD *)(a1 + 200) & 0x1000000) != 0 )
    _InterlockedDecrement(&SepLearningModeTokenCount);
  if ( (*(_DWORD *)(a1 + 200) & 0x20) == 0 )
  {
    v6 = *(_QWORD *)(a1 + 1080);
    if ( v6 )
      SepDereferenceLowBoxNumberEntry(*(unsigned int *)(a1 + 120), v6);
    if ( *(_QWORD *)(a1 + 1088) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    if ( *(_QWORD *)(a1 + 1152) )
      SepDereferenceCachedHandlesEntry(*(_QWORD *)(a1 + 216));
    a2 = *(_QWORD **)(a1 + 216);
    _m_prefetchw(a2 + 3);
    v7 = a2[3];
    v8 = v7 - 1;
    v9 = v7 == 1;
    if ( v7 - 1 <= 0 )
    {
LABEL_35:
      if ( !v9 )
        __fastfail(0xEu);
      v18 = a2[1];
      v19 = a2[20];
      v21 = v18;
      SepDeReferenceLogonSession(&v21, v19);
    }
    else
    {
      while ( 1 )
      {
        v10 = v7;
        v7 = _InterlockedCompareExchange64(a2 + 3, v8, v7);
        if ( v10 == v7 )
          break;
        v8 = v7 - 1;
        v9 = v7 == 1;
        if ( v7 - 1 <= 0 )
          goto LABEL_35;
      }
    }
  }
  v11 = *(void **)(a1 + 1160);
  if ( v11 )
    ObfDereferenceObject(v11);
  v12 = *(void **)(a1 + 1112);
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( *(_BYTE *)(a1 + 119) == 2 )
    SepModifyTokenPolicyCounter(a1 + 88, 0LL);
  v13 = *(_QWORD *)(a1 + 1136);
  if ( v13 )
    SepDereferenceLuidToIndexEntry(v13);
  AuthzBasepFreeSecurityAttributesList(*(_DWORD **)(a1 + 776), (__int64)a2, a3, a4);
  ExFreePoolWithTag(*(PVOID *)(a1 + 776), 0);
  v14 = *(void **)(a1 + 176);
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( *(_QWORD *)(a1 + 792) )
    SepFreeTokenCapabilities(a1);
  v15 = *(void **)(a1 + 784);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  v16 = *(struct _ERESOURCE **)(a1 + 48);
  if ( v16 )
  {
    ExDeleteResourceLite(v16);
    ExFreePoolWithTag(*(PVOID *)(a1 + 48), 0);
  }
  v17 = *(void **)(a1 + 1104);
  if ( v17 )
    ExFreePoolWithTag(v17, 0);
}
