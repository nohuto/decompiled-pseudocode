/*
 * XREFs of EtwpReleaseProviderTraitsReference @ 0x1406C0210
 * Callers:
 *     EtwpSetProviderTraitsCommon @ 0x1406BE544 (EtwpSetProviderTraitsCommon.c)
 *     EtwpDeleteRegistrationObject @ 0x1406BEDE0 (EtwpDeleteRegistrationObject.c)
 *     EtwUnregister @ 0x1407C1390 (EtwUnregister.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230720 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230860 (ExReleaseFastMutex.c)
 *     RtlRbRemoveNode @ 0x14024B910 (RtlRbRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
