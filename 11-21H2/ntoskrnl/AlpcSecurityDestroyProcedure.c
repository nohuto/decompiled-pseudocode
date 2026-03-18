/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x1407A7300
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     AlpcpRemoveResourcePort @ 0x1406F6C24 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x1407A501C (AlpcDeleteBlobByHandle.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1407A7378 (AlpcpReleasePagedPoolQuota.c)
 *     SeDeleteClientSecurity @ 0x1407A8070 (SeDeleteClientSecurity.c)
 */

__int64 __fastcall AlpcSecurityDestroyProcedure(__int64 a1)
{
  _QWORD *v2; // rcx
  __int64 v3; // rcx

  v2 = *(_QWORD **)a1;
  if ( v2 )
    AlpcDeleteBlobByHandle(v2, *(_QWORD *)(a1 + 8), a1);
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    AlpcpRemoveResourcePort(v3, a1);
    ObfDereferenceObject(*(PVOID *)(a1 + 24));
  }
  if ( *(_QWORD *)(a1 + 16) )
  {
    SeDeleteClientSecurity(a1 + 32);
    AlpcpReleasePagedPoolQuota(*(_QWORD *)(a1 + 16), 160LL);
    ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 16), 0x63706C41u);
  }
  return 0LL;
}
