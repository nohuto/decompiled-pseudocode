/*
 * XREFs of AlpcpDeleteView @ 0x14071C2E8
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14071A8FC (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpExposeViewAttributeInSenderContext @ 0x14071AA58 (AlpcpExposeViewAttributeInSenderContext.c)
 *     NtAlpcCreateSectionView @ 0x1407B9DB0 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1407CB300 (NtAlpcDeleteSectionView.c)
 *     AlpcpReleaseViewAttribute @ 0x1407DBDC8 (AlpcpReleaseViewAttribute.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14071C31C (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
