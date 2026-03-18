/*
 * XREFs of PpmCheckProcessorInit @ 0x140381380
 * Callers:
 *     <none>
 * Callees:
 *     PpmHeteroHgsProcessorInit @ 0x1403813B0 (PpmHeteroHgsProcessorInit.c)
 *     PpmResetPerfTimes @ 0x1403A70A0 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33968);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
