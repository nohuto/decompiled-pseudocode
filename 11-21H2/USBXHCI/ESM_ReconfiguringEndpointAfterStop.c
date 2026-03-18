/*
 * XREFs of ESM_ReconfiguringEndpointAfterStop @ 0x1C004F8C0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_OnCancelEndpointConfigure @ 0x1C0038A28 (Endpoint_OnCancelEndpointConfigure.c)
 */

__int64 __fastcall ESM_ReconfiguringEndpointAfterStop(__int64 a1)
{
  Endpoint_OnCancelEndpointConfigure(*(_DWORD **)(a1 + 960));
  return 1000LL;
}
