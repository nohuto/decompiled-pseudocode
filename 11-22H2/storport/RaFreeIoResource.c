/*
 * XREFs of RaFreeIoResource @ 0x1C0021F64
 * Callers:
 *     StorRemoveIoGatewayItem @ 0x1C0003010 (StorRemoveIoGatewayItem.c)
 *     StorNextIoGatewayItem @ 0x1C0019328 (StorNextIoGatewayItem.c)
 *     StorUnitExecuteNvmeSrbComplete @ 0x1C00746B0 (StorUnitExecuteNvmeSrbComplete.c)
 * Callees:
 *     <none>
 */

PSLIST_ENTRY __fastcall RaFreeIoResource(__int64 a1, struct _SLIST_ENTRY *a2)
{
  if ( *(_DWORD *)(a1 + 64) )
    a1 = *(_QWORD *)(*(_QWORD *)a1 + 8LL * LODWORD(a2->Next));
  return ExpInterlockedPushEntrySList((PSLIST_HEADER)a1, a2);
}
