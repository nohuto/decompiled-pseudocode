/*
 * XREFs of AlpcpCaptureViewAttributeInternal @ 0x14071A8FC
 * Callers:
 *     AlpcpCaptureViewAttribute @ 0x14071A8A8 (AlpcpCaptureViewAttribute.c)
 *     AlpcpCaptureViewAttribute32 @ 0x140979690 (AlpcpCaptureViewAttribute32.c)
 * Callees:
 *     AlpcpPrepareViewForDelivery @ 0x14071A468 (AlpcpPrepareViewForDelivery.c)
 *     AlpcpLocateSectionView @ 0x14071A550 (AlpcpLocateSectionView.c)
 *     AlpcpDeleteView @ 0x14071C2E8 (AlpcpDeleteView.c)
 *     AlpcReferenceBlobByHandle @ 0x14071DDF8 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14073A024 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x14073BE30 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcpCaptureViewAttributeInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rax
  ULONG_PTR v13; // rbx
  int v14; // ebp
  char v15; // al
  ULONG_PTR v16; // rdi
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp+10h] BYREF

  if ( (*(_DWORD *)a2 & 0xFFF8FFFF) != 0 )
    return 3221225485LL;
  v8 = *(_QWORD *)(a3 + 144);
  BugCheckParameter2 = v8;
  if ( v8 )
  {
    *(_QWORD *)(a3 + 144) = 0LL;
    AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v8 + 16));
    --*(_DWORD *)(v8 + 76);
    AlpcpUnlockBlob(*(_QWORD *)(v8 + 16));
    if ( (*(_DWORD *)a2 & 0x10000) != 0 || (*(_DWORD *)(a3 + 40) & 0xC000) == 0x8000 )
      AlpcpDeleteView(v8);
    AlpcpDereferenceBlobEx(v8);
  }
  *(_DWORD *)(a3 + 40) &= 0xFFFF3FFF;
  v9 = *(_QWORD *)(a2 + 8);
  if ( !v9 )
    return 0LL;
  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
    return 3221225793LL;
  v11 = *(_QWORD *)(a1 + 16);
  if ( !v11 )
    return 3221225480LL;
  v12 = AlpcReferenceBlobByHandle(v11 + 40, v9, AlpcSectionType);
  v13 = v12;
  if ( !v12 )
    return 3221225480LL;
  v14 = AlpcpLocateSectionView(v12, a1, v10, &BugCheckParameter2);
  if ( v14 >= 0 )
  {
    v15 = (*(_DWORD *)a2 & 0x40000) != 0 && (*(_DWORD *)(v13 + 48) & 2) != 0;
    v16 = BugCheckParameter2;
    v14 = AlpcpPrepareViewForDelivery(BugCheckParameter2, v15, (*(_DWORD *)a2 & 0x20000) != 0);
    if ( v14 < 0 )
      AlpcpDereferenceBlobEx(v16);
    else
      *(_QWORD *)(a4 + 40) = v16;
  }
  AlpcpDereferenceBlobEx(v13);
  return (unsigned int)v14;
}
