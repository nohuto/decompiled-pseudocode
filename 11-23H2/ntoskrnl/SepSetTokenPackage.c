/*
 * XREFs of SepSetTokenPackage @ 0x140714F70
 * Callers:
 *     SepGetAnonymousToken @ 0x140371398 (SepGetAnonymousToken.c)
 *     SepDuplicateToken @ 0x140729D80 (SepDuplicateToken.c)
 *     SepFilterToken @ 0x1407F1ED0 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2810 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlCopySid @ 0x140715180 (RtlCopySid.c)
 *     RtlIsParentOfChildAppContainer @ 0x1409BC498 (RtlIsParentOfChildAppContainer.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SepSetTokenPackage(__int64 a1, unsigned __int8 *a2)
{
  void *v4; // rcx
  ULONG v5; // ebp
  void *Pool2; // rax
  void *v7; // rdi
  void *v8; // rcx

  v4 = *(void **)(a1 + 784);
  if ( v4 && !RtlIsParentOfChildAppContainer(v4, a2) )
    return 3221225506LL;
  v5 = (4 * a2[1] + 11) & 0xFFFFFFFC;
  Pool2 = (void *)ExAllocatePool2(256LL, v5, 1767073107LL);
  v7 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  RtlCopySid(v5, Pool2, a2);
  v8 = *(void **)(a1 + 784);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  *(_QWORD *)(a1 + 784) = v7;
  return 0LL;
}
