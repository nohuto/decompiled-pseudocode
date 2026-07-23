/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x1406C01F0
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1406BE574 (EtwpSetProviderTraitsCommon.c)
 *     EtwpDeleteRegistrationObject @ 0x1406BEDC0 (EtwpDeleteRegistrationObject.c)
 *     EtwUnregister @ 0x1407C10D0 (EtwUnregister.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpReleaseProviderTraitsReference(__int64 a1)
{
  __int64 v1; // rbx
  char v3; // si
  struct _FAST_MUTEX *v4; // rdi
  _RTL_RB_TREE *v6; // rcx

  v1 = _InterlockedExchange64((volatile __int64 *)(a1 + 104), 0LL);
  if ( v1 )
  {
    v3 = *(_BYTE *)(a1 + 98) & 1;
    v4 = &EtwpProviderTraitsKmMutex;
    if ( !v3 )
      v4 = &EtwpProviderTraitsUmMutex;
    ExAcquireFastMutex(v4);
    if ( (*(_DWORD *)(v1 + 24))-- == 1 )
    {
      v6 = &EtwpProviderTraitsKmTree;
      if ( !v3 )
        v6 = &EtwpProviderTraitsUmTree;
      RtlRbRemoveNode(v6, (PRTL_BALANCED_NODE)v1);
    }
    else
    {
      v1 = 0LL;
    }
    ExReleaseFastMutex(v4);
    if ( v1 )
      ExFreePoolWithTag((PVOID)v1, 0);
  }
  return 0LL;
}
