/*
 * XREFs of ZwAllocateVirtualMemory @ 0x14041BA60
 * Callers:
 *     sub_140250368 @ 0x140250368 (sub_140250368.c)
 *     sub_1405E4A4C @ 0x1405E4A4C (sub_1405E4A4C.c)
 *     sub_1405E4B98 @ 0x1405E4B98 (sub_1405E4B98.c)
 *     sub_1405E9C3C @ 0x1405E9C3C (sub_1405E9C3C.c)
 *     sub_1405E9E8C @ 0x1405E9E8C (sub_1405E9E8C.c)
 *     sub_1405EA650 @ 0x1405EA650 (sub_1405EA650.c)
 *     sub_1405EA72C @ 0x1405EA72C (sub_1405EA72C.c)
 *     sub_1405F3190 @ 0x1405F3190 (sub_1405F3190.c)
 *     sub_14061CBB0 @ 0x14061CBB0 (sub_14061CBB0.c)
 *     sub_14067259C @ 0x14067259C (sub_14067259C.c)
 *     sub_1406B42F4 @ 0x1406B42F4 (sub_1406B42F4.c)
 *     sub_1406C9D2C @ 0x1406C9D2C (sub_1406C9D2C.c)
 *     sub_1406D94F0 @ 0x1406D94F0 (sub_1406D94F0.c)
 *     sub_140799140 @ 0x140799140 (sub_140799140.c)
 *     sub_1407E4A98 @ 0x1407E4A98 (sub_1407E4A98.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_1409AF8C4 @ 0x1409AF8C4 (sub_1409AF8C4.c)
 *     sub_1409CF0D0 @ 0x1409CF0D0 (sub_1409CF0D0.c)
 *     sub_1409D91B0 @ 0x1409D91B0 (sub_1409D91B0.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwAllocateVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        PSIZE_T RegionSize,
        ULONG AllocationType,
        ULONG Protect)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
