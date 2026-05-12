/*
 * XREFs of RaidStartUnit @ 0x1C00212D8
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001D0FC (RaidBusEnumeratorProcessNewUnit.c)
 *     StorProcessNVMeNewUnit @ 0x1C00ABBA8 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RaUnitSetQueueDepth @ 0x1C0018A70 (RaUnitSetQueueDepth.c)
 *     StorpInitializeUnitTelemetry @ 0x1C002132C (StorpInitializeUnitTelemetry.c)
 */

__int64 __fastcall RaidStartUnit(__int64 a1)
{
  _BYTE *v2; // rax
  __int64 result; // rax

  *(_DWORD *)(a1 + 3488) = _InterlockedIncrement(&StorpCountersId);
  v2 = *(_BYTE **)(a1 + 104);
  if ( v2 && (*v2 & 0x1F) == 1 )
    RaUnitSetQueueDepth(a1, 1u, 1u);
  StorpInitializeUnitTelemetry(a1);
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}
