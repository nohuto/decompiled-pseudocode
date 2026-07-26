/*
 * XREFs of ?ndisCpuInitializeSubsystemPhase1@@YAXXZ @ 0x1C0154E00
 * Callers:
 *     NdisDllInitialize @ 0x1C0031100 (NdisDllInitialize.c)
 * Callees:
 *     <none>
 */

void ndisCpuInitializeSubsystemPhase1(void)
{
  ndisNumberOfActiveProcessorsAtBoot = KeQueryActiveProcessorCountEx(0xFFFFu);
  KeQueryActiveProcessorCountEx(0);
  ndisMaxNumberOfProcessors = KeQueryMaximumProcessorCountEx(0xFFFFu);
}
