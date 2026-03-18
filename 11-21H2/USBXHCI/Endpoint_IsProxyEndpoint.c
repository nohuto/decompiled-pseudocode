/*
 * XREFs of Endpoint_IsProxyEndpoint @ 0x1C0005C10
 * Callers:
 *     TR_Create @ 0x1C006BCD8 (TR_Create.c)
 * Callees:
 *     <none>
 */

char __fastcall Endpoint_IsProxyEndpoint(__int64 a1)
{
  return *(_BYTE *)(a1 + 1336);
}
