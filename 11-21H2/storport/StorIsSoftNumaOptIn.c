/*
 * XREFs of StorIsSoftNumaOptIn @ 0x1C005941C
 * Callers:
 *     StorCreateIoGateways @ 0x1C0058F48 (StorCreateIoGateways.c)
 *     StorGetActiveGatewayCountRequired @ 0x1C0059298 (StorGetActiveGatewayCountRequired.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsSoftNumaOptIn(__int64 a1)
{
  return (*(_BYTE *)(a1 + 4243) & 8) != 0 && (unsigned int)(g_ProcessorCountPerGateway - 4) <= 0xC;
}
