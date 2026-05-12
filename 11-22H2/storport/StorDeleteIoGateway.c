/*
 * XREFs of StorDeleteIoGateway @ 0x1C0066074
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C00A6D44 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDeleteIoGateway(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 896);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 908) = 0;
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 896) = 0LL;
  }
}
