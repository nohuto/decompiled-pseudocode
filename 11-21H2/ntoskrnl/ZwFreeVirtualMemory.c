/*
 * XREFs of ZwFreeVirtualMemory @ 0x14041BB20
 * Callers:
 *     sub_1402037E8 @ 0x1402037E8 (sub_1402037E8.c)
 *     sub_1405E966C @ 0x1405E966C (sub_1405E966C.c)
 *     sub_1405E9C3C @ 0x1405E9C3C (sub_1405E9C3C.c)
 *     sub_1405EA0E4 @ 0x1405EA0E4 (sub_1405EA0E4.c)
 *     sub_1405EA650 @ 0x1405EA650 (sub_1405EA650.c)
 *     sub_140620A60 @ 0x140620A60 (sub_140620A60.c)
 *     sub_1406C9D2C @ 0x1406C9D2C (sub_1406C9D2C.c)
 *     sub_1406E616C @ 0x1406E616C (sub_1406E616C.c)
 *     RtlDestroyHeap @ 0x1406E9E30 (RtlDestroyHeap.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407E4374 @ 0x1407E4374 (sub_1407E4374.c)
 *     sub_1407E4964 @ 0x1407E4964 (sub_1407E4964.c)
 *     sub_1407E4A98 @ 0x1407E4A98 (sub_1407E4A98.c)
 *     RtlCreateHeap @ 0x1407F3B40 (RtlCreateHeap.c)
 *     sub_140929C60 @ 0x140929C60 (sub_140929C60.c)
 *     sub_1409BB454 @ 0x1409BB454 (sub_1409BB454.c)
 *     sub_1409CF0D0 @ 0x1409CF0D0 (sub_1409CF0D0.c)
 *     sub_1409EDDB0 @ 0x1409EDDB0 (sub_1409EDDB0.c)
 *     ExRaiseHardError @ 0x140A02230 (ExRaiseHardError.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _disable();
  __readeflags();
  return sub_140433F80(ProcessHandle, BaseAddress);
}
