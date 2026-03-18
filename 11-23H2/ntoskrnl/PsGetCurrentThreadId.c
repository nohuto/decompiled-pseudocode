/*
 * XREFs of PsGetCurrentThreadId @ 0x14033BEC0
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x1408A8F40 (EtwpCovSampContextPruneModules.c)
 *     PoShutdownBugCheck @ 0x1409895B0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
