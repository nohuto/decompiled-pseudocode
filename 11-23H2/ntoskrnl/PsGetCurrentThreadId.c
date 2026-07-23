/*
 * XREFs of PsGetCurrentThreadId @ 0x14033C150
 * Callers:
 *     EtwpCovSampContextPruneModules @ 0x1408A9190 (EtwpCovSampContextPruneModules.c)
 *     PoShutdownBugCheck @ 0x1409897B0 (PoShutdownBugCheck.c)
 * Callees:
 *     <none>
 */

HANDLE PsGetCurrentThreadId(void)
{
  return *(HANDLE *)&KeGetCurrentThread()[1].CurrentRunTime;
}
