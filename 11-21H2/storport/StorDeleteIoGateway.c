/*
 * XREFs of StorDeleteIoGateway @ 0x1C0059068
 * Callers:
 *     RaidAdapterReleaseResources @ 0x1C008C850 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDeleteIoGateway(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 832);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 844) = 0;
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 832) = 0LL;
  }
}
