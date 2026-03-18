/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceGetD3ColdBusDriverSupport @ 0x1C007EA60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetD3ColdBusDriverSupport(__int64 a1, bool *a2)
{
  *a2 = (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) + 204LL) & 1) == 0;
  return 0LL;
}
