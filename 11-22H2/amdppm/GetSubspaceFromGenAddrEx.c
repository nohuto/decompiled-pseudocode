/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x1C0005A8C
 * Callers:
 *     InitAcpiCpc @ 0x1C0024398 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
