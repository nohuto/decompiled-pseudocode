/*
 * XREFs of RaidStartUnit @ 0x1C001EBDC
 * Callers:
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001E9DC (RaidBusEnumeratorProcessNewUnit.c)
 *     StorProcessNVMeNewUnit @ 0x1C0090898 (StorProcessNVMeNewUnit.c)
 * Callees:
 *     RaUnitSetQueueDepth @ 0x1C001CDF8 (RaUnitSetQueueDepth.c)
 *     StorpInitializeUnitTelemetry @ 0x1C001EC20 (StorpInitializeUnitTelemetry.c)
 */

__int64 __fastcall RaidStartUnit(__int64 a1)
{
  _BYTE *v1; // rax
  __int64 result; // rax

  v1 = *(_BYTE **)(a1 + 104);
  if ( v1 && (*v1 & 0x1F) == 1 )
    RaUnitSetQueueDepth(a1, 1u, 1u);
  StorpInitializeUnitTelemetry(a1);
  result = *(_QWORD *)(a1 + 8);
  *(_DWORD *)(result + 48) &= ~0x80u;
  return result;
}
