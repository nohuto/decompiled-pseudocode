/*
 * XREFs of StorIsSoftNumaOptIn @ 0x1C00663F8
 * Callers:
 *     StorCreateIoGateways @ 0x1C0065F54 (StorCreateIoGateways.c)
 *     StorGetActiveGatewayCountRequired @ 0x1C00662D8 (StorGetActiveGatewayCountRequired.c)
 * Callees:
 *     <none>
 */

bool __fastcall StorIsSoftNumaOptIn(__int64 a1)
{
  return (*(_BYTE *)(a1 + 4307) & 8) != 0 && (unsigned int)(g_ProcessorCountPerGateway - 4) <= 0xC;
}
