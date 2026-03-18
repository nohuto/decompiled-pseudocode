/*
 * XREFs of PpmCheckProcessorInit @ 0x1403819D0
 * Callers:
 *     <none>
 * Callees:
 *     PpmHeteroHgsProcessorInit @ 0x140381A00 (PpmHeteroHgsProcessorInit.c)
 *     PpmResetPerfTimes @ 0x1403A6910 (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1 + 33968);
  PpmHeteroHgsProcessorInit(a1, 0LL);
  return 0LL;
}
