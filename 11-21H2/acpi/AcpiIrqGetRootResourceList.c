/*
 * XREFs of AcpiIrqGetRootResourceList @ 0x1C00017D8
 * Callers:
 *     ProcessorpReserveUnownedRanges @ 0x1C009DFC0 (ProcessorpReserveUnownedRanges.c)
 * Callees:
 *     <none>
 */

__int64 AcpiIrqGetRootResourceList()
{
  return *(_QWORD *)(RootDeviceExtension + 672);
}
