/*
 * XREFs of AlpcSecurityDestroyProcedure @ 0x14071C950
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     AlpcDeleteBlobByHandle @ 0x14071C284 (AlpcDeleteBlobByHandle.c)
 *     SeDeleteClientSecurity @ 0x14071D180 (SeDeleteClientSecurity.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14071DBC0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpRemoveResourcePort @ 0x14071EC60 (AlpcpRemoveResourcePort.c)
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
