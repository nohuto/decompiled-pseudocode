/*
 * XREFs of GetSubspaceFromGenAddrEx @ 0x1C00055E0
 * Callers:
 *     InitAcpiCpc @ 0x1C0023728 (InitAcpiCpc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetSubspaceFromGenAddrEx(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
