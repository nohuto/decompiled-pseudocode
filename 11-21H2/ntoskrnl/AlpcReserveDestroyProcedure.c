/*
 * XREFs of AlpcReserveDestroyProcedure @ 0x1406E0930
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     AlpcpRemoveResourcePort @ 0x1406F6C24 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1407A501C (AlpcDeleteBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x1407A6A34 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpUnlockMessage @ 0x1407A7628 (AlpcpUnlockMessage.c)
 */

__int64 __fastcall AlpcReserveDestroyProcedure(PVOID *a1)
{
  ULONG_PTR v1; // rdi
  PVOID v3; // rcx

  v1 = (ULONG_PTR)a1[3];
  if ( v1 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)a1[3]);
    *(_QWORD *)(v1 + 96) = 0LL;
    a1[3] = 0LL;
    AlpcpUnlockMessage(v1);
  }
  v3 = a1[1];
  if ( v3 )
    AlpcDeleteBlobByHandle(v3, a1[2], a1);
  if ( *a1 )
  {
    AlpcpRemoveResourcePort(*a1, a1);
    ObfDereferenceObject(*a1);
  }
  return 0LL;
}
