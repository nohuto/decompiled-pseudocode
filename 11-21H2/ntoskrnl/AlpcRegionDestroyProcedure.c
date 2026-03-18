/*
 * XREFs of AlpcRegionDestroyProcedure @ 0x1406C31C0
 * Callers:
 *     <none>
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockBlob @ 0x1407B0F40 (AlpcpUnlockBlob.c)
 */

__int64 __fastcall AlpcRegionDestroyProcedure(__int64 a1)
{
  ULONG_PTR v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  AlpcpLockForCachedReferenceBlob(v1);
  **(_QWORD **)(a1 + 8) = *(_QWORD *)a1;
  *(_QWORD *)(*(_QWORD *)a1 + 8LL) = *(_QWORD *)(a1 + 8);
  --*(_DWORD *)(v1 + 52);
  AlpcpUnlockBlob(v1);
  AlpcpDereferenceBlobEx(v1);
  return 0LL;
}
