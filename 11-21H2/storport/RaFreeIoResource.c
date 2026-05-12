/*
 * XREFs of RaFreeIoResource @ 0x1C0022B9C
 * Callers:
 *     StorPortAdapterActiveCondition @ 0x1C00063C0 (StorPortAdapterActiveCondition.c)
 *     StorRemoveIoGatewayItem @ 0x1C0008220 (StorRemoveIoGatewayItem.c)
 *     RaidAdapterRestartGateway @ 0x1C001DF98 (RaidAdapterRestartGateway.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C0065BD0 (StorUnitExecuteNvmeSrbComplete.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeIoResource(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
