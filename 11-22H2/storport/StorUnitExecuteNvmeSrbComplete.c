/*
 * XREFs of StorUnitExecuteNvmeSrbComplete @ 0x1C00746B0
 * Callers:
 *     <none>
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0003280 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C00070DC (RaUnitReleaseRemoveLock.c)
 *     StorFreeContiguousIoResources @ 0x1C000832C (StorFreeContiguousIoResources.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C00089A8 (RaidAdapterPoFxIdleComponent.c)
 *     RaidXrbDeallocateResources @ 0x1C0008A38 (RaidXrbDeallocateResources.c)
 *     RaFreeIoResource @ 0x1C0021F64 (RaFreeIoResource.c)
 *     RaidAdapterPoFxIdleComponentFromMiniport @ 0x1C0036AF8 (RaidAdapterPoFxIdleComponentFromMiniport.c)
 */

__int64 __fastcall StorUnitExecuteNvmeSrbComplete(__int64 a1, __int64 a2, __int64 a3)
{
  IRP *v3; // rbp
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi

  v3 = *(IRP **)(a1 + 160);
  v5 = *(_QWORD *)(a1 + 168);
  v6 = *(_QWORD *)(a1 + 224);
  v7 = v5 + *(unsigned int *)(v5 + 120);
  v8 = *(_QWORD *)(v6 + 24);
  if ( (*(_BYTE *)(v5 + 3) & 0x3F) == 1 )
  {
    v3->IoStatus.Status = 0;
    v3->IoStatus.Information = *(unsigned int *)(v5 + 60);
  }
  if ( (*(_BYTE *)(a1 + 17) & 1) != 0 )
  {
    RaidAdapterPoFxIdleComponentFromMiniport(v8, *(unsigned int *)(a1 + 748));
    *(_BYTE *)(a1 + 17) &= ~1u;
  }
  if ( *(_QWORD *)(v8 + 4896) )
    RaidAdapterPoFxIdleComponent(v8, 0LL, 0LL);
  if ( *(_BYTE *)(v7 + 72) == 1 )
  {
    RaidXrbDeallocateResources(a1, 0, a3);
    if ( a1 != 48 )
      StorFreeContiguousIoResources(v8, a1 - 48);
  }
  else
  {
    RaFreeIoResource(*(_QWORD *)(v6 + 664) + 64LL, (struct _SLIST_ENTRY *)(a1 - 48));
  }
  RaUnitReleaseRemoveLock(v6);
  return RaidCompleteRequestEx(v3, 1, v3->IoStatus.Status);
}
