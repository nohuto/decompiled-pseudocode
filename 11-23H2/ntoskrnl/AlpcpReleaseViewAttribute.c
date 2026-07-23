/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1407DBDC8
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140738A24 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407799B0 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpDeleteView @ 0x14071C2E8 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 */

unsigned __int64 __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2, int a2)
{
  ULONG_PTR v4; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v4 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v4);
  if ( a2 )
    AlpcpDeleteView(BugCheckParameter2);
  return AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
