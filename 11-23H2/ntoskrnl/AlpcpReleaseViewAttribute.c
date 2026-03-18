/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1407DBAF8
 * Callers:
 *     AlpcpReleaseAttributes @ 0x140738834 (AlpcpReleaseAttributes.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x1407797C0 (AlpcpReleaseMessageAttributesOnCancel.c)
 * Callees:
 *     AlpcpDeleteView @ 0x14071C0E8 (AlpcpDeleteView.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E93C (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x140739E34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073BC40 (AlpcpUnlockBlob.c)
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
