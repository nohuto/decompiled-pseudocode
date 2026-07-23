/*
 * XREFs of AlpcMessageDestroyProcedure @ 0x1407B6420
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F6C0 (ObfDereferenceObjectWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x14069ECA8 (PsReturnSharedPoolQuota.c)
 *     AlpcpReleasePagedPoolQuota @ 0x14071DDC0 (AlpcpReleasePagedPoolQuota.c)
 *     AlpcpDereferenceBlobEx @ 0x14071EB3C (AlpcpDereferenceBlobEx.c)
 *     AlpcpEnterFreeEventMessageLog @ 0x14097ABA8 (AlpcpEnterFreeEventMessageLog.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcMessageDestroyProcedure(__int64 a1)
{
  ULONG_PTR v2; // rcx
  struct _KPROCESS *v3; // rcx
  void *v4; // rcx
  ULONG_PTR v6; // rdx

  if ( AlpcpMessageLogEnabled )
    AlpcpEnterFreeEventMessageLog(a1);
  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    AlpcpDereferenceBlobEx(v2, 1);
    return 3221225473LL;
  }
  else
  {
    v3 = *(struct _KPROCESS **)(a1 + 48);
    if ( v3 )
    {
      v6 = 792LL;
      if ( *(_QWORD *)(a1 + 224) )
        v6 = *(_QWORD *)(a1 + 232) + 792LL;
      if ( (*(_DWORD *)(a1 + 40) & 0x400) != 0 )
      {
        PsReturnSharedPoolQuota((char *)v3, v6, 0LL);
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
