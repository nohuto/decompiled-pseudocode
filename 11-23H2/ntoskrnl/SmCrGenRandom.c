/*
 * XREFs of SmCrGenRandom @ 0x1405CDC8C
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1409D9174 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1409DA82C (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1405B77F8 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
