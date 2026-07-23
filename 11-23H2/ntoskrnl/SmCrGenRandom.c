/*
 * XREFs of SmCrGenRandom @ 0x1405CE1FC
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1409D9374 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1409DAA2C (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405B7D68 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
