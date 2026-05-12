/*
 * XREFs of StorFreeGatewayLockHandleArray @ 0x1C0023BB0
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeGatewayLockHandleArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 5928);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 5928) = 0LL;
  }
}
