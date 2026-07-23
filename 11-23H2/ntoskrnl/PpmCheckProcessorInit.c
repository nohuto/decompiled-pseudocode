/*
 * XREFs of PpmCheckProcessorInit @ 0x140381520
 * Callers:
 *     <none>
 * Callees:
 *     PpmHeteroHgsProcessorInit @ 0x140381550 (PpmHeteroHgsProcessorInit.c)
 *     PpmResetPerfTimes @ 0x1403A7280 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33968);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
