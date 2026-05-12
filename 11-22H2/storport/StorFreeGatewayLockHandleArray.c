/*
 * XREFs of StorFreeGatewayLockHandleArray @ 0x1C006629C
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C00A6D44 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeGatewayLockHandleArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 6024);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 6024) = 0LL;
  }
}
