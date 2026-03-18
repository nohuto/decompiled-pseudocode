/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1406A61B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x140724DC8 (PsReturnSharedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x1407A5A54 (AlpcpDereferenceBlobEx.c)
 *     AlpcpReleasePagedPoolQuota @ 0x1407A7378 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x140966A1C (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  ULONG_PTR v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v6; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog();
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2);
    return 3221225473LL;
  }
  else
  {
    v3 = *(void **)(a1 + 48);
    if ( v3 )
    {
      v6 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v6 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota(v3);
      }
      else
      {
        AlpcpReleasePagedPoolQuota(v3, v6);
        ObfDereferenceObjectWithTag(*(PVOID *)(a1 + 48), 0x63706C41u);
      }
      *(_QWORD *)(a1 + 48) = 0LL;
    }
    v4 = *(void **)(a1 + 224);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x42456C41u);
    return 0LL;
  }
}
