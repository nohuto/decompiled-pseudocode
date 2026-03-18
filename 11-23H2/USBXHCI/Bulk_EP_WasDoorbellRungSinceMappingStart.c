/*
 * XREFs of Bulk_EP_WasDoorbellRungSinceMappingStart @ 0x1C000FC30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall Bulk_EP_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return *(_BYTE *)(a1 + 324) & 1;
}
