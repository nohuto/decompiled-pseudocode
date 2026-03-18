/*
 * XREFs of AlpcpDeleteView @ 0x14071C0E8
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A6FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071A858 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSectionView @ 0x1407B9AD0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1407CB030 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBAF8 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14071C11C (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14071E93C (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
